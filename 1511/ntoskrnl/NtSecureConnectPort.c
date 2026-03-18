/*
 * XREFs of NtSecureConnectPort @ 0x140481DB0
 * Callers:
 *     NtConnectPort @ 0x140481D68 (NtConnectPort.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     SeCaptureSid @ 0x14046B354 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x14046C40C (SeReleaseSid.c)
 *     AlpcpCreateClientPort @ 0x14046D9C8 (AlpcpCreateClientPort.c)
 *     AlpcpFormatConnectionRequest @ 0x14047D7C8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpDispatchConnectionRequest @ 0x14047FE08 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140482368 (AlpcpReceiveLegacyConnectionReply.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     AlpcpLogConnectFail @ 0x140620AF4 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x140620B50 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x140620BAC (AlpcpLogConnectSuccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // dl
  __int64 v14; // r8
  _QWORD *v15; // rcx
  ULONG *v16; // rcx
  _OWORD *p_Length; // rcx
  _BYTE *v18; // rcx
  _DWORD *v19; // rcx
  _BYTE *v20; // rcx
  _DWORD *v21; // rcx
  ULONG64 v22; // rcx
  NTSTATUS v23; // edi
  PSID v24; // r15
  _DWORD *v25; // r13
  ULONG_PTR v26; // r15
  int v28; // [rsp+20h] [rbp-198h]
  unsigned __int64 v29; // [rsp+48h] [rbp-170h]
  char v30; // [rsp+60h] [rbp-158h]
  ULONG v31; // [rsp+64h] [rbp-154h] BYREF
  int v32; // [rsp+68h] [rbp-150h]
  __int64 v33; // [rsp+70h] [rbp-148h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-140h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-138h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-130h] BYREF
  PHANDLE v37; // [rsp+90h] [rbp-128h]
  PVOID Object; // [rsp+98h] [rbp-120h] BYREF
  _BYTE v39[48]; // [rsp+A0h] [rbp-118h] BYREF
  PULONG v40; // [rsp+D0h] [rbp-E8h]
  struct _REMOTE_PORT_VIEW v41; // [rsp+D8h] [rbp-E0h] BYREF
  PUNICODE_STRING v42; // [rsp+F0h] [rbp-C8h]
  ULONG_PTR v43; // [rsp+F8h] [rbp-C0h] BYREF
  _QWORD v44[8]; // [rsp+100h] [rbp-B8h] BYREF
  unsigned __int16 v45[20]; // [rsp+140h] [rbp-78h] BYREF
  _QWORD v46[2]; // [rsp+168h] [rbp-50h] BYREF

  v42 = PortName;
  v37 = PortHandle;
  v40 = MaxMessageLength;
  Address = ConnectionInformation;
  memset(v44, 0, sizeof(v44));
  memset(v45, 0, sizeof(v45));
  v31 = 0;
  *(_DWORD *)v39 = 0;
  memset(&v39[8], 0, 0x28uLL);
  v41.Length = 0;
  v41.ViewSize = 0LL;
  v41.ViewBase = 0LL;
  memset(v46, 0, 12);
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v30 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( ConnectionInformationLength )
      v31 = *ConnectionInformationLength;
    if ( ClientView )
    {
      *(_OWORD *)v39 = *(_OWORD *)&ClientView->Length;
      *(_OWORD *)&v39[16] = *(_OWORD *)&ClientView->SectionOffset;
      *(_OWORD *)&v39[32] = *(_OWORD *)&ClientView->ViewBase;
    }
    if ( SecurityQos )
    {
      v46[0] = *(_QWORD *)&SecurityQos->Length;
      LODWORD(v46[1]) = *(_DWORD *)&SecurityQos->ContextTrackingMode;
    }
    v33 = (__int64)ServerSid;
LABEL_39:
    v29 = (unsigned __int64)v46 & -(__int64)(SecurityQos != 0LL);
    v24 = (PSID)v33;
    v23 = AlpcpCreateClientPort((__int64 *)&Handle, &Object, 0, (__int64)v42, 0LL, 0LL, 0LL, 0LL, (void *)v33, v29, 1);
    if ( v24 != ServerSid )
      SeReleaseSid(v24, v30, 1);
    if ( v23 >= 0 )
    {
      v45[0] = v31;
      v25 = Object;
      v23 = AlpcpFormatConnectionRequest(
              &v43,
              0,
              (__int64)Object,
              (__int64)Address,
              v45,
              0LL,
              (unsigned __int64)v39 & -(__int64)(ClientView != 0LL),
              &BugCheckParameter2,
              1,
              v30);
      if ( v23 >= 0 )
      {
        v26 = v43;
        LODWORD(v33) = *(_DWORD *)(v43 + 248);
        if ( AlpcpLogEnabled )
          AlpcpLogConnectRequest(v43);
        v44[0] = v25;
        v44[1] = v26;
        LODWORD(v44[6]) = 0x20000;
        v23 = AlpcpDispatchConnectionRequest((__int64)v44);
        if ( v23 < 0 )
        {
          if ( AlpcpLogEnabled )
            AlpcpLogConnectFail((unsigned int)v33, (unsigned int)v23);
          AlpcpUnlockMessage(v26);
        }
        else
        {
          v23 = AlpcpReceiveLegacyConnectionReply(
                  (unsigned int)v44,
                  (_DWORD)Address,
                  (unsigned int)&v31,
                  BugCheckParameter2,
                  (unsigned __int64)v39 & -(__int64)(ClientView != 0LL),
                  (unsigned __int64)&v41 & -(__int64)(ServerView != 0LL));
          if ( v23 )
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectFail((unsigned int)v33, (unsigned int)v23);
          }
          else
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectSuccess((unsigned int)v33);
            *v37 = Handle;
            if ( ClientView )
            {
              *(_OWORD *)&ClientView->Length = *(_OWORD *)v39;
              *(_OWORD *)&ClientView->SectionOffset = *(_OWORD *)&v39[16];
              *(_OWORD *)&ClientView->ViewBase = *(_OWORD *)&v39[32];
            }
            if ( ServerView )
              *ServerView = v41;
            if ( ConnectionInformationLength )
              *ConnectionInformationLength = v31;
            if ( v40 )
              *v40 = v25[68];
          }
        }
      }
      ObfDereferenceObject(v25);
      if ( BugCheckParameter2 )
        AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
      if ( v23 )
        NtClose(Handle);
    }
    goto LABEL_61;
  }
  v14 = (__int64)v37;
  v15 = v37;
  if ( (unsigned __int64)v37 >= MmUserProbeAddress )
    v15 = (_QWORD *)MmUserProbeAddress;
  *v15 = *v15;
  if ( ConnectionInformationLength )
  {
    v16 = ConnectionInformationLength;
    if ( (unsigned __int64)ConnectionInformationLength >= MmUserProbeAddress )
      v16 = (ULONG *)MmUserProbeAddress;
    v31 = *v16;
    ProbeForWrite(Address, v31, 1u);
    PreviousMode = v30;
  }
  if ( ClientView )
  {
    p_Length = &ClientView->Length;
    if ( (unsigned __int64)ClientView >= MmUserProbeAddress )
      p_Length = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v39 = *p_Length;
    *(_OWORD *)&v39[16] = p_Length[1];
    *(_OWORD *)&v39[32] = p_Length[2];
    if ( _mm_cvtsi128_si32(*(__m128i *)v39) != 48 )
    {
      v23 = -1073741811;
      v32 = -1073741811;
      goto LABEL_61;
    }
    if ( ((unsigned __int8)ClientView & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = ClientView;
    if ( (unsigned __int64)ClientView >= MmUserProbeAddress )
      v18 = (_BYTE *)MmUserProbeAddress;
    *v18 = *v18;
    v18[47] = v18[47];
  }
  if ( ServerView )
  {
    v19 = &ServerView->Length;
    if ( (unsigned __int64)ServerView >= MmUserProbeAddress )
      v19 = (_DWORD *)MmUserProbeAddress;
    if ( *v19 != 24 )
    {
      v23 = -1073741811;
      v32 = -1073741811;
      goto LABEL_61;
    }
    if ( ((unsigned __int8)ServerView & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = ServerView;
    if ( (unsigned __int64)ServerView >= MmUserProbeAddress )
      v20 = (_BYTE *)MmUserProbeAddress;
    *v20 = *v20;
    v20[23] = v20[23];
  }
  if ( MaxMessageLength )
  {
    v21 = MaxMessageLength;
    if ( (unsigned __int64)MaxMessageLength >= MmUserProbeAddress )
      v21 = (_DWORD *)MmUserProbeAddress;
    *v21 = *v21;
  }
  if ( SecurityQos )
  {
    v22 = (ULONG64)SecurityQos;
    if ( (unsigned __int64)SecurityQos >= MmUserProbeAddress )
      v22 = MmUserProbeAddress;
    v46[0] = *(_QWORD *)v22;
    LODWORD(v46[1]) = *(_DWORD *)(v22 + 8);
  }
  v33 = (__int64)ServerSid;
  if ( !ServerSid )
    goto LABEL_39;
  v23 = SeCaptureSid((unsigned __int8 *)ServerSid, PreviousMode, v14, v11, v28, 1, (PSID *)&v33);
  v32 = v23;
  if ( v23 >= 0 )
    goto LABEL_39;
LABEL_61:
  KeLeaveCriticalRegion();
  return v23;
}
