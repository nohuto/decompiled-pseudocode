/*
 * XREFs of PiDevCfgResolveVariableKeyHandle @ 0x140640500
 * Callers:
 *     PiDevCfgResolveVariableKeyCopy @ 0x140640424 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140640CAC (PiDevCfgResolveVariableKeyValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpValidateRegistryString @ 0x1401CF3F4 (PnpValidateRegistryString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x140539704 (PnpRegSzToString.c)
 *     PiDevCfgResolveVariable @ 0x14063E438 (PiDevCfgResolveVariable.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1406D70C8 (_PnpCtxOpenContextBaseKey.c)
 */

__int64 __fastcall PiDevCfgResolveVariableKeyHandle(_QWORD *a1, void *a2, _QWORD *a3)
{
  unsigned int v5; // r13d
  NTSTATUS RegistryValue; // eax
  unsigned int *v7; // r15
  int DeviceRegProp; // edi
  __int64 v9; // rbx
  const wchar_t *v10; // rdi
  const wchar_t **v11; // rsi
  int v12; // ecx
  WCHAR *v13; // rsi
  wchar_t **v14; // rbx
  unsigned int v15; // r8d
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  wchar_t *v19; // rax
  NTSTATUS v20; // eax
  const wchar_t *v21; // rsi
  wchar_t *v22; // rax
  PVOID PoolWithTag; // rax
  const wchar_t *v24; // r12
  unsigned int v25; // r13d
  wchar_t *v26; // rax
  wchar_t *v27; // rsi
  __int64 v28; // rbx
  int v29; // ebx
  UNICODE_STRING **v30; // r14
  UNICODE_STRING *v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rbx
  const wchar_t *v34; // rsi
  __int64 v35; // rax
  unsigned int v36; // ebx
  wchar_t *Buffer; // r13
  unsigned int v38; // eax
  const wchar_t *v39; // r12
  wchar_t *v40; // rax
  wchar_t *v41; // r14
  __int64 v42; // rsi
  unsigned int v43; // esi
  const wchar_t *v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // rsi
  const wchar_t *v48; // r14
  __int64 v49; // rax
  UNICODE_STRING v50; // xmm0
  HANDLE v51; // rax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v56; // [rsp+60h] [rbp-A0h]
  _QWORD *v57; // [rsp+68h] [rbp-98h]
  const wchar_t *v58; // [rsp+70h] [rbp-90h]
  HANDLE v59; // [rsp+78h] [rbp-88h] BYREF
  PVOID v60; // [rsp+80h] [rbp-80h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  int v63; // [rsp+D0h] [rbp-30h] BYREF
  int v64; // [rsp+D4h] [rbp-2Ch] BYREF
  HANDLE KeyHandle; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD *v66; // [rsp+E0h] [rbp-20h]
  _BYTE v67[76]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v68; // [rsp+13Ch] [rbp+3Ch]

  v66 = a3;
  *a3 = 0LL;
  v57 = a1;
  P = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v59 = 0LL;
  v5 = 0;
  v60 = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"KeyRoot", 0, &P);
  v7 = (unsigned int *)P;
  DeviceRegProp = RegistryValue;
  if ( RegistryValue < 0 )
    goto LABEL_105;
  if ( !PnpValidateRegistryString(P) )
  {
LABEL_3:
    DeviceRegProp = -1073741823;
    goto LABEL_105;
  }
  v9 = 0LL;
  v10 = (const wchar_t *)((char *)v7 + v7[2]);
  v11 = (const wchar_t **)&off_1406EB850;
  while ( wcsicmp(*v11, v10) )
  {
    v9 = (unsigned int)(v9 + 1);
    v11 += 4;
    if ( (unsigned int)v9 >= 7 )
      goto LABEL_7;
  }
  v14 = &(&off_1406EB850)[4 * v9];
  if ( v14 )
  {
    v15 = *((_DWORD *)v14 + 4);
    v13 = 0LL;
    v16 = *a1;
    if ( !v15 )
    {
      v18 = *((_DWORD *)v14 + 3);
      if ( !v18 )
      {
        DeviceRegProp = -1073741595;
        goto LABEL_105;
      }
      if ( v18 == 7 )
      {
        v63 = 78;
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          *(_QWORD *)(v16 + 48),
                          0LL,
                          9,
                          (__int64)&v64,
                          (__int64)v67,
                          (__int64)&v63,
                          0);
        if ( DeviceRegProp < 0 )
          goto LABEL_105;
        if ( v64 != 1 )
          goto LABEL_3;
        v68 = 0;
        v13 = (WCHAR *)v67;
      }
      else
      {
        v13 = v14[3];
      }
      DeviceRegProp = PnpCtxOpenContextBaseKey(v12, *((_DWORD *)v14 + 3), v15, 131097, (__int64)&Handle);
      if ( DeviceRegProp < 0 )
        goto LABEL_105;
      if ( v13 )
      {
        RtlInitUnicodeString(&DestinationString, v13);
        v13 = 0LL;
        ObjectAttributes.Attributes = 576;
        KeyHandle = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = Handle;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( DeviceRegProp < 0 )
          goto LABEL_105;
        ZwClose(Handle);
        Handle = KeyHandle;
      }
      goto LABEL_31;
    }
    v17 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v16 + 48), v15, 0, 131097, 0, (__int64)&Handle, 0LL);
  }
  else
  {
LABEL_7:
    v13 = 0LL;
    if ( wcsicmp(v10, L"SYSTEM") )
    {
      if ( wcsicmp(v10, L"SOFTWARE") )
      {
        if ( wcsicmp(v10, L"HARDWARE") )
        {
          DeviceRegProp = -1073741772;
          goto LABEL_105;
        }
        v19 = L"\\Registry\\Machine\\HARDWARE";
      }
      else
      {
        v19 = L"\\Registry\\Machine\\SOFTWARE";
      }
      DestinationString.Buffer = v19;
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
    v17 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  }
  DeviceRegProp = v17;
  if ( v17 < 0 )
    goto LABEL_105;
LABEL_31:
  ExFreePoolWithTag(v7, 0);
  P = v13;
  v20 = IopGetRegistryValue(a2, L"KeyPath", 0, &P);
  v7 = (unsigned int *)P;
  DeviceRegProp = v20;
  if ( v20 < 0 )
  {
    if ( v20 != -1073741772 )
      goto LABEL_105;
    v51 = Handle;
    DeviceRegProp = (int)v13;
    v59 = Handle;
    Handle = v13;
    goto LABEL_103;
  }
  if ( !PnpValidateRegistryString(P) )
    goto LABEL_3;
  v58 = (const wchar_t *)((char *)v7 + v7[2]);
  v21 = v58;
  v22 = wcschr(v58, 0x24u);
  if ( !v22 )
    goto LABEL_98;
  do
  {
    ++v5;
    v22 = wcschr(v22 + 1, 0x24u);
  }
  while ( v22 );
  LODWORD(P) = v5;
  if ( !v5 )
  {
LABEL_98:
    PnpRegSzToString((unsigned int *)((char *)v7 + v7[2]), v7[3], &P);
    DestinationString.Length = (unsigned __int16)P;
    DestinationString.MaximumLength = *((_WORD *)v7 + 6);
    DestinationString.Buffer = (wchar_t *)((char *)v7 + v7[2]);
LABEL_99:
    v59 = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DeviceRegProp = ZwOpenKey(&v59, 0x20019u, &ObjectAttributes);
    if ( DeviceRegProp < 0 )
      goto LABEL_105;
    v51 = v59;
LABEL_103:
    *v66 = v51;
    goto LABEL_105;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v5, 0x63647050u);
  v60 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_37:
    DeviceRegProp = -1073741670;
    goto LABEL_105;
  }
  memset(PoolWithTag, 0, 8LL * v5);
  v24 = v21;
  v25 = 0;
  if ( *v21 )
  {
    while ( v25 < (unsigned int)P )
    {
      v26 = wcschr(v24, 0x5Cu);
      v27 = v26;
      if ( v26 )
      {
        *v26 = 0;
        v28 = v26 - v24;
      }
      else
      {
        v28 = -1LL;
        do
          ++v28;
        while ( v24[v28] );
      }
      v29 = 2 * v28;
      if ( *v24 == 36 )
      {
        v30 = (UNICODE_STRING **)((char *)v60 + 8 * v25);
        DeviceRegProp = PiDevCfgResolveVariable((__int64)v57, v24 + 1, v30);
        if ( DeviceRegProp < 0 )
        {
          if ( DeviceRegProp != -1073741772 )
            break;
          DeviceRegProp = 0;
        }
        else
        {
          v31 = *v30;
          v32 = *(_DWORD *)&(*v30)[2].Length;
          if ( v32 )
          {
            if ( v32 <= 2 )
            {
              v29 = *(_DWORD *)(&v31[2].MaximumLength + 1) - 2;
            }
            else if ( v32 == 7 )
            {
              v33 = -1LL;
              do
                ++v33;
              while ( v31[2].Buffer[v33] );
              v29 = 2 * v33;
            }
          }
        }
        ++v25;
      }
      if ( (unsigned __int64)(v29 + (unsigned int)UnicodeString.MaximumLength) + 2 >= 0xFFFE )
      {
        DeviceRegProp = -2147483643;
        break;
      }
      UnicodeString.MaximumLength += v29 + 2;
      if ( v27 )
      {
        *v27 = 92;
        v34 = v27 + 1;
      }
      else
      {
        v35 = -1LL;
        do
          ++v35;
        while ( v24[v35] );
        v34 = &v24[v35];
      }
      v24 = v34;
      if ( !*v34 )
        break;
    }
    v21 = v58;
  }
  if ( DeviceRegProp >= 0 )
  {
    LOWORD(v36) = UnicodeString.MaximumLength;
    UnicodeString.Length = UnicodeString.MaximumLength - 2;
    UnicodeString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, UnicodeString.MaximumLength, 0x63647050u);
    Buffer = UnicodeString.Buffer;
    if ( !UnicodeString.Buffer )
      goto LABEL_37;
    v36 = (unsigned __int16)v36;
    v38 = 0;
    v56 = (unsigned __int16)v36;
    v39 = v21;
    LODWORD(v57) = 0;
    if ( *v21 )
    {
      while ( v38 < (unsigned int)P )
      {
        v40 = wcschr(v39, 0x5Cu);
        v41 = v40;
        if ( v40 )
        {
          *v40 = 0;
          v42 = v40 - v39;
        }
        else
        {
          v42 = -1LL;
          do
            ++v42;
          while ( v39[v42] );
        }
        v43 = 2 * v42;
        v44 = v39;
        if ( v39 != v58 )
        {
          if ( v36 <= 2 )
            goto LABEL_3;
          *Buffer++ = 92;
          v36 -= 2;
          v56 = v36;
        }
        if ( *v39 == 36 )
        {
          v45 = *((_QWORD *)v60 + (unsigned int)v57);
          LODWORD(v57) = (_DWORD)v57 + 1;
          if ( v45 )
          {
            v46 = *(_DWORD *)(v45 + 32);
            if ( v46 )
            {
              if ( v46 <= 2 )
              {
                v44 = *(const wchar_t **)(v45 + 40);
                v43 = *(_DWORD *)(v45 + 36) - 2;
              }
              else if ( v46 == 7 )
              {
                v44 = *(const wchar_t **)(v45 + 40);
                v47 = -1LL;
                do
                  ++v47;
                while ( v44[v47] );
                v43 = 2 * v47;
              }
            }
          }
        }
        if ( v36 <= v43 )
        {
          DeviceRegProp = -1073741823;
          break;
        }
        memmove(Buffer, v44, v43);
        Buffer += (unsigned __int64)v43 >> 1;
        v36 = v56 - v43;
        v56 -= v43;
        if ( v41 )
        {
          *v41 = 92;
          v48 = v41 + 1;
        }
        else
        {
          v49 = -1LL;
          do
            ++v49;
          while ( v39[v49] );
          v48 = &v39[v49];
        }
        v39 = v48;
        if ( !*v48 )
          break;
        v38 = (unsigned int)v57;
      }
    }
    if ( DeviceRegProp >= 0 )
    {
      if ( v36 != 2 )
        goto LABEL_3;
      v50 = UnicodeString;
      *Buffer = 0;
      DestinationString = v50;
      goto LABEL_99;
    }
  }
LABEL_105:
  RtlFreeAnsiString(&UnicodeString);
  if ( v60 )
    ExFreePoolWithTag(v60, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DeviceRegProp;
}
