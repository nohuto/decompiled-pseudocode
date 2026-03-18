/*
 * XREFs of DesktopVerifyHeapLargeUnicodeString @ 0x1C0067DE4
 * Callers:
 *     NtUserInternalGetWindowText @ 0x1C0067D10 (NtUserInternalGetWindowText.c)
 *     DefSetText @ 0x1C006AF9C (DefSetText.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     DesktopVerifyHeapPointer @ 0x1C0067E5C (DesktopVerifyHeapPointer.c)
 */

__int64 __fastcall DesktopVerifyHeapLargeUnicodeString(__int64 a1, ULONG_PTR a2)
{
  int v4; // r9d
  ULONG_PTR v5; // rdx
  __int64 v6; // r9
  ULONG_PTR v7; // rdi
  __int64 v8; // r8

  if ( (*(_DWORD *)a2 & 1) != 0
    || (v4 = *(_DWORD *)(a2 + 4), (v4 & 1) != 0)
    || *(_DWORD *)a2 >= (v4 & 0x7FFFFFFFu)
    || (v5 = *(_QWORD *)(a2 + 8), (v5 & 0xF) != 0) )
  {
    KeBugCheckEx(0x164u, 7uLL, a2, *(_QWORD *)(a1 + 120), *(unsigned int *)(a1 + 128));
  }
  v6 = v4 & 0x7FFFFFFF;
  v7 = v5 + v6;
  if ( v5 + v6 < v5 )
    KeBugCheckEx(0x164u, 6uLL, v5, *(_QWORD *)(a1 + 120), *(unsigned int *)(a1 + 128));
  DesktopVerifyHeapPointer(a1, v5, a2);
  return DesktopVerifyHeapPointer(a1, v7 - 1, v8);
}
