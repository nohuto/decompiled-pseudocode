/*
 * XREFs of xxxMNUpdateDraggingInfo @ 0x1402F9B58
 * Callers:
 *     xxxMNMouseMove @ 0x14000F5A4 (xxxMNMouseMove.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     IsMFMWFPWindow @ 0x14008A0E4 (IsMFMWFPWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     LockMFMWFPWindow @ 0x1402D92A8 (LockMFMWFPWindow.c)
 *     MNGetpItem @ 0x1402D9360 (MNGetpItem.c)
 *     xxxMNSetGapState @ 0x1402F9954 (xxxMNSetGapState.c)
 */

__int64 __fastcall xxxMNUpdateDraggingInfo(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // r14
  __int64 v7; // r15
  unsigned int v8; // r12d
  int v9; // ebp
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rax
  int v18; // ebx
  int v19; // r8d
  int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // ebx
  int v25; // edi
  unsigned int v26; // eax
  bool v27; // zf
  _QWORD v29[2]; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF

  v3 = (__int64 *)(a1 + 80);
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, *(_QWORD *)(a1 + 80));
  v7 = *v3;
  v8 = *(_DWORD *)(a1 + 88);
  v9 = *(_DWORD *)(a1 + 92) & 3;
  LockMFMWFPWindow(v3, a2);
  v10 = *v3;
  *(_DWORD *)(a1 + 88) = a3;
  LOBYTE(v11) = IsMFMWFPWindow(v10);
  if ( !v11 || (v13 = safe_cast_fnid_to_PMENUWND(v12)) == 0 || (v14 = *(_QWORD *)(v13 + 8)) == 0 )
  {
    *v3 = 0LL;
    *(_DWORD *)(a1 + 88) = -1;
    return Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v29, v14);
  v15 = MNGetpItem((__int64)v29, *(_DWORD *)(a1 + 88));
  *(_DWORD *)(a1 + 92) = 0;
  v16 = v15;
  if ( v15 )
  {
    v17 = (_QWORD *)MNGetpItemFromIndex(
                      *(_QWORD *)(*(_QWORD *)v29[0] + 40LL),
                      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v29[0] + 40LL) + 116LL));
    v18 = *(_DWORD *)(*(_QWORD *)v16 + 68LL);
    v20 = v19 + *(_DWORD *)(*v17 + 68LL);
    v23 = (unsigned int)(v18 + *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(*v17, v21) + 19904) + 2172LL));
    if ( v20 > (int)v23 )
    {
      v24 = *(_DWORD *)(*(_QWORD *)v16 + 68LL);
      v25 = *(_DWORD *)(*(_QWORD *)v16 + 76LL);
      if ( v20 >= v24 + v25 - *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v23, v22) + 19904) + 2172LL) )
        *(_DWORD *)(a1 + 92) = 2;
    }
    else
    {
      *(_DWORD *)(a1 + 92) = 1;
    }
  }
  if ( v7 != *v3 )
    goto LABEL_20;
  v26 = *(_DWORD *)(a1 + 88) - v8;
  if ( v26 == -1 )
  {
    if ( *(_DWORD *)(a1 + 92) != 2 )
    {
LABEL_20:
      *(_DWORD *)(a1 + 92) |= 4u;
      xxxMNSetGapState(v7, v8, v9, 0);
      xxxMNSetGapState(*v3, *(_DWORD *)(a1 + 88), *(_DWORD *)(a1 + 92), 1);
      goto LABEL_21;
    }
    v27 = v9 == 1;
  }
  else
  {
    if ( v26 )
    {
      if ( v26 == 1 && *(_DWORD *)(a1 + 92) == 1 && v9 == 2 )
        goto LABEL_21;
      goto LABEL_20;
    }
    v27 = v9 == *(_DWORD *)(a1 + 92);
  }
  if ( !v27 )
    goto LABEL_20;
LABEL_21:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v29);
  return Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
}
