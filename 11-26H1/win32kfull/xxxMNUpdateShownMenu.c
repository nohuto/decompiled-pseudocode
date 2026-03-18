/*
 * XREFs of xxxMNUpdateShownMenu @ 0x1402F3090
 * Callers:
 *     xxxSetMenuInfo @ 0x14000CF70 (xxxSetMenuInfo.c)
 *     xxxSetSysMenu @ 0x14000E260 (xxxSetSysMenu.c)
 *     xxxEnableMenuItem @ 0x14000E684 (xxxEnableMenuItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14000E8C4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxInvalidateRect @ 0x14002C804 (xxxInvalidateRect.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxScrollWindowEx @ 0x14003EEB4 (xxxScrollWindowEx.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     _GetClientRect @ 0x1401E6B9C (_GetClientRect.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_QWORD *__fastcall xxxMNUpdateShownMenu(__int64 *a1, __int64 *a2, char a3)
{
  __int64 v3; // rax
  struct tagWND *v6; // rdi
  __int64 v7; // rdx
  int v8; // r14d
  int v9; // r12d
  int v10; // r15d
  __int64 v11; // rcx
  unsigned __int16 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r10
  int v20; // r8d
  __int64 v21; // rcx
  __int64 *v22; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // r8d
  __int64 v27[2]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v28; // [rsp+50h] [rbp-39h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+58h] [rbp-31h] BYREF
  ULONG_PTR v30[3]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v31[2]; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v32; // [rsp+90h] [rbp+7h] BYREF

  v3 = *a1;
  *(_OWORD *)v31 = 0LL;
  v6 = *(struct tagWND **)(*(_QWORD *)v3 + 16LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v27, *(_QWORD *)(*(_QWORD *)*a1 + 40LL));
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v30, (__int64)v6);
  v7 = v28;
  if ( !v28 )
    v7 = *(_QWORD *)v27[0];
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v7);
  GetClientRect((__int64)v6, (__m128i *)v31);
  if ( *(_DWORD *)(*(_QWORD *)v27[0] + 64LL) )
    goto LABEL_30;
  v32 = *(struct tagRECT *)v31;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v31, 12));
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v31, 8));
  v10 = *(_DWORD *)(*(_QWORD *)v27[0] + 124LL) & 3;
  xxxSendMessage(v6, 0x1E2u);
  v11 = v28;
  if ( !v28 )
    v11 = *(_QWORD *)v27[0];
  if ( !MNIspItemValid(v11, (__int64)a2) )
    goto LABEL_25;
  a3 &= ~4u;
  if ( (*(_DWORD *)(*(_QWORD *)v27[0] + 124LL) & 3) != v10 )
    goto LABEL_25;
  LODWORD(v31[1]) = v12;
  if ( !a2 )
    goto LABEL_30;
  if ( v12 != v9 )
  {
LABEL_25:
    v22 = 0LL;
LABEL_26:
    xxxInvalidateRect((__int64)v6, (__int64)v22, 1);
    goto LABEL_27;
  }
  HIDWORD(v31[1]) = *(_DWORD *)(*(_QWORD *)v27[0] + 68LL);
  if ( (*(_DWORD *)(*(_QWORD *)v27[0] + 124LL) & 3) != 0 )
  {
    if ( SHIDWORD(v31[1]) <= v8 )
    {
      v13 = v28;
      if ( !v28 )
        v13 = *(_QWORD *)v27[0];
      v14 = MNGetpItemFromIndex(v13, *(_DWORD *)(v13 + 116));
      v16 = v15 - *(_DWORD *)(*(_QWORD *)v14 + 68LL);
      HIDWORD(v31[0]) = v16;
      goto LABEL_36;
    }
    GetClientRect((__int64)v6, (__m128i *)&v32);
  }
  if ( v28 )
    v17 = v28;
  else
    v17 = *(_QWORD *)v27[0];
  v18 = MNGetpItemFromIndex(v17, *(_DWORD *)(v17 + 116));
  v32.top = v20 - *(_DWORD *)(*(_QWORD *)v18 + 68LL);
  HIDWORD(v31[0]) = v32.top;
  if ( v32.top >= 0 )
  {
    if ( v32.top < *(_DWORD *)(*(_QWORD *)v27[0] + 68LL) )
    {
      xxxScrollWindowEx(v6, 0, HIDWORD(v31[1]) - v8, &v32, (struct tagRECT *)v31, 0LL, 0LL, 6);
      if ( v28 )
        v21 = v28;
      else
        v21 = *(_QWORD *)v27[0];
      if ( !MNIspItemValid(v21, (__int64)a2) )
        goto LABEL_25;
      goto LABEL_31;
    }
LABEL_30:
    v19 = v28;
  }
LABEL_31:
  if ( (a3 & 2) != 0 )
    goto LABEL_29;
  if ( !a2 )
    goto LABEL_25;
  if ( !v19 )
    v19 = *(_QWORD *)v27[0];
  v24 = *(_QWORD *)MNGetpItemFromIndex(v19, *(_DWORD *)(v19 + 116));
  v25 = *a2;
  v16 = v26 - *(_DWORD *)(v24 + 68);
  HIDWORD(v31[0]) = v16;
  HIDWORD(v31[1]) = v16 + *(_DWORD *)(v25 + 76);
LABEL_36:
  if ( v16 >= 0 && SHIDWORD(v31[0]) < *(_DWORD *)(*(_QWORD *)v27[0] + 68LL) )
  {
    v22 = v31;
    goto LABEL_26;
  }
LABEL_27:
  if ( (a3 & 4) != 0 )
    xxxSetWindowPos(v6, 0LL, 0LL, 0LL, 0, 0, 567);
LABEL_29:
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v30);
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v27);
}
