/*
 * XREFs of _SetKeyboardState @ 0x1C0111D2C
 * Callers:
 *     NtUserSetKeyboardState @ 0x1C0111C80 (NtUserSetKeyboardState.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall SetKeyboardState(char *a1)
{
  char *v1; // r8
  __int64 v2; // rdi
  int i; // edx
  char v5; // r10
  _BYTE *v6; // r9
  int v7; // ecx
  char v8; // al
  int v9; // ecx

  v1 = a1;
  v2 = *(_QWORD *)(gptiCurrent + 384LL);
  for ( i = 0; i < 256; ++i )
  {
    v5 = i & 3;
    v6 = (_BYTE *)(((unsigned __int64)(unsigned __int8)i >> 2) + v2 + 192);
    if ( *v1 < 0 )
      v7 = (unsigned __int8)*v6 | (1 << (2 * v5));
    else
      v7 = (unsigned __int8)*v6 & ~(1 << (2 * v5));
    *v6 = v7;
    v8 = 2 * v5 + 1;
    if ( (*v1 & 1) != 0 )
      v9 = (unsigned __int8)v7 | (1 << v8);
    else
      v9 = (unsigned __int8)v7 & ~(1 << v8);
    *v6 = v9;
    ++v1;
  }
  if ( v1 != a1 )
    ++*(_DWORD *)(gpsi + 5640LL);
  return 1LL;
}
