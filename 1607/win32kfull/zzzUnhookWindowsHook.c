/*
 * XREFs of zzzUnhookWindowsHook @ 0x1C01DDEF0
 * Callers:
 *     <none>
 * Callees:
 *     PhkFirstValid @ 0x1C00A3CFC (PhkFirstValid.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     PhkNextValid @ 0x1C00EE6A8 (PhkNextValid.c)
 */

__int64 __fastcall zzzUnhookWindowsHook(int a1)
{
  __int64 i; // rax
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rcx

  if ( (unsigned int)(a1 + 1) > 0xF )
  {
    v7 = 1426LL;
  }
  else
  {
    for ( i = PhkFirstValid(gptiCurrent, a1); ; i = PhkNextValid(v6) )
    {
      v6 = i;
      if ( !i )
      {
        v7 = 1431LL;
        goto LABEL_14;
      }
      v4 = *(int *)(i + 68);
      v5 = (_DWORD)v4 == -1
         ? *(_QWORD *)(v6 + 56)
         : *(_QWORD *)(v6 + 56) + *(_QWORD *)(*(_QWORD *)(v2 + 376) + 8 * v4 + 376);
      if ( v5 == v3 )
        break;
    }
    if ( *(_QWORD *)(v6 + 16) == v2 )
      return zzzUnhookWindowsHookEx((struct tagHOOK *)v6);
    v7 = 5LL;
  }
LABEL_14:
  UserSetLastError(v7);
  return 0LL;
}
