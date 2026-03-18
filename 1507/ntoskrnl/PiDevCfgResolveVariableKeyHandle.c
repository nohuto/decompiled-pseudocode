/*
 * XREFs of PiDevCfgResolveVariableKeyHandle @ 0x14068BFB8
 * Callers:
 *     PiDevCfgResolveVariableKeyCopy @ 0x14068BE74 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14068C788 (PiDevCfgResolveVariableKeyValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     wcschr @ 0x140173B98 (wcschr.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     PnpRegSzToString @ 0x1404E7044 (PnpRegSzToString.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1407122B4 (_PnpCtxOpenContextBaseKey.c)
 */

__int64 __fastcall PiDevCfgResolveVariableKeyHandle(_QWORD *a1, void *a2, _QWORD *a3)
{
  unsigned int v5; // r13d
  NTSTATUS RegistryValue; // eax
  unsigned int *v7; // rsi
  int DeviceRegProp; // edi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  const wchar_t *v12; // rdi
  const wchar_t **v13; // r14
  int v14; // ecx
  WCHAR *v15; // r14
  wchar_t **v16; // rbx
  unsigned int v17; // r8d
  __int64 v18; // rdx
  int v19; // eax
  int v20; // eax
  wchar_t *v21; // rax
  NTSTATUS v22; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  const wchar_t *v25; // r14
  wchar_t *v26; // rax
  PVOID PoolWithTag; // rax
  const wchar_t *v28; // r12
  unsigned int v29; // r13d
  wchar_t *v30; // rax
  wchar_t *v31; // r14
  __int64 v32; // rbx
  int v33; // ebx
  UNICODE_STRING **v34; // r15
  UNICODE_STRING *v35; // rcx
  unsigned int v36; // eax
  __int64 v37; // rbx
  const wchar_t *v38; // r14
  __int64 v39; // rax
  unsigned int v40; // ebx
  wchar_t *Buffer; // r13
  unsigned int v42; // eax
  const wchar_t *v43; // r12
  wchar_t *v44; // rax
  wchar_t *v45; // r15
  __int64 v46; // r14
  unsigned int v47; // r14d
  const wchar_t *v48; // rdx
  __int64 v49; // rcx
  unsigned int v50; // eax
  __int64 v51; // r14
  const wchar_t *v52; // r15
  __int64 v53; // rax
  UNICODE_STRING v54; // xmm0
  HANDLE v55; // rax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v60; // [rsp+60h] [rbp-A0h]
  _QWORD *v61; // [rsp+68h] [rbp-98h]
  const wchar_t *v62; // [rsp+70h] [rbp-90h]
  HANDLE v63; // [rsp+78h] [rbp-88h] BYREF
  PVOID v64; // [rsp+80h] [rbp-80h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp-30h] BYREF
  int v68; // [rsp+D8h] [rbp-28h] BYREF
  int v69; // [rsp+DCh] [rbp-24h] BYREF
  _QWORD *v70; // [rsp+E0h] [rbp-20h]
  _BYTE v71[76]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v72; // [rsp+13Ch] [rbp+3Ch]

  v70 = a3;
  *a3 = 0LL;
  v61 = a1;
  P = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v63 = 0LL;
  v5 = 0;
  v64 = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"KeyRoot", 0, &P);
  v7 = (unsigned int *)P;
  DeviceRegProp = RegistryValue;
  if ( RegistryValue < 0 )
    goto LABEL_109;
  if ( *((_DWORD *)P + 1) != 1 )
    goto LABEL_108;
  v9 = *((unsigned int *)P + 3);
  if ( (unsigned int)v9 < 2 )
    goto LABEL_108;
  v10 = *((unsigned int *)P + 2);
  if ( *(_WORD *)((char *)P + 2 * (v9 >> 1) + v10 - 2) )
    goto LABEL_108;
  v11 = 0LL;
  v12 = (const wchar_t *)((char *)P + v10);
  v13 = (const wchar_t **)&off_140723760;
  while ( wcsicmp(*v13, v12) )
  {
    v11 = (unsigned int)(v11 + 1);
    v13 += 4;
    if ( (unsigned int)v11 >= 7 )
      goto LABEL_8;
  }
  v16 = &(&off_140723760)[4 * v11];
  if ( !v16 )
  {
LABEL_8:
    v15 = 0LL;
    if ( wcsicmp(v12, L"SYSTEM") )
    {
      if ( wcsicmp(v12, L"SOFTWARE") )
      {
        if ( wcsicmp(v12, L"HARDWARE") )
        {
          DeviceRegProp = -1073741772;
          goto LABEL_109;
        }
        v21 = L"\\Registry\\Machine\\HARDWARE";
      }
      else
      {
        v21 = L"\\Registry\\Machine\\SOFTWARE";
      }
      DestinationString.Buffer = v21;
      ObjectAttributes.Length = 48;
      *(_DWORD *)&DestinationString.Length = 3538996;
    }
    else
    {
      *(_DWORD *)&DestinationString.Length = 3276848;
      ObjectAttributes.Length = 48;
      DestinationString.Buffer = L"\\Registry\\Machine\\SYSTEM";
    }
    Handle = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v19 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    goto LABEL_28;
  }
  v17 = *((_DWORD *)v16 + 4);
  v15 = 0LL;
  v18 = *a1;
  if ( !v17 )
  {
    v20 = *((_DWORD *)v16 + 3);
    if ( !v20 )
    {
      DeviceRegProp = -1073741595;
      goto LABEL_109;
    }
    if ( v20 != 7 )
    {
      v15 = v16[3];
      goto LABEL_19;
    }
    v69 = 78;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(v18 + 48),
                      0LL,
                      9,
                      (__int64)&v68,
                      (__int64)v71,
                      (__int64)&v69);
    if ( DeviceRegProp < 0 )
      goto LABEL_109;
    if ( v68 == 1 )
    {
      v72 = 0;
      v15 = (WCHAR *)v71;
LABEL_19:
      DeviceRegProp = PnpCtxOpenContextBaseKey(v14, *((_DWORD *)v16 + 3), v17, 131097, (__int64)&Handle);
      if ( DeviceRegProp < 0 )
        goto LABEL_109;
      if ( v15 )
      {
        RtlInitUnicodeString(&DestinationString, v15);
        v15 = 0LL;
        ObjectAttributes.Attributes = 576;
        KeyHandle = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = Handle;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( DeviceRegProp < 0 )
          goto LABEL_109;
        ZwClose(Handle);
        Handle = KeyHandle;
      }
      goto LABEL_32;
    }
