/*
 * XREFs of zzzUnhookWindowsHook @ 0x1C01E7690
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PhkFirstValid @ 0x1C0084424 (PhkFirstValid.c)
 *     PhkNextValid @ 0x1C0084AA4 (PhkNextValid.c)
 */

__int64 __fastcall zzzUnhookWindowsHook(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // ecx

  if ( a1 + 1 > 0xF )
  {
    v12 = 1426;
  }
  else
  {
    for ( i = PhkFirstValid(gptiCurrent, a1, a3, a4); ; i = PhkNextValid(v11) )
    {
      v11 = i;
      if ( !i )
      {
        v12 = 1431;
        goto LABEL_14;
      }
      v9 = *(int *)(i + 68);
      v10 = (_DWORD)v9 == -1
          ? *(_QWORD *)(v11 + 56)
          : *(_QWORD *)(v11 + 56) + *(_QWORD *)(*(_QWORD *)(v7 + 376) + 8 * v9 + 384);
      if ( v10 == v8 )
        break;
    }
    if ( *(_QWORD *)(v11 + 16) == v7 )
      return zzzUnhookWindowsHookEx((struct tagHOOK *)v11, v5, v6);
    v12 = 5;
  }
LABEL_14:
  UserSetLastError(v12);
  return 0LL;
}
