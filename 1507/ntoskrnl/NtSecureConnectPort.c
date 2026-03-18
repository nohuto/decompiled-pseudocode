/*
 * XREFs of NtSecureConnectPort @ 0x140529588
 * Callers:
 *     NtConnectPort @ 0x140529540 (NtConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SeCaptureSid @ 0x140470AC8 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140470E00 (SeReleaseSid.c)
 *     AlpcpCreateClientPort @ 0x140472CA0 (AlpcpCreateClientPort.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140529BA4 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpDispatchConnectionRequest @ 0x14052A624 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x14052A7D4 (AlpcpFormatConnectionRequest.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogConnectFail @ 0x1406A0170 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1406A01CC (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1406A0228 (AlpcpLogConnectSuccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSecureConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PSID ServerSid,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  _QWORD *v14; // rcx
  ULONG *v15; // rcx
  __m128i *v16; // rcx
  _BYTE *v17; // rcx
  _DWORD *p_Length; // rcx
  _BYTE *v19; // rcx
  _DWORD *v20; // rcx
  ULONG64 v21; // rcx
  PSID v22; // rdi
  int v23; // eax
  ULONG_PTR v24; // rdi
  unsigned int v25; // r12d
  int v26; // eax
  unsigned int v27; // eax
  signed __int64 v28; // r14
  bool v29; // cc
  ULONG_PTR v30; // r14
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax
  int v34; // esi
  char v35; // cl
  signed __int64 v36; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-198h]
  unsigned __int64 v38; // [rsp+48h] [rbp-170h]
  char v39; // [rsp+60h] [rbp-158h]
  NTSTATUS v40; // [rsp+64h] [rbp-154h]
  ULONG v41; // [rsp+68h] [rbp-150h] BYREF
  ULONG_PTR v42; // [rsp+70h] [rbp-148h] BYREF
  PVOID Object; // [rsp+78h] [rbp-140h] BYREF
  __int64 v44; // [rsp+80h] [rbp-138h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-130h] BYREF
  volatile void *Address; // [rsp+90h] [rbp-128h]
  PHANDLE v47; // [rsp+98h] [rbp-120h]
  PULONG v48; // [rsp+A0h] [rbp-118h]
  HANDLE Handle; // [rsp+A8h] [rbp-110h] BYREF
  PUNICODE_STRING v50; // [rsp+B0h] [rbp-108h]
  __m128i v51[3]; // [rsp+B8h] [rbp-100h] BYREF
  struct _REMOTE_PORT_VIEW v52; // [rsp+E8h] [rbp-D0h] BYREF
  _QWORD v53[8]; // [rsp+100h] [rbp-B8h] BYREF
  _WORD v54[20]; // [rsp+140h] [rbp-78h] BYREF
  _QWORD v55[2]; // [rsp+168h] [rbp-50h] BYREF

  v50 = PortName;
  v47 = PortHandle;
  v48 = MaxMessageLength;
  Address = ConnectionInformation;
  memset(v53, 0, sizeof(v53));
  memset(v54, 0, sizeof(v54));
  v41 = 0;
  memset(v55, 0, 12);
  v42 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  memset(v51, 0, sizeof(v51));
  memset(&v52, 0, sizeof(v52));
  LOBYTE(v13) = KeGetCurrentThread()->PreviousMode;
  v39 = v13;
  if ( !(_BYTE)v13 )
  {
    if ( ConnectionInformationLength )
      v41 = *ConnectionInformationLength;
    if ( ClientView )
    {
      v51[0] = *(__m128i *)&ClientView->Length;
      v51[1] = *(__m128i *)&ClientView->SectionOffset;
      v51[2] = *(__m128i *)&ClientView->ViewBase;
    }
    if ( SecurityQos )
    {
      v55[0] = *(_QWORD *)&SecurityQos->Length;
      LODWORD(v55[1]) = *(_DWORD *)&SecurityQos->ContextTrackingMode;
    }
    v44 = (__int64)ServerSid;
LABEL_39:
    v38 = (unsigned __int64)v55 & -(__int64)(SecurityQos != 0LL);
    v22 = (PSID)v44;
    v23 = AlpcpCreateClientPort(&Handle, &Object, 0, (int)v50, 0LL, 0LL, 0LL, 0LL, v44, v38, 1);
    v40 = v23;
    if ( v22 != ServerSid )
    {
      SeReleaseSid(v22, v39, 1);
      v23 = v40;
    }
    if ( v23 >= 0 )
    {
      v54[0] = v41;
      v40 = AlpcpFormatConnectionRequest(
              (unsigned int)&BugCheckParameter2,
              0,
              (_DWORD)Object,
              (_DWORD)Address,
              (__int64)v54,
              0LL,
              (unsigned __int64)v51 & -(__int64)(ClientView != 0LL),
              (__int64)&v42,
              1,
              v39);
      if ( v40 >= 0 )
      {
        v24 = BugCheckParameter2;
        v25 = *(_DWORD *)(BugCheckParameter2 + 248);
        if ( AlpcpLogEnabled )
          AlpcpLogConnectRequest(BugCheckParameter2);
        v53[0] = Object;
        v53[1] = v24;
        LODWORD(v53[6]) = 0x20000;
        v26 = AlpcpDispatchConnectionRequest(v53);
        v40 = v26;
        if ( v26 < 0 )
        {
          if ( AlpcpLogEnabled )
            AlpcpLogConnectFail(v25, (unsigned int)v26);
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterStateChangeEventMessageLog(v24);
          v34 = 0;
          v35 = *(_BYTE *)(v24 - 32);
          if ( (v35 & 1) != 0 )
          {
            v34 = 0x10000 - *(__int16 *)(v24 - 30);
            *(_BYTE *)(v24 - 32) = v35 & 0xFE;
            *(_WORD *)(v24 - 30) = 0;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v24 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v24 - 16));
          KeAbPostRelease(v24 - 16);
          if ( v34 > 0 )
          {
            v36 = -v34 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 - 24), -v34);
            if ( v36 <= 0 )
            {
              if ( v36 )
                KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v36);
              AlpcpDestroyBlob(BugCheckParameter2);
            }
          }
        }
        else
        {
          v27 = AlpcpReceiveLegacyConnectionReply(
                  (unsigned int)v53,
                  (_DWORD)Address,
                  (unsigned int)&v41,
                  v42,
                  (unsigned __int64)v51 & -(__int64)(ClientView != 0LL),
                  (unsigned __int64)&v52 & -(__int64)(ServerView != 0LL));
          v40 = v27;
          if ( v27 )
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectFail(v25, v27);
          }
          else
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectSuccess(v25, v27);
            *v47 = Handle;
            if ( ClientView )
            {
              *(__m128i *)&ClientView->Length = v51[0];
              *(__m128i *)&ClientView->SectionOffset = v51[1];
              *(__m128i *)&ClientView->ViewBase = v51[2];
            }
            if ( ServerView )
              *ServerView = v52;
            if ( ConnectionInformationLength )
              *ConnectionInformationLength = v41;
            if ( v48 )
              *v48 = *((_DWORD *)Object + 68);
          }
        }
      }
      ObfDereferenceObject(Object);
      if ( v42 )
      {
        v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 - 24), 0xFFFFFFFFFFFFFFFFuLL);
        v29 = v28 <= 1;
        v30 = v28 - 1;
        if ( v29 )
        {
          if ( v30 )
            KeBugCheckEx(0x18u, 0LL, v42, 0x21uLL, v30);
          AlpcpDestroyBlob(v42);
        }
      }
      if ( v40 )
        NtClose(Handle);
    }
    goto LABEL_61;
  }
  v14 = v47;
  if ( (unsigned __int64)v47 >= MmUserProbeAddress )
    v14 = (_QWORD *)MmUserProbeAddress;
  *v14 = *v14;
  if ( ConnectionInformationLength )
  {
    v15 = ConnectionInformationLength;
    if ( (unsigned __int64)ConnectionInformationLength >= MmUserProbeAddress )
      v15 = (ULONG *)MmUserProbeAddress;
    v41 = *v15;
    ProbeForWrite(Address, v41, 1u);
    LOBYTE(v13) = v39;
  }
  if ( ClientView )
  {
    v16 = (__m128i *)ClientView;
    if ( (unsigned __int64)ClientView >= MmUserProbeAddress )
      v16 = (__m128i *)MmUserProbeAddress;
    v51[0] = *v16;
    v51[1] = v16[1];
    v51[2] = v16[2];
    if ( _mm_cvtsi128_si32(v51[0]) != 48 )
    {
      v40 = -1073741811;
      goto LABEL_61;
    }
    if ( ((unsigned __int8)ClientView & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = ClientView;
    if ( (unsigned __int64)ClientView >= MmUserProbeAddress )
      v17 = (_BYTE *)MmUserProbeAddress;
    *v17 = *v17;
    v17[47] = v17[47];
  }
  if ( ServerView )
  {
    p_Length = &ServerView->Length;
    if ( (unsigned __int64)ServerView >= MmUserProbeAddress )
      p_Length = (_DWORD *)MmUserProbeAddress;
    if ( *p_Length != 24 )
    {
      v40 = -1073741811;
      goto LABEL_61;
    }
    if ( ((unsigned __int8)ServerView & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = ServerView;
    if ( (unsigned __int64)ServerView >= MmUserProbeAddress )
      v19 = (_BYTE *)MmUserProbeAddress;
    *v19 = *v19;
    v19[23] = v19[23];
  }
  if ( v48 )
  {
    v20 = v48;
    if ( (unsigned __int64)v48 >= MmUserProbeAddress )
      v20 = (_DWORD *)MmUserProbeAddress;
    *v20 = *v20;
  }
  if ( SecurityQos )
  {
    v21 = (ULONG64)SecurityQos;
    if ( (unsigned __int64)SecurityQos >= MmUserProbeAddress )
      v21 = MmUserProbeAddress;
    v55[0] = *(_QWORD *)v21;
    LODWORD(v55[1]) = *(_DWORD *)(v21 + 8);
  }
  v44 = (__int64)ServerSid;
  if ( !ServerSid )
    goto LABEL_39;
  v40 = SeCaptureSid((unsigned __int8 *)ServerSid, v13, v13, v12, BugCheckParameter4, 1, (PSID *)&v44);
  if ( v40 >= 0 )
    goto LABEL_39;
LABEL_61:
  v31 = KeGetCurrentThread();
  v32 = v31->KernelApcDisable + 1;
  v31->KernelApcDisable = v32;
  if ( !v32
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
    && !v31->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v40;
}
