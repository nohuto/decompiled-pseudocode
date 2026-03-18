/*
 * XREFs of RIMDeviceClassNotify @ 0x1C0075BD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMFreeDev @ 0x1C00759DC (RIMFreeDev.c)
 *     ApiSetEnterEditionCrit @ 0x1C0076018 (ApiSetEnterEditionCrit.c)
 *     RIMDoOnPnpNotification @ 0x1C0076038 (RIMDoOnPnpNotification.c)
 *     RIMCreateDev @ 0x1C0076274 (RIMCreateDev.c)
 *     DeviceTypeToRimInputType @ 0x1C0077280 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_S @ 0x1C00772A8 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_q @ 0x1C0077B00 (WPP_RECORDER_SF_q.c)
 *     ApiSetLeaveEditionCrit @ 0x1C0077E6C (ApiSetLeaveEditionCrit.c)
 *     ApiSetIsRemoteConnection @ 0x1C0078294 (ApiSetIsRemoteConnection.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     DbgPrintRIMAlways @ 0x1C00B3870 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C00C0844 (WPP_RECORDER_SF_qqqD.c)
 *     rimIsValidDeviceClassNotifyContext @ 0x1C00C0C58 (rimIsValidDeviceClassNotifyContext.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00C989C (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00C9A94 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall RIMDeviceClassNotify(char *NotificationStructure, unsigned int *Context)
{
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdi
  int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 i; // rsi
  int v11; // eax
  __int64 v12; // rbx
  char v13; // r15
  int v14; // ebx
  int v15; // edx
  int v16; // r8d
  int v17; // edx
  int v18; // ebx
  NTSTATUS v19; // eax
  int v20; // edx
  int v21; // r8d
  __int64 v23; // [rsp+50h] [rbp-29h] BYREF
  int v24; // [rsp+58h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-19h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x1Eu,
    (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids);
  LOBYTE(v4) = 3;
  WPP_RECORDER_SF_S(
    WPP_GLOBAL_Control->DeviceExtension,
    v4,
    4,
    31,
    (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
    *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
  if ( *(_OWORD *)(NotificationStructure + 4) != *(_OWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL )
    return 0LL;
  v24 = ApiSetEnterEditionCrit();
  if ( !(unsigned int)rimIsValidDeviceClassNotifyContext(Context) )
  {
    DbgPrintRIMAlways("RIMDeviceClassNotify: pContext:[%p] is notvalid, skipping arrival processing\n");
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      5,
      32,
      (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
      (char)Context);
    if ( !v24 )
      ApiSetLeaveEditionCrit();
    return 0LL;
  }
  v6 = *(_QWORD *)Context;
  v7 = 0;
  if ( *(_BYTE *)(*(_QWORD *)Context + 73LL)
    || ((unsigned int)DeviceTypeToRimInputType(Context[2]) & *(_DWORD *)(v6 + 76)) == 0
    || (unsigned int)ApiSetIsRemoteConnection() )
  {
    i = v23;
    goto LABEL_40;
  }
  RIMLockExclusive(v6 + 96);
  if ( *(_BYTE *)(v6 + 72) || *(_BYTE *)(v6 + 73) )
    goto LABEL_37;
  for ( i = *(_QWORD *)(v6 + 512); ; i = *(_QWORD *)(i + 40) )
  {
    v23 = i;
    if ( !i )
      break;
    v11 = *(_DWORD *)(i + 184);
    if ( (v11 & 0x20) == 0
      && (v11 & 0x800) == 0
      && RtlEqualUnicodeString(*((PCUNICODE_STRING *)NotificationStructure + 5), (PCUNICODE_STRING)(i + 208), 0) )
    {
      if ( (*(_DWORD *)(i + 340) & 1) != 0 )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v8,
          4,
          33,
          (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
          *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
        goto LABEL_38;
      }
      break;
    }
  }
  v12 = *(_QWORD *)(v6 + 32);
  v13 = 0;
  if ( v12 == PsGetCurrentProcess(v9, v8) )
  {
LABEL_24:
    if ( i )
    {
      RIMLockExclusive(v6 + 712);
      if ( (*(_DWORD *)(i + 200) & 1) != 0 )
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v17,
          5,
          35,
          (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
          i);
      }
      else
      {
        RIMFreeDev(v6, i);
      }
      v23 = 0LL;
      RIMUnlockExclusive(v6 + 712);
    }
    v18 = RIMCreateDev((PVOID)v6, 0, 0LL, (__int64)&v23);
    if ( v13 )
    {
      KeUnstackDetachProcess(&ApcState);
      PsReleaseProcessExitSynchronization(*(_QWORD *)(v6 + 32));
    }
    if ( v18 >= 0 )
    {
      *(_DWORD *)(v23 + 184) |= 1u;
      if ( *(struct _KTHREAD **)(v6 + 40) == KeGetCurrentThread() )
      {
        i = v23;
        RIMDoOnPnpNotification(v6, v23);
        goto LABEL_38;
      }
      v19 = ObReferenceObjectByPointer((PVOID)v6, 3u, ExRawInputManagerObjectType, 1);
      if ( v19 < 0 )
        WPP_RECORDER_SF_qd(
          WPP_GLOBAL_Control->DeviceExtension,
          v20,
          v21,
          36,
          (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
          v6,
          v19);
      else
        v7 = 1;
    }
LABEL_37:
    i = v23;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v6 + 9) )
  {
    DbgPrintRIMAlways("RIMDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!\n");
    WPP_RECORDER_SF_qqqD(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      v16,
      34,
      (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
      *(_QWORD *)(v6 + 64),
      *(_QWORD *)(v6 + 32),
      *(_QWORD *)(v6 + 40),
      *(_DWORD *)(v6 + 76));
    v14 = -1073741823;
  }
  else
  {
    v14 = PsAcquireProcessExitSynchronization(v12);
    if ( v14 < 0 )
      goto LABEL_38;
    KeStackAttachProcess(*(PRKPROCESS *)(v6 + 32), &ApcState);
    v13 = 1;
  }
  if ( v14 >= 0 )
    goto LABEL_24;
LABEL_38:
  RIMUnlockExclusive(v6 + 96);
LABEL_40:
  if ( !v24 )
    ApiSetLeaveEditionCrit();
  if ( v7 )
  {
    RIMLockExclusive(v6 + 96);
    RIMSignalOnPnpNotificationAndWait(v6, i);
    RIMUnlockExclusive(v6 + 96);
    ObfDereferenceObject((PVOID)v6);
  }
  return 0LL;
}
