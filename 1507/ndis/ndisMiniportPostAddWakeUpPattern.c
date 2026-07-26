/*
 * XREFs of ndisMiniportPostAddWakeUpPattern @ 0x1C0044C60
 * Callers:
 *     ndisOidPostPMAddWOLPattern @ 0x1C000E1B0 (ndisOidPostPMAddWOLPattern.c)
 *     ndisPostSetAddWakeUpPattern @ 0x1C00452B0 (ndisPostSetAddWakeUpPattern.c)
 * Callees:
 *     ndisInsertPatternListEntry @ 0x1C000E480 (ndisInsertPatternListEntry.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 */

__int64 *__fastcall ndisMiniportPostAddWakeUpPattern(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 *v4; // rcx
  __int64 **v5; // r8
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 192) = 0LL;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x16u, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, a2);
  v4 = (__int64 *)(v2 + 8);
  v5 = *(__int64 ***)(v2 + 8);
  if ( !v5 )
    return ndisInsertPatternListEntry((__int64 **)(a1 + 960), v2);
  *v4 = 0LL;
  result = *v5;
  *v4 = (__int64)*v5;
  *v5 = v4;
  return result;
}
