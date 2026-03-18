/*
 * XREFs of DesktopVerifyHeapLargeUnicodeString @ 0x14012D58C
 * Callers:
 *     DefSetText @ 0x14012D150 (DefSetText.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

ULONG_PTR __fastcall DesktopVerifyHeapLargeUnicodeString(__int64 a1, ULONG_PTR a2)
{
  int v2; // eax
  ULONG_PTR v3; // r8
  ULONG_PTR v4; // rdx
  ULONG_PTR v5; // r9
  ULONG_PTR result; // rax
  ULONG_PTR v7; // r8

  if ( (*(_DWORD *)a2 & 1) != 0 || (v2 = *(_DWORD *)(a2 + 4), (v2 & 1) != 0) || *(_DWORD *)a2 >= (v2 & 0x7FFFFFFFu) )
    KeBugCheckEx(0x164u, 7uLL, a2, *(_QWORD *)(a1 + 136), *(unsigned int *)(a1 + 144));
  v3 = *(_QWORD *)(a2 + 8);
  v4 = (v2 & 0x7FFFFFFF) + v3;
  v5 = *(_QWORD *)(a1 + 136);
  if ( v4 < v3 )
    KeBugCheckEx(0x164u, 6uLL, v3, v5, *(unsigned int *)(a1 + 144));
  if ( v3 < v5 || (result = *(unsigned int *)(a1 + 144) + v5, v3 >= result) )
    KeBugCheckEx(0x164u, 6uLL, v3, v5, *(unsigned int *)(a1 + 144));
  v7 = v4 - 1;
  if ( v4 - 1 < v5 || v7 >= result )
    KeBugCheckEx(0x164u, 6uLL, v7, v5, *(unsigned int *)(a1 + 144));
  return result;
}
