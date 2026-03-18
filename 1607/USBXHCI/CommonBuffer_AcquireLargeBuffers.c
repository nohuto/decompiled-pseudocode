/*
 * XREFs of CommonBuffer_AcquireLargeBuffers @ 0x1C0007F40
 * Callers:
 *     CommonBuffer_AcquireBuffers @ 0x1C0007E44 (CommonBuffer_AcquireBuffers.c)
 *     CommonBuffer_WorkItem @ 0x1C001DC90 (CommonBuffer_WorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
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
  __int64 v17; // rax
  __int64 v18; // rdx
  PWDF_DRIVER_GLOBALS v19; // rcx
  __int64 v20; // rax
  __int64 **v21; // rax
  __int64 v23; // [rsp+28h] [rbp-40h]
  int v24; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+30h] [rbp-38h]
  int v26; // [rsp+30h] [rbp-38h]
  KIRQL v27; // [rsp+78h] [rbp+10h]

  v6 = (KSPIN_LOCK *)(a1 + 120);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 120));
  v27 = v11;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v26 = *(_DWORD *)(a1 + 116);
    v24 = a2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      5u,
      7u,
      0x21u,
      (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
      v24,
      v26);
  }
  if ( *(_DWORD *)(a1 + 116) < a2 )
  {
    LODWORD(v25) = *(_DWORD *)(a1 + 116);
    LODWORD(v23) = a2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      3u,
      7u,
      0x22u,
      (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
      v23,
      v25);
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
        v17 = WdfFunctions_01015;
        v18 = v15[4];
        v19 = WdfDriverGlobals;
        v15[9] = a4;
        *((_DWORD *)v15 + 16) = a5;
        v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(v17 + 1616))(v19, v18, off_1C0043048);
        if ( *(_BYTE *)(v20 + 16) )
        {
          *(_BYTE *)(v20 + 16) = 0;
          ++*(_DWORD *)(a1 + 20);
        }
        v21 = *(__int64 ***)(a3 + 8);
        if ( *v21 != (__int64 *)a3 )
          __fastfail(3u);
        *v15 = a3;
        ++v13;
        v15[1] = (__int64)v21;
        *v21 = v15;
        *(_QWORD *)(a3 + 8) = v15;
      }
      while ( v13 < a2 );
      v11 = v27;
      v12 = 0;
    }
    *(_DWORD *)(a1 + 116) -= a2;
    v6 = (KSPIN_LOCK *)(a1 + 120);
  }
  *a6 = *(_DWORD *)(a1 + 116) < *(_DWORD *)(a1 + 44);
  KeReleaseSpinLock(v6, v11);
  return v12;
}
