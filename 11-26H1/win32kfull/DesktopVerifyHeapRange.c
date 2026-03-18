/*
 * XREFs of DesktopVerifyHeapRange @ 0x1401C1A98
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x140085090 (NtUserSetWindowLongPtr.c)
 *     NtUserSetWindowLong @ 0x140085B00 (NtUserSetWindowLong.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall DesktopVerifyHeapRange(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v3; // r9
  unsigned int *result; // rax
  ULONG_PTR v5; // r8
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // r8

  v3 = *(_QWORD *)(a1 + 136);
  result = (unsigned int *)(a1 + 144);
  v5 = a2 + a3;
  if ( v5 < a2 )
    KeBugCheckEx(0x164u, 6uLL, a2, v3, *result);
  if ( a2 < v3 || (v6 = *result + v3, a2 >= v6) )
    KeBugCheckEx(0x164u, 6uLL, a2, v3, *result);
  v7 = v5 - 1;
  if ( v7 < v3 || v7 >= v6 )
    KeBugCheckEx(0x164u, 6uLL, v7, v3, *result);
  return result;
}
