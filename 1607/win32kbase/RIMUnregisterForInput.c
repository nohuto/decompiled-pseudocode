/*
 * XREFs of RIMUnregisterForInput @ 0x1C007DAD0
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C000A8A0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C00127C0 (RIMUnregisterCurrentProcessForInput.c)
 * Callees:
 *     rimResetPnpRemovePendingStateBits @ 0x1C000A4CC (rimResetPnpRemovePendingStateBits.c)
 *     RIMCloseDev @ 0x1C000C778 (RIMCloseDev.c)
 *     RIMFreeSpecificDev @ 0x1C000CEB0 (RIMFreeSpecificDev.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C007DD70 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimFreeAllUserMem @ 0x1C007DE2C (rimFreeAllUserMem.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C007DE6C (rimFreeAutoRepeatCompleteFrame.c)
 */

__int64 __fastcall RIMUnregisterForInput(void *a1)
{
  int v2; // r12d
  char *v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // r14d
  _QWORD *v6; // rsi
  _DWORD *v7; // r15
  __int64 **v8; // rsi
  void *v9; // rcx
  __int64 v11; // r15
  unsigned int *v12; // r14
  int v13; // eax
  void *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rax
  _OWORD *v17; // rcx
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    4,
    95,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v2 >= 0 )
  {
    v3 = (char *)Object;
    RIMLockExclusive((__int64)Object + 96);
    RIMLockExclusive((__int64)(v3 + 696));
    v3[72] = 1;
    v4 = *((_QWORD *)v3 + 69);
    *((_QWORD *)v3 + 69) = 0LL;
    while ( v4 )
    {
      v11 = v4;
      rimFreeAutoRepeatCompleteFrame(v4);
      v12 = (unsigned int *)(v4 + 184);
      v13 = *(_DWORD *)(v4 + 184);
      if ( (v13 & 0x10) != 0 )
      {
        *v12 = v13 & 0xFFFFFFEF;
        KeSetEvent(*(PRKEVENT *)(v4 + 368), 1, 0);
      }
      if ( (*v12 & 0x20) == 0 )
      {
        v14 = *(void **)(v4 + 248);
        if ( v14 )
        {
          IoUnregisterPlugPlayNotification(v14);
          *(_QWORD *)(v4 + 248) = 0LL;
          ObfDereferenceObject(*(PVOID *)(v4 + 32));
        }
      }
      RIMCloseDev(v4);
      v15 = (_QWORD *)(v4 + 40);
      v4 = *(_QWORD *)(v4 + 40);
      *v15 = 0LL;
      if ( (*v12 & 0x800) == 0 )
      {
        rimResetPnpRemovePendingStateBits(v11);
        RIMFreeSpecificDev((__int64)v3, v11);
      }
    }
    v5 = 0;
    v6 = v3 + 448;
    v7 = v3 + 432;
    do
    {
      v2 = RIMUnRegisterForInputDeviceTypeClassNotifications(v3, v5);
      if ( !*v7 && *v6 )
      {
        Win32FreePool();
        *v6 = 0LL;
      }
      ++v5;
      ++v7;
      ++v6;
    }
    while ( v5 <= 2 );
    v8 = (__int64 **)(v3 + 680);
    while ( *v8 != (__int64 *)v8 )
    {
      v16 = **v8;
      if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v16 + 8) != *v8 )
        __fastfail(3u);
      *v8 = (__int64 *)v16;
      *(_QWORD *)(v16 + 8) = v8;
      Win32FreePool();
    }
    rimFreeAllUserMem(v3);
    if ( v3[712] && *((_QWORD *)v3 + 96) )
    {
      if ( v3[776] )
      {
        v17 = (_OWORD *)*((_QWORD *)v3 + 100);
        if ( (unsigned __int64)v17 >= W32UserProbeAddress )
          v17 = (_OWORD *)W32UserProbeAddress;
        *v17 = 0xC0000128uLL;
      }
      else
      {
        *(_OWORD *)*((_QWORD *)v3 + 100) = 0xC0000128uLL;
      }
      ZwSetEvent(*((HANDLE *)v3 + 96), 0LL);
      ZwClose(*((HANDLE *)v3 + 96));
    }
    if ( *((_QWORD *)v3 + 68) )
    {
      Win32FreePool();
      *((_QWORD *)v3 + 68) = 0LL;
    }
    if ( *((_QWORD *)v3 + 11) )
    {
      Win32FreePool();
      *((_QWORD *)v3 + 11) = 0LL;
      *((_DWORD *)v3 + 20) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v3 + 59), 0LL);
    ZwClose(*((HANDLE *)v3 + 59));
    *((_QWORD *)v3 + 59) = -1LL;
    v9 = (void *)*((_QWORD *)v3 + 60);
    if ( v9 != (void *)-1LL )
    {
      ZwCancelTimer(v9, 0LL);
      ZwClose(*((HANDLE *)v3 + 60));
      *((_QWORD *)v3 + 60) = -1LL;
    }
    ZwClose(*((HANDLE *)v3 + 65));
    *((_QWORD *)v3 + 65) = -1LL;
    v3[73] = 1;
    RIMUnlockExclusive((__int64)(v3 + 696));
    RIMUnlockExclusive((__int64)(v3 + 96));
    ObfDereferenceObject(v3);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x60u,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v2);
  return (unsigned int)v2;
}
