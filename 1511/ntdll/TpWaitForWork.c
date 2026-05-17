/*
 * XREFs of TpWaitForWork @ 0x180006F90
 * Callers:
 *     LdrpDetectDetour @ 0x1800049B8 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x18000A800 (TppWorkWait.c)
 *     TppWorkpValidateWork @ 0x18000A8EC (TppWorkpValidateWork.c)
 */

__int64 __fastcall TpWaitForWork(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = TppWorkpValidateWork(a1, 0LL, 0LL);
  if ( (_DWORD)result )
    return TppWorkWait(a1, a2);
  return result;
}
