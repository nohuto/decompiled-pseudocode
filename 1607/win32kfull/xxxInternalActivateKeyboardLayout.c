/*
 * XREFs of xxxInternalActivateKeyboardLayout @ 0x1C00E7090
 * Callers:
 *     xxxApplyGlobalInputSettings @ 0x1C00A89E0 (xxxApplyGlobalInputSettings.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00E67CC (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C00E84C0 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     xxxActivateKeyboardLayout @ 0x1C01D56D0 (xxxActivateKeyboardLayout.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C00A9E68 (xxxChangeForegroundKeyboardTable.c)
 *     xxxImmActivateLayout @ 0x1C01354E4 (xxxImmActivateLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01DA380 (xxxImmActivateThreadsLayout.c)
 */

__int64 __fastcall xxxInternalActivateKeyboardLayout(__int64 a1, unsigned int a2, __int64 a3)
{
  int v5; // r12d
  __int64 v6; // r15
  int v7; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  bool v13; // zf
  __int64 i; // r14
  int *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v20[3]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v21; // [rsp+60h] [rbp-48h] BYREF
  __int64 v22; // [rsp+68h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp+20h]

  v5 = a2 & 0x100;
  v6 = *(_QWORD *)(gptiCurrent + 392LL);
  v7 = 0;
  if ( v6 )
  {
    v23 = *(_QWORD *)(v6 + 40);
  }
  else
  {
    v6 = 0LL;
    v23 = 0LL;
  }
  if ( (a2 & 0x40000000) != 0 )
    gdwKeyboardAttributes = (a2 >> 15) & 2;
  if ( (a2 & 0x100) != 0 || a1 != *(_QWORD *)(gptiCurrent + 392LL) )
  {
    *(_WORD *)(a1 + 74) = 0;
    v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v20;
    v20[1] = v6;
    if ( v6 )
      ++*(_DWORD *)(v6 + 8);
    if ( (*(_DWORD *)(gptiCurrent + 440LL) & 8) != 0 )
    {
      HMAssignmentLock(gptiCurrent + 392LL, a1);
      v9 = *(unsigned __int16 *)(a1 + 72);
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 152LL) = v9;
    }
    else
    {
      v9 = gpsi;
      v10 = *gpsi;
      if ( (a2 & 0x100) != 0 )
      {
        if ( (v10 & 4) != 0 )
        {
          v13 = (unsigned int)xxxImmActivateThreadsLayout(
                                *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 288LL),
                                0LL,
                                a1) == 0;
        }
        else
        {
          v12 = 0LL;
          for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 288LL); i; i = *(_QWORD *)(i + 584) )
          {
            v9 = i + 392;
            if ( *(_QWORD *)(i + 392) != a1 && (*(_DWORD *)(i + 440) & 1) == 0 )
            {
              HMAssignmentLock(v9, a1);
              *(_WORD *)(*(_QWORD *)(i + 432) + 152LL) = *(_WORD *)(a1 + 72);
              v9 = *(_QWORD *)(a1 + 40);
              *(_QWORD *)(*(_QWORD *)(i + 432) + 144LL) = v9;
              v12 = 1LL;
            }
          }
          v13 = (_DWORD)v12 == 0;
        }
        if ( v13 )
          goto LABEL_24;
      }
      else
      {
        if ( (v10 & 4) != 0 )
          xxxImmActivateLayout(gptiCurrent, a1);
        else
          HMAssignmentLock(gptiCurrent + 392LL, a1);
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) == 0 )
        {
          *(_WORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 152LL) = *(_WORD *)(a1 + 72);
          v9 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 144LL) = v9;
        }
      }
    }
    if ( gptiForeground )
    {
      if ( *(_QWORD *)(gptiForeground + 376LL) == *(_QWORD *)(gptiCurrent + 376LL) )
      {
        xxxChangeForegroundKeyboardTable((struct tagKL *)v6, (struct tagKL *)a1);
        xxxWindowEvent(0x80000001, 0LL, *(_DWORD *)(a1 + 40), 0, 0);
        v15 = *(int **)(a1 + 40);
        if ( (int *)gLCIDSentToShell != v15
          && gptiCurrent != gptiRit
          && ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
        {
          gLCIDSentToShell = *(_QWORD *)(a1 + 40);
          xxxCallHook(8u, 0LL, v15, 0xAu);
        }
      }
    }
    v11 = *(_QWORD *)(gptiCurrent + 384LL);
    if ( v11 )
    {
      v9 = *(_QWORD *)(v11 + 80);
      if ( v9 )
        goto LABEL_43;
      v9 = *(_QWORD *)(v11 + 88);
      if ( !v9 )
        v9 = a3;
      if ( v9 )
      {
LABEL_43:
        v21 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v21;
        v22 = v9;
        ++*(_DWORD *)(v9 + 8);
        xxxSendMessage((struct tagWND *)v9, 0x51u, *(unsigned int *)(a1 + 68), *(_QWORD *)(a1 + 40));
        ThreadUnlock1(v17, v16);
      }
    }
    v12 = *(_QWORD *)(gptiCurrent + 696LL);
    if ( v12 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 440LL) & 8) == 0 )
      {
        if ( (*(_WORD *)(a1 + 42) & 0xF000) == 0xE000 || (v9 = gpsi, (*gpsi & 4) != 0) )
        {
          LOBYTE(v7) = v5 != 0;
          v21 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v21;
          v22 = v12;
          ++*(_DWORD *)(v12 + 8);
          xxxSendMessage(*(struct tagWND **)(gptiCurrent + 696LL), 0x287u, 0x1FuLL, v7);
          ThreadUnlock1(v19, v18);
        }
      }
    }
LABEL_24:
    ThreadUnlock1(v9, v12);
  }
  return v23;
}
