/*
 * XREFs of _CmDeviceClassesSubkeyCallback @ 0x140531D0C
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x140002AB0 (RtlStringCchCopyW.c)
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x140090110 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     _CmValidateDeviceInterfaceName @ 0x14043AD30 (_CmValidateDeviceInterfaceName.c)
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x14043F358 (_CmIsDeviceInterfaceEnabled.c)
 *     _PnpCtxRegQueryValue @ 0x14045D6F8 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140532440 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall CmDeviceClassesSubkeyCallback(__int64 *a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  unsigned int v5; // r8d
  unsigned __int64 v6; // r14
  wchar_t *v8; // r13
  _WORD *v9; // r15
  wchar_t *PoolWithTag; // rdi
  bool v11; // r12
  __int64 v12; // rax
  unsigned int v13; // eax
  size_t v14; // rdx
  wchar_t *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // esi
  unsigned __int8 (__fastcall *v19)(__int64 *, wchar_t *, __int64, _QWORD); // rax
  unsigned int v20; // eax
  __int64 v22; // rcx
  wchar_t *v23; // rax
  __int64 v24; // rax
  _WORD *v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING pcchRemaining; // [rsp+38h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  char v33; // [rsp+C8h] [rbp+58h] BYREF

  v5 = *(_DWORD *)a4;
  v6 = -1LL;
  Handle = 0LL;
  v8 = 0LL;
  ppszDestEnd = 0LL;
  v9 = 0LL;
  PoolWithTag = 0LL;
  v11 = 0;
  if ( v5 == 1 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a3[v24] );
    if ( v24 != 38 || *a3 != 123 )
      return 0LL;
  }
  else if ( v5 - 2 <= 1 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    if ( !v12 || *a3 != 35 )
      return 0LL;
  }
  if ( v5 >= 3 && (v5 != 3 || !*(_BYTE *)(a4 + 1428))
    || (!a1 ? (v22 = 0LL) : (v22 = *a1), (int)SysCtxRegOpenKey(v22, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) >= 0) )
  {
    v13 = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 >= 3u )
    {
      if ( v13 == 3 )
      {
        do
          ++v6;
        while ( a3[v6] );
        if ( v6 > 1 )
          v11 = *a3 == 35;
      }
      goto LABEL_15;
    }
    if ( v13 != 2 || !*(_WORD *)(a4 + 1012) )
    {
LABEL_15:
      if ( *(_DWORD *)a4 < 2u )
        goto LABEL_25;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x3F0uLL, 0x52504E50u);
      if ( PoolWithTag )
      {
        v14 = 504LL;
        if ( *(_WORD *)(a4 + 4) )
        {
          if ( RtlStringCchCopyExW(
                 PoolWithTag,
                 0x1F8uLL,
                 (NTSTRSAFE_PCWSTR)(a4 + 4),
                 &ppszDestEnd,
                 (size_t *)&pcchRemaining.Length,
                 0x900u) < 0 )
            goto LABEL_34;
          v15 = ppszDestEnd;
          v16 = *(_QWORD *)&pcchRemaining.Length;
          *ppszDestEnd = 0;
          v14 = v16 - 1;
        }
        else
        {
          v15 = PoolWithTag;
        }
        if ( v11 || *(_DWORD *)a4 == 2 )
        {
          if ( RtlStringCchCopyW(v15, v14, a3) < 0 )
            goto LABEL_34;
          if ( v11 )
            *v15 = 92;
        }
LABEL_25:
        if ( *(_DWORD *)a4 < 3u )
        {
          v23 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x5B8uLL, 0x52504E50u);
          v8 = v23;
          if ( v23 )
          {
            memset(v23, 0, 0x5B8uLL);
            *(_DWORD *)v8 = *(_DWORD *)a4 + 1;
            RtlStringCchCopyExW(v8 + 2, 0x1F8uLL, PoolWithTag, 0LL, 0LL, 0x900u);
            RtlStringCchCopyExW(v8 + 506, 0xC8uLL, (NTSTRSAFE_PCWSTR)(a4 + 1012), 0LL, 0LL, 0x900u);
            *((_QWORD *)v8 + 177) = *(_QWORD *)(a4 + 1416);
            *((_DWORD *)v8 + 356) = *(_DWORD *)(a4 + 1424);
            *((_BYTE *)v8 + 1428) = *(_BYTE *)(a4 + 1428);
            *((_QWORD *)v8 + 179) = *(_QWORD *)(a4 + 1432);
            *((_QWORD *)v8 + 180) = *(_QWORD *)(a4 + 1440);
            *((_QWORD *)v8 + 181) = *(_QWORD *)(a4 + 1448);
            *((_DWORD *)v8 + 364) = *(_DWORD *)(a4 + 1456);
            *((_DWORD *)v8 + 365) = *(_DWORD *)(a4 + 1460);
            PnpCtxRegEnumKeyWithCallback(a1, Handle, &CmDeviceClassesSubkeyCallback, v8);
            *(_QWORD *)(a4 + 1416) = *((_QWORD *)v8 + 177);
            *(_DWORD *)(a4 + 1424) = *((_DWORD *)v8 + 356);
            *(_DWORD *)(a4 + 1460) = *((_DWORD *)v8 + 365);
            *(_QWORD *)(a4 + 1448) = *((_QWORD *)v8 + 181);
            *(_DWORD *)(a4 + 1456) = *((_DWORD *)v8 + 364);
LABEL_32:
            if ( v8 )
              ExFreePoolWithTag(v8, 0);
          }
        }
        else
        {
          *(_QWORD *)PoolWithTag = *(_QWORD *)L"\\\\?\\";
          if ( CmValidateDeviceInterfaceName((__int64)a1, (__int64)PoolWithTag) >= 0
            && RtlInitUnicodeStringEx(&DestinationString, PoolWithTag) >= 0 )
          {
            v18 = DestinationString.MaximumLength >> 1;
            if ( !*(_BYTE *)(a4 + 1428)
              || CmIsDeviceInterfaceEnabled((__int64)a1, PoolWithTag, v17, (__int64)&v33) >= 0 && v33 )
            {
              v19 = *(unsigned __int8 (__fastcall **)(__int64 *, wchar_t *, __int64, _QWORD))(a4 + 1432);
              if ( !v19 || v19(a1, PoolWithTag, 3LL, *(_QWORD *)(a4 + 1440)) )
              {
                *(_DWORD *)(a4 + 1460) += v18;
                v20 = *(_DWORD *)(a4 + 1456);
                if ( v20 > v18 )
                {
                  RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 1448), v20, PoolWithTag, 0LL, 0LL, 0x900u);
                  *(_QWORD *)(a4 + 1448) += 2LL * v18;
                  *(_DWORD *)(a4 + 1456) -= v18;
                  goto LABEL_32;
                }
              }
            }
          }
        }
LABEL_34:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
      }
LABEL_36:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      goto LABEL_38;
    }
    v25 = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
    v9 = v25;
    if ( v25 )
    {
      v27 = 400;
      if ( (int)PnpCtxRegQueryValue(v26, Handle, L"DeviceInstance", &pcchRemaining, v25, &v27) < 0 )
        goto LABEL_36;
      if ( *(_DWORD *)&pcchRemaining.Length != 1 )
        goto LABEL_36;
      if ( v27 < 2 )
        goto LABEL_36;
      v9[199] = 0;
      if ( RtlInitUnicodeStringEx(&DestinationString, v9) < 0
        || RtlInitUnicodeStringEx(&pcchRemaining, (PCWSTR)(a4 + 1012)) < 0
        || !RtlEqualUnicodeString(&DestinationString, &pcchRemaining, 1u) )
      {
        goto LABEL_36;
      }
      goto LABEL_15;
    }
  }
LABEL_38:
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
