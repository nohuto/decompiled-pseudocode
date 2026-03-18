/*
 * XREFs of RIMDeviceClassNotify @ 0x1C000BFC0
 * Callers:
 *     <none>
 * Callees:
 *     RIMFindInputDeviceForConfig @ 0x1C00059EC (RIMFindInputDeviceForConfig.c)
 *     RIMFreeDev @ 0x1C000B268 (RIMFreeDev.c)
 *     WPP_RECORDER_SF_S @ 0x1C000BED0 (WPP_RECORDER_SF_S.c)
 *     RIMDoOnPnpNotification @ 0x1C000C538 (RIMDoOnPnpNotification.c)
 *     RIMCreateDev @ 0x1C000E2BC (RIMCreateDev.c)
 *     ApiSetIsRemoteConnection @ 0x1C000F57C (ApiSetIsRemoteConnection.c)
 *     _TlgWrite @ 0x1C000FA24 (_TlgWrite.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00101D4 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_q @ 0x1C0010310 (WPP_RECORDER_SF_q.c)
 *     DeviceTypeToRimInputType @ 0x1C0010A30 (DeviceTypeToRimInputType.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0010E6C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0010E90 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     _TlgKeywordOn @ 0x1C00111F8 (_TlgKeywordOn.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1C00B3BE4 (_TlgCreateWsz.c)
 *     DbgPrintRIMAlways @ 0x1C00C0E60 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C00CDC84 (WPP_RECORDER_SF_qqqD.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00D4388 (WPP_RECORDER_SF_qd.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00DA8B8 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sdq @ 0x1C00DAEF4 (WPP_RECORDER_SF_Sdq.c)
 */

