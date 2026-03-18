/*
 * XREFs of FNTCacheUseable @ 0x140294364
 * Callers:
 *     ?FNTCachepInit@@YAXPEBG@Z @ 0x1401C5E88 (-FNTCachepInit@@YAXPEBG@Z.c)
 *     FNTCacheUseableAndUpdateToDate @ 0x14031B088 (FNTCacheUseableAndUpdateToDate.c)
 * Callees:
 *     ComputeFileviewCheckSum @ 0x140140440 (ComputeFileviewCheckSum.c)
 */

bool __fastcall FNTCacheUseable(__int64 a1, _QWORD *a2, unsigned __int16 a3)
{
  _DWORD *v3; // r9
  int v5; // esi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  bool result; // al

  v3 = *(_DWORD **)(a1 + 8);
  v5 = a3;
  result = v3[1] == 1
        && (*(_DWORD *)(a1 + 20) & 1) == 0
        && *v3
        && (v7 = *(unsigned int *)(a1 + 80), (_DWORD)v7 == v3[5])
        && (v8 = ComputeFileviewCheckSum(v3 + 1, v7 - 4), v9 = *(_QWORD *)(a1 + 8), *(_DWORD *)v9 == v8)
        && *(_QWORD *)(v9 + 40) == *a2
        && *(_QWORD *)(v9 + 48) == a2[1]
        && *(_DWORD *)(v9 + 8) == v5;
  return result;
}
