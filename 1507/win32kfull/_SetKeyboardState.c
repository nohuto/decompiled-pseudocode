/*
 * XREFs of _SetKeyboardState @ 0x1C00EE474
 * Callers:
 *     NtUserSetKeyboardState @ 0x1C00EE420 (NtUserSetKeyboardState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetKeyboardState(char *a1)
{
  int v2; // r10d
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  char v8; // r9
  _BYTE *v9; // r8
  int v10; // ecx
  __int64 result; // rax

  v2 = 0;
  v3 = *(_QWORD *)(gptiCurrent + 392LL);
  v4 = *(_QWORD *)(v3 + 372);
  v5 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 832LL);
  if ( !gbEnforceUIPI
    || (unsigned int)v5 > (unsigned int)v4
    || (_DWORD)v5 == (_DWORD)v4
    && ((v6 = HIDWORD(v5), v7 = HIDWORD(v4), (_DWORD)v6 == (_DWORD)v7) || (_DWORD)v6 == -1 || (_DWORD)v7 == -1) )
  {
    do
    {
      v8 = v2 & 3;
      v9 = (_BYTE *)(((unsigned __int64)(unsigned __int8)v2 >> 2) + v3 + 184);
      if ( *a1 < 0 )
        v10 = (unsigned __int8)*v9 | (1 << (2 * v8));
      else
        v10 = (unsigned __int8)*v9 & ~(1 << (2 * v8));
      *v9 = v10;
      if ( (*a1 & 1) != 0 )
        *v9 |= 1 << (2 * v8 + 1);
      else
        *v9 = v10 & ~(1 << (2 * v8 + 1));
      ++v2;
      ++a1;
    }
    while ( v2 < 256 );
    result = 1LL;
    ++*(_DWORD *)(gpsi + 4248LL);
  }
  else
  {
    EtwTraceUIPIInputError(gptiCurrent, 0LL, *(_QWORD *)(gptiCurrent + 392LL), *(_QWORD *)(v3 + 372), 3);
    return 0LL;
  }
  return result;
}
