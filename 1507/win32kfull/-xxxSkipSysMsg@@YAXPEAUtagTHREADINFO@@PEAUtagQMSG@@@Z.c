/*
 * XREFs of ?xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C008C290
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C008C504 (PhkFirstGlobalValid.c)
 *     ?UpdateKeyState@@YAXPEAUtagQ@@IH@Z @ 0x1C008C530 (-UpdateKeyState@@YAXPEAUtagQ@@IH@Z.c)
 *     ?EqualMsg@@YAHPEAUtagQMSG@@0@Z @ 0x1C008C5D0 (-EqualMsg@@YAHPEAUtagQMSG@@0@Z.c)
 *     DelQEntry @ 0x1C008C604 (DelQEntry.c)
 *     xxxCallJournalRecordHook @ 0x1C01E7040 (xxxCallJournalRecordHook.c)
 */

void __fastcall xxxSkipSysMsg(struct tagTHREADINFO *a1, struct tagQMSG *a2)
{
  __int64 GlobalValid; // rax
  struct tagQMSG *v5; // r9
  struct tagQMSG **v6; // rcx
  __int64 v7; // r8
  struct tagQMSG **v8; // r9
  unsigned int v9; // eax
  unsigned __int8 v10; // r11
  int v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  char v17; // al
  unsigned __int8 v18; // r14
  struct tagQMSG *i; // rcx
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax

  if ( !*(_QWORD *)(*((_QWORD *)a1 + 49) + 40LL) )
    return;
  GlobalValid = PhkFirstGlobalValid(a1, 1LL);
  if ( GlobalValid && *((_QWORD *)a1 + 52) == grpdeskRitInput )
  {
    *(_DWORD *)(GlobalValid + 64) |= 4u;
  }
  else
  {
    if ( PhkFirstGlobalValid(a1, 0LL) )
      xxxCallJournalRecordHook(a2);
    v5 = *(struct tagQMSG **)(*((_QWORD *)a1 + 49) + 40LL);
    if ( !v5 )
      return;
    if ( v5 != (struct tagQMSG *)1 )
    {
      if ( !(unsigned int)EqualMsg(v5, a2) )
      {
        for ( i = *(struct tagQMSG **)v7; i; i = *v6 )
        {
          if ( (unsigned int)EqualMsg(i, a2) )
          {
            if ( !v6 )
              return;
            goto LABEL_8;
          }
        }
        return;
      }
LABEL_8:
      if ( v6 == v8 )
        *(_QWORD *)(v7 + 40) = 0LL;
      DelQEntry(*((_QWORD *)a1 + 49), v6, 1LL);
      EtwTraceInputProcessDelay(a1);
      *(_DWORD *)(*((_QWORD *)a1 + 49) + 360LL) = (MEMORY[0xFFFFF78000000320]
                                                 * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    }
  }
  v9 = *((_DWORD *)a2 + 6);
  v10 = 0;
  v11 = 1;
  if ( v9 > 0x204 )
  {
    v20 = v9 - 517;
    if ( v20 )
    {
      v21 = v20 - 2;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 3;
          if ( v23 )
          {
            if ( v23 != 1 )
              goto LABEL_20;
            v11 = 0;
          }
          if ( *((_WORD *)a2 + 17) == 1 )
          {
            v10 = 5;
            goto LABEL_20;
          }
          if ( *((_WORD *)a2 + 17) == 2 )
          {
            v10 = 6;
            goto LABEL_20;
          }
LABEL_19:
          if ( v10 != 17 )
          {
LABEL_20:
            UpdateKeyState(*((struct tagQ **)a1 + 49), v10, v11);
            return;
          }
          goto LABEL_25;
        }
        v11 = 0;
      }
      v10 = 4;
      goto LABEL_20;
    }
    v11 = 0;
  }
  else if ( v9 != 516 )
  {
    v12 = v9 - 256;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
LABEL_22:
        v11 = 0;
        goto LABEL_23;
      }
      v14 = v13 - 3;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 252;
          if ( v16 )
          {
            if ( v16 != 1 )
              goto LABEL_19;
            v11 = 0;
          }
          v10 = 1;
          goto LABEL_20;
        }
        goto LABEL_22;
      }
    }
LABEL_23:
    v10 = *((_BYTE *)a2 + 32);
    goto LABEL_24;
  }
  v10 = 2;
LABEL_24:
  if ( ((v10 - 16) & 0xFD) != 0 )
    goto LABEL_19;
LABEL_25:
  v17 = (BYTE3(*((_QWORD *)a2 + 5)) & 1) - 96;
  v18 = (v17 + 2 * (v10 - 16)) ^ 1;
  if ( v10 == 16 )
    *((_QWORD *)a2 + 5) &= ~0x1000000uLL;
  UpdateKeyState(*((struct tagQ **)a1 + 49), (unsigned __int8)(v17 + 2 * (v10 - 16)), v11);
  if ( v11
    || ((unsigned __int8)(1 << (2 * (v18 & 3))) & *(_BYTE *)(((unsigned __int64)v18 >> 2) + *((_QWORD *)a1 + 49) + 184)) == 0 )
  {
    goto LABEL_20;
  }
}
