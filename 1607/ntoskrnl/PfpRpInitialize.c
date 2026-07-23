/*
 * XREFs of PfpRpInitialize @ 0x1407B3FFC
 * Callers:
 *     PfInitializeSuperfetch @ 0x1407B3B44 (PfInitializeSuperfetch.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PfpRpStart @ 0x140572F80 (PfpRpStart.c)
 */

__int64 __fastcall PfpRpInitialize(__int64 a1)
{
  int v2; // r9d
  unsigned int v3; // esi
  unsigned int v4; // eax
  int v5; // r9d
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
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 64) = v2;
  *(_QWORD *)(a1 + 56) = 0LL;
  v5 = -1;
  do
  {
    ++v5;
    v3 >>= 1;
  }
  while ( v3 );
  *(_DWORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 104) = v5;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_QWORD *)(a1 + 136) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 136));
  result = (unsigned int)xmmword_1403283C4;
  if ( (xmmword_1403283C4 & 2) != 0 )
    return PfpRpStart(a1);
  return result;
}
