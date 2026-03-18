/*
 * XREFs of ?ReleaseWriteAccessToRestoreBuffer@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018F5A4
 * Callers:
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018EFE4 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018F7C4 (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::ReleaseWriteAccessToRestoreBuffer(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax

  v1 = *((_QWORD *)this + 56);
  v2 = 0;
  if ( v1 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 368LL))(v1);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1ABu);
  }
  return v2;
}
