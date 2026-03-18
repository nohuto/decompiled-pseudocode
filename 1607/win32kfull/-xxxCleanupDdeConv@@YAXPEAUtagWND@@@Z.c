/*
 * XREFs of ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01E1F80
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01E2C4C (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01E243C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01E33AC (xxxFreeDdeConv.c)
 */

void __fastcall xxxCleanupDdeConv(struct tagWND *a1)
{
  __int64 i; // rbx
  int v3; // r8d
  __int64 v4; // rdx
  int v5; // edi
  struct tagFREELIST *v6; // rcx
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

LABEL_1:
  for ( i = GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL); i; i = *(_QWORD *)(i + 24) )
  {
    if ( (*(_BYTE *)(i + 80) & 7) == 7 )
    {
      v4 = *(unsigned int *)(*(_QWORD *)(i + 32) + 80LL);
      if ( (v4 & 2) != 0 )
      {
        if ( *(_QWORD *)(i + 72) )
        {
          v5 = v3;
          v8[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v8;
          v6 = *(struct tagFREELIST **)(i + 72);
          *(_QWORD *)(i + 72) = 0LL;
          ++*(_DWORD *)(i + 8);
          v8[1] = i;
          xxxFreeListFree(v6);
        }
        else
        {
          v5 = 0;
        }
        v7 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)i;
        LOBYTE(v7) = *(_BYTE *)(v7 + gSharedInfo[1] + 17);
        if ( (v7 & 1) == 0 )
        {
          *(_QWORD *)(i + 32) = xxxFreeDdeConv(*(struct tagDDECONV **)(i + 32));
          xxxFreeDdeConv((struct tagDDECONV *)i);
        }
        if ( v5 )
          ThreadUnlock1(v7, v4);
        goto LABEL_1;
      }
    }
  }
}
