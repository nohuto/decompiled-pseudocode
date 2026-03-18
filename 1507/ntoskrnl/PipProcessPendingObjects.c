/*
 * XREFs of PipProcessPendingObjects @ 0x1407FA624
 * Callers:
 *     PipProcessPendingOsExtensionResources @ 0x1407E6EF4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1407E6F78 (PipProcessPendingServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpCtxRegOpenKey @ 0x140435B7C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumKey @ 0x14058BF10 (_PnpCtxRegEnumKey.c)
 *     PnpCheckDriverDependencies @ 0x14067DE50 (PnpCheckDriverDependencies.c)
 */

__int64 __fastcall PipProcessPendingObjects(
        void *a1,
        __int64 (__fastcall *a2)(_BYTE *, _QWORD, _QWORD, char *),
        __int64 a3,
        int (__fastcall *a4)(_BYTE *, void *, _QWORD, _QWORD))
{
  _WORD *PoolWithTag; // rbx
  unsigned int v5; // esi
  int v9; // eax
  int i; // r14d
  __int64 v11; // rcx
  int v12; // edi
  int Value; // eax
  __int64 v14; // rcx
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[3]; // [rsp+31h] [rbp-CFh] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD v19[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[528]; // [rsp+50h] [rbp-B0h] BYREF

  NumberOfBytes[0] = 260;
  PoolWithTag = 0LL;
  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  v5 = 0;
  v19[0] = 0;
  v9 = PnpCtxRegEnumKey((__int64)a1, a1);
  for ( i = 1; ; ++i )
  {
    v12 = v9;
    if ( v9 == -2147483622 || v9 == -1073741444 )
      break;
    if ( v9 < 0 )
      goto LABEL_29;
    if ( (int)PnpCtxRegOpenKey(*(_QWORD **)&PiPnpRtlCtx, (int)a1, (int)v20, 0, 1, (__int64)&NumberOfBytes[1]) >= 0 )
    {
      if ( !a2 )
        goto LABEL_8;
      v16 = 0;
      v12 = a2(v20, *(_QWORD *)&NumberOfBytes[1], 0LL, &v16);
      if ( v12 < 0 )
        goto LABEL_29;
      if ( !v16 )
      {
LABEL_8:
        NumberOfBytes[0] = v5;
        Value = PnpCtxRegQueryValue(
                  v11,
                  *(void **)&NumberOfBytes[1],
                  (__int64)L"DependOnFirmware",
                  (__int64)v19,
                  (__int64)PoolWithTag,
                  (__int64)NumberOfBytes);
        if ( Value == -1073741789 || Value == -2147483643 )
        {
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0x42706E50u);
          v5 = NumberOfBytes[0];
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x42706E50u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741670;
          Value = PnpCtxRegQueryValue(
                    v14,
                    *(void **)&NumberOfBytes[1],
                    (__int64)L"DependOnFirmware",
                    (__int64)v19,
                    (__int64)PoolWithTag,
                    (__int64)NumberOfBytes);
        }
        if ( Value == -1073741772 )
        {
          if ( PoolWithTag )
          {
            if ( v5 >= 2 )
              *PoolWithTag = 0;
LABEL_19:
            if ( PoolWithTag )
            {
              if ( v5 >= 2 )
              {
                if ( *PoolWithTag )
                {
                  v17[0] = 0;
                  if ( (int)PnpCheckDriverDependencies(PoolWithTag, v17, 0LL) < 0 || !v17[0] )
                    goto LABEL_26;
                }
              }
            }
          }
          if ( a4(v20, a1, *(_QWORD *)&NumberOfBytes[1], 0LL) >= 0 )
            --i;
          goto LABEL_26;
        }
        if ( Value < 0 )
          goto LABEL_26;
        goto LABEL_19;
      }
    }
LABEL_26:
    NumberOfBytes[0] = 260;
    v9 = PnpCtxRegEnumKey(v11, a1);
  }
  v12 = 0;
LABEL_29:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x42706E50u);
  return (unsigned int)v12;
}
