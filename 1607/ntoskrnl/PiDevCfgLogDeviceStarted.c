/*
 * XREFs of PiDevCfgLogDeviceStarted @ 0x14063A2D0
 * Callers:
 *     PipProcessDevNodeTree @ 0x1403F30A4 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x14000932C (PipIsDevNodeDNStarted.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpGetLogString @ 0x1401CF240 (PnpGetLogString.c)
 *     Template_zzjzzzqq @ 0x1401CF8B8 (Template_zzjzzzqq.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 */

void __fastcall PiDevCfgLogDeviceStarted(__int64 a1)
{
  __int64 v2; // rdx
  wchar_t *Buffer; // rdx
  unsigned __int16 Length; // cx
  unsigned int v5; // r9d
  __int64 v6; // r8
  wchar_t *v7; // rdx
  unsigned __int16 v8; // cx
  unsigned int v9; // r9d
  __int64 v10; // r8
  int v11; // r8d
  int v12; // edx
  int *v13; // rax
  const wchar_t *v14; // rdx
  const wchar_t *v15; // r8
  const wchar_t *v16; // r9
  char v17; // r10
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
  UNICODE_STRING v29; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v30; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v33[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v34[26]; // [rsp+B0h] [rbp-50h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v29.Length = 0;
  v29.Buffer = 0LL;
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
    v34[7] = &DestinationString;
    v34[10] = &DEVPKEY_Device_Service;
    v34[12] = &UnicodeString;
    v34[15] = &DEVPKEY_Device_LowerFilters;
    v34[17] = &v29;
    v34[20] = &DEVPKEY_Device_UpperFilters;
    v34[22] = &v30;
    HIDWORD(v34[23]) = 6;
    v2 = *(_QWORD *)(a1 + 48);
    LODWORD(v34[1]) = 13;
    LODWORD(v34[3]) = 16;
    LODWORD(v34[16]) = 8210;
    LODWORD(v34[21]) = 8210;
    if ( (int)PiDevCfgQueryObjectProperties(8210LL, v2, 1u, 0LL, (__int64)v34, 5u) >= 0 )
    {
      if ( SLODWORD(v34[4]) < 0 )
      {
        v33[0] = 0LL;
        v33[1] = 0LL;
      }
      if ( SLODWORD(v34[9]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( SLODWORD(v34[14]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v34[19]) < 0 )
        RtlInitUnicodeString(&v29, 0LL);
      if ( SLODWORD(v34[24]) < 0 )
        RtlInitUnicodeString(&v30, 0LL);
      Buffer = v29.Buffer;
      if ( v29.Buffer )
      {
        Length = v29.Length;
        if ( v29.Length > 4u )
        {
          v5 = 0;
          if ( (unsigned __int64)v29.Length >> 1 != 2 )
          {
            v6 = 0LL;
            do
            {
              if ( !Buffer[v6] )
              {
                Buffer[v6] = 32;
                Buffer = v29.Buffer;
                Length = v29.Length;
              }
              v6 = ++v5;
            }
            while ( v5 < ((unsigned __int64)Length >> 1) - 2 );
          }
          v29.Length = Length - 2;
        }
      }
      v7 = v30.Buffer;
      if ( v30.Buffer )
      {
        v8 = v30.Length;
        if ( v30.Length > 4u )
        {
          v9 = 0;
          if ( (unsigned __int64)v30.Length >> 1 != 2 )
          {
            v10 = 0LL;
            do
            {
              if ( !v7[v10] )
              {
                v7[v10] = 32;
                v7 = v30.Buffer;
                v8 = v30.Length;
              }
              v10 = ++v9;
            }
            while ( v9 < ((unsigned __int64)v8 >> 1) - 2 );
          }
          v30.Length = v8 - 2;
        }
      }
      v11 = *(_DWORD *)(a1 + 396);
      v12 = v11 & 0x6000;
      if ( (v11 & 0x6000) == 0 )
        PipIsDevNodeDNStarted(a1);
      if ( v12 || !PipIsDevNodeDNStarted(a1) )
      {
        if ( (v11 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 )
        {
          if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x200000) != 0 )
          {
            PnpGetLogString((__int64)&v30);
            PnpGetLogString((__int64)&v29);
            LogString = PnpGetLogString((__int64)&UnicodeString);
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
          PnpGetLogString((__int64)&v29);
          v24 = PnpGetLogString((__int64)&UnicodeString);
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
        PnpGetLogString((__int64)&v29);
        v13 = PnpGetLogString((__int64)&UnicodeString);
        Template_zzjzzzqq(
          *(unsigned int *)(a1 + 404),
          &KMPnPEvt_DeviceStart_Success,
          (__int64)v15,
          *(const wchar_t **)(a1 + 48),
          v16,
          (__int64)v33,
          (const wchar_t *)v13,
          v14,
          v15,
          *(_DWORD *)(a1 + 404),
          v17);
      }
    }
  }
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v29);
  RtlFreeAnsiString(&v30);
}
