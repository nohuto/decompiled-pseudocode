/*
 * XREFs of LdrpIsModuleUnderSystem32 @ 0x18002CB74
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x18002FB1C (LdrpCfgProcessLoadConfig.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1800195A0 (RtlCompareUnicodeStrings.c)
 */

char __fastcall LdrpIsModuleUnderSystem32(__int64 a1)
{
  SIZE_T v1; // r9
  char v2; // bl

  v1 = (unsigned __int64)(unsigned __int16)LdrpSystem32 >> 1;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 80) + 2 * v1) != 92 )
    return 0;
  if ( *(unsigned __int16 *)(a1 + 72) - *(unsigned __int16 *)(a1 + 88) <= (unsigned __int64)(unsigned __int16)LdrpSystem32
                                                                        + 2 )
    return 0;
  v2 = 1;
  if ( RtlCompareUnicodeStrings(
         *(PCWCH *)(a1 + 80),
         (unsigned __int64)(unsigned __int16)LdrpSystem32 >> 1,
         *((PCWCH *)&LdrpSystem32 + 1),
         v1,
         1u) )
  {
    return 0;
  }
  return v2;
}
