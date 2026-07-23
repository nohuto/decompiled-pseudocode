/*
 * XREFs of WmipQueryWmiDataBlock @ 0x1404AA13C
 * Callers:
 *     IoWMISystemControl @ 0x1404A9E3C (IoWMISystemControl.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1400C2770 (WmipUnreferenceRegEntry.c)
 *     IoGetDeviceInstanceName @ 0x14012CADC (IoGetDeviceInstanceName.c)
 *     WmipFindRegEntryByDevice @ 0x14012E36C (WmipFindRegEntryByDevice.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     IoWMICompleteRequest @ 0x1404AA288 (IoWMICompleteRequest.c)
 *     WmipGetSMBiosTableData @ 0x1404AA510 (WmipGetSMBiosTableData.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 *     WmipGetSMBiosEventlog @ 0x14069D588 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x14069D774 (WmipGetSysIds.c)
 */

__int64 __fastcall WmipQueryWmiDataBlock(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        char *a8)
{
  int *v8; // r12
  char *v9; // r14
  unsigned int v11; // esi
  _DWORD *v12; // r15
  char *v13; // rcx
  unsigned int SysIds; // edi
  int SMBiosEventlog; // eax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r13
  ULONG_PTR v20; // rcx
  unsigned __int16 v21; // cx
  wchar_t *v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 RegEntryByDevice; // rax
  __int64 v26; // rbx
  ULONG_PTR v27; // rcx
  int v28; // r13d
  unsigned __int16 Length; // bx
  __int64 v30; // rsi
  size_t v31; // rdi
  wchar_t *Buffer; // rdx
  unsigned __int16 *v33; // r14
  unsigned int v34; // [rsp+30h] [rbp-D0h] BYREF
  int DeviceInstanceName; // [rsp+34h] [rbp-CCh] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING Src; // [rsp+48h] [rbp-B8h] BYREF
  const void *v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+68h] [rbp-98h]
  const wchar_t *v41; // [rsp+70h] [rbp-90h]
  UNICODE_STRING *p_UnicodeString; // [rsp+78h] [rbp-88h]
  int v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  int v45; // [rsp+A0h] [rbp-60h]
  const wchar_t *v46; // [rsp+A8h] [rbp-58h]
  unsigned int *v47; // [rsp+B0h] [rbp-50h]
  int v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  int v50; // [rsp+D8h] [rbp-28h]
  const wchar_t *v51; // [rsp+E0h] [rbp-20h]
  int *p_DeviceInstanceName; // [rsp+E8h] [rbp-18h]
  int v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  int v55; // [rsp+110h] [rbp+10h]

  v8 = (int *)a6;
  v9 = a8;
  v38 = a2;
  v11 = 0;
  v12 = 0LL;
  switch ( a3 )
  {
    case 0u:
      RegEntryByDevice = WmipFindRegEntryByDevice(a1);
      *(_QWORD *)&Src.Length = RegEntryByDevice;
      v26 = RegEntryByDevice;
      if ( !RegEntryByDevice )
        goto LABEL_54;
      v27 = *(_QWORD *)(RegEntryByDevice + 24);
      if ( v27 )
      {
        DeviceInstanceName = IoGetDeviceInstanceName(v27, &UnicodeString);
        SysIds = DeviceInstanceName;
        if ( DeviceInstanceName < 0 )
        {
          SysIds = -1073741163;
        }
        else
        {
          v28 = UnicodeString.Length + 2;
          v11 = v28 + (a5 - 1) * ((UnicodeString.Length + 9) & 0xFFFFFFF8);
          v34 = v11;
          if ( v11 > a7 )
          {
            SysIds = -1073741789;
          }
          else
          {
            memset(a8, 0, v11);
            if ( a5 )
            {
              Length = UnicodeString.Length;
              v30 = a5;
              v31 = UnicodeString.Length;
              do
              {
                Buffer = UnicodeString.Buffer;
                *v8 = v28;
                v33 = (unsigned __int16 *)((unsigned __int64)(v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                ++v8;
                *v33++ = Length;
                memmove(v33, Buffer, v31);
                v9 = (char *)v33 + v31;
                --v30;
              }
              while ( v30 );
              SysIds = DeviceInstanceName;
              v11 = v34;
              v26 = *(_QWORD *)&Src.Length;
            }
          }
          RtlFreeAnsiString(&UnicodeString);
        }
      }
      else
      {
        SysIds = -1073741823;
      }
      v24 = v26;
      goto LABEL_53;
    case 1u:
      v18 = WmipFindRegEntryByDevice(a1);
      v19 = v18;
      if ( !v18 )
        goto LABEL_54;
      v20 = *(_QWORD *)(v18 + 24);
      if ( v20 )
      {
        SysIds = IoGetDeviceInstanceName(v20, &Src);
        if ( (SysIds & 0x80000000) != 0 )
        {
          SysIds = -1073741163;
        }
        else
        {
          v21 = Src.Length;
          v11 = Src.Length + 10;
          if ( v11 > a7 )
          {
            SysIds = -1073741789;
          }
          else
          {
            v22 = Src.Buffer;
            *(_DWORD *)a8 = 1;
            v23 = v21;
            *a6 = v11;
            *((_WORD *)a8 + 2) = v21 + 4;
            memmove(a8 + 6, v22, v21);
            *(_DWORD *)&a8[v23 + 6] = 3145823;
          }
          RtlFreeAnsiString(&Src);
        }
      }
      else
      {
        SysIds = -1073741823;
      }
      v24 = v19;
LABEL_53:
      WmipUnreferenceRegEntry(v24);
      return IoWMICompleteRequest(a1, a2, v38, SysIds, v11);
    case 2u:
      v43 = 0x4000000;
      v40 = 292;
      v41 = L"BootArchitecture";
      v45 = 292;
      p_UnicodeString = &UnicodeString;
      v48 = 0x4000000;
      v46 = L"PreferredProfile";
      v47 = &v34;
      v51 = L"Capabilities";
      v50 = 292;
      v53 = 0x4000000;
      p_DeviceInstanceName = &DeviceInstanceName;
      *(_DWORD *)&UnicodeString.Length = 0;
      v34 = 0;
      DeviceInstanceName = 0;
      v39 = 0LL;
      v44 = 0LL;
      v49 = 0LL;
      v54 = 0LL;
      v55 = 0;
      if ( (int)RtlpQueryRegistryValues(0LL, L"\\Registry\\Machine\\Hardware\\Description\\System", &v39) < 0 )
        goto LABEL_54;
      v11 = 12;
      if ( a7 >= 0xC )
      {
        *(_DWORD *)a8 = *(_DWORD *)&UnicodeString.Length;
        *((_DWORD *)a8 + 1) = v34;
        *((_DWORD *)a8 + 2) = DeviceInstanceName;
        *a6 = 12;
        goto LABEL_25;
      }
LABEL_29:
      SysIds = -1073741789;
      return IoWMICompleteRequest(a1, a2, v38, SysIds, v11);
  }
  if ( a3 != 3 )
  {
    if ( a3 > 5 )
    {
      if ( a3 == 6 )
      {
        if ( a7 )
        {
          *(_DWORD *)&UnicodeString.Length = a7;
        }
        else
        {
          *(_DWORD *)&UnicodeString.Length = 0;
          v9 = 0LL;
        }
        SMBiosEventlog = WmipGetSMBiosEventlog(v9, &UnicodeString);
        v11 = *(_DWORD *)&UnicodeString.Length;
        SysIds = SMBiosEventlog;
        if ( SMBiosEventlog >= 0 )
          goto LABEL_9;
        return IoWMICompleteRequest(a1, a2, v38, SysIds, v11);
      }
LABEL_54:
      SysIds = -1073741163;
      return IoWMICompleteRequest(a1, a2, v38, SysIds, v11);
    }
    SysIds = WmipGetSysIds(&Src, &v34, &UnicodeString, &DeviceInstanceName);
    if ( (SysIds & 0x80000000) != 0 )
      return IoWMICompleteRequest(a1, a2, v38, SysIds, v11);
    if ( a3 == 5 )
    {
      v17 = DeviceInstanceName;
      a2 = *(const void **)&UnicodeString.Length;
      v11 = 8 * DeviceInstanceName + 4;
    }
    else
    {
      v17 = v34;
      a2 = *(const void **)&Src.Length;
      v11 = 16 * v34 + 4;
    }
    if ( a7 >= v11 )
    {
      *a6 = v11;
      *(_DWORD *)a8 = v17;
      memmove(a8 + 4, a2, v11 - 4LL);
LABEL_25:
      SysIds = 0;
      return IoWMICompleteRequest(a1, a2, v38, SysIds, v11);
    }
    goto LABEL_29;
  }
  if ( a7 < 8 )
  {
    *(_DWORD *)&UnicodeString.Length = 0;
    v13 = 0LL;
  }
  else
  {
    v12 = a8 + 4;
    *(_DWORD *)&UnicodeString.Length = a7 - 8;
    v13 = a8 + 8;
  }
  SysIds = WmipGetSMBiosTableData(v13);
  v11 = *(_DWORD *)&UnicodeString.Length + 8;
  if ( (SysIds & 0x80000000) == 0 )
  {
    *v12 = *(_DWORD *)&UnicodeString.Length;
LABEL_9:
    *a6 = v11;
  }
  return IoWMICompleteRequest(a1, a2, v38, SysIds, v11);
}
