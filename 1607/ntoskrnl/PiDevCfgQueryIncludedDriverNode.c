/*
 * XREFs of PiDevCfgQueryIncludedDriverNode @ 0x14063CD90
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14063CA4C (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1401CE93C (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PnpDuplicateUnicodeString @ 0x1401CF1E4 (PnpDuplicateUnicodeString.c)
 *     PnpValidateRegistryMultiSz @ 0x1401CF3C4 (PnpValidateRegistryMultiSz.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1403F64A4 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     _PnpOpenObjectRegKey @ 0x1404DF2D0 (_PnpOpenObjectRegKey.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PiDevCfgFreeDriverNode @ 0x140638DD0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x140639094 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x14063B0FC (PiDevCfgOpenDriverConfiguration.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverNode(__int64 a1, const wchar_t *a2, const WCHAR *a3, int a4, __int64 *a5)
{
  const WCHAR *v7; // rsi
  unsigned int *v9; // r15
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char v16; // al
  __int64 v17; // rcx
  int DriverPackageId; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  PVOID PoolWithTag; // rax
  __int64 v23; // rdi
  NTSTATUS RegistryValue; // eax
  wchar_t *i; // rsi
  int v26; // ecx
  char v27; // r14
  int DriverConfigurationKeyScope; // eax
  __int64 v29; // rax
  wchar_t v30; // dx
  HANDLE KeyHandle; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v33; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+38h] BYREF

  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v7 = a2;
  Handle = 0LL;
  KeyHandle = 0LL;
  v9 = 0LL;
  v33 = 0LL;
  if ( !a2 )
  {
    v15 = PiDevCfgOpenDriverConfiguration(*(void **)(a1 + 16), a3, &KeyHandle);
    v11 = v15;
    if ( v15 == -1073741772 )
    {
      v11 = 0;
    }
    else if ( v15 < 0 )
    {
      goto LABEL_73;
    }
    if ( !KeyHandle )
    {
      v7 = *(const WCHAR **)(a1 + 328);
      if ( !v7 )
        goto LABEL_24;
      if ( *v7 )
      {
        while ( 1 )
        {
          DriverPackageId = PiDevCfgGetDriverPackageId((__int64)v7, (__int64)&UnicodeString);
          v11 = DriverPackageId;
          if ( DriverPackageId == -1073741772 )
            goto LABEL_41;
          if ( DriverPackageId < 0 )
            goto LABEL_73;
          v19 = PnpOpenObjectRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)UnicodeString.Buffer,
                  7u,
                  131097,
                  0,
                  (__int64)&Handle,
                  0LL,
                  0);
          v11 = v19;
          if ( v19 == -1073741772 )
            break;
          if ( v19 < 0 )
            goto LABEL_73;
          v20 = PiDevCfgOpenDriverConfiguration(Handle, a3, &KeyHandle);
          v11 = v20;
          if ( v20 < 0 )
          {
            if ( v20 != -1073741772 )
              goto LABEL_37;
            ZwClose(Handle);
            Handle = 0LL;
            RtlFreeAnsiString(&UnicodeString);
            v21 = -1LL;
            do
              ++v21;
            while ( v7[v21] );
            v7 += v21 + 1;
            if ( *v7 )
              continue;
          }
          goto LABEL_38;
        }
        v11 = -1073740655;
      }
LABEL_37:
      if ( v11 < 0 )
        goto LABEL_73;
LABEL_38:
      if ( !KeyHandle )
      {
LABEL_24:
        v11 = -1073740654;
        goto LABEL_75;
      }
      goto LABEL_39;
    }
    v7 = *(const WCHAR **)(a1 + 48);
    goto LABEL_17;
  }
  if ( !wcsicmp(a2, *(const wchar_t **)(a1 + 48)) )
  {
    v10 = PiDevCfgOpenDriverConfiguration(*(void **)(a1 + 16), a3, &KeyHandle);
    v11 = v10;
    if ( v10 != -1073741772 )
    {
      if ( v10 < 0 )
        goto LABEL_73;
LABEL_17:
      v16 = PnpDuplicateUnicodeString((__int64)&UnicodeString, a1 + 56);
      v17 = 0LL;
      if ( !v16 )
      {
LABEL_40:
        v11 = -1073741670;
        goto LABEL_73;
      }
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v17 = **(_QWORD **)&PiPnpRtlCtx;
      v14 = SysCtxRegOpenKey(v17, *(_QWORD *)(a1 + 16), 0LL, 0, 0x20019u, (__int64)&Handle);
      v11 = v14;
      goto LABEL_21;
    }
LABEL_11:
    v11 = -1073740654;
    goto LABEL_73;
  }
  v12 = PiDevCfgGetDriverPackageId((__int64)v7, (__int64)&UnicodeString);
  v11 = v12;
  if ( v12 != -1073741772 )
  {
    if ( v12 < 0 )
      goto LABEL_73;
    v13 = PnpOpenObjectRegKey(
            *(__int64 *)&PiPnpRtlCtx,
            (__int64)UnicodeString.Buffer,
            7u,
            131097,
            0,
            (__int64)&Handle,
            0LL,
            0);
    v11 = v13;
    if ( v13 != -1073741772 )
    {
      if ( v13 < 0 )
        goto LABEL_73;
      v14 = PiDevCfgOpenDriverConfiguration(Handle, a3, &KeyHandle);
      v11 = v14;
      if ( v14 != -1073741772 )
      {
LABEL_21:
        if ( v14 < 0 )
          goto LABEL_73;
LABEL_39:
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x63647050u);
        v23 = (__int64)PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_40;
        memset(PoolWithTag, 0, 0x190uLL);
        *(_DWORD *)(v23 + 168) = 32;
        *(_QWORD *)(v23 + 216) = v23 + 208;
        *(_QWORD *)(v23 + 208) = v23 + 208;
        *(_QWORD *)(v23 + 200) = v23 + 192;
        *(_QWORD *)(v23 + 192) = v23 + 192;
        *(_QWORD *)(v23 + 360) = v23 + 352;
        *(_QWORD *)(v23 + 352) = v23 + 352;
        if ( RtlCreateUnicodeString((PUNICODE_STRING)(v23 + 40), v7)
          && PnpDuplicateUnicodeString(v23 + 56, (__int64)&UnicodeString)
          && RtlCreateUnicodeString((PUNICODE_STRING)(v23 + 88), a3) )
        {
          *(_DWORD *)(v23 + 104) = a4;
          RegistryValue = IopGetRegistryValue(KeyHandle, L"IncludeScope", 0, &v33);
          v9 = v33;
          v11 = RegistryValue;
          if ( RegistryValue == -1073741772 )
          {
            v11 = 0;
LABEL_68:
            *(_QWORD *)(v23 + 16) = Handle;
            *(_QWORD *)(v23 + 32) = KeyHandle;
            Handle = 0LL;
            KeyHandle = 0LL;
            *a5 = v23;
            v23 = 0LL;
            goto LABEL_69;
          }
          if ( RegistryValue >= 0 )
          {
            if ( !PnpValidateRegistryMultiSz(v33) )
            {
              v11 = -1073741823;
              goto LABEL_69;
            }
            for ( i = (wchar_t *)((char *)v9 + v9[2]); ; i += v29 + 1 )
            {
              v30 = *i;
              if ( !*i )
                goto LABEL_68;
              v26 = *i - asc_140584750[0];
              if ( !v26 )
                v26 = i[1] - asc_140584750[1];
              if ( !v26 )
              {
                *(_DWORD *)(v23 + 104) = -1;
                goto LABEL_68;
              }
              v27 = 1;
              if ( v30 != 43 )
              {
                if ( v30 != 45 )
                  goto LABEL_59;
                v27 = 0;
              }
              ++i;
LABEL_59:
              DriverConfigurationKeyScope = PiDevCfgGetDriverConfigurationKeyScope(i);
              if ( v27 )
                *(_DWORD *)(v23 + 104) |= DriverConfigurationKeyScope;
              else
                *(_DWORD *)(v23 + 104) &= ~DriverConfigurationKeyScope;
              v29 = -1LL;
              do
                ++v29;
              while ( i[v29] );
            }
          }
        }
        else
        {
          v11 = -1073741670;
        }
LABEL_69:
        if ( v23 )
          PiDevCfgFreeDriverNode(v23);
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        goto LABEL_73;
      }
      goto LABEL_11;
    }
  }
LABEL_41:
  v11 = -1073740655;
LABEL_73:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_75:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v11;
}
