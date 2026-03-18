/*
 * XREFs of _SetWindowWord @ 0x1C022815C
 * Callers:
 *     NtUserSetWindowWord @ 0x1C0221030 (NtUserSetWindowWord.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     FCallerOk @ 0x1C0080DDC (FCallerOk.c)
 */

__int64 __fastcall SetWindowWord(__int64 a1, int a2, unsigned __int16 a3)
{
  unsigned __int64 v4; // rdi
  int v6; // ecx
  __int64 result; // rax
  bool v8; // sf
  __int64 v9; // rdx
  int *v10; // rdx
  int *v11; // rax
  int v12; // ecx
  __int64 v13; // rdx
  unsigned int v14; // ecx
  _DWORD *v15; // r8

  v4 = a2;
  if ( !(unsigned int)FCallerOk(a1) )
  {
LABEL_2:
    v6 = 5;
LABEL_39:
    UserSetLastError(v6);
    return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 42) & 1) != 0 )
  {
    if ( v4 >= 8 && (v4 & 0x80000000) != 0LL || v4 > 0x16 && (int)v4 < 30 )
      goto LABEL_38;
    if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x2A4 )
      goto LABEL_26;
  }
  if ( (_DWORD)v4 == -21 )
  {
    result = *(unsigned __int16 *)(a1 + 256);
    *(_QWORD *)(a1 + 256) = a3 | (*(unsigned __int16 *)(a1 + 258) << 16);
    return result;
  }
  if ( (_DWORD)v4 == -16 )
  {
    result = *(unsigned __int16 *)(a1 + 52);
    *(_DWORD *)(a1 + 52) = a3 | (*(unsigned __int16 *)(a1 + 54) << 16);
    return result;
  }
  if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0 )
    goto LABEL_26;
  if ( (v4 & 0x80000000) != 0LL )
    goto LABEL_38;
  if ( (int)v4 >= *(unsigned __int16 *)(gpsi + 2LL * ((*(_WORD *)(a1 + 66) & 0x3FFFu) - 666) + 328) - 376 )
  {
LABEL_26:
    v8 = (v4 & 0x80000000) != 0LL;
LABEL_27:
    if ( !v8 && (unsigned __int64)(unsigned int)v4 + 2 <= *(unsigned int *)(a1 + 232) )
    {
      v13 = *(_QWORD *)(a1 + 152);
      if ( (*(_WORD *)(v13 + 34) & 0x100) == 0 )
        goto LABEL_37;
      v14 = 0;
      v15 = &gDefaultServerClasses;
      while ( *(_WORD *)(v13 + 8) != *(_WORD *)(gpsi + 2LL * ((*v15 >> 3) & 0x1F) + 852) )
      {
        ++v14;
        v15 += 12;
        if ( v14 >= 8 )
          goto LABEL_37;
      }
      if ( (int)v4 >= *((_DWORD *)&gDefaultServerClasses + 12 * v14 + 6) || (*v15 & 0xF8) == 0xB0 && v4 + 2 <= 0x28 )
      {
LABEL_37:
        result = *(unsigned __int16 *)(v4 + a1 + 376);
        *(_WORD *)(v4 + a1 + 376) = a3;
        return result;
      }
      goto LABEL_2;
    }
LABEL_38:
    v6 = 1413;
    goto LABEL_39;
  }
  if ( (*(_WORD *)(a1 + 66) & 0x3FFF) != 0x2A1 )
  {
    if ( (*(_WORD *)(a1 + 66) & 0x3FFF) != 0x2A7 )
      goto LABEL_38;
    v8 = (v4 & 0x80000000) != 0LL;
    if ( (_DWORD)v4 )
      goto LABEL_38;
    goto LABEL_27;
  }
  if ( (_DWORD)v4 )
    goto LABEL_38;
  v9 = *(_QWORD *)(a1 + 376);
  if ( !v9 || v9 == -1 )
    return 0LL;
  v10 = (int *)(v9 + 8);
  v11 = v10;
  if ( (unsigned __int64)v10 >= W32UserProbeAddress )
    v11 = (int *)W32UserProbeAddress;
  v12 = *v11;
  *v10 = a3;
  return (unsigned __int16)v12;
}
