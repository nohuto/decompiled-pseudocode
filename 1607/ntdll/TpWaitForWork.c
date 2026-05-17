/*
 * XREFs of TpWaitForWork @ 0x180082090
 * Callers:
 *     LdrpDetectDetour @ 0x180073564 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x18003B878 (TppWorkWait.c)
 *     TppWorkpValidateWork @ 0x18003BCF0 (TppWorkpValidateWork.c)
 */

__int64 __fastcall TpWaitForWork(_PEB_LDR_DATA *a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r9

  result = TppWorkpValidateWork(a1, 0LL, 0LL);
  if ( (_DWORD)result )
    return TppWorkWait(a1, a2, v5, v6);
  return result;
}
