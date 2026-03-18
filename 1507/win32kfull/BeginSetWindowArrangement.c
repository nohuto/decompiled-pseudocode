/*
 * XREFs of BeginSetWindowArrangement @ 0x1C020AE80
 * Callers:
 *     NtUserSetWindowArrangement @ 0x1C0220B40 (NtUserSetWindowArrangement.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 */

__int64 __fastcall BeginSetWindowArrangement(LARGE_INTEGER *a1, __int128 *a2, int a3)
{
  unsigned int v5; // edi
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbx
  __int128 v9; // xmm0

  v5 = 0;
  v7.QuadPart = Win32AllocPool(20LL, 1936552789LL);
  v8 = v7;
  if ( v7.QuadPart )
  {
    v9 = *a2;
    *(_DWORD *)v7.QuadPart = a3;
    *(_OWORD *)(v7.QuadPart + 4) = v9;
    v5 = PostEventMessageEx(
           a1[2].QuadPart,
           *(_QWORD *)(a1[2].QuadPart + 392),
           0x11u,
           a1,
           0,
           (LARGE_INTEGER)1LL,
           v7,
           0LL);
    if ( !v5 )
      ((void (__fastcall *)(_QWORD))Win32FreePool)((LARGE_INTEGER)v8.QuadPart);
  }
  return v5;
}
