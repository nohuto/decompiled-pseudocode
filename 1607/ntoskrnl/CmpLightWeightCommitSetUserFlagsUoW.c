/*
 * XREFs of CmpLightWeightCommitSetUserFlagsUoW @ 0x14060EB4C
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpLightWeightCommitSetUserFlagsUoW(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v8 = -1;
  v9 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v5 + 8))(v5, *(unsigned int *)(v4 + 32), &v8);
  *(_DWORD *)(v6 + 52) ^= (*(_DWORD *)(v6 + 52) ^ (*(_DWORD *)(a1 + 88) << 16)) & 0xF0000;
  *(_DWORD *)(*(_QWORD *)(a1 + 48) + 176LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 176LL) ^ HIWORD(*(_DWORD *)(v6 + 52))) & 0xF;
  *(_QWORD *)(v6 + 4) = *a2;
  return (*(__int64 (__fastcall **)(__int64, int *))(v5 + 16))(v5, &v8);
}
