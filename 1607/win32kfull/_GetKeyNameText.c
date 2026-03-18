/*
 * XREFs of _GetKeyNameText @ 0x1C0229A04
 * Callers:
 *     NtUserGetKeyNameText @ 0x1C0213CD0 (NtUserGetKeyNameText.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     InternalMapVirtualKeyEx @ 0x1C00E8328 (InternalMapVirtualKeyEx.c)
 *     wcsncpycch @ 0x1C00E9E1C (wcsncpycch.c)
 */

__int64 __fastcall GetKeyNameText(unsigned int a1, _WORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rcx
  __int64 result; // rax
  char v9; // al
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // eax
  signed int v15; // eax
  __int16 v16; // cx
  _WORD **v17; // rax
  _WORD *v18; // rdx
  int v19; // [rsp+90h] [rbp+18h]

  v19 = a3;
  v5 = a1;
  v6 = (unsigned __int64)a1 >> 16;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  if ( v19 < 1 )
    return 0LL;
  if ( (v5 & 0x2000000) != 0 )
  {
    v9 = v6;
    if ( (_BYTE)v6 == 54 )
      v9 = 42;
    LOBYTE(v6) = v9;
    if ( (v5 & 0x1000000) != 0 && (v9 == 29 || v9 == 56) )
      v5 &= ~0x1000000u;
    v5 &= ~0x2000000u;
  }
  v10 = *(_QWORD *)(ThreadWin32Thread + 392);
  if ( !v10 )
    return 0LL;
  v11 = *(_QWORD **)(*(_QWORD *)(v10 + 48) + 32LL);
  if ( (v5 & 0x1000000) != 0 )
    v12 = v11[4];
  else
    v12 = v11[3];
  if ( v12 )
  {
    while ( *(_BYTE *)v12 )
    {
      if ( (_BYTE)v6 == *(_BYTE *)v12 )
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 )
        {
          result = (unsigned int)wcsncpycch(a2, v13, v19) - 1;
          a2[(int)result] = 0;
          return result;
        }
      }
      v12 += 16LL;
    }
  }
  v14 = InternalMapVirtualKeyEx((unsigned __int8)v6, 1, (__int64)v11);
  if ( !v14 )
    return 0LL;
  v15 = InternalMapVirtualKeyEx(v14, 2, (__int64)v11);
  v16 = v15;
  if ( !v15 )
    return 0LL;
  if ( v15 < 0 )
  {
    v17 = (_WORD **)v11[5];
    if ( v17 )
    {
      while ( 1 )
      {
        v18 = *v17;
        if ( !*v17 )
          break;
        if ( *v18 == v16 )
        {
          result = (unsigned int)wcsncpycch(a2, (__int64)(v18 + 1), v19) - 1;
          a2[(int)result] = 0;
          return result;
        }
        ++v17;
      }
    }
  }
  *a2 = v16;
  if ( v19 >= 2 )
    a2[1] = 0;
  return 1LL;
}
