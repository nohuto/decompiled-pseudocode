/*
 * XREFs of LdrpComputeTlsSizeAndAlignment @ 0x180051448
 * Callers:
 *     LdrpHandleTlsData @ 0x18002DEC4 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x1800512A4 (LdrpAllocateTls.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpComputeTlsSizeAndAlignment(__int64 a1, int *a2)
{
  int v4; // ecx
  __int64 result; // rax
  int v6; // edx

  v4 = (*(_DWORD *)(a1 + 52) >> 20) & 0xF;
  if ( v4 )
    LOBYTE(v4) = v4 - 1;
  result = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  v6 = 1 << v4;
  if ( (unsigned int)(1 << v4) < 0x10 )
    v6 = 16;
  *a2 = v6;
  --*a2;
  return result;
}
