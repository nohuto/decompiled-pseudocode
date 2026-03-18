/*
 * XREFs of RIMCreateDev @ 0x1C0011060
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C000FE30 (RIMDeviceClassNotify.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0010980 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087110 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00C19A0 (RIMAddInjectionDeviceOfType.c)
 *     RIMDiscoverSpecificDevice @ 0x1C00CA27C (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     IsIsLegacyTouchPadDeviceSupported_0 @ 0x1C0002F08 (IsIsLegacyTouchPadDeviceSupported_0.c)
 *     IsLegacyTouchPadDevice_0 @ 0x1C0002F10 (IsLegacyTouchPadDevice_0.c)
 *     RIMFindInputDeviceForConfig @ 0x1C0005790 (RIMFindInputDeviceForConfig.c)
 *     RIMFreeSpecificDevWorker @ 0x1C000CD9C (RIMFreeSpecificDevWorker.c)
 *     RIMCreateHidDesc @ 0x1C000F564 (RIMCreateHidDesc.c)
 *     WPP_RECORDER_SF_S @ 0x1C000FCE4 (WPP_RECORDER_SF_S.c)
 *     rimDereferenceDev @ 0x1C0010B64 (rimDereferenceDev.c)
 *     rimCreateDev @ 0x1C0010D6C (rimCreateDev.c)
 *     rimDoRimDevChangeCallback @ 0x1C0011374 (rimDoRimDevChangeCallback.c)
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C007B340 (RIMSetDeviceIdleTimeout.c)
 *     EtwTraceLegacyTouchPadDetectionStart @ 0x1C007EA10 (EtwTraceLegacyTouchPadDetectionStart.c)
 *     EtwTraceLegacyTouchPadDetectionStop @ 0x1C007EA30 (EtwTraceLegacyTouchPadDetectionStop.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C00CE8D0 (ApiSetSetUserPTPEnabledPreference.c)
 */

__int64 __fastcall RIMCreateDev(PVOID Object, int a2, const UNICODE_STRING *a3, int a4, int a5, __int64 a6, _QWORD *a7)
{
  char v9; // r14
  _QWORD *Dev; // rbx
  __int64 v12; // rax
  struct _KEVENT *v13; // rax
  int v14; // edx
  int v15; // r9d
  __int64 v16; // rax
  int v17; // esi
  int v18; // edx
  __int64 v19; // rcx
  int v21; // edx
  int v22; // [rsp+30h] [rbp-18h] BYREF
  int v23; // [rsp+34h] [rbp-14h] BYREF
  __int64 v24; // [rsp+38h] [rbp-10h] BYREF

  v9 = a2;
  Dev = rimCreateDev((int)Object, a2, (int)a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( a3->Buffer )
  {
    v12 = Win32AllocPool(a3->MaximumLength, 1886417746LL);
    Dev[26] = v12;
    if ( !v12 )
    {
      WPP_RECORDER_SF_S(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        2LL,
        0xBu,
        (__int64)&WPP_6990e2e6bee2951e2a28a078a671d19e_Traceguids,
        a3->Buffer);
LABEL_37:
      *(_BYTE *)(Dev[4] + 8LL) = 1;
      RIMFreeSpecificDevWorker((__int64)Object, (__int64)Dev);
      rimDereferenceDev((__int64)Dev, v21);
      return 3221225495LL;
    }
    *((_WORD *)Dev + 101) = a3->MaximumLength;
    RtlCopyUnicodeString((PUNICODE_STRING)(Dev + 25), a3);
  }
  *((_BYTE *)Dev + 48) = v9;
  if ( a4 )
    *((_DWORD *)Dev + 44) |= 0x20u;
  if ( a5 )
  {
    *((_DWORD *)Dev + 44) |= 0x800u;
    Dev[47] = *(_QWORD *)(a6 + 116);
    *((_DWORD *)Dev + 96) = *(_DWORD *)(a6 + 124);
    v13 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 1986358098LL);
    Dev[45] = v13;
    if ( !v13 )
    {
      v15 = 12;
LABEL_36:
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        2,
        v15,
        (__int64)&WPP_6990e2e6bee2951e2a28a078a671d19e_Traceguids);
      goto LABEL_37;
    }
  }
  else
  {
    v13 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 1986358098LL);
    Dev[44] = v13;
    if ( !v13 )
    {
      v15 = 13;
      goto LABEL_36;
    }
  }
  KeInitializeEvent(v13, SynchronizationEvent, 0);
  if ( *((_BYTE *)Dev + 48) == 2 )
  {
    v16 = RIMCreateHidDesc((__int64)Object, (__int64)Dev, a6);
    Dev[50] = v16;
    if ( !v16 )
    {
      v15 = 14;
      goto LABEL_36;
    }
  }
  if ( !*((_BYTE *)Dev + 48) )
  {
    EtwTraceLegacyTouchPadDetectionStart();
    v17 = (int)IsIsLegacyTouchPadDeviceSupported_0() < 0 ? 0 : IsLegacyTouchPadDevice_0();
    EtwTraceLegacyTouchPadDetectionStop();
    if ( v17 )
    {
      LOBYTE(v18) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        4,
        15,
        (__int64)&WPP_6990e2e6bee2951e2a28a078a671d19e_Traceguids);
    }
  }
  *((_DWORD *)Dev + 83) |= 1u;
  if ( ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1) < 0 )
    goto LABEL_37;
  Dev[42] = Object;
  Dev[5] = *((_QWORD *)Object + 68);
  *((_QWORD *)Object + 68) = Dev;
  *a7 = Dev;
  if ( !*((_QWORD *)Object + 101) || !a5 )
    rimDoRimDevChangeCallback(Object, Dev, 1LL);
  if ( (Dev[22] & 0x400) != 0 )
  {
    v19 = Dev[50];
    v23 = 0;
    v22 = 0;
    v24 = 0LL;
    if ( (unsigned int)RIMFindInputDeviceForConfig(v19, (__int64)Object, (int)Dev, &v23, &v22, &v24) )
    {
      if ( !v22 )
        ApiSetSetUserPTPEnabledPreference(v24, *(_QWORD *)(v24 + 400), Object);
    }
  }
  if ( *((_DWORD *)Dev + 77) )
    RIMSetDeviceIdleTimeout(Dev);
  if ( !*((_QWORD *)Object + 101) )
  {
    if ( a5 )
      rimDoRimDevChangeCallback(Object, Dev, 2LL);
  }
  return 0LL;
}
