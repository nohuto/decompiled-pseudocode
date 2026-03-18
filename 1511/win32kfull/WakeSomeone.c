/*
 * XREFs of WakeSomeone @ 0x1C0051C7C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     zzzSetFMouseMovedWorker @ 0x1C0065D9C (zzzSetFMouseMovedWorker.c)
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C013F484 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?JournalTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EA400 (-JournalTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C0053C94 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     CancelForegroundActivate @ 0x1C00F6F28 (CancelForegroundActivate.c)
 */

__int64 __fastcall WakeSomeone(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v4; // r12d
  unsigned int v5; // esi
  __int64 v8; // rdi
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi

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
          goto LABEL_45;
        if ( a3 == 521 )
          goto LABEL_43;
        if ( a3 != 522 )
        {
          if ( a3 == 524 )
            goto LABEL_45;
          goto LABEL_43;
        }
      }
      goto LABEL_19;
    }
    if ( a3 != 568 )
    {
      if ( a3 != 576 )
      {
        if ( a3 <= 0x244 || a3 > 0x247 && (a3 <= 0x248 || a3 > 0x24A && a3 - 593 > 2) )
          goto LABEL_44;
        v5 = 4096;
      }
LABEL_73:
      result = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( !result )
        return result;
      if ( !v5 )
        v5 = 2048;
      goto LABEL_24;
    }
    v5 = 4096;
LABEL_24:
    if ( !v8 )
    {
      v13 = *(_QWORD *)(a4 + 16);
      if ( !v13 || (v14 = ValidateHwnd(v13)) == 0 || (v8 = *(_QWORD *)(v14 + 16)) == 0 )
      {
        v16 = a1[10];
        if ( v16 )
          v8 = *(_QWORD *)(v16 + 16);
        else
          v8 = a1[7];
      }
    }
    result = 1024LL;
    if ( !v5 )
      v5 = 1024;
    goto LABEL_10;
  }
  if ( a3 >= 0x206 )
    goto LABEL_43;
  if ( a3 > 0x106 )
  {
    if ( a3 == 512 )
    {
      if ( !a2 )
      {
        v10 = a1[8];
        if ( v10 )
          v8 = *(_QWORD *)(v10 + 16);
        else
          v8 = a1[6];
      }
      v5 = 2;
      result = ShouldAddPointerWakeFlag((const struct tagTHREADINFO *)v8, (const struct tagQMSG *)a4);
      if ( (_DWORD)result )
        v5 = 4098;
      goto LABEL_10;
    }
    if ( a3 != 513 )
    {
      if ( a3 != 283 )
      {
        if ( a3 == 514 )
        {
LABEL_45:
          v15 = a1[8];
          if ( v15 && a3 - 512 <= 0xE )
            v8 = *(_QWORD *)(v15 + 16);
          else
            v8 = a1[6];
          goto LABEL_47;
        }
        if ( a3 > 0x202 )
        {
          if ( a3 > 0x204 )
            goto LABEL_45;
          goto LABEL_43;
        }
LABEL_44:
        CancelForegroundActivate();
        goto LABEL_45;
      }
      goto LABEL_73;
    }
LABEL_43:
    v4 = 1;
    goto LABEL_44;
  }
  if ( a3 == 262 )
    goto LABEL_35;
  if ( a3 < 0xFE )
    goto LABEL_44;
  if ( a3 <= 0xFF )
    goto LABEL_24;
  if ( a3 == 257 )
    goto LABEL_19;
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
LABEL_35:
    CancelForegroundActivate();
    goto LABEL_19;
  }
  if ( a3 != 261 )
  {
    if ( a3 != 258 )
      goto LABEL_44;
    goto LABEL_35;
  }
LABEL_19:
  v12 = a1[10];
  if ( v12 )
    v8 = *(_QWORD *)(v12 + 16);
  else
    v8 = a1[7];
  result = a3 - 522;
  if ( (result & 0xFFFFFFFB) == 0 )
  {
LABEL_47:
    v5 = 4;
    result = ShouldAddPointerWakeFlag((const struct tagTHREADINFO *)v8, (const struct tagQMSG *)a4);
    if ( (_DWORD)result )
      v5 = 4100;
    goto LABEL_10;
  }
  v5 = 1;
LABEL_10:
  if ( v8 )
  {
    result = SetWakeBit(v8, v5);
    *(_DWORD *)(v8 + 1072) |= 0x20000000u;
    if ( a4 )
      *(_QWORD *)(a4 + 96) = v8;
    if ( v4 )
    {
      result = SetLastInputWoken(v8, 0LL);
      *(_DWORD *)(v8 + 1072) |= 0x80000000;
    }
  }
  return result;
}
