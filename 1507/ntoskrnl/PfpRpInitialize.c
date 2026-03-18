/*
 * XREFs of PfpRpInitialize @ 0x1407DF2FC
 * Callers:
 *     PfInitializeSuperfetch @ 0x1407DEE3C (PfInitializeSuperfetch.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PfpRpStart @ 0x1405C7244 (PfpRpStart.c)
 */

__int64 __fastcall PfpRpInitialize(__int64 a1)
{
  int v2; // r8d
  unsigned int v3; // esi
  unsigned int v4; // eax
  int v5; // r8d
  volatile signed __int64 *v6; // rcx
  unsigned __int64 v7; // rax
  __int64 result; // rax

  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  v2 = -1;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  v3 = 8;
  v4 = 8;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  do
  {
    ++v2;
    v4 >>= 1;
  }
  while ( v4 );
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 64) = v2;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  v5 = -1;
  do
  {
    ++v5;
    v3 >>= 1;
  }
  while ( v3 );
  *(_DWORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 104) = v5;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  v6 = (volatile signed __int64 *)(a1 + 136);
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_QWORD *)(a1 + 136) = 0LL;
  v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 136), 1LL, 0LL);
  if ( v7 >= 2 )
    ExfWaitForRundownProtectionRelease(v6, v7);
  result = (unsigned int)xmmword_1403532F4;
  if ( (xmmword_1403532F4 & 2) != 0 )
    return PfpRpStart(a1);
  return result;
}
