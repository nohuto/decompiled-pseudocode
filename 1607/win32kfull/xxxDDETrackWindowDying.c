/*
 * XREFs of xxxDDETrackWindowDying @ 0x1C01E3234
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01E1AB8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01E243C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01E33AC (xxxFreeDdeConv.c)
 */

void __fastcall xxxDDETrackWindowDying(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // eax
  _BOOL8 v13; // rdx
  struct tagFREELIST *v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  struct tagDDECONV *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD v25[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v26[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( a2 )
  {
    v4 = a2;
    do
    {
      v5 = *(_QWORD *)(v4 + 24);
      v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v25;
      v25[1] = v5;
      if ( v5 )
        ++*(_DWORD *)(v5 + 8);
      v26[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v26;
      v26[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      if ( (*(_DWORD *)(v4 + 80) & 2) == 0 )
      {
        if ( (GetAppCompatFlags2(0x400u, v5, gptiCurrent, a4) & 0x20) == 0
          || (v6 = *(_QWORD *)(v4 + 48)) == 0
          || ((v7 = *(_QWORD *)(v6 + 16), *(_DWORD *)(v7 + 552) <= 0x400u)
            ? (v8 = *(_DWORD *)(v7 + 568))
            : (LOBYTE(v8) = 0),
              (v8 & 0x20) == 0) )
        {
          v9 = *(__int64 **)(v4 + 40);
          if ( v9 )
            v10 = *v9;
          else
            v10 = 0LL;
          PostMessage(*(_QWORD *)(v4 + 48), 993LL, v10, 0LL);
        }
      }
      v11 = *(_QWORD *)(v4 + 32);
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 80);
        v13 = (v12 & 0xA) != 0;
        *(_DWORD *)(v11 + 80) = v12 | 6;
      }
      else
      {
        v13 = 1LL;
      }
      v14 = *(struct tagFREELIST **)(v4 + 72);
      *(_QWORD *)(v4 + 72) = 0LL;
      v15 = *(_DWORD *)(v4 + 80);
      if ( (v15 & 2) != 0 && v13 || (v15 & 4) != 0 )
      {
        v16 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v4;
        LOBYTE(v16) = *(_BYTE *)(v16 + gSharedInfo[1] + 17);
        if ( (v16 & 1) == 0 )
          *(_QWORD *)(v4 + 32) = xxxFreeDdeConv(*(struct tagDDECONV **)(v4 + 32));
        v17 = (struct tagDDECONV *)ThreadUnlock1(v16, v13);
        if ( v17 )
          xxxFreeDdeConv(v17);
      }
      else
      {
        UnlinkConv((struct tagDDECONV *)v4);
        ThreadUnlock1(v22, v21);
      }
      xxxFreeListFree(v14, v18, v19, v20);
      v4 = ThreadUnlock1(v24, v23);
    }
    while ( v4 );
  }
}
