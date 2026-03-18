/*
 * XREFs of RIMUnregisterForInput @ 0x1C000A470
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00065F0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0046860 (RIMUnregisterCurrentProcessForInput.c)
 * Callees:
 *     RIMCALMPurgeContacts @ 0x1C000A2FC (RIMCALMPurgeContacts.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C000A70C (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimFreeAllUserMem @ 0x1C000A7C8 (rimFreeAllUserMem.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C000F054 (rimResetPnpRemovePendingStateBits.c)
 *     RIMCloseDev @ 0x1C00106D8 (RIMCloseDev.c)
 *     RIMFreeSpecificDev @ 0x1C0010B14 (RIMFreeSpecificDev.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C007F7DC (rimFreeAutoRepeatCompleteFrame.c)
 */

__int64 __fastcall RIMUnregisterForInput(__int64 a1)
{
  __int64 v2; // r8
  int v3; // edx
  int v4; // r12d
  char *v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // r14d
  _QWORD *v8; // rsi
  _DWORD *v9; // r15
  __int64 **v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  __int64 v15; // r15
  unsigned int *v16; // r14
  int v17; // eax
  void *v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rax
  _OWORD *v21; // rcx
  __int128 v22; // [rsp+30h] [rbp-38h]
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    4,
    94,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  LOBYTE(v2) = 1;
  v4 = RawInputManagerObjectResolveHandle(a1, 3LL, v2, &Object);
  if ( v4 >= 0 )
  {
    v5 = (char *)Object;
    RIMLockExclusive((char *)Object + 96);
    RIMLockExclusive(v5 + 744);
    v5[72] = 1;
    v6 = *((_QWORD *)v5 + 68);
    *((_QWORD *)v5 + 68) = 0LL;
    while ( v6 )
    {
      v15 = v6;
      rimFreeAutoRepeatCompleteFrame(v6);
      v16 = (unsigned int *)(v6 + 176);
      v17 = *(_DWORD *)(v6 + 176);
      if ( (v17 & 0x10) != 0 )
      {
        *v16 = v17 & 0xFFFFFFEF;
        KeSetEvent(*(PRKEVENT *)(v6 + 352), 1, 0);
      }
      if ( (*v16 & 0x20) == 0 )
      {
        v18 = *(void **)(v6 + 240);
        if ( v18 )
        {
          IoUnregisterPlugPlayNotification(v18);
          *(_QWORD *)(v6 + 240) = 0LL;
          ObfDereferenceObject(*(PVOID *)(v6 + 32));
        }
      }
      RIMCloseDev(v6);
      v6 = *(_QWORD *)(v6 + 40);
      if ( (*v16 & 0x800) == 0 )
      {
        rimResetPnpRemovePendingStateBits(v15);
        RIMFreeSpecificDev(v5, v15);
      }
    }
    v7 = 0;
    v8 = v5 + 448;
    v9 = v5 + 432;
    do
    {
      v4 = RIMUnRegisterForInputDeviceTypeClassNotifications(v5, v7);
      if ( !*v9 && *v8 )
      {
        Win32FreePool(*v8);
        *v8 = 0LL;
      }
      ++v7;
      ++v9;
      ++v8;
    }
    while ( v7 <= 2 );
    v10 = (__int64 **)(v5 + 728);
    while ( *v10 != (__int64 *)v10 )
    {
      v19 = *v10;
      v20 = **v10;
      if ( (__int64 **)(*v10)[1] != v10 || *(__int64 **)(v20 + 8) != v19 )
        __fastfail(3u);
      *v10 = (__int64 *)v20;
      *(_QWORD *)(v20 + 8) = v10;
      Win32FreePool(v19 - 1);
    }
    rimFreeAllUserMem(v5);
    if ( v5[760] && *((_QWORD *)v5 + 102) )
    {
      LODWORD(v22) = -1073741528;
      *((_QWORD *)&v22 + 1) = 0LL;
      if ( v5[824] )
      {
        v21 = (_OWORD *)*((_QWORD *)v5 + 106);
        if ( v21 >= W32UserProbeAddress )
          v21 = W32UserProbeAddress;
        *v21 = v22;
      }
      else
      {
        *(_OWORD *)*((_QWORD *)v5 + 106) = v22;
      }
      ZwSetEvent(*((HANDLE *)v5 + 102), 0LL);
      ZwClose(*((HANDLE *)v5 + 102));
    }
    v11 = *((_QWORD *)v5 + 67);
    if ( v11 )
    {
      Win32FreePool(v11);
      *((_QWORD *)v5 + 67) = 0LL;
    }
    v12 = *((_QWORD *)v5 + 11);
    if ( v12 )
    {
      Win32FreePool(v12);
      *((_QWORD *)v5 + 11) = 0LL;
      *((_DWORD *)v5 + 20) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v5 + 59), 0LL);
    ZwClose(*((HANDLE *)v5 + 59));
    *((_QWORD *)v5 + 59) = -1LL;
    v13 = (void *)*((_QWORD *)v5 + 60);
    if ( v13 != (void *)-1LL )
    {
      ZwCancelTimer(v13, 0LL);
      ZwClose(*((HANDLE *)v5 + 60));
      *((_QWORD *)v5 + 60) = -1LL;
    }
    ZwClose(*((HANDLE *)v5 + 64));
    *((_QWORD *)v5 + 64) = -1LL;
    RIMCALMPurgeContacts((__int64)v5, 0);
    v5[73] = 1;
    RIMUnlockExclusive(v5 + 744);
    RIMUnlockExclusive(v5 + 96);
    ObfDereferenceObject(v5);
  }
  LOBYTE(v3) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v3,
    4,
    95,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v4);
  return (unsigned int)v4;
}
