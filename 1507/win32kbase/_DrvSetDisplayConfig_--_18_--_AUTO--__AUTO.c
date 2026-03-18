/*
 * XREFs of _DrvSetDisplayConfig_::_18_::_AUTO::__AUTO @ 0x1C001C858
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 *     ??_G_AUTO@?BC@??DrvSetDisplayConfig@@9@UEAAPEAXI@Z @ 0x1C00B7AB0 (--_G_AUTO@-BC@--DrvSetDisplayConfig@@9@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001C8B0 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DrvSetDisplayConfig_::_18_::_AUTO::__AUTO(AUTO_TGO *this)
{
  bool v1; // zf
  __int64 v3; // rcx
  __int64 v4; // rax

  v1 = *((_BYTE *)this + 72) == 0;
  *(_QWORD *)this = &`DrvSetDisplayConfig'::`18'::_AUTO::`vftable';
  if ( !v1 && (int)((__int64 (*)(void))qword_1C0101378)() < 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v4);
  }
  FreePathsModality(*((struct _D3DKMT_GETPATHSMODALITY **)this + 6));
  FreePathsModality(*((struct _D3DKMT_GETPATHSMODALITY **)this + 7));
  FreePathsModality(*((struct _D3DKMT_GETPATHSMODALITY **)this + 8));
  AUTO_TGO::~AUTO_TGO(this);
}
