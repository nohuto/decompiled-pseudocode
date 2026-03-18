/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C00118D0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C000746C (ExFreeToNPagedLookasideList.c)
 *     ACPIBuildCompleteCommon @ 0x1C000F100 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRecurse(__int64 a1)
{
  int v1; // eax
  _QWORD *v2; // rbp
  int v4; // ebx
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  volatile signed __int32 *v7; // rsi
  _QWORD **v8; // r15
  int v9; // r12d
  int v10; // r13d
  PSLIST_ENTRY v11; // rbx
  PSLIST_ENTRY *v12; // rax
  _QWORD *v13; // rcx
  __int64 *v14; // rax
  char v15; // cl
  __int64 *v16; // r8
  __int64 v17; // rdx
  signed __int32 v18; // ecx
  KIRQL v19; // di
  int v20; // edx
  _QWORD *v22; // [rsp+58h] [rbp-60h]
  KIRQL v23; // [rsp+68h] [rbp-50h]
  _QWORD *v24; // [rsp+C0h] [rbp+8h]

  v1 = *(_DWORD *)(a1 + 84);
  v2 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 0;
  v4 = 0;
  if ( (v1 & 4) != 0 )
  {
    v5 = v2 + 94;
    v23 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v6 = (_QWORD *)v2[94];
    while ( 1 )
    {
      v7 = (volatile signed __int32 *)(v6 - 96);
      v8 = (_QWORD **)v6;
      v22 = (_QWORD *)*v6;
      v24 = (_QWORD *)*v6;
      if ( v6 == v5 || v4 < 0 )
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
        if ( *((_DWORD *)v7 + 171) )
        {
          _InterlockedIncrement(v7 + 171);
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
          v12 = (PSLIST_ENTRY *)qword_1C0074258;
          if ( *(__int64 **)qword_1C0074258 != &AcpiBuildQueueList )
            __fastfail(3u);
          v11->Next = (_SLIST_ENTRY *)&AcpiBuildQueueList;
          *((_QWORD *)&v11->Next + 1) = v12;
          *v12 = v11;
          qword_1C0074258 = (__int64)v11;
          KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
          v13 = v22;
          v4 = 259;
          v5 = v2 + 94;
        }
        else
        {
          ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v11);
          v13 = v24;
          v4 = -1073741130;
        }
      }
      else
      {
        v13 = v24;
        v4 = -1073741670;
      }
      v6 = *v8;
      if ( (_QWORD *)*v6 == v6 )
        v6 = v13;
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v23);
  }
  v14 = qword_1C002C340;
  v15 = 0;
  v16 = qword_1C002C340;
  if ( v2 )
  {
    v17 = v2[1];
    v15 = (char)v2;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v14 = (__int64 *)v2[70];
      if ( (v17 & 0x400000000000LL) != 0 )
        v16 = (__int64 *)v2[71];
    }
  }
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    6,
    61,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    v4,
    v15,
    (__int64)v14,
    (__int64)v16);
  v18 = *(_DWORD *)(a1 + 32);
  if ( v4 < 0 )
  {
    *(_DWORD *)(a1 + 48) = v4;
    KeBugCheckEx(0xA5u, 3uLL, 0LL, v4, 0LL);
  }
  *(_DWORD *)(a1 + 32) = 2;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v18, 1);
  v19 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v20 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v20;
  if ( (v20 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v20 | 1;
    KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v19);
  return (unsigned int)v4;
}
