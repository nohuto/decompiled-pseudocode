/*
 * XREFs of CommonBuffer_AcquireSmallBuffers @ 0x1C001D704
 * Callers:
 *     CommonBuffer_AcquireBuffers @ 0x1C0007E44 (CommonBuffer_AcquireBuffers.c)
 *     CommonBuffer_WorkItem @ 0x1C001DC90 (CommonBuffer_WorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 */

__int64 __fastcall CommonBuffer_AcquireSmallBuffers(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        bool *a6)
{
  KIRQL v9; // di
  unsigned int v10; // esi
  unsigned int v11; // r15d
  __int64 **v12; // r12
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  PWDF_DRIVER_GLOBALS v16; // rcx
  __int64 v17; // rax
  __int64 **v18; // rax
  __int64 v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h]
  int v23; // [rsp+30h] [rbp-48h]
  KIRQL v24; // [rsp+88h] [rbp+10h]

  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 120));
  v24 = v9;
  v10 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v23 = *(_DWORD *)(a1 + 164);
    v21 = a2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      5u,
      7u,
      0x1Fu,
      (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
      v21,
      v23);
  }
  if ( *(_DWORD *)(a1 + 164) >= a2 )
  {
    v11 = 0;
    if ( a2 )
    {
      v12 = (__int64 **)(a1 + 168);
      do
      {
        v13 = *v12;
        v14 = **v12;
        if ( (__int64 **)(*v12)[1] != v12 || *(__int64 **)(v14 + 8) != v13 )
          __fastfail(3u);
        *v12 = (__int64 *)v14;
        *(_QWORD *)(v14 + 8) = v12;
        memset((void *)v13[2], 0, 0x200uLL);
        v15 = v13[4];
        v16 = WdfDriverGlobals;
        v13[9] = a4;
        *((_DWORD *)v13 + 16) = a5;
        v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                v16,
                v15,
                off_1C0043048);
        if ( *(_BYTE *)(v17 + 16) )
        {
          *(_BYTE *)(v17 + 16) = 0;
          ++*(_DWORD *)(a1 + 20);
        }
        v18 = *(__int64 ***)(a3 + 8);
        if ( *v18 != (__int64 *)a3 )
          __fastfail(3u);
        *v13 = a3;
        ++v11;
        v13[1] = (__int64)v18;
        *v18 = v13;
        *(_QWORD *)(a3 + 8) = v13;
      }
      while ( v11 < a2 );
      v9 = v24;
    }
    *(_DWORD *)(a1 + 164) -= a2;
  }
  else
  {
    LODWORD(v22) = *(_DWORD *)(a1 + 164);
    LODWORD(v20) = a2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      3u,
      7u,
      0x20u,
      (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
      v20,
      v22);
    v10 = -1073741670;
  }
  *a6 = *(_DWORD *)(a1 + 164) < *(_DWORD *)(a1 + 60);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 120), v9);
  return v10;
}
