/*
 * XREFs of ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00DB608
 * Callers:
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
 *     zzzAttachToQueue @ 0x1C00DBFA0 (zzzAttachToQueue.c)
 * Callees:
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     IsProcessedByInputService @ 0x1C00DB84C (IsProcessedByInputService.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00FDF30 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C0135788 (FreeQEntry.c)
 */

void __fastcall RedistributeInput(struct tagQMSG *a1, struct tagQ *a2, struct tagTHREADINFO *a3)
{
  __int64 v3; // r9
  struct tagQ *v4; // rbp
  struct tagQMSG *v5; // rbx
  __int64 v6; // r14
  struct tagQMSG *v7; // rsi
  __int64 i; // r15
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  struct tagQMSG *v15; // rcx
  __int64 v16; // r8
  struct tagQMSG *v17; // rdi
  _QWORD *v18; // rcx
  struct tagQMSG *v19; // rdi
  struct tagQMSG *v20; // rcx
  __int64 v21; // rax
  struct tagTHREADINFO *v22; // [rsp+60h] [rbp+18h]

  v22 = a3;
  v3 = 0LL;
  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v7 = 0LL;
  for ( i = 0LL; v5; a3 = v22 )
  {
    if ( (*((_DWORD *)v5 + 25) & 0x8000) != 0 )
    {
      v9 = *((_QWORD *)v5 + 13);
      if ( v9 )
        *(_DWORD *)(v9 + 1096) &= ~0x1000000u;
    }
    if ( (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0 )
    {
      v10 = *((_DWORD *)v5 + 6);
      if ( *((_QWORD *)v5 + 13) == gptiCurrent )
      {
        if ( (unsigned int)(v10 - 256) <= 2 && a3 )
          *((_QWORD *)v5 + 13) = a3;
      }
      else if ( v10 == 513 || v10 == 516 )
      {
        LOBYTE(a2) = 1;
        v11 = HMValidateHandleNoSecure(*((_QWORD *)v5 + 2), (__int64)a2, (__int64)a3, v3);
        v3 = 0LL;
        if ( v11 )
        {
          if ( *(_QWORD *)(v11 + 16) == gptiCurrent )
            *((_QWORD *)v5 + 13) = gptiCurrent;
        }
      }
    }
    v12 = v6;
    v6 = *((_QWORD *)v5 + 13);
    if ( v5 == *((struct tagQMSG **)v4 + 6) )
    {
      v13 = *(_QWORD *)(v6 + 384);
      if ( v4 != (struct tagQ *)v13 && *(_QWORD *)(v13 + 32) == v3 )
      {
        v14 = *((_QWORD *)v4 + 4);
        if ( v14 )
        {
          if ( *(_QWORD *)(v14 + 384) == v13 )
          {
            *(_QWORD *)(v13 + 32) = v14;
            *((_QWORD *)v4 + 4) = v3;
          }
        }
      }
    }
    if ( *((_DWORD *)v5 + 24) == 4 )
      v6 = v3;
    if ( (unsigned int)IsProcessedByInputService(v5) )
      v6 = v3;
    if ( v6 )
    {
      if ( !v7 || v12 != v6 )
      {
        i = *(_QWORD *)(v6 + 384);
        v7 = *(struct tagQMSG **)(i + 8);
        if ( !v7 || *((_DWORD *)v5 + 12) - *((_DWORD *)v7 + 12) < 0 )
          v7 = *(struct tagQMSG **)(v6 + 384);
      }
      if ( *(_QWORD *)v7 != v3 )
      {
        a2 = (struct tagQ *)*((unsigned int *)v5 + 12);
        do
        {
          v18 = *(_QWORD **)v7;
          if ( (int)a2 - *(_DWORD *)(*(_QWORD *)v7 + 48LL) < 0 )
            break;
          v7 = *(struct tagQMSG **)v7;
        }
        while ( *v18 != v3 );
      }
      *((_DWORD *)v5 + 25) &= 0xFFFC7FFF;
      v19 = v5;
      v5 = *(struct tagQMSG **)v5;
      *(_QWORD *)v19 = *(_QWORD *)v7;
      if ( *(_QWORD *)v7 )
      {
        *((_QWORD *)v19 + 1) = *(_QWORD *)(*(_QWORD *)v7 + 8LL);
        *(_QWORD *)(*(_QWORD *)v7 + 8LL) = v19;
      }
      else
      {
        *((_QWORD *)v19 + 1) = *(_QWORD *)(i + 8);
        *(_QWORD *)(i + 8) = v19;
      }
      *(_QWORD *)v7 = v19;
      v7 = v19;
      ++*(_DWORD *)(i + 16);
      if ( *((_DWORD *)v19 + 24) != (_DWORD)v3 && (*(_WORD *)(*(_QWORD *)(v6 + 400) + 6LL) & 0x2000) == 0 )
      {
        SetWakeBit(v6, 8256LL, v16);
        v3 = 0LL;
      }
      v20 = (struct tagQMSG *)*((_QWORD *)v4 + 6);
      if ( v19 == v20 )
      {
        v21 = *(_QWORD *)(v6 + 384);
        if ( v4 != (struct tagQ *)v21 )
        {
          if ( *(_QWORD *)(v21 + 48) == v3 )
            *(_QWORD *)(v21 + 48) = v20;
          *((_QWORD *)v4 + 6) = v3;
        }
      }
      if ( !v5 )
        break;
      *((_QWORD *)v5 + 1) = v3;
    }
    else
    {
      if ( *(_QWORD *)v5 )
        *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v3;
      v17 = v5;
      v5 = *(struct tagQMSG **)v5;
      if ( v17 == *((struct tagQMSG **)v4 + 6) )
        *((_QWORD *)v4 + 6) = v3;
      CleanEventMessage(v15);
      FreeQEntry(v17);
      v3 = 0LL;
      v6 = v12;
    }
  }
  RedistributeDeferredMsgsOnQueue(v4);
}
