/*
 * XREFs of CommonBuffer_AcquireLargeBuffers @ 0x1C00059A0
 * Callers:
 *     CommonBuffer_AcquireBuffers @ 0x1C00058A4 (CommonBuffer_AcquireBuffers.c)
 *     CommonBuffer_WorkItem @ 0x1C0014290 (CommonBuffer_WorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

__int64 __fastcall CommonBuffer_AcquireLargeBuffers(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        bool *a6)
{
  KSPIN_LOCK *v6; // rsi
  KIRQL v11; // r14
  unsigned int v12; // ebx
  unsigned int v13; // esi
  __int64 **v14; // r14
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 **v19; // rax
  __int64 v21; // [rsp+28h] [rbp-40h]
  int v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+30h] [rbp-38h]
  int v24; // [rsp+30h] [rbp-38h]
  KIRQL v25; // [rsp+78h] [rbp+10h]

  v6 = (KSPIN_LOCK *)(a1 + 120);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 120));
  v25 = v11;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v24 = *(_DWORD *)(a1 + 116);
    v22 = a2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      5u,
      7u,
      0x21u,
      (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
      v22,
      v24);
  }
  if ( *(_DWORD *)(a1 + 116) < a2 )
  {
    LODWORD(v23) = *(_DWORD *)(a1 + 116);
    LODWORD(v21) = a2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      3u,
      7u,
      0x22u,
      (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
      v21,
      v23);
    v12 = -1073741670;
  }
  else
  {
    v12 = 0;
    v13 = 0;
    if ( a2 )
    {
      v14 = (__int64 **)(a1 + 128);
      do
      {
        v15 = *v14;
        v16 = **v14;
        if ( (__int64 **)(*v14)[1] != v14 || *(__int64 **)(v16 + 8) != v15 )
          __fastfail(3u);
        *v14 = (__int64 *)v16;
        *(_QWORD *)(v16 + 8) = v14;
        memset((void *)v15[2], 0, 0x1000uLL);
        v17 = v15[4];
        v15[9] = a4;
        *((_DWORD *)v15 + 16) = a5;
        v18 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                v17,
                off_1C0040248);
        if ( *(_BYTE *)(v18 + 16) )
        {
          *(_BYTE *)(v18 + 16) = 0;
          ++*(_DWORD *)(a1 + 20);
        }
        v19 = *(__int64 ***)(a3 + 8);
        *v15 = a3;
        v15[1] = (__int64)v19;
        if ( *v19 != (__int64 *)a3 )
          __fastfail(3u);
        ++v13;
        *v19 = v15;
        *(_QWORD *)(a3 + 8) = v15;
      }
      while ( v13 < a2 );
      v11 = v25;
      v12 = 0;
    }
    *(_DWORD *)(a1 + 116) -= a2;
    v6 = (KSPIN_LOCK *)(a1 + 120);
  }
  *a6 = *(_DWORD *)(a1 + 116) < *(_DWORD *)(a1 + 44);
  KeReleaseSpinLock(v6, v11);
  return v12;
}
