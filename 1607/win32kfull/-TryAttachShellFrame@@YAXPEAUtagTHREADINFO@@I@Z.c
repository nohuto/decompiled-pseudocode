/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01D82EC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C005814C (-IsMiPMouseMessage@@YAHI@Z.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     zzzAttachThreadInput @ 0x1C00DC6D4 (zzzAttachThreadInput.c)
 *     DisassociateShellFrameAppThreads @ 0x1C00EDEC8 (DisassociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01CAF50 (FindShellFrameThreadFromAssociation.c)
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
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v21[32]; // [rsp+38h] [rbp-20h] BYREF

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
          v7 = *(_DWORD *)(v4 + 1096);
          v8 = v7 & 0xFFE7FFFF | 0x100000;
          v9 = (v7 >> 20) & 1;
          *(_DWORD *)(v4 + 1096) = v8;
          DisassociateShellFrameAppThreads((struct tagTHREADINFO *)v4);
          while ( *(_QWORD *)v1 && IsMiPMouseMessage(*(_DWORD *)(*(_QWORD *)v1 + 24LL)) )
          {
            if ( v10 == *(_QWORD *)(v1 + 40) )
              *(_QWORD *)(v1 + 40) = 0LL;
            if ( v10 == *(_QWORD *)(v1 + 48) )
              *(_QWORD *)(v1 + 48) = 0LL;
            DelQEntry((_QWORD *)v1, v10);
          }
          if ( *(struct tagTHREADINFO **)(v1 + 32) == a1 )
            *(_QWORD *)(v1 + 32) = 0LL;
          v11 = *(_QWORD *)(v1 + 80);
          v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v20;
          v20[1] = v11;
          if ( v11 )
            ++*(_DWORD *)(v11 + 8);
          LockW32Thread(v5, (__int64)v21);
          v12 = (int)zzzAttachThreadInput((__int64)a1, v5, 32769LL);
          v13 = *((_QWORD *)a1 + 48);
          v14 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v13 + 432) = v14;
          v15 = ThreadUnlock1(v13, v14);
          HMAssignmentLock(*((_QWORD *)a1 + 48) + 80LL, v15);
          v19 = *(_QWORD *)(v5 + 1248);
          if ( v19 )
            PostMessage(v19, 840LL, 2LL, v12);
          PopAndFreeW32ThreadLock((__int64)v21, v16, v17, v18);
          *((_DWORD *)a1 + 274) ^= (*((_DWORD *)a1 + 274) ^ (v9 << 20)) & 0x100000;
        }
      }
    }
  }
}
