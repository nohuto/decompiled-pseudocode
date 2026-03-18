/*
 * XREFs of ?xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C00579F0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0057C74 (PhkFirstGlobalValid.c)
 *     ?EqualMsg@@YAHPEAUtagQMSG@@0@Z @ 0x1C0057CA4 (-EqualMsg@@YAHPEAUtagQMSG@@0@Z.c)
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     ?UpdateKeyState@@YAXPEAUtagQ@@IH@Z @ 0x1C0114130 (-UpdateKeyState@@YAXPEAUtagQ@@IH@Z.c)
 *     xxxCallJournalRecordHook @ 0x1C01DDD0C (xxxCallJournalRecordHook.c)
 */

void __fastcall xxxSkipSysMsg(struct tagTHREADINFO *a1, struct tagQMSG *a2)
{
  __int64 GlobalValid; // rax
  __int64 v5; // rdx
  struct tagQMSG *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  unsigned __int8 v11; // r11
  int v12; // r8d
  BOOL v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned __int8 v19; // bl
  unsigned int v20; // edx
  unsigned __int8 v21; // bl
  unsigned int v22; // eax
  unsigned int v23; // eax
  struct tagQMSG *i; // rcx
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax

  if ( !*(_QWORD *)(*((_QWORD *)a1 + 48) + 48LL) )
    return;
  GlobalValid = PhkFirstGlobalValid(a1, 1LL);
  if ( GlobalValid && (v5 = grpdeskRitInput, *((_QWORD *)a1 + 51) == grpdeskRitInput) )
  {
    *(_DWORD *)(GlobalValid + 64) |= 4u;
  }
  else
  {
    if ( PhkFirstGlobalValid(a1, 0LL) )
      xxxCallJournalRecordHook(a2);
    v6 = *(struct tagQMSG **)(*((_QWORD *)a1 + 48) + 48LL);
    if ( !v6 )
      return;
    if ( v6 != (struct tagQMSG *)1 )
    {
      if ( !(unsigned int)EqualMsg(v6, a2) )
      {
        for ( i = *(struct tagQMSG **)v8; i; i = *(struct tagQMSG **)v7 )
        {
          if ( (unsigned int)EqualMsg(i, a2) )
          {
            if ( !v7 )
              return;
            goto LABEL_8;
          }
        }
        return;
      }
LABEL_8:
      if ( (*(_DWORD *)(v7 + 100) & 0x8000) == 0 )
      {
        if ( v7 == v9 )
          *(_QWORD *)(v8 + 48) = 0LL;
        DelQEntry(*((_QWORD *)a1 + 48), v7, 1LL);
        EtwTraceInputProcessDelay(a1);
        *(_DWORD *)(*((_QWORD *)a1 + 48) + 368LL) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      }
    }
  }
  if ( (*((_DWORD *)a2 + 25) & 0x10000) != 0 )
    return;
  v10 = *((_DWORD *)a2 + 6);
  v11 = 0;
  v12 = 0;
  v13 = 1;
  if ( v10 == 514 )
  {
    v13 = 0;
    goto LABEL_25;
  }
  if ( v10 > 0x202 )
  {
    v22 = v10 - 516;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        v26 = v23 - 2;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 3;
            if ( v28 )
            {
              if ( v28 != 1 )
                return;
              v13 = 0;
            }
            if ( *((_WORD *)a2 + 17) == 1 )
            {
              v11 = 5;
              goto LABEL_26;
            }
            if ( *((_WORD *)a2 + 17) == 2 )
            {
              v11 = 6;
              goto LABEL_26;
            }
            goto LABEL_21;
          }
          v13 = 0;
        }
        v11 = 4;
        goto LABEL_26;
      }
      v13 = 0;
    }
    v11 = 2;
    goto LABEL_29;
  }
  v14 = v10 - 255;
  if ( !v14 )
  {
    if ( (*((_DWORD *)a1 + 274) & 0x200000) == 0 )
      return;
    if ( *((_QWORD *)a2 + 4) )
      return;
    LOBYTE(v5) = 18;
    v25 = HMValidateHandleNoRip(*((_QWORD *)a2 + 5), v5, 0LL);
    if ( !v25 || *(_DWORD *)(v25 + 32) != 1 )
      return;
    v11 = *(_BYTE *)(v25 + 62);
    v12 = *(_WORD *)(v25 + 58) & 6;
    v13 = (*(_BYTE *)(v25 + 58) & 1) == 0;
    if ( v11 == 16 )
    {
      *(_WORD *)(v25 + 58) &= 0xFFF9u;
      goto LABEL_34;
    }
    goto LABEL_29;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 3;
      if ( !v17 )
        goto LABEL_28;
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 != 252 )
          goto LABEL_21;
LABEL_25:
        v11 = 1;
        goto LABEL_26;
      }
    }
    v13 = 0;
  }
LABEL_28:
  v11 = *((_BYTE *)a2 + 32);
  v12 = *((_DWORD *)a2 + 10) & 0x1000000;
  if ( v11 == 16 )
  {
    *((_QWORD *)a2 + 5) &= ~0x1000000uLL;
    goto LABEL_34;
  }
LABEL_29:
  if ( v11 != 18 )
  {
LABEL_21:
    if ( v11 != 17 )
    {
      if ( !v11 )
        return;
LABEL_26:
      UpdateKeyState(*((struct tagQ **)a1 + 48), v11, v13);
      return;
    }
  }
LABEL_34:
  v19 = (v12 != 0) - 96 + 2 * (v11 - 16);
  v20 = v19;
  v21 = v19 ^ 1;
  UpdateKeyState(*((struct tagQ **)a1 + 48), v20, v13);
  if ( v13
    || ((unsigned __int8)(1 << (2 * (v21 & 3))) & *(_BYTE *)(((unsigned __int64)v21 >> 2) + *((_QWORD *)a1 + 48) + 192)) == 0 )
  {
    goto LABEL_26;
  }
}
