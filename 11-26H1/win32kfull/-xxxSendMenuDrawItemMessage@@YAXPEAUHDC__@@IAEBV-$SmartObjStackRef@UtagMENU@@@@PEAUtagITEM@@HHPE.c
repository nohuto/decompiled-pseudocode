/*
 * XREFs of ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x14000B04C
 * Callers:
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x14000B280 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     MNInitUAHMenuItem @ 0x14000D444 (MNInitUAHMenuItem.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400341BC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

char __fastcall xxxSendMenuDrawItemMessage(
        __int64 a1,
        int a2,
        struct tagMENU ***a3,
        struct tagMENU ***a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // rdi
  struct tagMENU *v12; // rcx
  BOOL v13; // r14d
  int v14; // r15d
  struct tagMENU **v15; // rax
  unsigned __int64 v16; // rcx
  struct tagMENU *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagMENU *v20; // rcx
  struct tagMENU *v21; // rcx
  struct tagMENU *v22; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-A1h] BYREF
  _BYTE v25[16]; // [rsp+50h] [rbp-91h] BYREF
  int v26; // [rsp+60h] [rbp-81h]
  __int64 v27; // [rsp+90h] [rbp-51h]
  __int64 v28; // [rsp+98h] [rbp-49h]
  int v29; // [rsp+A0h] [rbp-41h]
  char v30[56]; // [rsp+A8h] [rbp-39h] BYREF

  v7 = a7;
  memset_0(v25, 0, 0x90uLL);
  v12 = (struct tagMENU *)a3[2];
  v13 = 1;
  if ( !v12 )
    v12 = **a3;
  v14 = MNIsUAHMenu(v12);
  LOBYTE(v15) = MNInitDrawItemStruct(a1, a2, (_DWORD)a3, (_DWORD)a4, a5, a6, (__int64)v25);
  v16 = (unsigned __int64)*a3;
  v17 = **a3;
  if ( *((_QWORD *)v17 + 10) )
  {
    v16 = (unsigned __int64)*a4;
    if ( (*(_DWORD *)*a4 & 0x100) != 0 || *(_QWORD *)(v16 + 96) == -1LL )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *((_QWORD *)**a3 + 10));
      xxxSendMessage(*((_QWORD *)**a3 + 10), 43LL, 0LL, v25);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
      v22 = (struct tagMENU *)a3[2];
      if ( !v22 )
        v22 = **a3;
      LOBYTE(v15) = -(char)MNIspItemValid(v22, a4);
      v16 = (unsigned int)-((_BYTE)v15 != 0);
      v13 = (_BYTE)v15 != 0;
    }
  }
  if ( v14 )
  {
    if ( a7 || (v15 = *a3, v16 = (unsigned __int64)**a3, (v7 = *(_QWORD *)(v16 + 80)) != 0) )
    {
      v19 = *(unsigned int *)(W32GetUserSessionState(v16, v17) + 66796);
      if ( (v19 & 0x20) != 0 || *(int *)(W32GetUserSessionState(v19, v18) + 66796) >= 0 )
        v26 &= ~0x100u;
      v20 = (struct tagMENU *)a3[2];
      if ( v20 || (v20 = **a3) != 0LL )
        v27 = *(_QWORD *)v20;
      else
        v27 = 0LL;
      v28 = a1;
      v29 = *(_DWORD *)(*((_QWORD *)v20 + 5) + 40LL);
      if ( v13 )
      {
        v21 = (struct tagMENU *)a3[2];
        if ( !v21 )
          v21 = **a3;
        MNInitUAHMenuItem(v21, a4, v30);
      }
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v7);
      xxxSendMessage(v7, 146LL, 0LL, v25);
      LOBYTE(v15) = Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
    }
  }
  return (char)v15;
}
