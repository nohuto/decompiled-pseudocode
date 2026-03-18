/*
 * XREFs of PiDevCfgLogDeviceStarted @ 0x1405130C4
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PipIsDevNodeDNStarted @ 0x1400998AC (PipIsDevNodeDNStarted.c)
 *     PnpGetLogString @ 0x14012C398 (PnpGetLogString.c)
 *     Template_zzjzzzqq @ 0x14012C3B0 (Template_zzjzzzqq.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 */

void __fastcall PiDevCfgLogDeviceStarted(__int64 a1)
{
  __int64 v2; // rdx
  wchar_t *Buffer; // rdx
  wchar_t *v4; // rdx
  int v5; // r8d
  int v6; // edx
  int *v7; // rax
  const wchar_t *v8; // rdx
  const wchar_t *v9; // r8
  const wchar_t *v10; // r9
  char v11; // r10
  unsigned __int16 Length; // cx
  unsigned int v13; // r9d
  __int64 v14; // r8
  unsigned __int16 v15; // cx
  unsigned int v16; // r9d
  __int64 v17; // r8
  int *LogString; // rax
  const wchar_t *v19; // rdx
  __int64 v20; // rcx
  const wchar_t *v21; // r8
  const wchar_t *v22; // r9
  char v23; // r10
  int *v24; // rax
  const wchar_t *v25; // rdx
  const wchar_t *v26; // r8
  const wchar_t *v27; // r9
  char v28; // r10
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v30; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v32; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v33[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v34[26]; // [rsp+B0h] [rbp-50h] BYREF

  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v32.Length = 0;
  v32.Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&v30.Length = 0;
  v30.Buffer = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x180000) == 0x180000 )
  {
    memset(v34, 0, 0xC8uLL);
    HIDWORD(v34[8]) = 6;
    LODWORD(v34[6]) = 18;
    v34[0] = &DEVPKEY_Device_ClassGuid;
    LODWORD(v34[11]) = 18;
    v34[2] = v33;
    HIDWORD(v34[13]) = 6;
    v34[5] = &DEVPKEY_Device_DriverInfPath;
    HIDWORD(v34[18]) = 6;
    v34[7] = &UnicodeString;
    v34[10] = &DEVPKEY_Device_Service;
    v34[12] = &v32;
    v34[15] = &DEVPKEY_Device_LowerFilters;
    v34[17] = &DestinationString;
    v34[20] = &DEVPKEY_Device_UpperFilters;
    v34[22] = &v30;
    HIDWORD(v34[23]) = 6;
    v2 = *(_QWORD *)(a1 + 48);
    LODWORD(v34[1]) = 13;
    LODWORD(v34[3]) = 16;
    LODWORD(v34[16]) = 8210;
    LODWORD(v34[21]) = 8210;
    if ( (int)PiDevCfgQueryObjectProperties(8210, v2, 1, 0, (__int64)v34, 5) >= 0 )
    {
      if ( SLODWORD(v34[4]) < 0 )
      {
        v33[0] = 0LL;
        v33[1] = 0LL;
      }
      if ( SLODWORD(v34[9]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v34[14]) < 0 )
        RtlInitUnicodeString(&v32, 0LL);
      if ( SLODWORD(v34[19]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( SLODWORD(v34[24]) < 0 )
        RtlInitUnicodeString(&v30, 0LL);
      Buffer = DestinationString.Buffer;
      if ( DestinationString.Buffer )
      {
        Length = DestinationString.Length;
        if ( DestinationString.Length > 4u )
        {
          v13 = 0;
          if ( (unsigned __int64)DestinationString.Length >> 1 != 2 )
          {
            v14 = 0LL;
            do
            {
              if ( !Buffer[v14] )
              {
                Buffer[v14] = 32;
                Buffer = DestinationString.Buffer;
                Length = DestinationString.Length;
              }
              v14 = ++v13;
            }
            while ( v13 < ((unsigned __int64)Length >> 1) - 2 );
          }
          DestinationString.Length = Length - 2;
        }
      }
      v4 = v30.Buffer;
      if ( v30.Buffer )
      {
        v15 = v30.Length;
        if ( v30.Length > 4u )
        {
          v16 = 0;
          if ( (unsigned __int64)v30.Length >> 1 != 2 )
          {
            v17 = 0LL;
            do
            {
              if ( !v4[v17] )
              {
                v4[v17] = 32;
                v4 = v30.Buffer;
                v15 = v30.Length;
              }
              v17 = ++v16;
            }
            while ( v16 < ((unsigned __int64)v15 >> 1) - 2 );
          }
          v30.Length = v15 - 2;
        }
      }
      v5 = *(_DWORD *)(a1 + 396);
      v6 = v5 & 0x6000;
      if ( (v5 & 0x6000) == 0 )
        PipIsDevNodeDNStarted(a1);
      if ( v6 || !PipIsDevNodeDNStarted(a1) )
      {
        if ( (v5 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 )
        {
          if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x200000) != 0 )
          {
            PnpGetLogString((__int64)&v30);
            PnpGetLogString((__int64)&DestinationString);
            LogString = PnpGetLogString((__int64)&v32);
            Template_zzjzzzqq(
              v20,
              &KMPnPEvt_DeviceStart_RebootRequired,
              (__int64)v21,
              *(const wchar_t **)(a1 + 48),
              v22,
              (__int64)v33,
              (const wchar_t *)LogString,
              v19,
              v21,
              14,
              v23);
          }
        }
        else if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x100000) != 0 )
        {
          PnpGetLogString((__int64)&v30);
          PnpGetLogString((__int64)&DestinationString);
          v24 = PnpGetLogString((__int64)&v32);
          Template_zzjzzzqq(
            *(unsigned int *)(a1 + 404),
            &KMPnPEvt_DeviceStart_Failure,
            (__int64)v26,
            *(const wchar_t **)(a1 + 48),
            v27,
            (__int64)v33,
            (const wchar_t *)v24,
            v25,
            v26,
            *(_DWORD *)(a1 + 404),
            v28);
        }
      }
      else if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x80000) != 0 )
      {
        PnpGetLogString((__int64)&v30);
        PnpGetLogString((__int64)&DestinationString);
        v7 = PnpGetLogString((__int64)&v32);
        Template_zzjzzzqq(
          *(unsigned int *)(a1 + 404),
          &KMPnPEvt_DeviceStart_Success,
          (__int64)v9,
          *(const wchar_t **)(a1 + 48),
          v10,
          (__int64)v33,
          (const wchar_t *)v7,
          v8,
          v9,
          *(_DWORD *)(a1 + 404),
          v11);
      }
    }
  }
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v32);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v30);
}
