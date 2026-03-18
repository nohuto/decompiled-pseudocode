/*
 * XREFs of InitializeListHeadPte @ 0x14011F654
 * Callers:
 *     MiInitializeSpecialPool @ 0x1404FF0AC (MiInitializeSpecialPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeListHeadPte(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = a2;
  v2 = (__int64)(((a1 >> 9) & 0x7FFFFFFFF8LL) - a2 - 0x98000000000LL) >> 3 << 28;
  *(_QWORD *)a1 = v2 | *(_DWORD *)a1 & 0xFFFFFFF;
  result = v2 | *(_DWORD *)(a1 + 8) & 0xFFFFFFF;
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
