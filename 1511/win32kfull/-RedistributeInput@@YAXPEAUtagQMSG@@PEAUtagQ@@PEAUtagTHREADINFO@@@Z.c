/*
 * XREFs of ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C01007F8
 * Callers:
 *     zzzReattachThreads @ 0x1C008B6B4 (zzzReattachThreads.c)
 *     zzzAttachToQueue @ 0x1C008BC0C (zzzAttachToQueue.c)
 * Callees:
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     FreeQEntry @ 0x1C0064D1C (FreeQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00DC9C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 */

void __fastcall RedistributeInput(struct tagQMSG *a1, struct tagQ *a2, struct tagTHREADINFO *a3)
{
  struct tagQMSG *v4; // rdi
  __int64 v5; // rbp
  struct tagQMSG *v6; // rsi
  __int64 i; // r15
  __int64 v8; // r14
  struct tagQMSG *v9; // rbx
  struct tagQMSG *v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  struct tagQMSG *v17; // rbx
  struct tagTHREADINFO *v18; // [rsp+60h] [rbp+18h]

  v18 = a3;
  v4 = a1;
  v5 = 0LL;
  v6 = 0LL;
  for ( i = 0LL; v4; a3 = v18 )
  {
    if ( (*(_DWORD *)(gptiCurrent + 1072LL) & 0x40000) != 0 )
    {
      v11 = *((_DWORD *)v4 + 6);
      if ( *((_QWORD *)v4 + 12) == gptiCurrent )
      {
        if ( v11 >= 0x100 && v11 <= 0x102 && a3 )
          *((_QWORD *)v4 + 12) = a3;
      }
      else if ( v11 == 513 || v11 == 516 )
      {
        v16 = HMValidateHandleNoSecure(*((_QWORD *)v4 + 2), 1);
        if ( v16 )
        {
          if ( *(_QWORD *)(v16 + 16) == gptiCurrent )
            *((_QWORD *)v4 + 12) = gptiCurrent;
        }
      }
    }
    v8 = v5;
    v5 = *((_QWORD *)v4 + 12);
    if ( *((_DWORD *)v4 + 22) == 4 )
      v5 = 0LL;
    if ( v5 )
    {
      if ( !v6 || v8 != v5 )
      {
        i = *(_QWORD *)(v5 + 384);
        v6 = *(struct tagQMSG **)(i + 8);
        if ( !v6 || *((_DWORD *)v4 + 12) - *((_DWORD *)v6 + 12) < 0 )
          v6 = *(struct tagQMSG **)(v5 + 384);
      }
      if ( *(_QWORD *)v6 )
      {
        do
        {
          v15 = *(_QWORD **)v6;
          if ( *((_DWORD *)v4 + 12) - *(_DWORD *)(*(_QWORD *)v6 + 48LL) < 0 )
            break;
          v6 = *(struct tagQMSG **)v6;
        }
        while ( *v15 );
      }
      v9 = v4;
      v4 = *(struct tagQMSG **)v4;
      *(_QWORD *)v9 = *(_QWORD *)v6;
      if ( *(_QWORD *)v6 )
      {
        *((_QWORD *)v9 + 1) = *(_QWORD *)(*(_QWORD *)v6 + 8LL);
        *(_QWORD *)(*(_QWORD *)v6 + 8LL) = v9;
      }
      else
      {
        *((_QWORD *)v9 + 1) = *(_QWORD *)(i + 8);
        *(_QWORD *)(i + 8) = v9;
      }
      *(_QWORD *)v6 = v9;
      v6 = v9;
      ++*(_DWORD *)(i + 16);
      if ( *((_DWORD *)v9 + 22) && (*(_WORD *)(*(_QWORD *)(v5 + 400) + 6LL) & 0x2000) == 0 )
        SetWakeBit(v5, 0x2040u);
      v10 = (struct tagQMSG *)*((_QWORD *)a2 + 5);
      if ( v9 == v10 )
      {
        v12 = *(_QWORD *)(v5 + 384);
        if ( a2 != (struct tagQ *)v12 )
        {
          if ( !*(_QWORD *)(v12 + 40) )
            *(_QWORD *)(v12 + 40) = v10;
          *((_QWORD *)a2 + 5) = 0LL;
          v13 = *(_QWORD *)(v5 + 384);
          if ( !*(_QWORD *)(v13 + 24) )
          {
            v14 = *((_QWORD *)a2 + 3);
            if ( v14 )
            {
              if ( *(_QWORD *)(v14 + 384) == v13 )
              {
                *(_QWORD *)(v13 + 24) = v14;
                *((_QWORD *)a2 + 3) = 0LL;
              }
            }
          }
        }
      }
      if ( !v4 )
        return;
      *((_QWORD *)v4 + 1) = 0LL;
    }
    else
    {
      if ( *(_QWORD *)v4 )
        *(_QWORD *)(*(_QWORD *)v4 + 8LL) = 0LL;
      v17 = v4;
      v4 = *(struct tagQMSG **)v4;
      CleanEventMessage(v17);
      FreeQEntry((unsigned int *)v17);
      v5 = v8;
    }
  }
}
