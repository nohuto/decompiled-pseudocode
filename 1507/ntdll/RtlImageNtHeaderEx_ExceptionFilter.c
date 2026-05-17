/*
 * XREFs of RtlImageNtHeaderEx_ExceptionFilter @ 0x1800E22D4
 * Callers:
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlImageNtHeaderEx_ExceptionFilter(char a1)
{
  return ((unsigned __int8)~a1 >> 1) & 1;
}
