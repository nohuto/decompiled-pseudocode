/*
 * XREFs of KiHeadlessDisplayString @ 0x1401D5410
 * Callers:
 *     KiBugCheckDebugBreak @ 0x1401D4DC8 (KiBugCheckDebugBreak.c)
 *     KiBugCheckProgress @ 0x1401D4E7C (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x1401D4F98 (KiDisplayBlueScreen.c)
 * Callees:
 *     HeadlessDispatch @ 0x14013CB10 (HeadlessDispatch.c)
 */

__int64 __fastcall KiHeadlessDisplayString(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a2 )
      return HeadlessDispatch(0x17u, a1, a2, 0LL, 0LL);
  }
  return result;
}
