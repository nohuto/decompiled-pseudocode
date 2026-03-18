/*
 * XREFs of WakeSomeone @ 0x1C005B3C4
 * Callers:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0008554 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     zzzSetFMouseMovedWorker @ 0x1C00587A4 (zzzSetFMouseMovedWorker.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C014717C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?JournalTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E0C80 (-JournalTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C005DA08 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     IsProcessedByInputService @ 0x1C00DB84C (IsProcessedByInputService.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C010546C (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     IsMouseInPointerActive @ 0x1C01054A0 (IsMouseInPointerActive.c)
 *     CancelForegroundActivate @ 0x1C0115190 (CancelForegroundActivate.c)
 */

__int64 __fastcall WakeSomeone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  unsigned int v5; // esi
  int v7; // ebx
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi

  v4 = 0;
  v5 = 0;
  v7 = a3;
  v8 = a2;
  if ( (unsigned int)a3 <= 0x207 )
  {
    if ( (unsigned int)a3 >= 0x206 )
    {
LABEL_51:
      v4 = 1;
      goto LABEL_52;
    }
    result = 262LL;
    if ( (unsigned int)a3 > 0x106 )
    {
      if ( (_DWORD)a3 == 512 )
      {
        if ( !a2 )
        {
          v11 = *(_QWORD *)(a1 + 72);
          if ( v11 )
            v8 = *(_QWORD *)(v11 + 16);
          else
            v8 = *(_QWORD *)(a1 + 56);
        }
        v5 = 2;
        if ( a4 )
        {
          result = IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(a4 + 120));
          if ( (_DWORD)result )
          {
            result = IsMouseInPointerActive(v8, a4);
            if ( (_DWORD)result )
              v5 = 4098;
          }
        }
        goto LABEL_9;
      }
      if ( (_DWORD)a3 == 513 )
        goto LABEL_51;
      if ( (_DWORD)a3 != 283 )
      {
        if ( (_DWORD)a3 == 514 )
          goto LABEL_53;
        if ( (unsigned int)a3 > 0x202 )
        {
          if ( (unsigned int)a3 <= 0x204 )
            goto LABEL_51;
LABEL_53:
          v16 = *(_QWORD *)(a1 + 72);
          if ( v16 && (unsigned int)(v7 - 512) <= 0xE )
            v8 = *(_QWORD *)(v16 + 16);
          else
            v8 = *(_QWORD *)(a1 + 56);
LABEL_55:
          v5 = 4;
          result = ShouldAddPointerWakeFlag((const struct tagTHREADINFO *)v8, (const struct tagQMSG *)a4);
          if ( (_DWORD)result )
            v5 = 4100;
          goto LABEL_9;
        }
LABEL_52:
        CancelForegroundActivate();
        goto LABEL_53;
      }
      goto LABEL_83;
    }
    if ( (_DWORD)a3 == 262 )
      goto LABEL_36;
    if ( (unsigned int)a3 < 0xFE )
      goto LABEL_52;
    if ( (unsigned int)a3 > 0xFF )
    {
      switch ( (_DWORD)a3 )
      {
        case 0x101:
          goto LABEL_23;
        case 0x100:
        case 0x104:
          if ( !a4
            || (unsigned __int64)(*(_QWORD *)(a4 + 32) - 16LL) > 2
            || ((unsigned __int8)(1 << (2 * (*(_BYTE *)(a4 + 32) & 3))) & *(_BYTE *)(((unsigned __int64)*(unsigned __int8 *)(a4 + 32) >> 2)
                                                                                   + a1
                                                                                   + 192)) == 0 )
          {
            v4 = 1;
          }
          break;
        case 0x105:
          goto LABEL_23;
        case 0x102:
          break;
        default:
          goto LABEL_52;
      }
LABEL_36:
      CancelForegroundActivate();
      goto LABEL_23;
    }
LABEL_37:
    if ( !v8 )
    {
      v14 = *(_QWORD *)(a4 + 16);
      if ( !v14 || (v15 = ValidateHwnd(v14)) == 0 || (v8 = *(_QWORD *)(v15 + 16)) == 0 )
      {
        v17 = *(_QWORD *)(a1 + 88);
        if ( v17 )
          v8 = *(_QWORD *)(v17 + 16);
        else
          v8 = *(_QWORD *)(a1 + 64);
      }
    }
    result = 1024LL;
    if ( !v5 )
      v5 = 1024;
    goto LABEL_9;
  }
  if ( (unsigned int)a3 > 0x20E )
  {
    if ( (_DWORD)a3 != 568 )
    {
      if ( (_DWORD)a3 != 576 )
      {
        if ( (unsigned int)a3 <= 0x244
          || (unsigned int)a3 > 0x247
          && ((unsigned int)a3 <= 0x248 || (unsigned int)a3 > 0x24A && (unsigned int)(a3 - 593) > 2) )
        {
          goto LABEL_52;
        }
        v5 = 4096;
      }
LABEL_83:
      result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      if ( !result )
        return result;
      if ( !v5 )
        v5 = 2048;
      goto LABEL_37;
    }
    v5 = 4096;
    goto LABEL_37;
  }
  if ( (_DWORD)a3 != 526 )
  {
    if ( (_DWORD)a3 == 520 )
      goto LABEL_53;
    if ( (_DWORD)a3 == 521 )
      goto LABEL_51;
    if ( (_DWORD)a3 != 522 )
    {
      if ( (_DWORD)a3 == 524 )
        goto LABEL_53;
      goto LABEL_51;
    }
  }
LABEL_23:
  if ( ((v7 - 522) & 0xFFFFFFFB) != 0 || (*(_DWORD *)(a1 + 340) & 0x2000000) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 88);
    if ( !v12 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      goto LABEL_26;
    }
LABEL_25:
    v8 = *(_QWORD *)(v12 + 16);
    goto LABEL_26;
  }
  v12 = *(_QWORD *)(a1 + 72);
  if ( v12 )
    goto LABEL_25;
  v8 = *(_QWORD *)(a1 + 56);
LABEL_26:
  result = (unsigned int)(v7 - 522);
  if ( (result & 0xFFFFFFFB) == 0 )
    goto LABEL_55;
  v5 = 1;
LABEL_9:
  if ( v8 )
  {
    if ( a4
      && *(_QWORD *)(a4 + 104)
      && ((unsigned int)IsProcessedByInputService(a4) || (*(_DWORD *)(a4 + 100) & 0x20000) != 0) )
    {
      v8 = v13;
    }
    result = SetWakeBit(v8, v5);
    *(_DWORD *)(v8 + 1096) |= 0x20000000u;
    if ( a4 )
      *(_QWORD *)(a4 + 104) = v8;
    if ( v4 )
    {
      result = SetLastInputWoken(v8, 0LL);
      *(_DWORD *)(v8 + 1096) |= 0x80000000;
    }
  }
  return result;
}
