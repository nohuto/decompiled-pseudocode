/*
 * XREFs of PiDevCfgQueryIncludedDriverNode @ 0x140688A94
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406885D4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     _PnpOpenObjectRegKey @ 0x14043BAF4 (_PnpOpenObjectRegKey.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x1404FFE30 (RtlCreateUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 *     PiDevCfgFreeDriverNode @ 0x140587BE8 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405893D8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x140589650 (PiDevCfgOpenDriverConfiguration.c)
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
  wchar_t *StringRoutine; // rax
  __int64 v16; // rcx
  char *v17; // rdx
  int DriverPackageId; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  PVOID PoolWithTag; // rax
  __int64 v23; // rdi
  PVOID v24; // rax
  HANDLE v26; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+38h] BYREF

  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v7 = a2;
  Handle = 0LL;
  v26 = 0LL;
  if ( !a2 )
  {
    v14 = PiDevCfgOpenDriverConfiguration(*(void **)(a1 + 16), a3, &v26);
    v10 = v14;
    if ( v14 == -1073741772 )
    {
      v10 = 0;
    }
    else if ( v14 < 0 )
    {
      goto LABEL_55;
    }
    if ( v26 )
    {
      v7 = *(const WCHAR **)(a1 + 48);
LABEL_17:
      if ( *(_QWORD *)(a1 + 64) )
      {
        StringRoutine = (wchar_t *)ExpAllocateStringRoutine(*(unsigned __int16 *)(a1 + 58));
        UnicodeString.Buffer = StringRoutine;
        if ( !StringRoutine )
        {
LABEL_43:
          v10 = -1073741670;
          goto LABEL_55;
        }
        memmove(StringRoutine, *(const void **)(a1 + 64), *(unsigned __int16 *)(a1 + 58));
      }
      else
      {
        UnicodeString.Buffer = 0LL;
      }
      v16 = 0LL;
      v17 = *(char **)(a1 + 16);
      UnicodeString.Length = *(_WORD *)(a1 + 56);
      UnicodeString.MaximumLength = *(_WORD *)(a1 + 58);
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v16 = **(_QWORD **)&PiPnpRtlCtx;
      v13 = SysCtxRegOpenKey(v16, v17, 0LL, 0, 0x20019u, &Handle);
      v10 = v13;
      goto LABEL_24;
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
            goto LABEL_44;
          if ( DriverPackageId < 0 )
            goto LABEL_55;
          v19 = PnpOpenObjectRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)UnicodeString.Buffer,
                  7u,
                  131097,
                  0,
                  (__int64)&Handle,
                  0LL,
                  0);
          v10 = v19;
          if ( v19 == -1073741772 )
          {
            v10 = -1073741072;
            break;
          }
          if ( v19 < 0 )
            goto LABEL_55;
          v20 = PiDevCfgOpenDriverConfiguration(Handle, a3, &v26);
          v10 = v20;
          if ( v20 < 0 )
          {
            if ( v20 != -1073741772 )
              break;
            v10 = 0;
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
          goto LABEL_41;
        }
      }
      if ( v10 < 0 )
        goto LABEL_55;
LABEL_41:
      if ( v26 )
      {
LABEL_42:
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x63647050u);
        v23 = (__int64)PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_43;
        memset(PoolWithTag, 0, 0x190uLL);
        *(_DWORD *)(v23 + 168) = 32;
        *(_QWORD *)(v23 + 216) = v23 + 208;
        *(_QWORD *)(v23 + 208) = v23 + 208;
        *(_QWORD *)(v23 + 200) = v23 + 192;
        *(_QWORD *)(v23 + 192) = v23 + 192;
        *(_QWORD *)(v23 + 360) = v23 + 352;
        *(_QWORD *)(v23 + 352) = v23 + 352;
        if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v23 + 40), v7) )
          goto LABEL_46;
        if ( UnicodeString.Buffer )
        {
          v24 = ExpAllocateStringRoutine(UnicodeString.MaximumLength);
          *(_QWORD *)(v23 + 64) = v24;
          if ( !v24 )
            goto LABEL_46;
          memmove(v24, UnicodeString.Buffer, UnicodeString.MaximumLength);
        }
        else
        {
          *(_QWORD *)(v23 + 64) = 0LL;
        }
        *(_WORD *)(v23 + 56) = UnicodeString.Length;
        *(_WORD *)(v23 + 58) = UnicodeString.MaximumLength;
        if ( RtlCreateUnicodeString((PUNICODE_STRING)(v23 + 88), a3) )
        {
          *(_DWORD *)(v23 + 104) = a4;
          *(_QWORD *)(v23 + 16) = Handle;
          *(_QWORD *)(v23 + 32) = v26;
          Handle = 0LL;
          v26 = 0LL;
          *a5 = v23;
          v23 = 0LL;
LABEL_53:
          if ( v23 )
            PiDevCfgFreeDriverNode(v23);
          goto LABEL_55;
        }
LABEL_46:
        v10 = -1073741670;
        goto LABEL_53;
      }
    }
    v10 = -1073741685;
    goto LABEL_57;
  }
  if ( !wcsicmp(a2, *(const wchar_t **)(a1 + 48)) )
  {
    v9 = PiDevCfgOpenDriverConfiguration(*(void **)(a1 + 16), a3, &v26);
    v10 = v9;
    if ( v9 != -1073741772 )
    {
      if ( v9 < 0 )
        goto LABEL_55;
      goto LABEL_17;
    }
LABEL_11:
    v10 = -1073741685;
    goto LABEL_55;
  }
  v11 = PiDevCfgGetDriverPackageId((__int64)v7, (__int64)&UnicodeString);
  v10 = v11;
  if ( v11 != -1073741772 )
  {
    if ( v11 < 0 )
      goto LABEL_55;
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
        goto LABEL_55;
      v13 = PiDevCfgOpenDriverConfiguration(Handle, a3, &v26);
      v10 = v13;
      if ( v13 != -1073741772 )
      {
LABEL_24:
        if ( v13 < 0 )
          goto LABEL_55;
        goto LABEL_42;
      }
      goto LABEL_11;
    }
  }
LABEL_44:
  v10 = -1073741072;
LABEL_55:
  if ( v26 )
    ZwClose(v26);
LABEL_57:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v10;
}
