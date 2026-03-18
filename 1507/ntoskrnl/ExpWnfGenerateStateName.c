/*
 * XREFs of ExpWnfGenerateStateName @ 0x1405010A8
 * Callers:
 *     NtCreateWnfStateName @ 0x140500CF0 (NtCreateWnfStateName.c)
 * Callees:
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140409ACC (ExpWnfAllocateNextPersistentNameSequence.c)
 */

__int64 __fastcall ExpWnfGenerateStateName(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  char v5; // bp
  char v6; // r14
  signed __int64 v8; // r10
  bool v9; // zf
  unsigned __int64 v10; // r10
  __int64 result; // rax
  unsigned __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  v5 = a4;
  v6 = a3;
  if ( (unsigned int)(a2 - 2) > 1 )
  {
    result = ExpWnfAllocateNextPersistentNameSequence(v12, a2, a3, a4);
    if ( (int)result < 0 )
      return result;
    v10 = v12[0];
  }
  else
  {
    do
    {
      v8 = _InterlockedExchangeAdd64(&ExpWnfRuntimeNameSequenceNumber, 1uLL);
      v9 = v8 == -1;
      v10 = v8 + 1;
      v12[0] = v10;
    }
    while ( v9 );
  }
  if ( (v10 & 0xFFE0000000000000uLL) != 0 )
    return 3221225473LL;
  *a1 = *a1 & 1 | (16 * (v4 & 3 | (unsigned __int16)(4 * (v6 & 0xF)))) & 0x3FF | 1 | (((2 * v10) | (v5 != 0)) << 10);
  return 0LL;
}
