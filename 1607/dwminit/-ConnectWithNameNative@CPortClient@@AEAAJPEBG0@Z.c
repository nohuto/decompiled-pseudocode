/*
 * XREFs of ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x180005C00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003F6C (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x180004B1C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     __security_check_cookie @ 0x180006E30 (__security_check_cookie.c)
 *     memset_0 @ 0x18000818E (memset_0.c)
 */

__int64 __fastcall CPortClient::ConnectWithNameNative(CPortClient *this, const unsigned __int16 *a2, char *a3)
{
  DWORD v4; // ebx
  const struct reg_FeatureDescriptor *v6; // rcx
  NTSTATUS v7; // eax
  _WORD *v8; // rcx
  __int64 v9; // rdx
  __int16 v10; // ax
  HANDLE ProcessHeap; // rax
  _DWORD *v12; // rax
  struct _PORT_VIEW *v13; // r9
  unsigned int ServerView; // [rsp+20h] [rbp-E0h]
  ULONG ConnectionInformationLength; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v19[4]; // [rsp+90h] [rbp-70h] BYREF
  int v20; // [rsp+94h] [rbp-6Ch]
  int v21; // [rsp+98h] [rbp-68h]
  __int16 v22; // [rsp+9Ch] [rbp-64h]
  __int64 v23; // [rsp+A0h] [rbp-60h]
  _BYTE v24[192]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( EvaluateCurrentState(v6) )
  {
    memset_0(v19, 0, 0x48uLL);
    v20 = 12;
    v21 = 1;
    v22 = 257;
    v23 = 512LL;
    v7 = NtAlpcConnectPort((char *)this + 48, &DestinationString, 0LL, v19, 0x20000, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( v7 < 0 )
    {
      ServerView = 311;
LABEL_4:
      v4 = v7 | 0x10000000;
      MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, v7 | 0x10000000, ServerView);
      return v4;
    }
LABEL_26:
    *((_BYTE *)this + 56) = 1;
    return v4;
  }
  SecurityQos.Length = 12;
  SecurityQos.ImpersonationLevel = SecurityIdentification;
  *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
  if ( !a3 )
  {
    ConnectionInformationLength = 0;
    goto LABEL_16;
  }
  ConnectionInformationLength = 188;
  v8 = v24;
  v9 = 94LL;
  do
  {
    if ( v9 == -2147483552 )
      break;
    v10 = *(_WORD *)((char *)v8 + a3 - v24);
    if ( !v10 )
      break;
    *v8++ = v10;
    --v9;
  }
  while ( v9 );
  if ( !v9 )
  {
    --v8;
    v4 = -2147024774;
  }
  *v8 = 0;
  if ( (v4 & 0x80000000) == 0 )
  {
LABEL_16:
    if ( !*((_QWORD *)this + 10) && *((_DWORD *)this + 15) )
    {
      ProcessHeap = GetProcessHeap();
      v12 = HeapAlloc(ProcessHeap, 8u, 0x30uLL);
      *((_QWORD *)this + 10) = v12;
      if ( !v12 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, 0x8007000E, 0x155u);
        return v4;
      }
      *v12 = 48;
      *(_DWORD *)(*((_QWORD *)this + 10) + 16LL) = 0;
      *(_QWORD *)(*((_QWORD *)this + 10) + 24LL) = *((unsigned int *)this + 15);
      *(_QWORD *)(*((_QWORD *)this + 10) + 8LL) = *((_QWORD *)this + 9);
    }
    v13 = (struct _PORT_VIEW *)*((_QWORD *)this + 10);
    if ( !v13 || !v13->SectionHandle )
      v13 = 0LL;
    v7 = NtConnectPort(
           (PHANDLE)this + 6,
           &DestinationString,
           &SecurityQos,
           v13,
           0LL,
           0LL,
           (PVOID)((unsigned __int64)v24 & -(__int64)(a3 != 0LL)),
           &ConnectionInformationLength);
    if ( v7 < 0 )
    {
      ServerView = 358;
      goto LABEL_4;
    }
    goto LABEL_26;
  }
  MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, v4, 0x148u);
  return v4;
}