__int64 __fastcall RIMDeviceClassNotify(char *NotificationStructure, _DWORD *Context)
{
  unsigned int v2; // edi
  __int64 v4; // rsi
  int v5; // r12d
  __int64 i; // rdi
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  bool v10; // zf
  bool v11; // cf
  LPCGUID v12; // r9
  char v13; // r15
  __int64 v14; // r14
  int v15; // r14d
  int v16; // edx
  int v17; // r8d
  int v18; // edx
  int v19; // ebx
  NTSTATUS v20; // eax
  int v21; // edx
  int v22; // r8d
  int cData; // [rsp+20h] [rbp-E0h]
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+5Ch] [rbp-A4h] BYREF
  int v28; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v29; // [rsp+64h] [rbp-9Ch] BYREF
  int v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  char v32[8]; // [rsp+78h] [rbp-88h] BYREF
  _KAPC_STATE ApcState; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  int *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  BOOL *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  int *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]

  v2 = Context[2];
  v4 = *(_QWORD *)Context;
  v26 = v2;
  LOBYTE(Context) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)Context,
    4,
    36,
    (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids);
  WPP_RECORDER_SF_S(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x25u,
    (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
    *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
  if ( *(_OWORD *)(NotificationStructure + 4) != *(_OWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL )
    return 0LL;
  v5 = 0;
  if ( *(_BYTE *)(v4 + 73) || ((unsigned int)DeviceTypeToRimInputType(v2) & *(_DWORD *)(v4 + 76)) == 0 )
    return 0LL;
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v32, 1, 1);
  if ( !(unsigned int)ApiSetIsRemoteConnection() )
  {
    RIMLockExclusive(v4 + 96);
    if ( !*(_BYTE *)(v4 + 72) && !*(_BYTE *)(v4 + 73) )
    {
      for ( i = *(_QWORD *)(v4 + 552); ; i = *(_QWORD *)(i + 40) )
      {
        v25 = i;
        if ( !i )
          break;
        v7 = *(_DWORD *)(i + 184);
        if ( (v7 & 0x20) == 0
          && (v7 & 0x800) == 0
          && RtlEqualUnicodeString(*((PCUNICODE_STRING *)NotificationStructure + 5), (PCUNICODE_STRING)(i + 208), 0) )
        {
          if ( (*(_DWORD *)(i + 348) & 1) != 0 )
          {
            WPP_RECORDER_SF_Sdq(
              WPP_GLOBAL_Control->DeviceExtension,
              *((_QWORD *)NotificationStructure + 5),
              v8,
              v9,
              cData,
              *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL),
              *(_BYTE *)(i + 48),
              *(_QWORD *)(i + 248));
            if ( !*(_QWORD *)(i + 248)
              && dword_1C01187D0 > 5u
              && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01187D0, 0x400000000000uLL) )
            {
              TlgCreateWsz(&pDesc, *(LPCWSTR *)(i + 216));
              v28 = RimDeviceTypeToRimInputType(i, *(unsigned __int8 *)(i + 48));
              v36 = &v28;
              v37 = 4LL;
              v10 = *(_QWORD *)(i + 248) == 0LL;
              v39 = 4LL;
              v29 = v10;
              v38 = &v29;
              v11 = __CFSHR__(*(_DWORD *)(i + 184), 7);
              v41 = 4LL;
              v30 = -v11;
              v40 = &v30;
              TlgWrite((TraceLoggingHProvider)&dword_1C01187D0, &unk_1C0103E23, 0LL, v12, 6u, &pData);
            }
            if ( *(_BYTE *)(i + 48) == 3 )
            {
              v27 = 0;
              v26 = 0;
              v31 = 0LL;
              WPP_RECORDER_SF_S(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                4u,
                0x27u,
                (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
                *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
              if ( (unsigned int)RIMFindInputDeviceForConfig(*(_QWORD *)(i + 464), v4, i, &v27, &v26, &v31) )
              {
                if ( v27 )
                  WPP_RECORDER_SF_S(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    3u,
                    4u,
                    0x28u,
                    (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
                    *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
              }
            }
            goto LABEL_42;
          }
          break;
        }
      }
      v13 = 0;
      v14 = *(_QWORD *)(v4 + 32);
      if ( v14 != PsGetCurrentProcess() )
      {
        if ( *(_BYTE *)(v4 + 9) )
        {
          DbgPrintRIMAlways(
            "RIMDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!\n");
          WPP_RECORDER_SF_qqqD(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            v17,
            41,
            (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
            *(_QWORD *)(v4 + 64),
            *(_QWORD *)(v4 + 32),
            *(_QWORD *)(v4 + 40),
            *(_DWORD *)(v4 + 76));
          v15 = -1073741823;
        }
        else
        {
          v15 = PsAcquireProcessExitSynchronization(v14);
          if ( v15 < 0 )
            goto LABEL_42;
          KeStackAttachProcess(*(PRKPROCESS *)(v4 + 32), &ApcState);
          v13 = 1;
        }
        if ( v15 < 0 )
          goto LABEL_42;
      }
      if ( i )
      {
        RIMLockExclusive(v4 + 696);
        if ( (*(_DWORD *)(i + 200) & 1) != 0 )
        {
          LOBYTE(v18) = 3;
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            5,
            42,
            (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
            i);
        }
        else
        {
          RIMFreeDev(v4, i);
        }
        v25 = 0LL;
        RIMUnlockExclusive(v4 + 696);
      }
      v19 = RIMCreateDev((PVOID)v4, 0, 0LL, (__int64)&v25);
      if ( v13 )
      {
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(*(_QWORD *)(v4 + 32));
      }
      if ( v19 >= 0 )
      {
        *(_DWORD *)(v25 + 184) |= 1u;
        if ( *(struct _KTHREAD **)(v4 + 40) == KeGetCurrentThread() )
        {
          i = v25;
          RIMDoOnPnpNotification(v4, v25);
          goto LABEL_42;
        }
        v20 = ObReferenceObjectByPointer((PVOID)v4, 3u, ExRawInputManagerObjectType, 1);
        if ( v20 < 0 )
          WPP_RECORDER_SF_qd(
            WPP_GLOBAL_Control->DeviceExtension,
            v21,
            v22,
            43,
            (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
            v4,
            v20);
        else
          v5 = 1;
      }
    }
    i = v25;
LABEL_42:
    RIMUnlockExclusive(v4 + 96);
    goto LABEL_44;
  }
  i = v25;
LABEL_44:
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v32);
  if ( v5 )
  {
    RIMLockExclusive(v4 + 96);
    RIMSignalOnPnpNotificationAndWait(v4, i);
    RIMUnlockExclusive(v4 + 96);
    ObfDereferenceObject((PVOID)v4);
  }
  return 0LL;
}
