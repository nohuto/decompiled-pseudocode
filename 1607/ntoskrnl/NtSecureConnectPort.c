/*
 * XREFs of NtSecureConnectPort @ 0x14049C42C
 * Callers:
 *     NtConnectPort @ 0x14049C3E4 (NtConnectPort.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AlpcpCreateClientPort @ 0x14040735C (AlpcpCreateClientPort.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpFormatConnectionRequest @ 0x140408318 (AlpcpFormatConnectionRequest.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     SeCaptureSid @ 0x14047807C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140478424 (SeReleaseSid.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x14049C9A4 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpDispatchConnectionRequest @ 0x14049CF64 (AlpcpDispatchConnectionRequest.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     AlpcpLogConnectFail @ 0x140656880 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1406568DC (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x140656938 (AlpcpLogConnectSuccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
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
  char PreviousMode; // dl
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  NTSTATUS v22; // edi
  PSID v23; // r15
  _DWORD *v24; // r13
  ULONG_PTR v25; // r15
  unsigned int v26; // r12d
  int v28; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v29; // [rsp+48h] [rbp-180h]
  char v30; // [rsp+60h] [rbp-168h]
  ULONG v31; // [rsp+64h] [rbp-164h] BYREF
  int v32; // [rsp+68h] [rbp-160h]
  __int64 v33; // [rsp+70h] [rbp-158h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-150h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-148h] BYREF
  PHANDLE v36; // [rsp+88h] [rbp-140h]
  PVOID Object; // [rsp+90h] [rbp-138h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-130h] BYREF
  PUNICODE_STRING v39; // [rsp+A0h] [rbp-128h]
  ULONG_PTR v40; // [rsp+A8h] [rbp-120h] BYREF
  PULONG v41; // [rsp+B0h] [rbp-118h]
  PULONG v42; // [rsp+B8h] [rbp-110h]
  struct _REMOTE_PORT_VIEW v43; // [rsp+C0h] [rbp-108h] BYREF
  __m128i v44[3]; // [rsp+D8h] [rbp-F0h] BYREF
  _QWORD v45[8]; // [rsp+110h] [rbp-B8h] BYREF
  unsigned __int16 v46[20]; // [rsp+150h] [rbp-78h] BYREF
  _QWORD v47[2]; // [rsp+178h] [rbp-50h] BYREF

  v39 = PortName;
  v36 = PortHandle;
  v42 = MaxMessageLength;
  Address = ConnectionInformation;
  v41 = ConnectionInformationLength;
  memset(v45, 0, sizeof(v45));
  memset(v46, 0, sizeof(v46));
  v31 = 0;
  memset(v47, 0, 12);
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  memset(v44, 0, sizeof(v44));
  memset(&v43, 0, sizeof(v43));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v30 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( ConnectionInformationLength )
      v31 = *ConnectionInformationLength;
    if ( ClientView )
    {
      v44[0] = *(__m128i *)&ClientView->Length;
      v44[1] = *(__m128i *)&ClientView->SectionOffset;
      v44[2] = *(__m128i *)&ClientView->ViewBase;
    }
    if ( SecurityQos )
    {
      v47[0] = *(_QWORD *)&SecurityQos->Length;
      LODWORD(v47[1]) = *(_DWORD *)&SecurityQos->ContextTrackingMode;
    }
    v33 = (__int64)ServerSid;
LABEL_39:
    v29 = (unsigned __int64)v47 & -(__int64)(SecurityQos != 0LL);
    v23 = (PSID)v33;
    v22 = AlpcpCreateClientPort(&Handle, &Object, 0, (__int64)v39, 0LL, 0LL, 0LL, 0LL, (void *)v33, v29, 1);
    if ( v23 != ServerSid )
      SeReleaseSid(v23, v30, 1);
    if ( v22 >= 0 )
    {
      v46[0] = v31;
      v24 = Object;
      v22 = AlpcpFormatConnectionRequest(
              &v40,
              0,
              (_QWORD **)Object,
              (__int64)Address,
              v46,
              0LL,
              (unsigned __int64)v44 & -(__int64)(ClientView != 0LL),
              &BugCheckParameter2,
              1,
              v30);
      if ( v22 >= 0 )
      {
        v25 = v40;
        v26 = *(_DWORD *)(v40 + 256);
        if ( AlpcpLogEnabled )
          AlpcpLogConnectRequest(v40);
        v45[0] = v24;
        v45[1] = v25;
        LODWORD(v45[6]) = 0x20000;
        v22 = AlpcpDispatchConnectionRequest(v45);
        if ( v22 < 0 )
        {
          if ( AlpcpLogEnabled )
            AlpcpLogConnectFail(v26, (unsigned int)v22);
          AlpcpUnlockMessage(v25);
        }
        else
        {
          v22 = AlpcpReceiveLegacyConnectionReply(
                  (unsigned int)v45,
                  (_DWORD)Address,
                  (unsigned int)&v31,
                  BugCheckParameter2,
                  (unsigned __int64)v44 & -(__int64)(ClientView != 0LL),
                  (unsigned __int64)&v43 & -(__int64)(ServerView != 0LL));
          if ( v22 )
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectFail(v26, (unsigned int)v22);
          }
          else
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectSuccess(v26);
            *v36 = Handle;
            if ( ClientView )
            {
              *(__m128i *)&ClientView->Length = v44[0];
              *(__m128i *)&ClientView->SectionOffset = v44[1];
              *(__m128i *)&ClientView->ViewBase = v44[2];
            }
            if ( ServerView )
              *ServerView = v43;
            if ( v41 )
              *v41 = v31;
            if ( v42 )
              *v42 = v24[68];
          }
        }
      }
      ObfDereferenceObject(v24);
      if ( BugCheckParameter2 )
        AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
      if ( v22 )
        NtClose(Handle);
    }
    goto LABEL_61;
  }
  v14 = (__int64)v36;
  if ( (unsigned __int64)v36 >= 0x7FFFFFFF0000LL )
    v14 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v14 = *(_QWORD *)v14;
  if ( ConnectionInformationLength )
  {
    v15 = (__int64)ConnectionInformationLength;
    if ( (unsigned __int64)ConnectionInformationLength >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    v31 = *(_DWORD *)v15;
    ProbeForWrite(Address, v31, 1u);
    PreviousMode = v30;
  }
  if ( ClientView )
  {
    v16 = (__int64)ClientView;
    if ( (unsigned __int64)ClientView >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    v44[0] = *(__m128i *)v16;
    v44[1] = *(__m128i *)(v16 + 16);
    v44[2] = *(__m128i *)(v16 + 32);
    if ( _mm_cvtsi128_si32(v44[0]) != 48 )
    {
      v22 = -1073741811;
      v32 = -1073741811;
      goto LABEL_61;
    }
    if ( ((unsigned __int8)ClientView & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (__int64)ClientView;
    if ( (unsigned __int64)ClientView >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v17 = *(_BYTE *)v17;
    *(_BYTE *)(v17 + 47) = *(_BYTE *)(v17 + 47);
  }
  if ( ServerView )
  {
    v18 = (__int64)ServerView;
    if ( (unsigned __int64)ServerView >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    if ( *(_DWORD *)v18 != 24 )
    {
      v22 = -1073741811;
      v32 = -1073741811;
      goto LABEL_61;
    }
    if ( ((unsigned __int8)ServerView & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = (__int64)ServerView;
    if ( (unsigned __int64)ServerView >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v19 = *(_BYTE *)v19;
    *(_BYTE *)(v19 + 23) = *(_BYTE *)(v19 + 23);
  }
  if ( MaxMessageLength )
  {
    v20 = (__int64)MaxMessageLength;
    if ( (unsigned __int64)MaxMessageLength >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
  }
  if ( SecurityQos )
  {
    v21 = (__int64)SecurityQos;
    if ( (unsigned __int64)SecurityQos >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    v47[0] = *(_QWORD *)v21;
    LODWORD(v47[1]) = *(_DWORD *)(v21 + 8);
  }
  v33 = (__int64)ServerSid;
  if ( !ServerSid )
    goto LABEL_39;
  v22 = SeCaptureSid(ServerSid, PreviousMode, 0x7FFFFFFF0000LL, v12, v28, 1, (PSID *)&v33);
  v32 = v22;
  if ( v22 >= 0 )
    goto LABEL_39;
LABEL_61:
  KeLeaveCriticalRegion();
  return v22;
}
