/*
 * XREFs of _MapDesktopObject @ 0x140028310
 * Callers:
 *     NtUserMapDesktopObject @ 0x140027F10 (NtUserMapDesktopObject.c)
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall MapDesktopObject(__int64 a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  struct tagTHREADINFO *v4; // rbx
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  _QWORD *i; // rax
  __int64 result; // rax

  v2 = PtiCurrent();
  v4 = v2;
  if ( *((_BYTE *)v2 + 1708) == 1 )
  {
    v5 = 1;
    *((_BYTE *)v2 + 1708) = 0;
  }
  else
  {
    v5 = 0;
  }
  LOBYTE(v3) = -1;
  v6 = HMValidateHandleWithDescriptor(a1, v3);
  v7 = v6;
  if ( v6 )
  {
    v9 = _HMPheFromObject(v6);
    if ( (*(_BYTE *)(v9 + 25) & 0x40) == 0 )
    {
      v10 = *(_QWORD *)(v7 + 24);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
      v13 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v12 = -*(_QWORD *)CurrentProcessWin32Process;
        v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      }
      W32GetUserGdiSessionState(v12);
      for ( i = *(_QWORD **)(v13 + 688); i; i = (_QWORD *)*i )
      {
        if ( i[1] == v10 )
        {
          result = *(_QWORD *)v9 + i[2];
          if ( v5 )
            *((_BYTE *)v4 + 1708) = 1;
          return result;
        }
      }
    }
  }
  if ( v5 )
    *((_BYTE *)v4 + 1708) = 1;
  return 0LL;
}
