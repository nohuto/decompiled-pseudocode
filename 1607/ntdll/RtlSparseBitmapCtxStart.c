/*
 * XREFs of RtlSparseBitmapCtxStart @ 0x18005D8F0
 * Callers:
 *     RtlpHpLargeSparseBmpInitialize @ 0x18005D85C (RtlpHpLargeSparseBmpInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSparseBitmapCtxStart(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edx
  int v8; // eax
  __int64 v9; // rax

  v4 = ((unsigned __int64)*(unsigned int *)(a2 + 12) + *(_QWORD *)a2 - 1LL) / *(unsigned int *)(a2 + 12);
  if ( v4 - 1 > 0xFFFFFFFE )
    return (unsigned int)-1073741811;
  v5 = *(_DWORD *)(a2 + 40);
  if ( (v5 & 2) != 0 && ((8 * v4) & 0xFFFFFFFFFFFFF000uLL) > 0xFFFFFFFF000LL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *(_DWORD *)(a1 + 72) &= ~2u;
    *(_DWORD *)(a1 + 72) |= v5 & 2;
    v6 = 0;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 32);
    v8 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 52) = v4;
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 72) ^= (*(_DWORD *)(a2 + 40) ^ v8) & 1;
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 8);
    v9 = *(unsigned int *)(a2 + 12);
    *(_DWORD *)(a1 + 56) = v9;
    *(_DWORD *)(a1 + 64) = 4 * ((unsigned __int64)(v9 + 31) >> 5) + 24;
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(a1 + 72) ^= (*(_DWORD *)(a2 + 40) ^ *(_DWORD *)(a1 + 72)) & 4;
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return v6;
}
