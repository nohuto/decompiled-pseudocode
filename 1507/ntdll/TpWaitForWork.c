/*
 * XREFs of TpWaitForWork @ 0x18007D520
 * Callers:
 *     LdrpDetectDetour @ 0x18007D6B8 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkpValidateWork @ 0x18003CD60 (TppWorkpValidateWork.c)
 *     TppWorkWait @ 0x18007D640 (TppWorkWait.c)
 */

__int64 __fastcall TpWaitForWork(_PEB_LDR_DATA *a1, unsigned int a2)
{
  __int64 result; // rax

  result = TppWorkpValidateWork(a1, 0LL, 0LL);
  if ( (_DWORD)result )
    return TppWorkWait(a1, a2);
  return result;
}
