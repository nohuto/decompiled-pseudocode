/*
 * XREFs of LdrpGenSecurityCookie @ 0x18002F094
 * Callers:
 *     LdrInitSecurityCookie @ 0x18002FDC0 (LdrInitSecurityCookie.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x1800A6A40 (NtQueryPerformanceCounter.c)
 */

unsigned __int64 __fastcall LdrpGenSecurityCookie(__int64 a1)
{
  unsigned __int64 v2; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned int)(((unsigned __int64)MEMORY[0x7FFE0004] * MEMORY[0x7FFE0320]) >> 24) ^ LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) ^ LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ MEMORY[0x7FFE0014] ^ (unsigned __int64)MEMORY[0x7FFE0018] ^ ((unsigned __int64)(unsigned int)(((unsigned __int64)MEMORY[0x7FFE0004] * MEMORY[0x7FFE0320]) >> 24) << 24);
  NtQueryPerformanceCounter(&PerformanceCounter, 0LL);
  return a1 ^ v2 ^ PerformanceCounter.QuadPart ^ ((unsigned __int64)PerformanceCounter.LowPart << 32);
}
