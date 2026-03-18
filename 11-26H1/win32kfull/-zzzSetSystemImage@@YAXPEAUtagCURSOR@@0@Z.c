/*
 * XREFs of ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x14015242C
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x14000912C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x140009C5C (xxxUpdateSystemIconsFromRegistry.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140029000 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x14015285C (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 */

void __fastcall zzzSetSystemImage(struct tagCURSOR *a1, struct tagCURSOR *a2)
{
  char v4; // r12
  int v5; // ecx
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int128 v8; // xmm4
  __int128 v9; // xmm5
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 i; // rax
  struct tagCURSOR *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct tagCURSOR *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  struct tagTHREADINFO *v29; // rax
  __int64 v30; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v32; // rax
  int v33; // r14d
  __int64 v34; // r15
  __int64 v35; // rbx
  struct tagTHREADINFO *v36; // rax
  int v37; // r15d
  __int64 v38; // r14
  __int64 v39; // rbx
  __int64 UserSessionState; // rax

  if ( *((_QWORD *)a1 + 3) )
  {
    v4 = 1;
    v19 = a1;
    do
    {
      if ( (*((_DWORD *)v19 + 20) & 8) != 0 )
      {
        v37 = 0;
        if ( *((int *)v19 + 22) > 0 )
        {
          v38 = 0LL;
          do
          {
            v39 = *(_QWORD *)(v38 + *((_QWORD *)v19 + 12));
            UserSessionState = W32GetUserSessionState(a1, a2);
            HMChangeOwnerProcess(v39, *(_QWORD *)(UserSessionState + 18696));
            ++v37;
            *(_QWORD *)(v39 + 24) = 0LL;
            v38 += 8LL;
          }
          while ( v37 < *((_DWORD *)v19 + 22) );
        }
      }
      if ( v19 == a1 )
      {
        if ( (*((_DWORD *)a1 + 20) & 8) == 0 )
        {
          if ( *((_QWORD *)v19 + 11) )
          {
            GreDecQuotaCount(*((_QWORD *)v19 + 3));
            v22 = W32GetUserSessionState(v21, v20);
            GreIncQuotaCount(*(_QWORD *)(*(_QWORD *)(v22 + 18696) + 456LL));
          }
          if ( *((_QWORD *)v19 + 12) )
          {
            GreDecQuotaCount(*((_QWORD *)v19 + 3));
            v25 = W32GetUserSessionState(v24, v23);
            GreIncQuotaCount(*(_QWORD *)(*(_QWORD *)(v25 + 18696) + 456LL));
          }
          if ( *((_QWORD *)v19 + 16) )
          {
            GreDecQuotaCount(*((_QWORD *)v19 + 3));
            v28 = W32GetUserSessionState(v27, v26);
            GreIncQuotaCount(*(_QWORD *)(*(_QWORD *)(v28 + 18696) + 456LL));
          }
        }
      }
      else
      {
        v32 = W32GetUserSessionState(a1, a2);
        HMChangeOwnerProcess(v19, *(_QWORD *)(v32 + 18696));
        *((_QWORD *)v19 + 3) = 0LL;
      }
      v19 = (struct tagCURSOR *)*((_QWORD *)v19 + 5);
    }
    while ( v19 );
  }
  else
  {
    v4 = 0;
  }
  v5 = *((_DWORD *)a1 + 37);
  v6 = *(_OWORD *)((char *)a1 + 84);
  v7 = *(_OWORD *)((char *)a1 + 100);
  v8 = *(_OWORD *)((char *)a1 + 116);
  v9 = *(_OWORD *)((char *)a1 + 132);
  *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)((char *)a2 + 84);
  *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)((char *)a2 + 100);
  *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)((char *)a2 + 116);
  *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)((char *)a2 + 132);
  *((_DWORD *)a1 + 37) = *((_DWORD *)a2 + 37);
  *(_OWORD *)((char *)a2 + 84) = v6;
  *(_OWORD *)((char *)a2 + 100) = v7;
  *(_OWORD *)((char *)a2 + 116) = v8;
  *(_OWORD *)((char *)a2 + 132) = v9;
  *((_DWORD *)a2 + 37) = v5;
  v10 = *((unsigned int *)a1 + 20);
  *((_DWORD *)a1 + 20) = v10 ^ (*((_DWORD *)a2 + 20) ^ *((_DWORD *)a1 + 20)) & 8;
  *((_DWORD *)a2 + 20) ^= ((unsigned __int8)v10 ^ (unsigned __int8)*((_DWORD *)a2 + 20)) & 8;
  v11 = *((_DWORD *)a2 + 19);
  *((_DWORD *)a2 + 19) = *((_DWORD *)a1 + 19);
  *((_DWORD *)a1 + 19) = v11;
  v12 = *((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 5) = *((_QWORD *)a2 + 5);
  v13 = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 5) = v12;
  while ( v13 )
  {
    *(_QWORD *)(v13 + 48) = a2;
    v13 = *(_QWORD *)(v13 + 40);
  }
  for ( i = *((_QWORD *)a1 + 6); i; i = *(_QWORD *)(i + 40) )
    *(_QWORD *)(i + 48) = a1;
  if ( v4 )
  {
    v15 = a1;
    do
    {
      if ( v15 == a1 )
      {
        if ( (*((_DWORD *)a1 + 20) & 8) == 0 )
        {
          if ( *((_QWORD *)v15 + 11) )
          {
            v16 = W32GetUserSessionState(v12, v10);
            GreDecQuotaCount(*(_QWORD *)(*(_QWORD *)(v16 + 18696) + 456LL));
            GreIncQuotaCount(*((_QWORD *)v15 + 3));
          }
          if ( *((_QWORD *)v15 + 12) )
          {
            v17 = W32GetUserSessionState(v12, v10);
            GreDecQuotaCount(*(_QWORD *)(*(_QWORD *)(v17 + 18696) + 456LL));
            GreIncQuotaCount(*((_QWORD *)v15 + 3));
          }
          if ( *((_QWORD *)v15 + 16) )
          {
            v18 = W32GetUserSessionState(v12, v10);
            GreDecQuotaCount(*(_QWORD *)(*(_QWORD *)(v18 + 18696) + 456LL));
            GreIncQuotaCount(*((_QWORD *)v15 + 3));
          }
        }
      }
      else
      {
        v29 = PtiCurrent(v12);
        HMChangeOwnerProcess(v15, v29);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30);
        if ( CurrentProcessWin32Process )
        {
          v12 = -*(_QWORD *)CurrentProcessWin32Process;
          v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          CurrentProcessWin32Process &= v10;
        }
        *((_QWORD *)v15 + 3) = CurrentProcessWin32Process;
      }
      if ( (*((_DWORD *)v15 + 20) & 8) != 0 )
      {
        v33 = 0;
        if ( *((int *)v15 + 22) > 0 )
        {
          v34 = 0LL;
          do
          {
            v35 = *(_QWORD *)(v34 + *((_QWORD *)v15 + 12));
            v36 = PtiCurrent(v12);
            HMChangeOwnerProcess(v35, v36);
            v34 += 8LL;
            ++v33;
            *(_QWORD *)(v35 + 24) = *((_QWORD *)v15 + 3);
          }
          while ( v33 < *((_DWORD *)v15 + 22) );
        }
      }
      v15 = (struct tagCURSOR *)*((_QWORD *)v15 + 5);
    }
    while ( v15 );
    zzzFixupGlobalCursorWhenChanged(a1);
    _DestroyCursor(a1, 2LL);
  }
  zzzFixupGlobalCursorWhenChanged(a2);
}
