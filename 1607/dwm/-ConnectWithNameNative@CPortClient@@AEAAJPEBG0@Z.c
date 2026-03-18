/*
 * XREFs of ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x140004D60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001A90 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1400030F0 (__security_check_cookie.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14000481C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x140004AA8 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall CPortClient::ConnectWithNameNative(CPortClient *this, const unsigned __int16 *a2, char *a3)
{
  unsigned int v4; // edi
  const struct reg_FeatureDescriptor *v6; // rcx
  __int64 v7; // rdx
  NTSTATUS v8; // esi
  unsigned int v9; // esi
  int v11; // eax
  HANDLE ProcessHeap; // rax
  _DWORD *v13; // rax
  struct _PORT_VIEW *v14; // r9
  unsigned __int16 *ConnectionInformation; // rax
  unsigned int ServerView; // [rsp+20h] [rbp-E0h]
  ULONG ConnectionInformationLength; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v20[10]; // [rsp+90h] [rbp-70h] BYREF
  char v21[192]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( EvaluateCurrentState(v6) )
  {
    v20[0] = 0xC00000000LL;
    memset(&v20[3], 0, 48);
    v20[1] = 0x10100000001LL;
    v20[2] = 512LL;
    v8 = NtAlpcConnectPort((char *)this + 48, &DestinationString, 0LL, v20, 0x20000, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( v8 < 0 )
    {
      ServerView = 311;
LABEL_4:
      v9 = v8 | 0x10000000;
      MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, v9, ServerView);
      return v9;
    }
LABEL_21:
    *((_BYTE *)this + 56) = 1;
    return v4;
  }
  SecurityQos.Length = 12;
  SecurityQos.ImpersonationLevel = SecurityIdentification;
  *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
  if ( !a3 )
  {
    ConnectionInformationLength = 0;
LABEL_9:
    if ( !*((_QWORD *)this + 10) && *((_DWORD *)this + 15) )
    {
      ProcessHeap = GetProcessHeap();
      v13 = HeapAlloc(ProcessHeap, 8u, 0x30uLL);
      *((_QWORD *)this + 10) = v13;
      if ( !v13 )
      {
        MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024882, 0x155u);
        return 2147942414LL;
      }
      *v13 = 48;
      *(_DWORD *)(*((_QWORD *)this + 10) + 16LL) = 0;
      *(_QWORD *)(*((_QWORD *)this + 10) + 24LL) = *((unsigned int *)this + 15);
      *(_QWORD *)(*((_QWORD *)this + 10) + 8LL) = *((_QWORD *)this + 9);
    }
    v14 = (struct _PORT_VIEW *)*((_QWORD *)this + 10);
    ConnectionInformation = (unsigned __int16 *)v21;
    if ( !a3 )
      ConnectionInformation = 0LL;
    if ( !v14 || !v14->SectionHandle )
      v14 = 0LL;
    v8 = NtConnectPort(
           (PHANDLE)this + 6,
           &DestinationString,
           &SecurityQos,
           v14,
           0LL,
           0LL,
           ConnectionInformation,
           &ConnectionInformationLength);
    if ( v8 < 0 )
    {
      ServerView = 358;
      goto LABEL_4;
    }
    goto LABEL_21;
  }
  ConnectionInformationLength = 188;
  v11 = StringCchCopyW(v21, v7, a3);
  v4 = v11;
  if ( v11 >= 0 )
    goto LABEL_9;
  MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, v11, 0x148u);
  return v4;
}
