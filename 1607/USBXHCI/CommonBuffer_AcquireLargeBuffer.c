/*
 * XREFs of CommonBuffer_AcquireLargeBuffer @ 0x1C0009170
 * Callers:
 *     CommonBuffer_AcquireBuffer @ 0x1C0009010 (CommonBuffer_AcquireBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 */

__int64 *__fastcall CommonBuffer_AcquireLargeBuffer(__int64 a1, __int64 a2, int a3, bool *a4)
{
  KIRQL v8; // al
  __int64 **v9; // rcx
  KIRQL v10; // bp
  __int64 *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  PWDF_DRIVER_GLOBALS v15; // rcx
  __int64 v16; // rax

  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 120));
  v9 = (__int64 **)(a1 + 128);
  v10 = v8;
  if ( *v9 == (__int64 *)v9 )
  {
    v11 = 0LL;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      3u,
      7u,
      0x1Cu,
      (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids);
  }
  else
  {
    v11 = *v9;
    v12 = **v9;
    if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v12 + 8) != v11 )
      __fastfail(3u);
    *v9 = (__int64 *)v12;
    *(_QWORD *)(v12 + 8) = v9;
    memset((void *)v11[2], 0, 0x1000uLL);
    --*(_DWORD *)(a1 + 116);
    v13 = WdfFunctions_01015;
    v14 = v11[4];
    v15 = WdfDriverGlobals;
    v11[9] = a2;
    *((_DWORD *)v11 + 16) = a3;
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(v13 + 1616))(v15, v14, off_1C0043048);
    if ( *(_BYTE *)(v16 + 16) )
    {
      *(_BYTE *)(v16 + 16) = 0;
      ++*(_DWORD *)(a1 + 20);
    }
  }
  *a4 = *(_DWORD *)(a1 + 116) < *(_DWORD *)(a1 + 44);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 120), v10);
  return v11;
}
