/*
 * XREFs of NtUserQueryWindow @ 0x1C00D53A0
 * Callers:
 *     <none>
 * Callees:
 *     IsHungWindow @ 0x1C0059680 (IsHungWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ProcessHungWindow @ 0x1C00D5348 (ProcessHungWindow.c)
 *     ShouldProcessHungWindow @ 0x1C00D5530 (ShouldProcessHungWindow.c)
 */

__int64 __fastcall NtUserQueryWindow(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  HANDLE ThreadId; // rax
  __int64 v10; // rdi
  BOOL v12; // eax
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = v4;
  if ( !v4 )
  {
LABEL_22:
    v10 = 0LL;
    goto LABEL_6;
  }
  v8 = *(_QWORD *)(v4 + 16);
  if ( a2 == 2 )
  {
    if ( (*(_DWORD *)(v4 + 288) & 0x800) != 0 )
    {
      v10 = *(int *)(v4 + 364);
      goto LABEL_6;
    }
    ThreadId = PsGetThreadId(*(PETHREAD *)v8);
    goto LABEL_5;
  }
  if ( !a2 )
  {
    if ( (*(_DWORD *)(v4 + 288) & 0x800) != 0 )
    {
      v10 = *(int *)(v4 + 360);
      goto LABEL_6;
    }
LABEL_9:
    ThreadId = PsGetThreadProcessId(*(PETHREAD *)v8);
LABEL_5:
    v10 = (__int64)ThreadId;
    goto LABEL_6;
  }
  v6 = 0x1C0000000uLL;
  switch ( a2 )
  {
    case 1:
      goto LABEL_9;
    case 3:
      v10 = *(_QWORD *)(*(_QWORD *)(v8 + 384) + 88LL);
      if ( !v10 )
        goto LABEL_22;
      goto LABEL_18;
    case 4:
      v10 = *(_QWORD *)(*(_QWORD *)(v8 + 384) + 80LL);
      if ( !v10 )
        break;
      goto LABEL_18;
    case 5:
      if ( (*(_WORD *)(v4 + 66) & 0x3FFF) == 0x2AA )
      {
        v10 = 1LL;
      }
      else
      {
        v12 = IsHungWindow(v4);
        v10 = v12;
        if ( v12 )
        {
          v13 = (unsigned __int64 *)ShouldProcessHungWindow(v7);
          if ( v13 )
          {
            v14 = *v13;
            if ( gdwInAtomicOperation )
            {
              v6 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation);
            EnterCrit(0LL, 1LL);
            if ( HMValidateHandleNoSecure(v14, 1LL, v15, v16) )
              ProcessHungWindow();
            UserSessionSwitchLeaveCrit(v18, v17);
            EnterSharedCrit(0LL, 1LL);
          }
        }
      }
      break;
    case 7:
      v6 = gpqForeground;
      v10 = *(_QWORD *)(v8 + 384) == gpqForeground;
      break;
    case 8:
      v10 = *(_QWORD *)(v8 + 696);
      if ( !v10 )
        goto LABEL_22;
      goto LABEL_18;
    case 9:
      v10 = *(_QWORD *)(v8 + 704);
      if ( !v10 )
        goto LABEL_22;
LABEL_18:
      v10 = *(_QWORD *)v10;
      break;
    default:
      goto LABEL_22;
  }
LABEL_6:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v10;
}
