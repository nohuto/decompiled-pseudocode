/*
 * XREFs of LdrpCompareServiceChecksum @ 0x1800859A0
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180010828 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModule @ 0x1800857B0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x18003F1D4 (LdrpGetRcConfig.c)
 */

bool __fastcall LdrpCompareServiceChecksum(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _DWORD *RcConfig; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rcx

  RcConfig = LdrpGetRcConfig(a1, a2, 0, 1);
  if ( !RcConfig )
    return 0;
  v5 = LdrpGetRcConfig(a2, v3, 0, 0);
  if ( !v5 )
    return 0;
  if ( *RcConfig != -20054323 || *v5 != -20054323 )
    return 1;
  v6 = *(_QWORD *)(RcConfig + 7) - *(_QWORD *)(v5 + 7);
  if ( !v6 )
    v6 = *(_QWORD *)(RcConfig + 9) - *(_QWORD *)(v5 + 9);
  return !v6;
}
