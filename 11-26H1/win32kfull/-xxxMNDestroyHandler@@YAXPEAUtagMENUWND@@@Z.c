/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402D8F04
 * Callers:
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     MNFreePopup @ 0x14017579C (MNFreePopup.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1)
{
  __int64 v2; // rcx
  struct tagWND *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD v6[2]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v6, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v6, *((_QWORD *)a1 + 1));
  if ( *(_QWORD *)v6[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)v6[0] + 24LL) )
    {
      v2 = *(_QWORD *)v6[0];
      if ( *(_QWORD *)(*(_QWORD *)v6[0] + 16LL) )
        v3 = *(struct tagWND **)(v2 + 16);
      else
        v3 = *(struct tagWND **)(v2 + 24);
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v3);
      xxxSendMessage(v3, 0x1E4u);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
    if ( *(_QWORD *)(*(_QWORD *)v6[0] + 40LL)
      && *(int *)(*(_QWORD *)v6[0] + 80LL) >= 0
      && *(_DWORD *)(*(_QWORD *)v6[0] + 80LL) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6[0] + 40LL) + 40LL)
                                                          + 44LL) )
    {
      *(_DWORD *)(*(_QWORD *)(96LL * *(int *)(*(_QWORD *)v6[0] + 80LL)
                            + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6[0] + 40LL) + 88LL))
                + 4LL) &= ~0x80u;
    }
    if ( (**(_DWORD **)v6[0] & 0x2000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v6[0] + 16LL), 65534LL, 0, 1, 0LL);
    if ( (**(_DWORD **)v6[0] & 0x4000) != 0 )
      FindTimer(*(_QWORD *)(*(_QWORD *)v6[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
    if ( (**(_DWORD **)v6[0] & 0x200000) != 0 && *(_QWORD *)(*(_QWORD *)v6[0] + 8LL) )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
        BugCheckParameter3,
        *(_QWORD *)(*(_QWORD *)v6[0] + 8LL));
      xxxSendMessage(*(struct tagWND **)(*(_QWORD *)v6[0] + 8LL), 0x125u);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
    **(_DWORD **)v6[0] |= 0x8000u;
    if ( *(_QWORD *)(*(_QWORD *)v6[0] + 16LL) )
    {
      v4 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v6[0] + 16LL));
      v5 = v4;
      if ( v4 )
      {
        *(_QWORD *)(v4 + 8) = 0LL;
        if ( *(_QWORD *)(v4 + 16) && *(_QWORD *)(v4 + 16) != *(_QWORD *)v6[0] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1209);
        *(_QWORD *)(v5 + 16) = *(_QWORD *)v6[0];
      }
    }
    if ( (**(_DWORD **)v6[0] & 0x10000) != 0 )
    {
      **(_DWORD **)(*(_QWORD *)v6[0] + 64LL) |= 0x20000u;
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(BugCheckParameter3, *(_QWORD *)v6[0]);
      MNFreePopup((__int64 **)BugCheckParameter3);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v6);
}
