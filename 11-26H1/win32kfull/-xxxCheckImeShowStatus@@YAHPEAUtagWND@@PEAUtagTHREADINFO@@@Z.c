/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140198198
 * Callers:
 *     ?xxxCheckImeShowStatusInThread@@YAHPEAUtagWND@@@Z @ 0x14019814C (-xxxCheckImeShowStatusInThread@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1402A16B4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  unsigned int v3; // ebx
  struct tagBWL *v4; // rax
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 *i; // r15
  __int64 v8; // r14
  struct tagWND *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  struct tagWND **v16; // r12
  __int16 *v17; // rcx
  __int16 v18; // bx
  ULONG64 *v19; // rax
  char v20; // r14
  PRKPROCESS *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  ULONG64 v25; // [rsp+28h] [rbp-70h]
  ULONG64 *v26; // [rsp+30h] [rbp-68h]
  struct tagTHREADINFO *v27; // [rsp+48h] [rbp-50h]
  struct tagBWL *v28; // [rsp+50h] [rbp-48h]

  v3 = 0;
  v27 = PtiCurrent((__int64)a1);
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) < 0 )
    return 0LL;
  v4 = BuildHwndList(*(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL), 2LL, 0LL, 1);
  v28 = v4;
  if ( v4 )
  {
    for ( i = (__int64 *)((char *)v4 + 32); *i != 1; ++i )
    {
      v8 = *i;
      v9 = 0LL;
      PsGetCurrentThreadWin32Thread(v6);
      v6 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19904);
      if ( (unsigned __int64)(unsigned __int16)v8 < *(_QWORD *)(v6 + 8) )
      {
        UserSessionState = W32GetUserSessionState(v6, v5);
        v15 = *(_DWORD *)(W32GetUserSessionState(v14, v13) + 19928) * (unsigned int)(unsigned __int16)v8
            + *(_QWORD *)(UserSessionState + 19920);
        v16 = (struct tagWND **)HMPkheFromPhe(v15);
        LOWORD(v8) = WORD1(v8) & 0x7FFF;
        if ( ((WORD1(v8) & 0x7FFF) == *(_WORD *)(v15 + 26)
           || (_WORD)v8 == 0x7FFF
           || !(_WORD)v8 && PsGetCurrentProcessWow64Process(v6, v5))
          && (*(_BYTE *)(v15 + 25) & 1) == 0
          && *(_BYTE *)(v15 + 24) == 1 )
        {
          v9 = *v16;
        }
      }
      if ( v9 && a1 != v9 )
      {
        if ( (*(_WORD *)(*((_QWORD *)v9 + 5) + 42LL) & 0x1000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 912LL);
        if ( (*(_WORD *)(*((_QWORD *)v9 + 5) + 42LL) & 0x1000) == 0
          && (v17 = *(__int16 **)(*((_QWORD *)v9 + 17) + 8LL),
              v18 = *v17,
              v6 = *(_QWORD *)(W32GetUserSessionState(v17, v5) + 19904),
              v18 == *(_WORD *)(v6 + 898)) )
        {
          v23 = *((_QWORD *)v9 + 5);
          if ( *(_DWORD *)(v23 + 248) )
            v19 = (ULONG64 *)*((_QWORD *)v9 + 35);
          else
            v19 = *(ULONG64 **)(v23 + 296);
        }
        else
        {
          v19 = 0LL;
        }
        v26 = v19;
        if ( v19 && *(char *)(*((_QWORD *)v9 + 5) + 20LL) >= 0 && (!a2 || a2 == *((struct tagTHREADINFO **)v9 + 2)) )
        {
          v20 = 0;
          v21 = *(PRKPROCESS **)(*((_QWORD *)v9 + 2) + 456LL);
          if ( v21 != *((PRKPROCESS **)v27 + 57) )
          {
            KeAttachProcess(*v21);
            v20 = 1;
          }
          v6 = *v26;
          v25 = *v26;
          if ( !*v26 || v25 == -1LL )
          {
            if ( v20 )
              KeDetachProcess();
          }
          else
          {
            v6 = MmUserProbeAddress;
            if ( v25 < MmUserProbeAddress )
              v6 = *v26;
            if ( (*(_DWORD *)(v6 + 44) & 1) != 0 )
            {
              v22 = HMValidateHandleNoSecure(*(_QWORD *)(v25 + 16), 1);
              if ( v22 )
                *(_DWORD *)(v25 + 44) &= ~1u;
            }
            else
            {
              v22 = 0LL;
            }
            if ( v20 )
              KeDetachProcess();
            if ( v22 )
            {
              v6 = *(_QWORD *)(v22 + 16);
              if ( v6 )
              {
                if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 520), 0, 0) & 1) == 0 )
                  PostMessage(v22, 642, 1, 0);
              }
            }
          }
        }
      }
    }
    FreeHwndList(v28, v5);
    return 1;
  }
  return v3;
}
