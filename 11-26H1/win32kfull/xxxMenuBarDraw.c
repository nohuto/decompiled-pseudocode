/*
 * XREFs of xxxMenuBarDraw @ 0x14024FBA4
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x140122C04 (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x14025B5E8 (xxxDrawWindowFrame.c)
 * Callees:
 *     xxxMenuDraw @ 0x14000A708 (xxxMenuDraw.c)
 *     xxxMenuBarCompute @ 0x14000AC68 (xxxMenuBarCompute.c)
 *     MNIsFlatMenu @ 0x14000B3F8 (MNIsFlatMenu.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetCaptionHeight @ 0x140032E38 (GetCaptionHeight.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1402FA3AC (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxMenuBarDraw(_QWORD *a1, HDC a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdi
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // r8
  int v16; // r12d
  unsigned int v17; // r15d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  BOOL v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  struct tagMENU *v31; // rdx
  __int64 v32; // rbx
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-29h] BYREF
  __int64 v35; // [rsp+40h] [rbp-21h]
  __int64 v36[2]; // [rsp+48h] [rbp-19h] BYREF
  struct tagMENU *v37; // [rsp+58h] [rbp-9h]
  _DWORD v38[4]; // [rsp+60h] [rbp-1h] BYREF
  __int64 v39; // [rsp+70h] [rbp+Fh]
  int v40; // [rsp+78h] [rbp+17h]
  int v41; // [rsp+7Ch] [rbp+1Bh]
  int v42; // [rsp+80h] [rbp+1Fh]
  int v43; // [rsp+84h] [rbp+23h]
  __int64 v44; // [rsp+88h] [rbp+27h]
  int v45; // [rsp+C8h] [rbp+67h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v36);
  v8 = a1[21];
  v45 = 0;
  v37 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v36, v8);
  if ( v37 || *(_QWORD *)v36[0] )
  {
    if ( (*(_BYTE *)(a1[5] + 16LL) & 0x40) != 0
      && *(_QWORD *)(a1[2] + 464LL) == *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18928)
      || (GetAppCompatFlags2(1024LL) & 0x80u) != 0LL )
    {
      v12 = *(_QWORD *)v36[0];
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 40LL) &= ~0x10u;
    }
    else
    {
      v12 = *(_QWORD *)v36[0];
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 40LL) |= 0x10u;
    }
    v13 = (__int64)v37;
    if ( !v37 )
      v13 = *(_QWORD *)v36[0];
    v14 = PtiCurrent(v12);
    Win32HM_LockIntoThread<0>((__int64)v14, v13, &BugCheckParameter3);
    *(_DWORD *)(*(_QWORD *)(v13 + 40) + 40LL) |= 0x200u;
    v16 = GetCaptionHeight((__int64)a1) + a4;
    v17 = *(_DWORD *)(a1[5] + 96LL) - *(_DWORD *)(a1[5] + 88LL) - 2 * a3;
    v18 = *(_QWORD *)v36[0];
    if ( a1 != *(_QWORD **)(*(_QWORD *)v36[0] + 80LL)
      || !*(_DWORD *)(*(_QWORD *)v36[0] + 64LL)
      || !*(_DWORD *)(*(_QWORD *)v36[0] + 68LL) )
    {
      xxxMenuBarCompute(
        (__int64)v36,
        (__int64)a1,
        v16,
        a3,
        *(_DWORD *)(a1[5] + 96LL) - *(_DWORD *)(a1[5] + 88LL) - 2 * a3);
    }
    v19 = *(_QWORD *)v36[0];
    if ( *(_DWORD *)(*(_QWORD *)v36[0] + 64LL) > v17
      || (v15 = *(_QWORD *)v36[0],
          v19 = (unsigned int)(v16 + *(_DWORD *)(*(_QWORD *)v36[0] + 68LL)),
          v18 = (unsigned int)(*(_DWORD *)(a1[5] + 100LL) - *(_DWORD *)(a1[5] + 92LL) - a4),
          (int)v19 > (int)v18) )
    {
      GreLockVisRgn(v19, v18, v15);
      v45 = 1;
      GreIntersectVisRect(
        a2,
        (unsigned int)(*(_DWORD *)(a1[5] + 88LL) + a3),
        *(unsigned int *)(a1[5] + 92LL),
        a3 + *(_DWORD *)(a1[5] + 88LL) + v17,
        *(_DWORD *)(a1[5] + 100LL) - a4);
      GreUnlockVisRgn(v20);
    }
    v21 = MNIsFlatMenu(v19, v18);
    v38[0] = a3;
    v38[1] = v16;
    v38[2] = *(_DWORD *)(*(_QWORD *)v36[0] + 64LL);
    v38[3] = *(_DWORD *)(*(_QWORD *)v36[0] + 68LL);
    v22 = *(_QWORD *)v36[0];
    v23 = *(_QWORD *)(*(_QWORD *)v36[0] + 40LL);
    if ( *(_QWORD *)(v23 + 24) )
    {
      v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v36[0] + 40LL) + 24LL);
    }
    else if ( v21 )
    {
      v24 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v23, v22) + 19904) + 4936LL);
    }
    else
    {
      v24 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v23, v22) + 19904) + 4728LL);
    }
    v39 = v24;
    v40 = a3;
    v43 = 1;
    v41 = v16 + *(_DWORD *)(*(_QWORD *)v36[0] + 68LL);
    v25 = a1[5];
    v42 = *(_DWORD *)(*(_QWORD *)v36[0] + 64LL);
    if ( (*(_BYTE *)(v25 + 25) & 3) == 0 || (*(_BYTE *)(v25 + 20) & 8) != 0 )
      v26 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v25, v22) + 19904) + 4744LL);
    else
      v26 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v25, v22) + 19904) + 4816LL);
    v44 = v26;
    GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)v38, 2);
    v28 = a1[5];
    if ( (*(_BYTE *)(v28 + 25) & 3) == 0 || (*(_BYTE *)(v28 + 20) & 8) != 0 )
      v29 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v28, v27) + 19904) + 4744LL);
    else
      v29 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v28, v27) + 19904) + 4816LL);
    v30 = GreSelectBrush(a2, v29);
    v31 = v37;
    v32 = v30;
    if ( !v37 )
      v31 = *(struct tagMENU **)v36[0];
    xxxMenuDraw(a2, v31, 0LL);
    GreSelectBrush(a2, v32);
    if ( v45 )
      RecalcDCVisRgn(a2);
    v11 = *(_DWORD *)(*(_QWORD *)v36[0] + 68LL) + 1;
    *(_DWORD *)(*(_QWORD *)(v35 + 40) + 40LL) &= ~0x200u;
    Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(&BugCheckParameter3);
  }
  else
  {
    v11 = 1;
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v36);
  return v11;
}
