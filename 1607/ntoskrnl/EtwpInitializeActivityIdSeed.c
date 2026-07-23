/*
 * XREFs of EtwpInitializeActivityIdSeed @ 0x140553320
 * Callers:
 *     EtwInitializeProcessor @ 0x1405531DC (EtwInitializeProcessor.c)
 * Callees:
 *     HeadlessDispatch @ 0x14013CB10 (HeadlessDispatch.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpInitializeActivityIdSeed(__int64 a1, __int16 a2)
{
  __int64 result; // rax
  size_t v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h] BYREF

  *(_WORD *)(a1 + 6) = a2;
  *(_QWORD *)(a1 + 8) = MEMORY[0xFFFFF78000000014];
  v4 = 16LL;
  if ( (unsigned int)HeadlessDispatch(0x15u, 0LL, 0LL, &v5, &v4) )
    v5 = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)a1 = v5;
  result = WORD2(v5);
  *(_WORD *)(a1 + 4) = WORD2(v5);
  return result;
}
