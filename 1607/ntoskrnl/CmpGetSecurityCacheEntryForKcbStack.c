/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x14043F010
 * Callers:
 *     CmpGetSecurityDescriptorForKcbStackEx @ 0x1401B5000 (CmpGetSecurityDescriptorForKcbStackEx.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpQuerySecurityDescriptorInfo @ 0x140403860 (CmpQuerySecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x1404BBE90 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpCheckKeyOwnerForPca @ 0x140602208 (CmpCheckKeyOwnerForPca.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140602C04 (CmpSnapshotKcbStackSecurity.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x14043EF90 (CmpGetKcbAtLayerHeight.c)
 *     CmpGetEffectiveKcbSemantics @ 0x14043F0C0 (CmpGetEffectiveKcbSemantics.c)
 *     CmRmIsKCBVisible @ 0x1404A72C0 (CmRmIsKCBVisible.c)
 */

__int64 __fastcall CmpGetSecurityCacheEntryForKcbStack(__int64 a1, __int64 a2, _WORD *a3)
{
  ULONG_PTR v3; // rsi
  __int16 i; // bx
  __int64 KcbAtLayerHeight; // rdi
  __int64 v9; // rcx

  v3 = 0LL;
  for ( i = *(_WORD *)(a1 + 2); i >= 0; --i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, i);
    if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, 0LL) == 1 )
      break;
    if ( *(_DWORD *)(v9 + 32) != -1 )
    {
      if ( (unsigned __int8)CmRmIsKCBVisible(v9, a2) )
      {
        v3 = KcbAtLayerHeight;
        if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, 0LL) )
          break;
      }
    }
  }
  if ( a3 )
    *a3 = *(_WORD *)(v3 + 58);
  return CmGetKCBCacheSecurity(v3);
}
