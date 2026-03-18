/*
 * XREFs of RIMDeviceClassNotify @ 0x1C000FE30
 * Callers:
 *     <none>
 * Callees:
 *     RIMFreeDev @ 0x1C000F020 (RIMFreeDev.c)
 *     WPP_RECORDER_SF_q @ 0x1C000FA94 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C000FCE4 (WPP_RECORDER_SF_S.c)
 *     DeviceTypeToRimInputType @ 0x1C000FDE0 (DeviceTypeToRimInputType.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C000FE08 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     RIMDoOnPnpNotification @ 0x1C00108E0 (RIMDoOnPnpNotification.c)
 *     RIMCreateDev @ 0x1C0011060 (RIMCreateDev.c)
 *     ApiSetIsRemoteConnection @ 0x1C00115CC (ApiSetIsRemoteConnection.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     DbgPrintRIMAlways @ 0x1C00B62F0 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C00C1444 (WPP_RECORDER_SF_qqqD.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00CA79C (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00CA994 (WPP_RECORDER_SF_qd.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00CE68C (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 */

__int64 __fastcall RIMDeviceClassNotify(char *NotificationStructure, _DWORD *Context)
{
  int v2; // ebx
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // r12d
  __int64 i; // rdi
  int v8; // eax
  __int64 v9; // rbx
  char v10; // r15
  int v11; // ebx
  int v13; // ebx
  int v14; // edx
  int v15; // r8d
  NTSTATUS v16; // eax
  int v17; // edx
  int v18; // r8d
  __int64 v19; // [rsp+50h] [rbp-29h] BYREF
  int v20; // [rsp+58h] [rbp-21h]
  _BYTE v21[8]; // [rsp+60h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-11h] BYREF

  v2 = Context[2];
  v4 = *(_QWORD *)Context;
  v20 = v2;
  LOBYTE(Context) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)Context,
    4,
    32,
    (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids);
  WPP_RECORDER_SF_S(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4LL,
    0x21u,
    (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids,
    *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v5 )
  {
    v6 = 0;
    if ( !*(_BYTE *)(v4 + 73) && ((unsigned int)DeviceTypeToRimInputType(v2) & *(_DWORD *)(v4 + 76)) != 0 )
    {
      ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v21, 1, 1);
      if ( (unsigned int)ApiSetIsRemoteConnection() )
      {
        i = v19;
LABEL_23:
        ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v21);
        if ( v6 )
        {
          RIMLockExclusive(v4 + 96);
          RIMSignalOnPnpNotificationAndWait(v4, i);
          RIMUnlockExclusive(v4 + 96);
          ObfDereferenceObject((PVOID)v4);
        }
        return 0LL;
      }
      RIMLockExclusive(v4 + 96);
      if ( !*(_BYTE *)(v4 + 72) && !*(_BYTE *)(v4 + 73) )
      {
        for ( i = *(_QWORD *)(v4 + 544); ; i = *(_QWORD *)(i + 40) )
        {
          v19 = i;
          if ( !i )
            break;
          v8 = *(_DWORD *)(i + 176);
          if ( (v8 & 0x20) == 0
            && (v8 & 0x800) == 0
            && RtlEqualUnicodeString(*((PCUNICODE_STRING *)NotificationStructure + 5), (PCUNICODE_STRING)(i + 200), 0) )
          {
            if ( (*(_DWORD *)(i + 332) & 1) != 0 )
            {
              WPP_RECORDER_SF_S(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                4LL,
                0x22u,
                (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids,
                *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
              goto LABEL_22;
            }
            break;
          }
        }
        v9 = *(_QWORD *)(v4 + 32);
        v10 = 0;
        if ( v9 != PsGetCurrentProcess() )
        {
          if ( *(_BYTE *)(v4 + 9) )
          {
            DbgPrintRIMAlways(
              "RIMDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!\n");
            WPP_RECORDER_SF_qqqD(
              WPP_GLOBAL_Control->DeviceExtension,
              v14,
              v15,
              35,
              (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids,
              *(_QWORD *)(v4 + 64),
              *(_QWORD *)(v4 + 32),
              *(_QWORD *)(v4 + 40),
              *(_DWORD *)(v4 + 76));
            v13 = -1073741823;
          }
          else
          {
            v13 = PsAcquireProcessExitSynchronization(v9);
            if ( v13 < 0 )
              goto LABEL_22;
            KeStackAttachProcess(*(PRKPROCESS *)(v4 + 32), &ApcState);
            v10 = 1;
          }
          if ( v13 < 0 )
            goto LABEL_22;
        }
        if ( i )
        {
          RIMLockExclusive(v4 + 744);
          if ( (*(_DWORD *)(i + 192) & 1) != 0 )
            WPP_RECORDER_SF_q(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              5u,
              0x24u,
              (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids,
              i);
          else
            RIMFreeDev(v4, i);
          v19 = 0LL;
          RIMUnlockExclusive(v4 + 744);
        }
        v11 = RIMCreateDev((PVOID)v4, 0, 0LL, (__int64)&v19);
        if ( v10 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsReleaseProcessExitSynchronization(*(_QWORD *)(v4 + 32));
        }
        if ( v11 >= 0 )
        {
          *(_DWORD *)(v19 + 176) |= 1u;
          if ( *(struct _KTHREAD **)(v4 + 40) == KeGetCurrentThread() )
          {
            i = v19;
            RIMDoOnPnpNotification(v4, v19);
            goto LABEL_22;
          }
          v16 = ObReferenceObjectByPointer((PVOID)v4, 3u, ExRawInputManagerObjectType, 1);
          if ( v16 < 0 )
            WPP_RECORDER_SF_qd(
              WPP_GLOBAL_Control->DeviceExtension,
              v17,
              v18,
              37,
              (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids,
              v4,
              v16);
          else
            v6 = 1;
        }
      }
      i = v19;
LABEL_22:
      RIMUnlockExclusive(v4 + 96);
      goto LABEL_23;
    }
  }
  return 0LL;
}
