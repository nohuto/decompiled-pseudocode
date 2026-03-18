/*
 * XREFs of RIMUnregisterForInput @ 0x1C00719C0
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0072410 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C0071978 (rimFreeAutoRepeatCompleteFrame.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0071CD8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimFreeAllUserMem @ 0x1C0071D2C (rimFreeAllUserMem.c)
 *     RIMCALMPurgeContacts @ 0x1C0072214 (RIMCALMPurgeContacts.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C0075A10 (rimResetPnpRemovePendingStateBits.c)
 *     RIMFreeSpecificDev @ 0x1C00760D0 (RIMFreeSpecificDev.c)
 *     RIMCloseDev @ 0x1C007707C (RIMCloseDev.c)
 */

__int64 __fastcall RIMUnregisterForInput(void *a1)
{
  int v2; // r15d
  char *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r15
  unsigned int *v6; // r14
  int v7; // eax
  void *v8; // rcx
  unsigned int i; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 **v12; // rsi
  __int64 v13; // rcx
  _OWORD *v14; // rcx
  void *v15; // rcx
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x5Bu,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v2 >= 0 )
  {
    v3 = (char *)Object;
    RIMLockExclusive((__int64)Object + 96);
    RIMLockExclusive((__int64)(v3 + 712));
    v3[72] = 1;
    v4 = *((_QWORD *)v3 + 64);
    *((_QWORD *)v3 + 64) = 0LL;
    while ( v4 )
    {
      v5 = v4;
      v6 = (unsigned int *)(v4 + 184);
      v7 = *(_DWORD *)(v4 + 184);
      if ( (v7 & 0x10) != 0 )
      {
        *v6 = v7 & 0xFFFFFFEF;
        KeSetEvent(*(PRKEVENT *)(v4 + 360), 1, 0);
      }
      if ( (*v6 & 0x20) == 0 )
      {
        v8 = *(void **)(v4 + 248);
        if ( v8 )
        {
          IoUnregisterPlugPlayNotification(v8);
          *(_QWORD *)(v4 + 248) = 0LL;
          ObfDereferenceObject(*(PVOID *)(v4 + 32));
        }
      }
      RIMCloseDev(v4);
      v4 = *(_QWORD *)(v4 + 40);
      if ( *((_QWORD *)v3 + 95) || (*v6 & 0x800) == 0 )
      {
        rimResetPnpRemovePendingStateBits(v5);
        RIMFreeSpecificDev(v3, v5);
      }
    }
    for ( i = 0; i <= 2; ++i )
      v2 = RIMUnRegisterForInputDeviceTypeClassNotifications(v3);
    v12 = (__int64 **)(v3 + 696);
    while ( *v12 != (__int64 *)v12 )
    {
      v13 = **v12;
      if ( (__int64 **)(*v12)[1] != v12 || *(__int64 **)(v13 + 8) != *v12 )
        __fastfail(3u);
      *v12 = (__int64 *)v13;
      *(_QWORD *)(v13 + 8) = v12;
      Win32FreePool();
    }
    rimFreeAutoRepeatCompleteFrame((__int64)v3, v10, v11);
    rimFreeAllUserMem(v3);
    if ( v3[728] && *((_QWORD *)v3 + 96) )
    {
      if ( v3[776] )
      {
        v14 = (_OWORD *)*((_QWORD *)v3 + 100);
        if ( v14 >= W32UserProbeAddress )
          v14 = W32UserProbeAddress;
        *v14 = 0xC0000128uLL;
      }
      else
      {
        *(_OWORD *)*((_QWORD *)v3 + 100) = 0xC0000128uLL;
      }
      ZwSetEvent(*((HANDLE *)v3 + 96), 0LL);
      ZwClose(*((HANDLE *)v3 + 96));
    }
    if ( *((_QWORD *)v3 + 63) )
    {
      Win32FreePool();
      *((_QWORD *)v3 + 63) = 0LL;
    }
    if ( *((_QWORD *)v3 + 11) )
    {
      Win32FreePool();
      *((_QWORD *)v3 + 11) = 0LL;
      *((_DWORD *)v3 + 20) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v3 + 54), 0LL);
    ZwClose(*((HANDLE *)v3 + 54));
    *((_QWORD *)v3 + 54) = -1LL;
    v15 = (void *)*((_QWORD *)v3 + 55);
    if ( v15 != (void *)-1LL )
    {
      ZwCancelTimer(v15, 0LL);
      ZwClose(*((HANDLE *)v3 + 55));
      *((_QWORD *)v3 + 55) = -1LL;
    }
    ZwClose(*((HANDLE *)v3 + 60));
    *((_QWORD *)v3 + 60) = -1LL;
    RIMCALMPurgeContacts(v3, 0LL);
    v3[73] = 1;
    RIMUnlockExclusive((__int64)(v3 + 712));
    RIMUnlockExclusive((__int64)(v3 + 96));
    ObfDereferenceObject(v3);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x5Cu,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v2);
  return (unsigned int)v2;
}
