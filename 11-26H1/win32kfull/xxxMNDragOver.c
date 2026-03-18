/*
 * XREFs of xxxMNDragOver @ 0x1402F97D8
 * Callers:
 *     NtUserMNDragOver @ 0x1402B7DC0 (NtUserMNDragOver.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsMFMWFPWindow @ 0x14008A0E4 (IsMFMWFPWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x140177E40 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxCallHandleMenuMessages @ 0x140269B80 (xxxCallHandleMenuMessages.c)
 *     GetMenuStateWindow @ 0x1402D9274 (GetMenuStateWindow.c)
 */

__int64 __fastcall xxxMNDragOver(unsigned __int16 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  __int64 MenuStateWindow; // rax
  __int64 *v9; // rbp
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  _QWORD v17[2]; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v17, 0LL);
  v5 = 0LL;
  v6 = *((_QWORD *)PtiCurrent(v4) + 80);
  if ( v6
    && (v7 = *(_DWORD *)(v6 + 8), (v7 & 0x400) != 0)
    && (*(_DWORD *)(v6 + 8) = v7 | 0x8000,
        MenuStateWindow = GetMenuStateWindow((_QWORD *)v6),
        (v9 = (__int64 *)MenuStateWindow) != 0LL) )
  {
    ++*(_DWORD *)(v6 + 40);
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, MenuStateWindow);
    xxxCallHandleMenuMessages((_QWORD *)v6, v9, 160, 0LL, *a1 | (a1[2] << 16));
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    LOBYTE(v10) = IsMFMWFPWindow(*(_QWORD *)(v6 + 80));
    if ( v10 )
    {
      v12 = safe_cast_fnid_to_PMENUWND(v11);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v17, v13);
          if ( *(_QWORD *)(*(_QWORD *)v17[0] + 40LL) )
            v14 = **(_QWORD **)(*(_QWORD *)v17[0] + 40LL);
          else
            v14 = 0LL;
          *(_QWORD *)(a2 + 8) = v14;
          *(_DWORD *)(a2 + 16) = *(_DWORD *)(v6 + 88);
          if ( *(_QWORD *)(*(_QWORD *)v17[0] + 8LL) )
            v5 = **(_QWORD **)(*(_QWORD *)v17[0] + 8LL);
          *(_QWORD *)(a2 + 24) = v5;
          v15 = *(_DWORD *)(v6 + 92);
          *(_DWORD *)a2 = v15;
          if ( (v15 & 2) != 0 )
            ++*(_DWORD *)(a2 + 16);
          LODWORD(v5) = 1;
        }
      }
    }
    xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v6, 1);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v17);
    return (unsigned int)v5;
  }
  else
  {
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v17);
    return 0LL;
  }
}