LABEL_108:
    DeviceRegProp = -1073741823;
    goto LABEL_109;
  }
  v19 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v18 + 48), v17, 0, 131097, 0, (__int64)&Handle, 0LL);
LABEL_28:
  DeviceRegProp = v19;
  if ( v19 < 0 )
    goto LABEL_109;
LABEL_32:
  ExFreePoolWithTag(v7, 0);
  P = v15;
  v22 = IopGetRegistryValue(a2, L"KeyPath", 0, &P);
  v7 = (unsigned int *)P;
  DeviceRegProp = v22;
  if ( v22 < 0 )
  {
    if ( v22 != -1073741772 )
      goto LABEL_109;
    v55 = Handle;
    DeviceRegProp = (int)v15;
    v63 = Handle;
    Handle = v15;
    goto LABEL_106;
  }
  if ( *((_DWORD *)P + 1) != 1 )
    goto LABEL_108;
  v23 = *((unsigned int *)P + 3);
  if ( (unsigned int)v23 < 2 )
    goto LABEL_108;
  v24 = *((unsigned int *)P + 2);
  if ( *(_WORD *)((char *)P + 2 * (v23 >> 1) + v24 - 2) != (_WORD)v15 )
    goto LABEL_108;
  v25 = (const wchar_t *)((char *)P + v24);
  v62 = (const wchar_t *)((char *)P + v24);
  v26 = wcschr((const wchar_t *)((char *)P + v24), 0x24u);
  if ( !v26 )
    goto LABEL_101;
  do
  {
    ++v5;
    v26 = wcschr(v26 + 1, 0x24u);
  }
  while ( v26 );
  LODWORD(P) = v5;
  if ( !v5 )
  {
LABEL_101:
    PnpRegSzToString((unsigned int *)((char *)v7 + v7[2]), v7[3], &P);
    DestinationString.Length = (unsigned __int16)P;
    DestinationString.MaximumLength = *((_WORD *)v7 + 6);
    DestinationString.Buffer = (wchar_t *)((char *)v7 + v7[2]);
    goto LABEL_102;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v5, 0x63647050u);
  v64 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_40:
    DeviceRegProp = -1073741670;
    goto LABEL_109;
  }
  memset(PoolWithTag, 0, 8LL * v5);
  v28 = v25;
  v29 = 0;
  if ( *v25 )
  {
    while ( v29 < (unsigned int)P )
    {
      v30 = wcschr(v28, 0x5Cu);
      v31 = v30;
      if ( v30 )
      {
        *v30 = 0;
        v32 = v30 - v28;
      }
      else
      {
        v32 = -1LL;
        do
          ++v32;
        while ( v28[v32] );
      }
      v33 = 2 * v32;
      if ( *v28 == 36 )
      {
        v34 = (UNICODE_STRING **)((char *)v64 + 8 * v29);
        DeviceRegProp = PiDevCfgResolveVariable((__int64)v61, (__int64)(v28 + 1), v34);
        if ( DeviceRegProp < 0 )
        {
          if ( DeviceRegProp != -1073741772 )
            break;
          DeviceRegProp = 0;
        }
        else
        {
          v35 = *v34;
          v36 = *(_DWORD *)&(*v34)[2].Length;
          if ( v36 )
          {
            if ( v36 <= 2 )
            {
              v33 = *(_DWORD *)(&v35[2].MaximumLength + 1) - 2;
            }
            else if ( v36 == 7 )
            {
              v37 = -1LL;
              do
                ++v37;
              while ( v35[2].Buffer[v37] );
              v33 = 2 * v37;
            }
          }
        }
        ++v29;
      }
      if ( (unsigned __int64)(v33 + (unsigned int)UnicodeString.MaximumLength) + 2 >= 0xFFFE )
      {
        DeviceRegProp = -2147483643;
        break;
      }
      UnicodeString.MaximumLength += v33 + 2;
      if ( v31 )
      {
        *v31 = 92;
        v38 = v31 + 1;
      }
      else
      {
        v39 = -1LL;
        do
          ++v39;
        while ( v28[v39] );
        v38 = &v28[v39];
      }
      v28 = v38;
      if ( !*v38 )
        break;
    }
    v25 = v62;
  }
  if ( DeviceRegProp >= 0 )
  {
    LOWORD(v40) = UnicodeString.MaximumLength;
    UnicodeString.Length = UnicodeString.MaximumLength - 2;
    UnicodeString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, UnicodeString.MaximumLength, 0x63647050u);
    Buffer = UnicodeString.Buffer;
    if ( !UnicodeString.Buffer )
      goto LABEL_40;
    v42 = 0;
    v40 = (unsigned __int16)v40;
    v43 = v25;
    v60 = (unsigned __int16)v40;
    LODWORD(v61) = 0;
    if ( *v25 )
    {
      while ( v42 < (unsigned int)P )
      {
        v44 = wcschr(v43, 0x5Cu);
        v45 = v44;
        if ( v44 )
        {
          *v44 = 0;
          v46 = v44 - v43;
        }
        else
        {
          v46 = -1LL;
          do
            ++v46;
          while ( v43[v46] );
        }
        v47 = 2 * v46;
        v48 = v43;
        if ( v43 != v62 )
        {
          if ( v40 <= 2 )
            goto LABEL_108;
          *Buffer++ = 92;
          v40 -= 2;
          v60 = v40;
        }
        if ( *v43 == 36 )
        {
          v49 = *((_QWORD *)v64 + (unsigned int)v61);
          LODWORD(v61) = (_DWORD)v61 + 1;
          if ( v49 )
          {
            v50 = *(_DWORD *)(v49 + 32);
            if ( v50 )
            {
              if ( v50 <= 2 )
              {
                v48 = *(const wchar_t **)(v49 + 40);
                v47 = *(_DWORD *)(v49 + 36) - 2;
              }
              else if ( v50 == 7 )
              {
                v48 = *(const wchar_t **)(v49 + 40);
                v51 = -1LL;
                do
                  ++v51;
                while ( v48[v51] );
                v47 = 2 * v51;
              }
            }
          }
        }
        if ( v40 <= v47 )
        {
          DeviceRegProp = -1073741823;
          break;
        }
        memmove(Buffer, v48, v47);
        Buffer += (unsigned __int64)v47 >> 1;
        v40 = v60 - v47;
        v60 -= v47;
        if ( v45 )
        {
          *v45 = 92;
          v52 = v45 + 1;
        }
        else
        {
          v53 = -1LL;
          do
            ++v53;
          while ( v43[v53] );
          v52 = &v43[v53];
        }
        v43 = v52;
        if ( !*v52 )
          break;
        v42 = (unsigned int)v61;
      }
    }
    if ( DeviceRegProp >= 0 )
    {
      if ( v40 == 2 )
      {
        v54 = UnicodeString;
        *Buffer = 0;
        DestinationString = v54;
LABEL_102:
        v63 = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = Handle;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        DeviceRegProp = ZwOpenKey(&v63, 0x20019u, &ObjectAttributes);
        if ( DeviceRegProp < 0 )
          goto LABEL_109;
        v55 = v63;
LABEL_106:
        *v70 = v55;
        goto LABEL_109;
      }
      goto LABEL_108;
    }
  }
LABEL_109:
  RtlFreeAnsiString(&UnicodeString);
  if ( v64 )
    ExFreePoolWithTag(v64, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DeviceRegProp;
}
