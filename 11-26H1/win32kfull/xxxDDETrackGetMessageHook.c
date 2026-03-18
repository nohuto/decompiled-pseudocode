/*
 * XREFs of xxxDDETrackGetMessageHook @ 0x140290AA0
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1401DAF58 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     SfnSENTDDEMSG @ 0x1402D77F0 (SfnSENTDDEMSG.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateCatHandleNoSecure @ 0x14004BD14 (HMValidateCatHandleNoSecure.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x140211B4C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     xxxClientCopyDDEOut1 @ 0x14026AF44 (xxxClientCopyDDEOut1.c)
 *     HMValidateHandleNoRipNoIL @ 0x14028AF0C (HMValidateHandleNoRipNoIL.c)
 *     FreeDdeXact @ 0x1402930F0 (FreeDdeXact.c)
 *     ??1?$Win32HMThreadLockBase@UtagDDECONV@@$0A@$00@@QEAA@XZ @ 0x1402CC428 (--1-$Win32HMThreadLockBase@UtagDDECONV@@$0A@$00@@QEAA@XZ.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1402CD114 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1402CD650 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1402CE020 (xxxFreeDdeConv.c)
 */

void __fastcall xxxDDETrackGetMessageHook(__int64 a1)
{
  __int64 v2; // rax
  struct tagWND *v3; // rsi
  struct tagWND *v4; // rax
  struct tagDDECONV *DdeConv; // rax
  __int64 v6; // rbx
  int v7; // edx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  struct tagFREELIST *v10; // rcx
  struct tagDDECONV *v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // r14d
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdi
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR v22[2]; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v23[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( *(_DWORD *)(a1 + 8) == 993 )
  {
    v2 = ValidateHwnd(*(_QWORD *)a1);
    v3 = (struct tagWND *)v2;
    if ( !v2 )
      return;
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v23, v2);
    v4 = (struct tagWND *)HMValidateCatHandleNoSecure(*(_QWORD *)(a1 + 16));
    if ( v4 )
    {
      DdeConv = FindDdeConv(v3, v4);
      v6 = (__int64)DdeConv;
      if ( !DdeConv )
      {
LABEL_17:
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v23);
        return;
      }
      v7 = *((_DWORD *)DdeConv + 20);
      if ( (v7 & 2) != 0 && (v8 = *(unsigned int *)(*((_QWORD *)DdeConv + 4) + 80LL), (v8 & 2) != 0) )
      {
        v9 = PtiCurrent(v8);
        Win32HM_LockIntoThread<0>((__int64)v9, v6, v22);
        v10 = *(struct tagFREELIST **)(v6 + 72);
        if ( v10 )
        {
          *(_QWORD *)(v6 + 72) = 0LL;
          xxxFreeListFree(v10);
        }
        if ( (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) == 0 )
          *(_QWORD *)(v6 + 32) = xxxFreeDdeConv(*(struct tagDDECONV **)(v6 + 32));
        v11 = (struct tagDDECONV *)Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(v22);
        if ( v11 )
          xxxFreeDdeConv(v11);
        Win32HMThreadLockBase<tagDDECONV,0,1>::~Win32HMThreadLockBase<tagDDECONV,0,1>((ULONG_PTR)v22);
      }
      else
      {
        *((_DWORD *)DdeConv + 20) = v7 | 8;
      }
    }
    if ( (GetAppCompatFlags2(39168LL) & 0x2000) != 0 )
      xxxCleanupDdeConv(v3);
    goto LABEL_17;
  }
  v12 = (__int64 *)(a1 + 24);
  v13 = HMValidateHandleNoRipNoIL(*(_QWORD *)(a1 + 24));
  v15 = v13;
  if ( v13 )
  {
    v16 = *(_DWORD *)(v13 + 64);
    v17 = PtiCurrent(v14);
    Win32HM_LockIntoThread<0>((__int64)v17, v15, BugCheckParameter3);
    v18 = *(_QWORD *)(v15 + 56);
    v19 = xxxClientCopyDDEOut1(v18);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v18 + 24);
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 993;
      v20 = 0LL;
    }
    *v12 = v19;
    if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3) )
    {
      if ( (v16 & 0x200) != 0 )
      {
        FreeDdeXact((struct _HEAD *)v15);
      }
      else if ( *(_QWORD *)(v15 + 40) )
      {
        *(_QWORD *)(v15 + 48) = v20;
      }
      else
      {
        *(_QWORD *)(v15 + 40) = v20;
      }
    }
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  }
  else
  {
    *v12 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
