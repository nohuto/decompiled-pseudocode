/*
 * XREFs of ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14004544C
 * Callers:
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140044D14 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 * Callees:
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z @ 0x14009A900 (-ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z.c)
 *     CleanupIAMAccess @ 0x140154E80 (CleanupIAMAccess.c)
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x140155058 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxDeferredDesktopRotation@@YA_KXZ @ 0x14015B4C0 (-xxxDeferredDesktopRotation@@YA_KXZ.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140179A14 (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1401C0B30 (-CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z.c)
 *     UpdatePointerRedirIsAlive @ 0x1401C0D6C (UpdatePointerRedirIsAlive.c)
 *     _FindActivationFilterWindow @ 0x1401C0E28 (_FindActivationFilterWindow.c)
 *     _DeregisterShellHookWindow @ 0x1401C0E60 (_DeregisterShellHookWindow.c)
 *     FreeWindowGCData @ 0x1401C0EF0 (FreeWindowGCData.c)
 *     FreeWindowMessageFilter @ 0x1401C0FCC (FreeWindowMessageFilter.c)
 *     IsMotherDesktopWindow @ 0x1401D3894 (IsMotherDesktopWindow.c)
 *     DwmAsyncShellWindowChange @ 0x14020292C (DwmAsyncShellWindowChange.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x140261368 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1402A08EC (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall xxxFreeWindow_Phase1(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  BOOL v4; // ebp
  int IsEnabledDeviceUsageNoInline; // eax
  struct tagWND *v6; // r8
  struct tagWND *v7; // rdx
  __int64 v8; // rcx
  void *v9; // rax
  struct tagWND **v10; // rcx
  __int64 v11; // rax
  struct tagWND **v12; // rcx
  struct tagWND **v13; // rax
  struct tagWND **v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  char *ActivationFilterWindow; // rax
  char *v18; // rbx
  _QWORD *v19; // rcx
  void **v20; // rax

  v4 = 0;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 && !(unsigned int)IsMotherDesktopWindow() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4743LL);
  xxxFW_DestroyIMEWindowIfRequired(a1, a2);
  IsEnabledDeviceUsageNoInline = Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline();
  v7 = (struct tagWND *)*((_QWORD *)a1 + 3);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( v7 )
      v4 = CleanupShellRelatedData(a1);
    goto LABEL_24;
  }
  if ( !v7 )
    goto LABEL_24;
  if ( a1 == *(struct tagWND **)(*((_QWORD *)v7 + 1) + 168LL) )
  {
    CleanupIAMAccess(*((struct tagDESKTOP **)a1 + 3));
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
    *(_QWORD *)(*(_QWORD *)v8 + 24LL) = 0LL;
    HMAssignmentUnlock(v8 + 168);
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v9 = (void *)ReferenceDwmApiPort();
      DwmAsyncShellWindowChange(v9);
    }
    v7 = (struct tagWND *)*((_QWORD *)a1 + 3);
    if ( (*(_DWORD *)(**((_QWORD **)v7 + 1) + 64LL) & 2) != 0 )
      v4 = 1;
  }
  v10 = (struct tagWND **)(*((_QWORD *)v7 + 1) + 184LL);
  if ( *v10 == a1 )
  {
    *(_QWORD *)(**((_QWORD **)v7 + 1) + 32LL) = 0LL;
    HMAssignmentUnlock(v10);
  }
  v11 = *((_QWORD *)a1 + 3);
  v12 = (struct tagWND **)(*(_QWORD *)(v11 + 8) + 192LL);
  if ( *v12 == a1 )
  {
    *(_QWORD *)(**(_QWORD **)(v11 + 8) + 40LL) = 0LL;
    HMAssignmentUnlock(v12);
  }
  v13 = (struct tagWND **)*((_QWORD *)a1 + 3);
  v14 = v13 + 38;
  if ( v13[38] == a1 )
  {
LABEL_38:
    HMAssignmentUnlock(v14);
    goto LABEL_20;
  }
  if ( v13[41] != a1 )
  {
    v14 = v13 + 37;
    if ( a1 != v13[37] )
    {
      ActivationFilterWindow = (char *)FindActivationFilterWindow(a1);
      v18 = ActivationFilterWindow;
      if ( ActivationFilterWindow )
      {
        v19 = *(_QWORD **)ActivationFilterWindow;
        if ( *(char **)(*(_QWORD *)ActivationFilterWindow + 8LL) != ActivationFilterWindow
          || (v20 = (void **)*((_QWORD *)ActivationFilterWindow + 1), *v20 != v18) )
        {
          __fastfail(3u);
        }
        *v20 = v19;
        v19[1] = v20;
        HMAssignmentUnlock(v18 + 16);
        Win32FreePool(v18);
      }
      goto LABEL_20;
    }
    goto LABEL_38;
  }
  ShellWindowManagement::SetWindow(*((ShellWindowManagement **)a1 + 3), 0LL, v6);
LABEL_20:
  UpdatePointerRedirIsAlive(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x40) != 0 )
    DeregisterShellHookWindow(a1);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x20) != 0 )
  {
    v15 = **(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL);
    --*(_DWORD *)(v15 + 48);
    SetOrClrWF(0LL, a1, 32LL, 1LL);
  }
LABEL_24:
  if ( *((_DWORD *)a1 + 65) )
    CleanupInputDelegation(a1);
  InputTransform::ClearTransforms(a1, v7);
  FreeWindowMessageFilter(a1);
  FreeWindowGCData(a1);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 && a2 != *((struct tagTHREADINFO **)a1 + 2) )
    HMChangeOwnerThread(a1, a2);
  if ( v4 )
    xxxDeferredDesktopRotation();
  if ( !(unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline() )
  {
    v16 = *((_DWORD *)a1 + 95);
    if ( (v16 & 0x800) != 0 )
    {
      *((_DWORD *)a1 + 95) = v16 & 0xFFFFF7FF;
      if ( !*((_WORD *)a2 + 632) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4852LL);
      --*((_WORD *)a2 + 632);
    }
  }
}
