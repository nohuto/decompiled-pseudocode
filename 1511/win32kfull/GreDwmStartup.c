/*
 * XREFs of GreDwmStartup @ 0x1C00D4D7C
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00D24EC (zzzDwmStartRedirection.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C007D210 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C007D400 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C007E710 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C007E830 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     GreSfmDwmStartup @ 0x1C00D4F6C (GreSfmDwmStartup.c)
 *     ?bDwmDesktopOverlaysEnabled@@YAHXZ @ 0x1C00D4FE4 (-bDwmDesktopOverlaysEnabled@@YAHXZ.c)
 *     ?bDwmOverlayTestMode@@YAHXZ @ 0x1C00D50D0 (-bDwmOverlayTestMode@@YAHXZ.c)
 *     ?bDwmDeviceBitmapsEnabledForMultiAdapter@@YAHXZ @ 0x1C00D51BC (-bDwmDeviceBitmapsEnabledForMultiAdapter@@YAHXZ.c)
 *     ?bDwmDeviceBitmapsEnabled@@YAHXZ @ 0x1C00D52B8 (-bDwmDeviceBitmapsEnabled@@YAHXZ.c)
 *     ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x1C00D53B4 (-GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreDwmStartup(__int64 a1)
{
  int v2; // edi
  int v3; // r15d
  int v4; // esi
  unsigned int v5; // ebp
  struct _RTL_GENERIC_TABLE *v6; // rax
  struct _RTL_GENERIC_TABLE *v7; // rbx
  __int64 RectRgn; // rax
  struct _SURFOBJ *v9; // rcx
  PRTL_GENERIC_COMPARE_ROUTINE CompareRoutine; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+90h] [rbp+8h] BYREF
  __int64 v14; // [rsp+98h] [rbp+10h] BYREF

  v14 = a1;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  ENTER_GRE_DWM_CRIT(a1, &v13);
  v5 = 1;
  v6 = (struct _RTL_GENERIC_TABLE *)PALLOCMEM2(0x158uLL, 1935885383LL, 1);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v6[2].WhichOrderedElement = a1;
    LOBYTE(v3) = (int)GrepDwmCreateComposedEvent((struct DwmState *)v6) >= 0;
    RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
    v7[2].CompareRoutine = (PRTL_GENERIC_COMPARE_ROUTINE)RectRgn;
    LOBYTE(v4) = RectRgn != 0;
    RtlInitializeGenericTable(v7, HwndLookupCompareTableData, HwndLookupAllocTableData, HwndLookupFreeTableData, 0LL);
    GreInitializePushLock(&v7[1]);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    v7[1].InsertOrderList.Blink = &v7[1].InsertOrderList;
    v7[1].InsertOrderList.Flink = &v7[1].InsertOrderList;
    ObjectAttributes.Length = 48;
    v7[1].CompareRoutine = (PRTL_GENERIC_COMPARE_ROUTINE)&v7[1].WhichOrderedElement;
    *(_QWORD *)&v7[1].WhichOrderedElement = (char *)v7 + 104;
    ObjectAttributes.Attributes = 512;
    v7[1].FreeRoutine = (PRTL_GENERIC_FREE_ROUTINE)&v7[1].AllocateRoutine;
    v7[1].AllocateRoutine = (PRTL_GENERIC_ALLOCATE_ROUTINE)&v7[1].AllocateRoutine;
    v7[4].AllocateRoutine = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LOBYTE(v2) = ZwCreateEvent((PHANDLE)&v7[4].AllocateRoutine, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) >= 0;
    if ( v3 && v4 && v2 )
    {
      g_pDwmState = (struct DwmState *)v7;
      v7 = 0LL;
      SpRenderHint((struct PDEVOBJ *)&v14, 0x10000u, 0LL, 0LL);
      v9 = *(struct _SURFOBJ **)(a1 + 2576);
      if ( v9 )
        v9 = (struct _SURFOBJ *)((char *)v9 + 24);
      vAccNotify(v9, 6u, (void *)1);
    }
    gfDwmDeviceBitmapsEnabled = bDwmDeviceBitmapsEnabled();
    gfDwmDeviceBitmapsEnabledForMultiAdapter = bDwmDeviceBitmapsEnabledForMultiAdapter();
    gfDwmOverlayTestMode = bDwmOverlayTestMode();
    gfDwmDesktopOverlaysEnabled = bDwmDesktopOverlaysEnabled();
  }
  else
  {
    EngSetLastError(8u);
  }
  if ( v7 )
  {
    if ( v4 )
      GreDeleteObject(v7[2].CompareRoutine);
    if ( v3 )
    {
      CompareRoutine = v7[4].CompareRoutine;
      if ( CompareRoutine )
      {
        ObCloseHandle(CompareRoutine, 0);
        v7[4].CompareRoutine = 0LL;
      }
    }
    if ( v2 )
      ZwClose(v7[4].AllocateRoutine);
    Win32FreePool(v7);
  }
  if ( v3 && v4 && v2 )
    GreSfmDwmStartup();
  LEAVE_GRE_DWM_CRIT(a1, v13);
  if ( !v3 || !v4 || !v2 )
    return 0;
  return v5;
}
