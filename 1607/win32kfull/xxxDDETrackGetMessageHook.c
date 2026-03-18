/*
 * XREFs of xxxDDETrackGetMessageHook @ 0x1C01E2C4C
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00831C0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     SfnSENTDDEMSG @ 0x1C020B400 (SfnSENTDDEMSG.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01E17C0 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01E1F80 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01E243C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     FreeDdeXact @ 0x1C01E2B30 (FreeDdeXact.c)
 *     xxxFreeDdeConv @ 0x1C01E33AC (xxxFreeDdeConv.c)
 *     xxxClientCopyDDEOut1 @ 0x1C020D020 (xxxClientCopyDDEOut1.c)
 *     HMValidateCatHandleNoSecure @ 0x1C0245BD4 (HMValidateCatHandleNoSecure.c)
 *     HMValidateHandleNoRipNoIL @ 0x1C0245C5C (HMValidateHandleNoRipNoIL.c)
 */

__int64 __fastcall xxxDDETrackGetMessageHook(__int64 a1)
{
  __int64 result; // rax
  struct tagWND *v3; // rdi
  struct tagWND *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagDDECONV *DdeConv; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagDDECONV *v11; // rbx
  __int64 v12; // rdx
  struct tagFREELIST *v13; // rcx
  __int64 v14; // rcx
  struct tagDDECONV *v15; // rax
  __int64 v16; // rdi
  int v17; // ebp
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  _QWORD v23[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v24[3]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v25[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v26; // [rsp+80h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 8) == 993 )
  {
    result = ValidateHwnd(*(_QWORD *)a1);
    v3 = (struct tagWND *)result;
    if ( !result )
      return result;
    v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v23;
    v23[1] = result;
    ++*(_DWORD *)(result + 8);
    v4 = (struct tagWND *)HMValidateCatHandleNoSecure(*(_QWORD *)(a1 + 16));
    if ( v4 )
    {
      DdeConv = FindDdeConv(v3, v4);
      v11 = DdeConv;
      if ( !DdeConv )
        return ThreadUnlock1(v10, v9);
      v12 = *((unsigned int *)DdeConv + 20);
      if ( (v12 & 2) != 0 && (*(_DWORD *)(*((_QWORD *)DdeConv + 4) + 80LL) & 2) != 0 )
      {
        v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v24;
        v24[1] = DdeConv;
        ++*((_DWORD *)DdeConv + 2);
        v13 = (struct tagFREELIST *)*((_QWORD *)DdeConv + 9);
        if ( v13 )
        {
          *((_QWORD *)DdeConv + 9) = 0LL;
          xxxFreeListFree(v13, v12, v6, v7);
        }
        v14 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v11;
        LOBYTE(v14) = *(_BYTE *)(v14 + gSharedInfo[1] + 17);
        if ( (v14 & 1) == 0 )
          *((_QWORD *)v11 + 4) = xxxFreeDdeConv(*((struct tagDDECONV **)v11 + 4));
        v15 = (struct tagDDECONV *)ThreadUnlock1(v14, v12);
        if ( v15 )
          xxxFreeDdeConv(v15);
      }
      else
      {
        v5 = (unsigned int)v12 | 8;
        *((_DWORD *)DdeConv + 20) = v5;
      }
    }
    if ( (GetAppCompatFlags2(0x9900u, v5, v6, v7) & 0x2000) != 0 )
      xxxCleanupDdeConv(v3);
    return ThreadUnlock1(v10, v9);
  }
  result = HMValidateHandleNoRipNoIL(*(_QWORD *)(a1 + 24));
  v16 = result;
  if ( result )
  {
    v17 = *(_DWORD *)(result + 64);
    v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v25;
    v25[1] = result;
    v18 = *(_QWORD *)(result + 56);
    ++*(_DWORD *)(result + 8);
    v19 = xxxClientCopyDDEOut1(v18);
    if ( v19 )
      v22 = *(_QWORD *)(v18 + 24);
    else
      v22 = v26;
    *(_QWORD *)(a1 + 24) = v19;
    if ( !v19 )
      *(_DWORD *)(a1 + 8) = 993;
    result = ThreadUnlock1(v21, v20);
    if ( result )
    {
      if ( (v17 & 0x200) != 0 )
      {
        return FreeDdeXact(v16);
      }
      else if ( *(_QWORD *)(v16 + 40) )
      {
        *(_QWORD *)(v16 + 48) = v22;
      }
      else
      {
        *(_QWORD *)(v16 + 40) = v22;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
  return result;
}
