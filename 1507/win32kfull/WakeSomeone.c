/*
 * XREFs of WakeSomeone @ 0x1C0090208
 * Callers:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     zzzSetFMouseMovedWorker @ 0x1C008D08C (zzzSetFMouseMovedWorker.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0115D6C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?JournalTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E9BF0 (-JournalTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C008BD5C (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C00E1CD0 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     IsMouseInPointerActive @ 0x1C00E1D04 (IsMouseInPointerActive.c)
 *     CancelForegroundActivate @ 0x1C00F75A4 (CancelForegroundActivate.c)
 */

__int64 __fastcall WakeSomeone(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v4; // r12d
  unsigned int v5; // esi
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi

  v4 = 0;
  v5 = 0;
  v8 = a2;
  if ( a3 > 0x207 )
  {
    if ( a3 <= 0x20E )
    {
      if ( a3 != 526 )
      {
        if ( a3 == 520 )
          goto LABEL_46;
        if ( a3 == 521 )
          goto LABEL_44;
        if ( a3 != 522 )
        {
          if ( a3 == 524 )
            goto LABEL_46;
          goto LABEL_44;
        }
      }
      goto LABEL_21;
    }
    if ( a3 != 568 )
    {
      if ( a3 != 576 )
      {
        if ( a3 <= 0x244 || a3 > 0x247 && (a3 <= 0x248 || a3 > 0x24A && a3 - 593 > 2) )
          goto LABEL_45;
        v5 = 4096;
      }
LABEL_75:
      result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( !result )
        return result;
      if ( !v5 )
        v5 = 2048;
      goto LABEL_32;
    }
    v5 = 4096;
LABEL_32:
    if ( !v8 )
    {
      v14 = *(_QWORD *)(a4 + 16);
      if ( !v14 || (v15 = ValidateHwnd(v14)) == 0 || (v8 = *(_QWORD *)(v15 + 16)) == 0 )
      {
        v17 = a1[10];
        if ( v17 )
          v8 = *(_QWORD *)(v17 + 16);
        else
          v8 = a1[7];
      }
    }
    result = 1024LL;
    if ( !v5 )
      v5 = 1024;
    goto LABEL_9;
  }
  if ( a3 >= 0x206 )
  {
LABEL_44:
    v4 = 1;
    goto LABEL_45;
  }
  result = 262LL;
  if ( a3 > 0x106 )
  {
    if ( a3 == 512 )
    {
      if ( !a2 )
      {
        v11 = a1[8];
        if ( v11 )
          v8 = *(_QWORD *)(v11 + 16);
        else
          v8 = a1[6];
      }
      v5 = 2;
      if ( a4 )
      {
        result = IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(a4 + 112));
        if ( (_DWORD)result )
        {
          result = IsMouseInPointerActive(v8, v12);
          if ( (_DWORD)result )
            v5 = 4098;
        }
      }
      goto LABEL_9;
    }
    if ( a3 == 513 )
      goto LABEL_44;
    if ( a3 != 283 )
    {
      if ( a3 == 514 )
        goto LABEL_46;
      if ( a3 > 0x202 )
      {
        if ( a3 <= 0x204 )
          goto LABEL_44;
LABEL_46:
        v16 = a1[8];
        if ( v16 && a3 - 512 <= 0xE )
          v8 = *(_QWORD *)(v16 + 16);
        else
          v8 = a1[6];
        goto LABEL_48;
      }
LABEL_45:
      CancelForegroundActivate();
      goto LABEL_46;
    }
    goto LABEL_75;
  }
  if ( a3 == 262 )
    goto LABEL_31;
  if ( a3 < 0xFE )
    goto LABEL_45;
  if ( a3 <= 0xFF )
    goto LABEL_32;
  if ( a3 == 257 )
    goto LABEL_21;
  if ( a3 == 256 || a3 == 260 )
  {
    if ( !a4
      || (unsigned __int64)(*(_QWORD *)(a4 + 32) - 16LL) > 2
      || ((unsigned __int8)(1 << (2 * (*(_BYTE *)(a4 + 32) & 3))) & *((_BYTE *)a1
                                                                    + ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) >> 2)
                                                                    + 184)) == 0 )
    {
      v4 = 1;
    }
LABEL_31:
    CancelForegroundActivate();
    goto LABEL_21;
  }
  if ( a3 != 261 )
  {
    if ( a3 != 258 )
      goto LABEL_45;
    goto LABEL_31;
  }
LABEL_21:
  v13 = a1[10];
  if ( v13 )
    v8 = *(_QWORD *)(v13 + 16);
  else
    v8 = a1[7];
  result = a3 - 522;
  if ( (result & 0xFFFFFFFB) == 0 )
  {
LABEL_48:
    v5 = 4;
    result = ShouldAddPointerWakeFlag((const struct tagTHREADINFO *)v8, (const struct tagQMSG *)a4);
    if ( (_DWORD)result )
      v5 = 4100;
    goto LABEL_9;
  }
  v5 = 1;
LABEL_9:
  if ( v8 )
  {
    result = SetWakeBit(v8, v5);
    *(_DWORD *)(v8 + 1080) |= 0x20000000u;
    if ( a4 )
      *(_QWORD *)(a4 + 96) = v8;
    if ( v4 )
    {
      result = SetLastInputWoken(v8, 0LL);
      *(_DWORD *)(v8 + 1080) |= 0x80000000;
    }
  }
  return result;
}
