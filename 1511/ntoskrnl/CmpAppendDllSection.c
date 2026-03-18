/*
 * XREFs of CmpAppendDllSection @ 0x140742C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpAppendDllSection(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  *(_QWORD *)a1 ^= a2;
  *(_QWORD *)(a1 + 8) ^= a2;
  *(_QWORD *)(a1 + 16) ^= a2;
  *(_QWORD *)(a1 + 24) ^= a2;
  *(_QWORD *)(a1 + 32) ^= a2;
  *(_QWORD *)(a1 + 40) ^= a2;
  *(_QWORD *)(a1 + 48) ^= a2;
  *(_QWORD *)(a1 + 56) ^= a2;
  *(_QWORD *)(a1 + 64) ^= a2;
  *(_QWORD *)(a1 + 72) ^= a2;
  *(_QWORD *)(a1 + 80) ^= a2;
  *(_QWORD *)(a1 + 88) ^= a2;
  *(_QWORD *)(a1 + 96) ^= a2;
  *(_QWORD *)(a1 + 104) ^= a2;
  *(_QWORD *)(a1 + 112) ^= a2;
  *(_QWORD *)(a1 + 120) ^= a2;
  *(_QWORD *)(a1 + 128) ^= a2;
  *(_QWORD *)(a1 + 136) ^= a2;
  *(_QWORD *)(a1 + 144) ^= a2;
  *(_QWORD *)(a1 + 152) ^= a2;
  *(_QWORD *)(a1 + 160) ^= a2;
  *(_QWORD *)(a1 + 168) ^= a2;
  *(_QWORD *)(a1 + 176) ^= a2;
  *(_QWORD *)(a1 + 184) ^= a2;
  *(_QWORD *)(a1 + 192) ^= a2;
  *(_DWORD *)a1 ^= a2;
  v2 = a2;
  v4 = *(unsigned int *)(a1 + 196);
  do
  {
    *(_QWORD *)(a1 + 8 * v4 + 192) ^= v2;
    v2 = __ROR8__(v2, v4--);
  }
  while ( v4 );
  v5 = ((__int64 (*)(void))(a1 + *(unsigned int *)(a1 + 1368)))();
  return (*(__int64 (__fastcall **)(__int64, __int64))(v5 + 264))(v5 + 1288, 1LL);
}
