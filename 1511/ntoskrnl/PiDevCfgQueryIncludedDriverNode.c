/*
 * XREFs of PiDevCfgQueryIncludedDriverNode @ 0x1406096F0
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140511784 (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x14012C154 (PnpDuplicateUnicodeString.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     _PnpOpenObjectRegKey @ 0x14043E904 (_PnpOpenObjectRegKey.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140447238 (RtlCreateUnicodeString.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x1405110F8 (PiDevCfgOpenDriverConfiguration.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405111D8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgFreeDriverNode @ 0x140514E48 (PiDevCfgFreeDriverNode.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverNode(__int64 a1, const wchar_t *a2, const WCHAR *a3, int a4, __int64 *a5)
{
  const WCHAR *v7; // rsi
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int DriverPackageId; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  PVOID PoolWithTag; // rax
  __int64 v21; // rdi
  HANDLE v23; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+38h] BYREF

  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v7 = a2;
  Handle = 0LL;
  v23 = 0LL;
  if ( !a2 )
  {
    v14 = PiDevCfgOpenDriverConfiguration(*(void **)(a1 + 16), a3, &v23);
    v10 = v14;
    if ( v14 == -1073741772 )
    {
      v10 = 0;
    }
    else if ( v14 < 0 )
    {
      goto LABEL_49;
    }
    if ( v23 )
    {
      v7 = *(const WCHAR **)(a1 + 48);
LABEL_17:
      if ( !PnpDuplicateUnicodeString((__int64)&UnicodeString, a1 + 56) )
      {
LABEL_40:
        v10 = -1073741670;
        goto LABEL_49;
      }
      v15 = 0LL;
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v15 = **(_QWORD **)&PiPnpRtlCtx;
      v13 = SysCtxRegOpenKey(v15, *(_QWORD *)(a1 + 16), 0LL, 0, 0x20019u, (__int64)&Handle);
      v10 = v13;
      goto LABEL_21;
    }
    v7 = *(const WCHAR **)(a1 + 328);
    if ( v7 )
    {
      if ( *v7 )
      {
        while ( 1 )
        {
          DriverPackageId = PiDevCfgGetDriverPackageId((__int64)v7, (__int64)&UnicodeString);
          v10 = DriverPackageId;
          if ( DriverPackageId == -1073741772 )
            goto LABEL_41;
          if ( DriverPackageId < 0 )
            goto LABEL_49;
          v17 = PnpOpenObjectRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)UnicodeString.Buffer,
                  7u,
                  131097,
                  0,
                  (__int64)&Handle,
                  0LL,
                  0);
          v10 = v17;
          if ( v17 == -1073741772 )
          {
            v10 = -1073740655;
            break;
          }
          if ( v17 < 0 )
            goto LABEL_49;
          v18 = PiDevCfgOpenDriverConfiguration(Handle, a3, &v23);
          v10 = v18;
          if ( v18 < 0 )
          {
            if ( v18 != -1073741772 )
              break;
            v10 = 0;
            ZwClose(Handle);
            Handle = 0LL;
            RtlFreeAnsiString(&UnicodeString);
            v19 = -1LL;
            do
              ++v19;
            while ( v7[v19] );
            v7 += v19 + 1;
            if ( *v7 )
              continue;
          }
          goto LABEL_38;
        }
      }
      if ( v10 < 0 )
        goto LABEL_49;
LABEL_38:
      if ( v23 )
        goto LABEL_39;
    }
    v10 = -1073740654;
    goto LABEL_51;
  }
  if ( !wcsicmp(a2, *(const wchar_t **)(a1 + 48)) )
  {
    v9 = PiDevCfgOpenDriverConfiguration(*(void **)(a1 + 16), a3, &v23);
    v10 = v9;
    if ( v9 != -1073741772 )
    {
      if ( v9 < 0 )
        goto LABEL_49;
      goto LABEL_17;
    }
LABEL_11:
    v10 = -1073740654;
    goto LABEL_49;
  }
  v11 = PiDevCfgGetDriverPackageId((__int64)v7, (__int64)&UnicodeString);
  v10 = v11;
  if ( v11 != -1073741772 )
  {
    if ( v11 < 0 )
      goto LABEL_49;
    v12 = PnpOpenObjectRegKey(
            *(__int64 *)&PiPnpRtlCtx,
            (__int64)UnicodeString.Buffer,
            7u,
            131097,
            0,
            (__int64)&Handle,
            0LL,
            0);
    v10 = v12;
    if ( v12 != -1073741772 )
    {
      if ( v12 < 0 )
        goto LABEL_49;
      v13 = PiDevCfgOpenDriverConfiguration(Handle, a3, &v23);
      v10 = v13;
      if ( v13 != -1073741772 )
      {
LABEL_21:
        if ( v13 < 0 )
          goto LABEL_49;
LABEL_39:
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x63647050u);
        v21 = (__int64)PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x190uLL);
          *(_DWORD *)(v21 + 168) = 32;
          *(_QWORD *)(v21 + 216) = v21 + 208;
          *(_QWORD *)(v21 + 208) = v21 + 208;
          *(_QWORD *)(v21 + 200) = v21 + 192;
          *(_QWORD *)(v21 + 192) = v21 + 192;
          *(_QWORD *)(v21 + 360) = v21 + 352;
          *(_QWORD *)(v21 + 352) = v21 + 352;
          if ( RtlCreateUnicodeString((PUNICODE_STRING)(v21 + 40), v7)
            && PnpDuplicateUnicodeString(v21 + 56, (__int64)&UnicodeString)
            && RtlCreateUnicodeString((PUNICODE_STRING)(v21 + 88), a3) )
          {
            *(_DWORD *)(v21 + 104) = a4;
            *(_QWORD *)(v21 + 16) = Handle;
            *(_QWORD *)(v21 + 32) = v23;
            Handle = 0LL;
            v23 = 0LL;
            *a5 = v21;
            v21 = 0LL;
          }
          else
          {
            v10 = -1073741670;
          }
          if ( v21 )
            PiDevCfgFreeDriverNode(v21);
          goto LABEL_49;
        }
        goto LABEL_40;
      }
      goto LABEL_11;
    }
  }
LABEL_41:
  v10 = -1073740655;
LABEL_49:
  if ( v23 )
    ZwClose(v23);
LABEL_51:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v10;
}
