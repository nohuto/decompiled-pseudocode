/*
 * XREFs of ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x180005640
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003DE4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800067F0 (__security_check_cookie.c)
 */

__int64 __fastcall CPortClient::ConnectWithNameNative(HANDLE *this, const unsigned __int16 *a2, char *a3)
{
  UINT v4; // ebx
  __int64 v6; // rcx
  _WORD *v7; // rdx
  __int16 v8; // ax
  _DWORD *v9; // rax
  struct _PORT_VIEW *v10; // r9
  NTSTATUS v11; // eax
  ULONG ConnectionInformationLength; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v16[192]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  SecurityQos.Length = 12;
  SecurityQos.ImpersonationLevel = SecurityIdentification;
  *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
  if ( a3 )
  {
    ConnectionInformationLength = 188;
    v6 = 94LL;
    v7 = v16;
    do
    {
      if ( v6 == -2147483552 )
        break;
      v8 = *(_WORD *)((char *)v7 + a3 - v16);
      if ( !v8 )
        break;
      *v7++ = v8;
      --v6;
    }
    while ( v6 );
    if ( !v6 )
    {
      --v7;
      v4 = -2147024774;
    }
    *v7 = 0;
    if ( (v4 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, v4, 0xF5u);
      return v4;
    }
  }
  else
  {
    ConnectionInformationLength = 0;
  }
  if ( !this[9] && *((_DWORD *)this + 15) )
  {
    v9 = HeapAlloc(this[10], 8u, 0x30uLL);
    this[9] = v9;
    if ( !v9 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, 0x8007000E, 0x102u);
      return v4;
    }
    *v9 = 48;
    *((_DWORD *)this[9] + 4) = 0;
    *((_QWORD *)this[9] + 3) = *((unsigned int *)this + 15);
    *((_QWORD *)this[9] + 1) = this[8];
  }
  v10 = (struct _PORT_VIEW *)this[9];
  if ( !v10 || !v10->SectionHandle )
    v10 = 0LL;
  v11 = NtConnectPort(
          this + 6,
          &DestinationString,
          &SecurityQos,
          v10,
          0LL,
          0LL,
          (PVOID)((unsigned __int64)v16 & -(__int64)(a3 != 0LL)),
          &ConnectionInformationLength);
  if ( v11 >= 0 )
  {
    *((_BYTE *)this + 56) = 1;
  }
  else
  {
    v4 = v11 | 0x10000000;
    MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, v11 | 0x10000000, 0x113u);
  }
  return v4;
}
