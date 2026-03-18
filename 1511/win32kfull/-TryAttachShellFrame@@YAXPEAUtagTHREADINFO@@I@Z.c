/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E218C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     DelQEntry @ 0x1C0064CC4 (DelQEntry.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C0065214 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     zzzAttachThreadInput @ 0x1C008AE54 (zzzAttachThreadInput.c)
 *     LockW32Thread @ 0x1C008E0B4 (LockW32Thread.c)
 *     DisassociateShellFrameAppThreads @ 0x1C00D9238 (DisassociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01D31AC (FindShellFrameThreadFromAssociation.c)
 */

void __fastcall TryAttachShellFrame(struct tagTHREADINFO *a1)
{
  __int64 v1; // rbx
  __int64 ShellFrameThreadFromAssociation; // rax
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // edi
  __int64 *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  v1 = *((_QWORD *)a1 + 48);
  if ( *(_DWORD *)(v1 + 16) < 0x14u )
  {
    ShellFrameThreadFromAssociation = FindShellFrameThreadFromAssociation(a1);
    v5 = ShellFrameThreadFromAssociation;
    if ( ShellFrameThreadFromAssociation )
    {
      if ( (*(_DWORD *)(ShellFrameThreadFromAssociation + 440) & 1) == 0 )
      {
        v6 = *(_QWORD *)(ShellFrameThreadFromAssociation + 592);
        if ( !v6 || (*(_DWORD *)(v6 + 180) & 0x100000) == 0 )
        {
          v7 = *(_DWORD *)(v4 + 1072);
          v8 = v7 & 0xFFE7FFFF | 0x100000;
          v9 = (v7 >> 20) & 1;
          *(_DWORD *)(v4 + 1072) = v8;
          DisassociateShellFrameAppThreads((struct tagTHREADINFO *)v4);
          while ( *(_QWORD *)v1 && IsMiPMouseMessage(*(_DWORD *)(*(_QWORD *)v1 + 24LL)) )
          {
            if ( v10 == *(__int64 **)(v1 + 32) )
              *(_QWORD *)(v1 + 32) = 0LL;
            if ( v10 == *(__int64 **)(v1 + 40) )
              *(_QWORD *)(v1 + 40) = 0LL;
            DelQEntry(v1, v10, 1);
          }
          if ( *(struct tagTHREADINFO **)(v1 + 24) == a1 )
            *(_QWORD *)(v1 + 24) = 0LL;
          v11 = *(_QWORD *)(v1 + 72);
          v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v17;
          v17[1] = v11;
          if ( v11 )
            ++*(_DWORD *)(v11 + 8);
          LockW32Thread(v5, v18);
          v12 = (int)zzzAttachThreadInput((__int64)a1, v5, 32769);
          v13 = *((_QWORD *)a1 + 48);
          v14 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v13 + 424) = v14;
          v15 = ThreadUnlock1(v13, v14);
          HMAssignmentLock(*((_QWORD *)a1 + 48) + 72LL, v15);
          v16 = *(_QWORD *)(v5 + 1224);
          if ( v16 )
            PostMessage(v16, 840LL, 2uLL, v12);
          PopAndFreeW32ThreadLock((__int64)v18);
          *((_DWORD *)a1 + 268) ^= (*((_DWORD *)a1 + 268) ^ (v9 << 20)) & 0x100000;
        }
      }
    }
  }
}
