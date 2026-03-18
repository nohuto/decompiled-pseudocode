/*
 * XREFs of xxxSetClassLong @ 0x140152E14
 * Callers:
 *     NtUserSetClassLong @ 0x140152D50 (NtUserSetClassLong.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxSetClassData @ 0x140151060 (xxxSetClassData.c)
 */

_QWORD *__fastcall xxxSetClassLong(struct tagWND *a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // r9d
  _QWORD *i; // rdx

  v5 = a3;
  v6 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) != CurrentProcessWin32Process )
  {
    v10 = 5;
LABEL_9:
    UserSetLastError(v10);
    return 0LL;
  }
  if ( (int)v6 < 0 )
  {
    if ( (int)v6 >= -34 && byte_140361BD2[v6] <= 4u )
      return xxxSetClassData(a1, v6, v5, a4);
    goto LABEL_16;
  }
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 56LL);
  if ( (int)v6 + 4 < (unsigned int)v6 || (v12 = *(_QWORD *)(v11 + 8), (unsigned int)(v6 + 4) > *(_DWORD *)(v12 + 12)) )
  {
LABEL_16:
    v10 = 1413;
    goto LABEL_9;
  }
  v13 = *(_DWORD *)(v6 + v12 + 88);
  *(_DWORD *)(v6 + v12 + 88) = v5;
  for ( i = *(_QWORD **)(v11 + 64); i; i = (_QWORD *)*i )
    *(_DWORD *)(i[1] + v6 + 88) = v5;
  return (_QWORD *)v13;
}
