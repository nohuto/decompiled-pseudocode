/*
 * XREFs of ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x140004F50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001960 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x140003130 (__security_check_cookie.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140004AB4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CPortClient::ConnectWithNameNative(HANDLE *this, const unsigned __int16 *a2, char *a3)
{
  unsigned int v4; // edi
  __int64 v6; // rdx
  int v7; // eax
  _DWORD *v8; // rax
  struct _PORT_VIEW *v10; // r9
  unsigned __int16 *ConnectionInformation; // rax
  NTSTATUS v12; // eax
  unsigned int v13; // esi
  ULONG ConnectionInformationLength; // [rsp+40h] [rbp-118h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-110h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+58h] [rbp-100h] BYREF
  char v17[192]; // [rsp+70h] [rbp-E8h] BYREF

  v4 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  SecurityQos.Length = 12;
  SecurityQos.ImpersonationLevel = SecurityIdentification;
  *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
  if ( a3 )
  {
    ConnectionInformationLength = 188;
    v7 = StringCchCopyW(v17, v6, a3);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, v7, 0xF5u);
      return v4;
    }
  }
  else
  {
    ConnectionInformationLength = 0;
  }
  if ( !this[9] && *((_DWORD *)this + 15) )
  {
    v8 = HeapAlloc(this[10], 8u, 0x30uLL);
    this[9] = v8;
    if ( !v8 )
    {
      MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024882, 0x102u);
      return 2147942414LL;
    }
    *v8 = 48;
    *((_DWORD *)this[9] + 4) = 0;
    *((_QWORD *)this[9] + 3) = *((unsigned int *)this + 15);
    *((_QWORD *)this[9] + 1) = this[8];
  }
  v10 = (struct _PORT_VIEW *)this[9];
  ConnectionInformation = (unsigned __int16 *)v17;
  if ( !a3 )
    ConnectionInformation = 0LL;
  if ( !v10 || !v10->SectionHandle )
    v10 = 0LL;
  v12 = NtConnectPort(
          this + 6,
          &DestinationString,
          &SecurityQos,
          v10,
          0LL,
          0LL,
          ConnectionInformation,
          &ConnectionInformationLength);
  if ( v12 < 0 )
  {
    v13 = v12 | 0x10000000;
    MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, v12 | 0x10000000, 0x113u);
    return v13;
  }
  *((_BYTE *)this + 56) = 1;
  return v4;
}
