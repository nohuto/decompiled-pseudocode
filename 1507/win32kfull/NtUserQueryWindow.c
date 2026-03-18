/*
 * XREFs of NtUserQueryWindow @ 0x1C0085DC0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     IsHungWindow @ 0x1C008CD50 (IsHungWindow.c)
 *     ShouldProcessHungWindow @ 0x1C00FF760 (ShouldProcessHungWindow.c)
 *     ProcessHungWindow @ 0x1C01176A8 (ProcessHungWindow.c)
 */

__int64 __fastcall NtUserQueryWindow(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 ThreadProcessId; // rdi
  __int64 *v10; // rdi
  __int64 *v11; // rdi
  int v12; // eax
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 *v19; // rdi

  EnterSharedCrit(1LL);
  v4 = ValidateHwnd(a1);
  v7 = v4;
  if ( v4 )
  {
    v8 = *(_QWORD *)(v4 + 16);
    v6 = 0x1C0000000uLL;
    switch ( a2 )
    {
      case 0:
        if ( (*(_DWORD *)(v4 + 288) & 0x800) == 0 )
          goto LABEL_3;
        ThreadProcessId = *(int *)(v4 + 376);
        break;
      case 1:
LABEL_3:
        ThreadProcessId = (__int64)PsGetThreadProcessId(*(PETHREAD *)v8);
        break;
      case 2:
        if ( (*(_DWORD *)(v4 + 288) & 0x800) != 0 )
          ThreadProcessId = *(int *)(v4 + 380);
        else
          ThreadProcessId = (__int64)PsGetThreadId(*(PETHREAD *)v8);
        break;
      case 3:
        v10 = *(__int64 **)(*(_QWORD *)(v8 + 392) + 80LL);
        if ( !v10 )
          goto LABEL_25;
        ThreadProcessId = *v10;
        break;
      case 4:
        v11 = *(__int64 **)(*(_QWORD *)(v8 + 392) + 72LL);
        if ( !v11 )
          goto LABEL_25;
        ThreadProcessId = *v11;
        break;
      case 5:
        if ( (*(_WORD *)(v4 + 66) & 0x3FFF) == 0x2AA )
        {
          ThreadProcessId = 1LL;
        }
        else
        {
          v12 = IsHungWindow(v4);
          ThreadProcessId = v12;
          if ( v12 )
          {
            v13 = (unsigned __int64 *)ShouldProcessHungWindow(v7);
            if ( v13 )
            {
              v14 = *v13;
              UserSessionSwitchLeaveCrit(v6, v5);
              EnterCrit(1LL);
              v15 = HMValidateHandleNoSecure(v14, 1);
              if ( v15 )
                ProcessHungWindow(v15);
              UserSessionSwitchLeaveCrit(v17, v16);
              EnterSharedCrit(1LL);
            }
          }
        }
        break;
      case 7:
        v6 = gpqForeground;
        ThreadProcessId = *(_QWORD *)(v8 + 392) == gpqForeground;
        break;
      case 8:
        v18 = *(__int64 **)(v8 + 704);
        if ( !v18 )
          goto LABEL_25;
        ThreadProcessId = *v18;
        break;
      case 9:
        v19 = *(__int64 **)(v8 + 712);
        if ( !v19 )
          goto LABEL_25;
        ThreadProcessId = *v19;
        break;
      default:
        goto LABEL_25;
    }
  }
  else
  {
LABEL_25:
    ThreadProcessId = 0LL;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return ThreadProcessId;
}
