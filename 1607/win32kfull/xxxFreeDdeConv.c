/*
 * XREFs of xxxFreeDdeConv @ 0x1C01E33AC
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01E1F80 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C01E2C20 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01E2C4C (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01E3234 (xxxDDETrackWindowDying.c)
 * Callees:
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01E1998 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01E1AB8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 */

struct tagDDECONV *__fastcall xxxFreeDdeConv(struct tagDDECONV *a1)
{
  struct tagDDECONV *v1; // rbx
  _QWORD *v2; // r8
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  TOKEN_TYPE v9; // eax
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 20) & 2) != 0
      || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)**((_DWORD **)a1 + 6)
                   + gSharedInfo[1]
                   + 17LL) & 1) != 0 )
    {
      goto LABEL_8;
    }
    v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v14;
    ++*((_DWORD *)a1 + 2);
    v2 = (_QWORD *)*((_QWORD *)a1 + 5);
    v14[1] = a1;
    v3 = v2 ? *v2 : 0LL;
    PostMessage(*((_QWORD *)a1 + 6), 993LL, v3, 0LL);
    v1 = (struct tagDDECONV *)ThreadUnlock1(v5, v4);
    if ( v1 )
    {
LABEL_8:
      v6 = *((_QWORD *)v1 + 4);
      if ( v6 && (*(_DWORD *)(*((_QWORD *)v1 + 2) + 440LL) & 1) != 0 )
        *(_DWORD *)(v6 + 80) |= 2u;
      UnlinkConv(v1);
      v7 = *((_QWORD *)v1 + 11);
      if ( v7 )
      {
        --*(_WORD *)(v7 + 90);
        v8 = *((_QWORD *)v1 + 11);
        if ( !*(_WORD *)(v8 + 90) && !*(_WORD *)(v8 + 88) )
        {
          v9 = SeTokenType(*(PACCESS_TOKEN *)(v8 + 32));
          v10 = *(void **)(*((_QWORD *)v1 + 11) + 32LL);
          if ( v9 == TokenPrimary )
            PsDereferencePrimaryToken(v10);
          else
            PsDereferenceImpersonationToken(v10);
          Win32FreePool(*((_QWORD *)v1 + 11), v11, v12);
        }
        *((_QWORD *)v1 + 11) = 0LL;
      }
      HMAssignmentUnlock((char *)v1 + 32);
      HMAssignmentUnlock((char *)v1 + 48);
      HMAssignmentUnlock((char *)v1 + 40);
      if ( !(unsigned int)HMMarkObjectDestroy(v1) )
        return v1;
      while ( *((_QWORD *)v1 + 7) )
        PopState(v1);
      HMFreeObject(v1);
    }
  }
  return 0LL;
}
