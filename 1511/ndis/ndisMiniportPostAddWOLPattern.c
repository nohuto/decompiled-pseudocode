/*
 * XREFs of ndisMiniportPostAddWOLPattern @ 0x1C0010AFC
 * Callers:
 *     ndisOidPostPMAddWOLPattern @ 0x1C00109B0 (ndisOidPostPMAddWOLPattern.c)
 *     ndisPostSetAddWakeUpPattern @ 0x1C0046840 (ndisPostSetAddWakeUpPattern.c)
 * Callees:
 *     ndisInsertPatternListEntry @ 0x1C0010B58 (ndisInsertPatternListEntry.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     ndisGetPatternEffectivePriority @ 0x1C0045AD4 (ndisGetPatternEffectivePriority.c)
 */

__int64 __fastcall ndisMiniportPostAddWOLPattern(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx

  v2 = *(_QWORD *)(a1 + 192);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(62LL, &WPP_6e2fc96078008429fd92c28490874609_Traceguids, a1, a2);
  *(_QWORD *)(a1 + 192) = 0LL;
  v4 = (_QWORD *)(v2 + 8);
  v5 = *(_QWORD **)(v2 + 8);
  if ( v5 )
  {
    *v4 = 0LL;
    *v4 = *v5;
    *v5 = v4;
    result = ndisGetPatternEffectivePriority(v5 - 1);
    *(_DWORD *)(v7 + 36) = result;
  }
  else
  {
    result = ndisInsertPatternListEntry(a1 + 968, v2);
    *(_DWORD *)(v2 + 36) = *(_DWORD *)(v2 + 32);
  }
  return result;
}
