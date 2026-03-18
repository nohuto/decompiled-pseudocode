/*
 * XREFs of sub_1C00524F0 @ 0x1C00524F0
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 *     ??_G_AUTO@?BF@??DrvSetDisplayConfig@@9@UEAAPEAXI@Z @ 0x1C00B9990 (--_G_AUTO@-BF@--DrvSetDisplayConfig@@9@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0052548 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C00524F0(AUTO_TGO *this)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax

  v1 = *((_BYTE *)this + 72) == 0;
  *(_QWORD *)this = &`DrvSetDisplayConfig'::`21'::_AUTO::`vftable';
  if ( !v1 && (int)((__int64 (*)(void))qword_1C0104198)() < 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    WdLogEvent5_WdAssertion(v7);
  }
  FreePathsModality(*((struct _D3DKMT_GETPATHSMODALITY **)this + 6));
  FreePathsModality(*((struct _D3DKMT_GETPATHSMODALITY **)this + 7));
  FreePathsModality(*((struct _D3DKMT_GETPATHSMODALITY **)this + 8));
  AUTO_TGO::~AUTO_TGO(this);
}
