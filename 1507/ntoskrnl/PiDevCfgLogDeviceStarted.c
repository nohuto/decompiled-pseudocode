/*
 * XREFs of PiDevCfgLogDeviceStarted @ 0x140687ACC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     PipIsDevNodeDNStarted @ 0x1400CFD80 (PipIsDevNodeDNStarted.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     Template_zzjzzzqq @ 0x1401FC244 (Template_zzjzzzqq.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 */

void __fastcall PiDevCfgLogDeviceStarted(__int64 a1)
{
  char v2; // di
  __int64 v3; // rdx
  wchar_t *Buffer; // r8
  unsigned __int16 Length; // cx
  unsigned int v6; // r9d
  __int64 v7; // rdx
  wchar_t *v8; // r9
  unsigned __int16 v9; // cx
  unsigned int v10; // r10d
  __int64 v11; // rdx
  int v12; // r10d
  int v13; // edx
  wchar_t *v14; // r10
  const wchar_t *v15; // rdx
  wchar_t *v16; // r11
  const wchar_t *v17; // rcx
  wchar_t *v18; // r10
  int *v19; // rdx
  const wchar_t *v20; // rcx
  wchar_t *v21; // r11
  const EVENT_DESCRIPTOR *v22; // rdx
  int *v23; // rdx
  const wchar_t *v24; // [rsp+40h] [rbp-C0h]
  int v25; // [rsp+48h] [rbp-B8h]
  char v26; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING v27; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v28; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v31[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v32[26]; // [rsp+B0h] [rbp-50h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v2 = 0;
  *(_DWORD *)&v27.Length = 0;
  v27.Buffer = 0LL;
  *(_DWORD *)&v28.Length = 0;
  v28.Buffer = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x180000) == 0x180000 )
  {
    memset(v32, 0, 0xC8uLL);
    HIDWORD(v32[8]) = 6;
    LODWORD(v32[6]) = 18;
    v32[0] = &DEVPKEY_Device_ClassGuid;
    LODWORD(v32[11]) = 18;
    v32[2] = v31;
    HIDWORD(v32[13]) = 6;
    v32[5] = &DEVPKEY_Device_DriverInfPath;
    HIDWORD(v32[18]) = 6;
    v32[7] = &DestinationString;
    v32[10] = &DEVPKEY_Device_Service;
    v32[12] = &UnicodeString;
    v32[15] = &DEVPKEY_Device_LowerFilters;
    v32[17] = &v27;
    v32[20] = &DEVPKEY_Device_UpperFilters;
    v32[22] = &v28;
    HIDWORD(v32[23]) = 6;
    v3 = *(_QWORD *)(a1 + 48);
    LODWORD(v32[1]) = 13;
    LODWORD(v32[3]) = 16;
    LODWORD(v32[16]) = 8210;
    LODWORD(v32[21]) = 8210;
    if ( (int)PiDevCfgQueryObjectProperties(8210LL, v3, 1u, 0LL, (__int64)v32, 5u) >= 0 )
    {
      if ( SLODWORD(v32[4]) < 0 )
      {
        v31[0] = 0LL;
        v31[1] = 0LL;
      }
      if ( SLODWORD(v32[9]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( SLODWORD(v32[14]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v32[19]) < 0 )
        RtlInitUnicodeString(&v27, 0LL);
      if ( SLODWORD(v32[24]) < 0 )
        RtlInitUnicodeString(&v28, 0LL);
      Buffer = v27.Buffer;
      if ( v27.Buffer )
      {
        Length = v27.Length;
        if ( v27.Length > 4u )
        {
          v6 = 0;
          if ( (unsigned __int64)v27.Length >> 1 != 2 )
          {
            v7 = 0LL;
            do
            {
              if ( !Buffer[v7] )
              {
                Buffer[v7] = 32;
                Buffer = v27.Buffer;
                Length = v27.Length;
              }
              v7 = ++v6;
            }
            while ( v6 < ((unsigned __int64)Length >> 1) - 2 );
          }
          v27.Length = Length - 2;
        }
      }
      v8 = v28.Buffer;
      if ( v28.Buffer )
      {
        v9 = v28.Length;
        if ( v28.Length > 4u )
        {
          v10 = 0;
          if ( (unsigned __int64)v28.Length >> 1 != 2 )
          {
            v11 = 0LL;
            do
            {
              if ( !v8[v11] )
              {
                v8[v11] = 32;
                v8 = v28.Buffer;
                v9 = v28.Length;
              }
              v11 = ++v10;
            }
            while ( v10 < ((unsigned __int64)v9 >> 1) - 2 );
            Buffer = v27.Buffer;
          }
          v28.Length = v9 - 2;
        }
      }
      v12 = *(_DWORD *)(a1 + 396);
      v13 = v12 & 0x6000;
      if ( (v12 & 0x6000) == 0 && !PipIsDevNodeDNStarted(a1) )
        v2 = -27;
      if ( v13 )
      {
        if ( (v12 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 )
        {
          if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x200000) == 0 )
            goto LABEL_67;
          v18 = (wchar_t *)&dword_140727324;
          v26 = v2;
          v19 = &dword_140727324;
          LOBYTE(v25) = 14;
          v20 = (const wchar_t *)&dword_140727324;
          v21 = L"null";
          if ( DestinationString.Buffer )
            v21 = DestinationString.Buffer;
          if ( v8 )
            v19 = (int *)v8;
          v24 = (const wchar_t *)v19;
          v22 = (const EVENT_DESCRIPTOR *)&KMPnPEvt_DeviceStart_RebootRequired;
          if ( Buffer )
            v20 = Buffer;
          if ( UnicodeString.Buffer )
            v18 = UnicodeString.Buffer;
        }
        else
        {
          if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x100000) == 0 )
            goto LABEL_67;
          v18 = (wchar_t *)&dword_140727324;
          v26 = v2;
          v23 = &dword_140727324;
          v21 = L"null";
          if ( DestinationString.Buffer )
            v21 = DestinationString.Buffer;
          v20 = (const wchar_t *)&dword_140727324;
          if ( v8 )
            v23 = (int *)v8;
          if ( Buffer )
            v20 = Buffer;
          if ( UnicodeString.Buffer )
            v18 = UnicodeString.Buffer;
          v25 = *(_DWORD *)(a1 + 404);
          v24 = (const wchar_t *)v23;
          v22 = (const EVENT_DESCRIPTOR *)&KMPnPEvt_DeviceStart_Failure;
        }
        Template_zzjzzzqq(
          (__int64)v20,
          v22,
          (__int64)Buffer,
          *(const wchar_t **)(a1 + 48),
          v21,
          (__int64)v31,
          v18,
          v20,
          v24,
          v25,
          v26);
        goto LABEL_67;
      }
      if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x80000) != 0 )
      {
        v14 = (wchar_t *)&dword_140727324;
        v15 = (const wchar_t *)&dword_140727324;
        v16 = L"null";
        if ( DestinationString.Buffer )
          v16 = DestinationString.Buffer;
        v17 = (const wchar_t *)&dword_140727324;
        if ( v8 )
          v15 = v8;
        if ( Buffer )
          v17 = Buffer;
        if ( UnicodeString.Buffer )
          v14 = UnicodeString.Buffer;
        Template_zzjzzzqq(
          (__int64)v17,
          &KMPnPEvt_DeviceStart_Success,
          (__int64)Buffer,
          *(const wchar_t **)(a1 + 48),
          v16,
          (__int64)v31,
          v14,
          v17,
          v15,
          *(_DWORD *)(a1 + 404),
          v2);
      }
    }
  }
LABEL_67:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v27);
  RtlFreeAnsiString(&v28);
}
