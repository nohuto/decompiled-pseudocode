/*
 * XREFs of PiAuditDeviceOperation @ 0x140617A00
 * Callers:
 *     PiPnpRtlSetObjectProperty @ 0x1404E5D38 (PiPnpRtlSetObjectProperty.c)
 *     PiAuditDeviceEnableDisableAction @ 0x140617994 (PiAuditDeviceEnableDisableAction.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x1406179C4 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceStart @ 0x140617FD4 (PiAuditDeviceStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     PnpFindAlternateStringData @ 0x1404B7284 (PnpFindAlternateStringData.c)
 *     SeAuditPlugAndPlay @ 0x14064E960 (SeAuditPlugAndPlay.c)
 */

__int64 __fastcall PiAuditDeviceOperation(__int64 a1, int a2, char a3)
{
  void *v4; // r12
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int v10; // ebx
  int v11; // r14d
  SIZE_T i; // rdx
  PVOID PoolWithTag; // rax
  void *v14; // r13
  int ObjectProperty; // eax
  __int16 v16; // ax
  SIZE_T v17; // rdx
  PVOID v18; // rax
  void *v19; // r15
  int v20; // eax
  __int16 v21; // ax
  SIZE_T v22; // rdx
  PVOID v23; // rax
  int v24; // eax
  __int16 v25; // ax
  __int64 v26; // rdx
  SIZE_T k; // rdx
  PVOID v28; // rax
  void *v29; // rsi
  int v30; // eax
  _WORD *v31; // rax
  _WORD *v32; // rdi
  int m; // eax
  _WORD *v34; // rax
  int AlternateStringData; // eax
  const WCHAR *v36; // rdx
  int v38; // [rsp+68h] [rbp-69h] BYREF
  unsigned int v39; // [rsp+6Ch] [rbp-65h] BYREF
  unsigned int v40; // [rsp+70h] [rbp-61h] BYREF
  unsigned int NumberOfBytes; // [rsp+74h] [rbp-5Dh] BYREF
  char NumberOfBytes_4; // [rsp+78h] [rbp-59h]
  unsigned int j; // [rsp+7Ch] [rbp-55h] BYREF
  unsigned int v44; // [rsp+80h] [rbp-51h] BYREF
  int v45; // [rsp+84h] [rbp-4Dh] BYREF
  __int64 v46; // [rsp+88h] [rbp-49h]
  int v47; // [rsp+90h] [rbp-41h] BYREF
  _WORD v48[4]; // [rsp+98h] [rbp-39h] BYREF
  void *v49; // [rsp+A0h] [rbp-31h]
  const WCHAR *v50; // [rsp+A8h] [rbp-29h] BYREF
  _WORD v51[4]; // [rsp+B0h] [rbp-21h] BYREF
  void *v52; // [rsp+B8h] [rbp-19h]
  _WORD v53[4]; // [rsp+C0h] [rbp-11h] BYREF
  void *v54; // [rsp+C8h] [rbp-9h]
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-1h] BYREF
  UNICODE_STRING v56; // [rsp+E0h] [rbp+Fh] BYREF
  _QWORD v57[2]; // [rsp+F0h] [rbp+1Fh] BYREF

  NumberOfBytes_4 = a3;
  v46 = a1;
  v4 = 0LL;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 1 )
                return (unsigned int)-1073741823;
              v11 = 6;
            }
            else
            {
              v11 = 5;
            }
          }
          else
          {
            v11 = 4;
          }
        }
        else
        {
          v11 = 3;
        }
      }
      else
      {
        v11 = 2;
      }
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v11 = 0;
  }
  NumberOfBytes = 512;
  for ( i = 512LL; ; i = NumberOfBytes )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, i, 0x20207050u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(a1 + 8),
                       1u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_HardwareIds,
                       (__int64)&v38,
                       (__int64)PoolWithTag,
                       NumberOfBytes,
                       (__int64)&NumberOfBytes,
                       0);
    if ( ObjectProperty != -1073741789 )
      break;
    ExFreePoolWithTag(v14, 0);
  }
  if ( ObjectProperty >= 0 && v38 == 8210 )
  {
    v16 = NumberOfBytes;
  }
  else
  {
    ExFreePoolWithTag(v14, 0);
    v16 = 0;
    v14 = 0LL;
    NumberOfBytes = 0;
  }
  v51[0] = v16;
  v17 = 512LL;
  v51[1] = v16;
  v52 = v14;
  for ( j = 512; ; v17 = j )
  {
    v18 = ExAllocatePoolWithTag(PagedPool, v17, 0x20207050u);
    v19 = v18;
    if ( !v18 )
    {
      v10 = -1073741670;
      goto LABEL_74;
    }
    v20 = PnpGetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            *(_QWORD *)(a1 + 8),
            1u,
            0LL,
            0LL,
            (__int64)&DEVPKEY_Device_CompatibleIds,
            (__int64)&v38,
            (__int64)v18,
            j,
            (__int64)&j,
            0);
    if ( v20 != -1073741789 )
      break;
    ExFreePoolWithTag(v19, 0);
  }
  if ( v20 >= 0 && v38 == 8210 )
  {
    v21 = j;
  }
  else
  {
    ExFreePoolWithTag(v19, 0);
    v21 = 0;
    v19 = 0LL;
    j = 0;
  }
  v22 = 64LL;
  v48[0] = v21;
  v39 = 64;
  v48[1] = v21;
  v49 = v19;
  while ( 1 )
  {
    v23 = ExAllocatePoolWithTag(PagedPool, v22, 0x20207050u);
    v4 = v23;
    if ( !v23 )
      break;
    v24 = PnpGetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            *(_QWORD *)(a1 + 8),
            1u,
            0LL,
            0LL,
            (__int64)&DEVPKEY_Device_LocationInfo,
            (__int64)&v38,
            (__int64)v23,
            v39,
            (__int64)&v39,
            0);
    if ( v24 != -1073741789 )
    {
      if ( v24 >= 0 && v38 == 18 )
      {
        v25 = v39;
      }
      else
      {
        ExFreePoolWithTag(v4, 0);
        v25 = 0;
        v4 = 0LL;
        v39 = 0;
      }
      v26 = *(_QWORD *)(a1 + 8);
      v53[0] = v25;
      v53[1] = v25;
      v45 = 16;
      v54 = v4;
      if ( (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  v26,
                  1u,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_Device_ClassGuid,
                  (__int64)&v38,
                  (__int64)v57,
                  16,
                  (__int64)&v45,
                  0) < 0
        || v38 != 13
        || v45 != 16 )
      {
        v57[0] = 0LL;
        v57[1] = 0LL;
      }
      v44 = 32;
      for ( k = 32LL; ; k = v44 )
      {
        v28 = ExAllocatePoolWithTag(PagedPool, k, 0x20207050u);
        v29 = v28;
        if ( !v28 )
          goto LABEL_35;
        v30 = PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a1 + 8),
                1u,
                0LL,
                0LL,
                (__int64)&DEVPKEY_Device_Class,
                (__int64)&v38,
                (__int64)v28,
                v44,
                (__int64)&v44,
                0);
        if ( v30 != -1073741789 )
          break;
        ExFreePoolWithTag(v29, 0);
      }
      if ( v30 < 0 || v38 != 18 )
      {
        ExFreePoolWithTag(v29, 0);
        v29 = 0LL;
        v44 = 0;
      }
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v29);
      v40 = 32;
      v31 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x20207050u);
      v32 = v31;
      if ( !v31 )
      {
LABEL_54:
        v10 = -1073741670;
LABEL_70:
        if ( v29 )
          ExFreePoolWithTag(v29, 0);
        goto LABEL_72;
      }
      for ( m = PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(a1 + 8),
                  1u,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_NAME,
                  (__int64)&v38,
                  (__int64)v31,
                  v40,
                  (__int64)&v40,
                  0);
            ;
            m = PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(v46 + 8),
                  1u,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_NAME,
                  (__int64)&v38,
                  (__int64)v34,
                  v40,
                  (__int64)&v40,
                  0) )
      {
        v10 = m;
        if ( m != -1073741789 )
          break;
        ExFreePoolWithTag(v32, 0);
        v34 = ExAllocatePoolWithTag(PagedPool, v40, 0x20207050u);
        v32 = v34;
        if ( !v34 )
          goto LABEL_54;
      }
      if ( m < 0 )
        goto LABEL_67;
      if ( v38 == 25 )
      {
        AlternateStringData = PnpFindAlternateStringData(v32, v40, &v50, &v47);
        v38 = 18;
        v36 = v32;
        if ( AlternateStringData )
          v36 = v50;
        goto LABEL_68;
      }
      if ( v38 == 18 )
      {
        v36 = v32;
      }
      else
      {
LABEL_67:
        v10 = 0;
        ExFreePoolWithTag(v32, 0);
        v40 = 0;
        v32 = 0LL;
        v36 = 0LL;
      }
LABEL_68:
      RtlInitUnicodeString(&v56, v36);
      SeAuditPlugAndPlay(
        v46,
        (unsigned int)&v56,
        (unsigned int)v51,
        (unsigned int)v48,
        (__int64)v53,
        (__int64)v57,
        (__int64)&DestinationString,
        v11,
        NumberOfBytes_4);
      if ( v32 )
        ExFreePoolWithTag(v32, 0);
      goto LABEL_70;
    }
    ExFreePoolWithTag(v4, 0);
    v22 = v39;
  }
LABEL_35:
  v10 = -1073741670;
LABEL_72:
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
LABEL_74:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v10;
}
