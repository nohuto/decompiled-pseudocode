/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000B874 (ACPIBuildCompleteCommon.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0021C10 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRecurse(__int64 a1)
{
  int v1; // eax
  int v3; // ebx
  _QWORD **v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // r13
  volatile signed __int32 *v7; // rbp
  _QWORD **v8; // r14
  int v9; // r15d
  int v10; // r12d
  PSLIST_ENTRY v11; // rbx
  __int64 **v12; // rax
  signed __int32 v13; // ecx
  KIRQL v14; // di
  int v15; // edx
  _QWORD **v17; // [rsp+30h] [rbp-68h]
  _QWORD *v18; // [rsp+38h] [rbp-60h]
  KIRQL v19; // [rsp+48h] [rbp-50h]

  v1 = *(_DWORD *)(a1 + 84);
  *(_DWORD *)(a1 + 32) = 0;
  v3 = 0;
  if ( (v1 & 4) != 0 )
  {
    v4 = (_QWORD **)(*(_QWORD *)(a1 + 40) + 744LL);
    v17 = v4;
    v19 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v5 = *v4;
    while ( 1 )
    {
      v6 = (_QWORD *)*v5;
      v7 = (volatile signed __int32 *)(v5 - 95);
      v8 = (_QWORD **)v5;
      v18 = (_QWORD *)*v5;
      if ( v5 == v4 || v3 < 0 )
        break;
      v9 = *(_DWORD *)(a1 + 84);
      v10 = *(_DWORD *)(a1 + 80);
      ++BuildRequestLookAsideList.L.TotalAllocates;
      v11 = ExpInterlockedPopEntrySList(&BuildRequestLookAsideList.L.ListHead);
      if ( v11
        || (++BuildRequestLookAsideList.L.AllocateMisses,
            (v11 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BuildRequestLookAsideList.L.AllocateEx)(
                                   (unsigned int)BuildRequestLookAsideList.L.Type,
                                   BuildRequestLookAsideList.L.Size,
                                   BuildRequestLookAsideList.L.Tag)) != 0LL) )
      {
        if ( *((_DWORD *)v7 + 169) )
        {
          _InterlockedIncrement(v7 + 169);
          memset(v11, 0, 0x88uLL);
          LODWORD(v11[1].Next) = 1599293264;
          v11[8].Next = (_SLIST_ENTRY *)&AcpiBuildRunMethodList;
          *((_DWORD *)&v11[1].Next + 2) = 3;
          LODWORD(v11[3].Next) = 0;
          *((_QWORD *)&v11[2].Next + 1) = v7;
          LODWORD(v11[5].Next) = v10;
          HIDWORD(v11[5].Next) = v9;
          HIDWORD(v11[1].Next) = 4108;
          KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
          v12 = (__int64 **)qword_1C0059E58;
          v11->Next = (_SLIST_ENTRY *)&AcpiBuildQueueList;
          *((_QWORD *)&v11->Next + 1) = v12;
          if ( *v12 != &AcpiBuildQueueList )
            __fastfail(3u);
          *v12 = (__int64 *)v11;
          qword_1C0059E58 = (__int64)v11;
          KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
          v6 = v18;
          v3 = 259;
          v4 = v17;
        }
        else
        {
          ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v11);
          v3 = -1073741130;
        }
      }
      else
      {
        v3 = -1073741670;
      }
      v5 = *v8;
      if ( (_QWORD *)*v5 == v5 )
        v5 = v6;
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v19);
  }
  v13 = *(_DWORD *)(a1 + 32);
  if ( v3 < 0 )
  {
    *(_DWORD *)(a1 + 48) = v3;
    KeBugCheckEx(0xA5u, 3uLL, 0LL, v3, 0LL);
  }
  *(_DWORD *)(a1 + 32) = 2;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v13, 1);
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v15 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v15;
  if ( (v15 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v15 | 1;
    KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v14);
  return (unsigned int)v3;
}
