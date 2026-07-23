/*
 * XREFs of LdrpGenSecurityCookie @ 0x1800414D8
 * Callers:
 *     LdrInitSecurityCookie @ 0x180041130 (LdrInitSecurityCookie.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x180093C10 (NtQueryPerformanceCounter.c)
 */

unsigned __int64 __fastcall LdrpGenSecurityCookie(__int64 a1)
{
  unsigned __int64 v2; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned int)(((unsigned __int64)MEMORY[0x7FFE0004] * MEMORY[0x7FFE0320]) >> 24) ^ LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) ^ LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ MEMORY[0x7FFE0014] ^ (unsigned __int64)MEMORY[0x7FFE0018] ^ ((unsigned __int64)(unsigned int)(((unsigned __int64)MEMORY[0x7FFE0004] * MEMORY[0x7FFE0320]) >> 24) << 24);
  NtQueryPerformanceCounter(&PerformanceCounter, 0LL);
  return a1 ^ v2 ^ PerformanceCounter.QuadPart ^ ((unsigned __int64)PerformanceCounter.LowPart << 32);
}
