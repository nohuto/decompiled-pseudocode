/*
 * XREFs of FsRtlpCleanupEcps @ 0x140415010
 * Callers:
 *     IopCleanupExtraCreateParameters @ 0x140405BB0 (IopCleanupExtraCreateParameters.c)
 *     NtQueryAttributesFile @ 0x140415160 (NtQueryAttributesFile.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404150D0 (FsRtlFreeExtraCreateParameter.c)
 */

char __fastcall FsRtlpCleanupEcps(struct _SLIST_ENTRY *P, _LOOKASIDE_LIST_EX *a2)
{
  __int64 **v3; // rbx
  __int64 *v4; // rcx
  __int64 v5; // rax
  char *v7; // rbx
  char *v8; // rdi
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  _QWORD *v13; // rdx

  if ( (HIDWORD(P->Next) & 1) != 0 )
  {
    v7 = (char *)*((_QWORD *)&P->Next + 1);
    v8 = (char *)(&P->Next + 1);
    if ( v7 != (char *)(&P->Next + 1) )
    {
      do
      {
        v9 = *((_DWORD *)v7 + 10);
        v10 = (__int64 *)(v7 - 8);
        v7 = *(char **)v7;
        if ( (v9 & 1) == 0 )
        {
          v11 = v10[1];
          v12 = v10 + 1;
          v13 = (_QWORD *)v10[2];
          if ( *(__int64 **)(v11 + 8) != v10 + 1 || (_QWORD *)*v13 != v12 )
            __fastfail(3u);
          *v13 = v11;
          *(_QWORD *)(v11 + 8) = v13;
          v10[2] = 0LL;
          *v12 = 0LL;
          FsRtlFreeExtraCreateParameter(v10 + 9);
        }
      }
      while ( v7 != v8 );
    }
    return 0;
  }
  else
  {
    v3 = (__int64 **)(&P->Next + 1);
    while ( *v3 != (__int64 *)v3 )
    {
      v4 = *v3;
      v5 = **v3;
      if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
        __fastfail(3u);
      *v3 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v3;
      v4[1] = 0LL;
      *v4 = 0LL;
      FsRtlFreeExtraCreateParameter(v4 + 8);
    }
    if ( (HIDWORD(P->Next) & 4) == 0 )
    {
      ExFreePoolWithTag(P, 0);
      return 1;
    }
    ++FsRtlEcpListLookaside.L.TotalFrees;
    if ( LOWORD(FsRtlEcpListLookaside.L.ListHead.Alignment) < FsRtlEcpListLookaside.L.Depth )
    {
      RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside.L.ListHead, P);
      return 1;
    }
    ++FsRtlEcpListLookaside.L.FreeMisses;
    FsRtlEcpListLookaside.L.FreeEx(P, a2);
    return 1;
  }
}
