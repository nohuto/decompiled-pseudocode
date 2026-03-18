/*
 * XREFs of NtUserSetWindowBand @ 0x1C00FDC60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     _DeferWindowPosAndBand @ 0x1C0074600 (_DeferWindowPosAndBand.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0074F18 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     _BeginDeferWindowPos @ 0x1C00782C0 (_BeginDeferWindowPos.c)
 */

__int64 __fastcall NtUserSetWindowBand(__int64 a1, struct tagWND *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  struct tagWND *v15; // rdi
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v22; // ecx
  _QWORD v23[3]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v24[3]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v25[4]; // [rsp+80h] [rbp-38h] BYREF
  struct tagWND *v26; // [rsp+D8h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v6;
  if ( v6 )
  {
    v8 = (*(_WORD *)(v6 + 66) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v23;
      v23[1] = v6;
      ++*(_DWORD *)(v6 + 8);
      if ( (unsigned int)ValidateHWNDIA(a2, &v26) )
      {
        v14 = BeginDeferWindowPos(1, v11, v13);
        if ( v14 )
        {
          v15 = v26;
          if ( DeferWindowPosAndBand(v14, v10, (unsigned __int64)v26, 0, 0, 0, 0, 0x13u, a3, 1) )
          {
            if ( GetProp(v10, (unsigned __int16)gatomBrokeredForeground, 1LL) )
            {
              v22 = 5;
            }
            else
            {
              if ( (unsigned __int64)v15 <= 1 )
                goto LABEL_8;
              if ( (unsigned __int64)v15 + 2 > 1 )
                goto LABEL_9;
              if ( a3 == 1 )
              {
LABEL_8:
                v15 = 0LL;
LABEL_9:
                v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v24;
                v24[1] = v15;
                if ( v15 )
                  ++*((_DWORD *)v15 + 2);
                v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v25;
                v25[1] = v16;
                ++*(_DWORD *)(v16 + 8);
                v9 = xxxEndDeferWindowPosEx((struct tagSMWP *)v16, 1);
                ThreadUnlock1(v18, v17);
                ThreadUnlock1(v20, v19);
                goto LABEL_12;
              }
              v22 = 87;
            }
            UserSetLastError(v22);
          }
        }
      }
LABEL_12:
      ThreadUnlock1(v12, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
