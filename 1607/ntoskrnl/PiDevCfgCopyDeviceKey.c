/*
 * XREFs of PiDevCfgCopyDeviceKey @ 0x14063634C
 * Callers:
 *     PiDevCfgCopyDeviceKeys @ 0x140636F28 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceProperties @ 0x140637028 (PiDevCfgCopyDeviceProperties.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14015A450 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x14015A830 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14015BB50 (ZwDeleteValueKey.c)
 *     ZwSetSecurityObject @ 0x14015D470 (ZwSetSecurityObject.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1401CEC6C (PiDevCfgParsePropertyKeyName.c)
 *     PiDevCfgParseVariableName @ 0x1401CED90 (PiDevCfgParseVariableName.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x1401CEED8 (PiDevCfgPushCopyKeyEntry.c)
 *     PnpRegistryValueExists @ 0x1401CF2C0 (PnpRegistryValueExists.c)
 *     PnpValidateStringData @ 0x1401CF488 (PnpValidateStringData.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     IopGetRegistryKeyInformation @ 0x1405404C4 (IopGetRegistryKeyInformation.c)
 *     _PnpCtxRegDeleteTree @ 0x140550B58 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1406360BC (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140639240 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14063E0AC (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14063E438 (PiDevCfgResolveVariable.c)
 *     PiDevCfgSetObjectProperty @ 0x1406410B0 (PiDevCfgSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKey(
        HANDLE KeyHandle,
        void *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        HANDLE *a6,
        __int64 a7)
{
  __int64 v7; // rsi
  unsigned int v8; // r13d
  __int64 v9; // r12
  int RegistryKeyInformation; // ebx
  unsigned int Length; // edi
  WCHAR *v12; // r15
  ULONG i; // r14d
  NTSTATUS v14; // eax
  int v15; // edi
  bool v16; // al
  int v17; // eax
  unsigned int v18; // ebx
  bool v19; // si
  int v20; // ebx
  PVOID v21; // r12
  ULONG *v22; // r13
  unsigned int v23; // r15d
  ULONG MaximumLength; // edi
  char *Buffer; // rsi
  ULONG v26; // r14d
  _WORD *v27; // rcx
  int v28; // eax
  char *v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  HANDLE v33; // rdi
  int v34; // r9d
  int v35; // eax
  int v36; // edx
  unsigned int v37; // r9d
  int v38; // eax
  int v39; // ecx
  unsigned int v40; // eax
  char *v41; // rdi
  int v42; // eax
  PVOID v43; // r14
  HANDLE *v45; // r13
  HANDLE v46; // r12
  ULONG j; // esi
  NTSTATUS v48; // eax
  __int64 v49; // rbx
  const WCHAR *v50; // rdi
  int v51; // eax
  int v52; // edx
  NTSTATUS v53; // eax
  HANDLE v54; // rdx
  __int64 v55; // rax
  int ResultLength; // [rsp+28h] [rbp-D8h]
  ULONG ResultLengtha; // [rsp+28h] [rbp-D8h]
  ULONG v58; // [rsp+60h] [rbp-A0h]
  unsigned int v59; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE v60; // [rsp+68h] [rbp-98h]
  ULONG v61; // [rsp+70h] [rbp-90h] BYREF
  int v62; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v64; // [rsp+80h] [rbp-80h] BYREF
  PVOID v65; // [rsp+88h] [rbp-78h] BYREF
  PVOID v66; // [rsp+90h] [rbp-70h]
  int v67; // [rsp+98h] [rbp-68h] BYREF
  PVOID v68; // [rsp+A0h] [rbp-60h]
  __int64 v69; // [rsp+A8h] [rbp-58h]
  int v70; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v71; // [rsp+B4h] [rbp-4Ch]
  ULONG v72; // [rsp+B8h] [rbp-48h]
  PVOID P[2]; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING ValueName; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v75; // [rsp+E0h] [rbp-20h]
  PVOID PoolWithTag; // [rsp+E8h] [rbp-18h]
  UNICODE_STRING v77; // [rsp+F0h] [rbp-10h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp+0h] BYREF
  ULONG Disposition; // [rsp+130h] [rbp+30h] BYREF
  HANDLE KeyHandlea; // [rsp+138h] [rbp+38h]
  UNICODE_STRING v81; // [rsp+140h] [rbp+40h] BYREF
  HANDLE *v82; // [rsp+150h] [rbp+50h]
  UNICODE_STRING v83; // [rsp+160h] [rbp+60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+170h] [rbp+70h] BYREF
  GUID v85; // [rsp+180h] [rbp+80h] BYREF

  v7 = a7;
  KeyHandlea = KeyHandle;
  v8 = a4;
  v9 = a3;
  v82 = a6;
  v60 = a2;
  Handle = 0LL;
  v64 = 0LL;
  v66 = 0LL;
  v70 = 1;
  v71 = a4;
  v75 = a3;
  v69 = a7;
  RegistryKeyInformation = IopGetRegistryKeyInformation(KeyHandle, P);
  if ( RegistryKeyInformation < 0 )
    goto LABEL_116;
  Length = 2 * *((_DWORD *)P[0] + 6) + 26;
  v61 = 2 * *((_DWORD *)P[0] + 9) + 18;
  if ( v61 > Length )
    Length = v61;
  v58 = Length;
  ExFreePoolWithTag(P[0], 0);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x63647050u);
  v12 = (WCHAR *)PoolWithTag;
  if ( !PoolWithTag )
  {
    RegistryKeyInformation = -1073741670;
    goto LABEL_116;
  }
  for ( i = 0; ; ++i )
  {
    v72 = i;
    v14 = ZwEnumerateValueKey(KeyHandlea, i, KeyValueBasicInformation, v12, Length, &v61);
    RegistryKeyInformation = v14;
    if ( v14 < 0 )
      break;
    v12[((unsigned __int64)*((unsigned int *)v12 + 2) >> 1) + 6] = 0;
    RegistryKeyInformation = RtlInitUnicodeStringEx(&DestinationString, v12 + 6);
    if ( RegistryKeyInformation < 0 )
      goto LABEL_111;
    v15 = 0;
    ValueName = DestinationString;
    v62 = 0;
    if ( !v7 )
      goto LABEL_23;
    if ( !*(_QWORD *)(v7 + 16) )
      goto LABEL_23;
    v16 = PiDevCfgParseVariableName(DestinationString.Buffer, &v77, &v62);
    v15 = v62;
    if ( !v16 )
      goto LABEL_23;
    if ( (v62 & 0x400000) == 0 )
    {
      v65 = 0LL;
      v17 = PiDevCfgResolveVariable(v7, v77.Buffer, &v65);
      if ( v17 >= 0 )
      {
        if ( (unsigned int)(*((_DWORD *)v65 + 8) - 1) > 1 || *((_DWORD *)v65 + 9) > 0xFFFEu )
          goto LABEL_101;
        ValueName.Buffer = (wchar_t *)*((_QWORD *)v65 + 5);
        ValueName.Length = *((_WORD *)v65 + 18) - 2;
        ValueName.MaximumLength = *((_WORD *)v65 + 18);
LABEL_23:
        v18 = *((_DWORD *)v12 + 1) & 0xFFFF0000;
        v12[3] = 0;
        if ( (v18 & 0x400000) != 0 || v9 && !PiDevCfgParsePropertyKeyName(&ValueName.Length, &v85, &v70) )
          goto LABEL_101;
        v19 = (a5 & 1) != 0;
        v20 = v15 | v18;
        if ( (v20 & 0x30000) != 0 || !v19 )
        {
          if ( v9 )
          {
            if ( (unsigned int)PnpGetObjectProperty(
                                 *(__int64 *)&PiPnpRtlCtx,
                                 v9,
                                 v8,
                                 (__int64)v60,
                                 0LL,
                                 (__int64)&v85,
                                 (__int64)&v59,
                                 0LL,
                                 0,
                                 (__int64)&v67,
                                 0) != -1073741789 )
              goto LABEL_29;
LABEL_40:
            if ( (v20 & 0x20000) != 0 || !v19 )
              goto LABEL_100;
          }
          else
          {
            if ( PnpRegistryValueExists(v60, &ValueName) )
              goto LABEL_40;
LABEL_29:
            if ( (v20 & 0x10000) != 0 )
            {
LABEL_100:
              v7 = v69;
              goto LABEL_101;
            }
          }
        }
        v65 = 0LL;
        v21 = 0LL;
        v68 = 0LL;
        RegistryKeyInformation = IopGetRegistryValue(KeyHandlea, DestinationString.Buffer, 0, &v65);
        if ( RegistryKeyInformation < 0 )
          goto LABEL_111;
        v22 = (ULONG *)v65;
        v23 = *((_DWORD *)v65 + 1) & 0xFFFF0000;
        MaximumLength = *((_DWORD *)v65 + 3);
        Buffer = (char *)v65 + *((unsigned int *)v65 + 2);
        v26 = (unsigned __int16)*((_DWORD *)v65 + 1);
        if ( v69
          && *(_QWORD *)(v69 + 16)
          && v26 - 1 <= 1
          && PnpValidateStringData((__int64)v65 + *((unsigned int *)v65 + 2), MaximumLength)
          && PiDevCfgParseVariableName(v27, &v77, &v62) )
        {
          Buffer = (char *)v77.Buffer;
          v65 = 0LL;
          v28 = PiDevCfgResolveVariable(v69, v77.Buffer, &v65);
          RegistryKeyInformation = v28;
          if ( v28 < 0 )
          {
            RegistryKeyInformation = 0;
            if ( v28 == -1073741772 )
              MaximumLength = v77.MaximumLength;
            else
              Buffer = 0LL;
          }
          else if ( (v62 & 0xC0000) != 0 )
          {
            ResultLength = (int)ValueName.Buffer;
            v29 = (char *)*((_QWORD *)v65 + 5);
            v30 = *((unsigned int *)v65 + 9);
            v31 = *((unsigned int *)v65 + 8);
LABEL_51:
            v32 = PiDevCfgResolveMultiSzValue(v31, v30, v29);
            v21 = v68;
            RegistryKeyInformation = v32;
            if ( v32 < 0 )
            {
              Buffer = 0LL;
              RegistryKeyInformation = 0;
            }
            else
            {
              MaximumLength = v61;
              v26 = 7;
              Buffer = (char *)v68;
              if ( v61 >= 2 && !*(_WORD *)v68 )
                v23 |= 0x200000u;
            }
          }
          else
          {
            MaximumLength = *((_DWORD *)v65 + 9);
            Buffer = (char *)*((_QWORD *)v65 + 5);
            v26 = (unsigned __int16)*((_DWORD *)v65 + 8);
            v23 |= *((_DWORD *)v65 + 8) & 0xFFFF0000;
          }
        }
        else if ( (v26 - 1 <= 1 || v26 == 7) && (v23 & 0xC0000) != 0 )
        {
          v29 = Buffer;
          v30 = MaximumLength;
          v31 = v26;
          ResultLength = (int)ValueName.Buffer;
          goto LABEL_51;
        }
        if ( !Buffer )
          goto LABEL_91;
        if ( v26 == 0x8000 )
        {
          if ( !v75 )
          {
            v33 = v60;
            if ( v82 )
            {
              v34 = 0x80000000;
              if ( (v23 & 0x20000) == 0 )
                v34 = -2147483647;
              v35 = PiDevCfgPushCopyKeyEntry(v82, Buffer, v60, v34);
LABEL_105:
              RegistryKeyInformation = v35;
            }
            goto LABEL_92;
          }
LABEL_91:
          v33 = v60;
          goto LABEL_92;
        }
        if ( !v26 && (v23 & 0x100000) != 0 )
          goto LABEL_91;
        v36 = v75;
        if ( !v75 )
        {
          if ( (v23 & 0x200000) == 0 )
          {
            ResultLengtha = MaximumLength;
            v33 = v60;
            v35 = ZwSetValueKey(v60, &ValueName, *v22, v26, Buffer, ResultLengtha);
            goto LABEL_105;
          }
          v33 = v60;
          RegistryKeyInformation = ZwDeleteValueKey(v60, &ValueName);
          if ( RegistryKeyInformation == -1073741772 )
            RegistryKeyInformation = 0;
LABEL_92:
          if ( v21 )
            ExFreePoolWithTag(v21, 0);
          v9 = v75;
          if ( !v75 && v26 != 0x8000 && (v23 & 0x100000) != 0 )
            PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v33, (__int64)ValueName.Buffer);
          ExFreePoolWithTag(v22, 0);
          if ( RegistryKeyInformation < 0 )
            goto LABEL_111;
          v12 = (WCHAR *)PoolWithTag;
          i = v72;
          v8 = v71;
          goto LABEL_100;
        }
        if ( (v23 & 0x200000) != 0 )
        {
          v40 = 0;
          P[0] = 0LL;
          v39 = 0;
          v59 = 0;
          v67 = 0;
          v41 = 0LL;
        }
        else
        {
          if ( v70 == 1 )
          {
            if ( !v26 )
              goto LABEL_76;
            if ( v26 <= 2 )
            {
              v37 = 18;
            }
            else
            {
              switch ( v26 )
              {
                case 4u:
                  v37 = 7;
                  break;
                case 7u:
                  v37 = 8210;
                  break;
                case 0xBu:
                  v37 = 9;
                  break;
                default:
LABEL_76:
                  v37 = 4099;
                  break;
              }
            }
            v59 = v37;
          }
          else
          {
            v37 = v70;
            v59 = v70;
          }
          v38 = PiDevCfgConvertPropertyFromValue(v26, MaximumLength, (wchar_t *)Buffer, v37, &v67, P);
          v39 = v67;
          RegistryKeyInformation = v38;
          v40 = v59;
          v41 = (char *)P[0];
          v36 = v75;
        }
        if ( RegistryKeyInformation >= 0 && (v41 || !v40) )
        {
          v42 = PiDevCfgSetObjectProperty(
                  PiPnpRtlCtx,
                  0,
                  v36,
                  v71,
                  (__int64)v60,
                  ResultLength,
                  (__int64)&v85,
                  v40,
                  (__int64)v41,
                  v39);
          RegistryKeyInformation = v42;
          if ( !v59 && v42 == -1073741275 )
            RegistryKeyInformation = 0;
          if ( v41 )
          {
            if ( v41 != Buffer )
              ExFreePoolWithTag(v41, 0);
            P[0] = 0LL;
          }
        }
        goto LABEL_91;
      }
      if ( v17 == -1073741772 )
      {
        ValueName = v77;
        goto LABEL_23;
      }
    }
LABEL_101:
    Length = v58;
LABEL_102:
    ;
  }
  if ( v14 == -2147483622 )
  {
    RegistryKeyInformation = 0;
    goto LABEL_122;
  }
  if ( v14 != -2147483643 )
    goto LABEL_110;
  ExFreePoolWithTag(v12, 0);
  Length = v61;
  v58 = v61;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v61, 0x63647050u);
  v12 = (WCHAR *)PoolWithTag;
  if ( PoolWithTag )
  {
    --i;
    goto LABEL_102;
  }
  RegistryKeyInformation = -1073741670;
LABEL_110:
  if ( RegistryKeyInformation < 0 )
  {
LABEL_111:
    v43 = v66;
    goto LABEL_112;
  }
LABEL_122:
  if ( v9 )
    goto LABEL_111;
  v45 = v82;
  v43 = v66;
  if ( !v82 )
    goto LABEL_112;
  v46 = KeyHandlea;
  for ( j = 0; ; ++j )
  {
    v48 = ZwEnumerateKey(v46, j, KeyBasicInformation, v12, Length, &v61);
    RegistryKeyInformation = v48;
    if ( v48 < 0 )
    {
      if ( v48 == -2147483622 )
      {
        RegistryKeyInformation = 0;
      }
      else
      {
        if ( v48 != -2147483643 )
          goto LABEL_112;
        ExFreePoolWithTag(v12, 0);
        Length = v61;
        v58 = v61;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v61, 0x63647050u);
        v12 = (WCHAR *)PoolWithTag;
        if ( PoolWithTag )
        {
          --j;
          continue;
        }
        RegistryKeyInformation = -1073741670;
      }
      goto LABEL_112;
    }
    v12[((unsigned __int64)*((unsigned int *)v12 + 3) >> 1) + 8] = 0;
    RegistryKeyInformation = RtlInitUnicodeStringEx(&v83, v12 + 8);
    if ( RegistryKeyInformation < 0 )
      goto LABEL_112;
    v81 = v83;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v46;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.ObjectName = &v83;
    RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    if ( RegistryKeyInformation < 0 )
      goto LABEL_112;
    v49 = v69;
    v50 = 0LL;
    v62 = 0;
    if ( !v69 || !*(_QWORD *)(v69 + 16) || !PiDevCfgParseVariableName(v83.Buffer, &v77, &v62) )
      break;
    v65 = 0LL;
    v51 = PiDevCfgResolveVariable(v49, v77.Buffer, &v65);
    if ( v51 < 0 )
    {
      if ( v51 == -1073741772 )
      {
        v81 = v77;
        break;
      }
    }
    else
    {
      v52 = *((_DWORD *)v65 + 8);
      if ( (unsigned int)(v52 - 1) <= 1 )
      {
        v81.Buffer = (wchar_t *)*((_QWORD *)v65 + 5);
        v81.Length = *((_WORD *)v65 + 18) - 2;
        v81.MaximumLength = *((_WORD *)v65 + 18);
        break;
      }
      if ( v52 == 7 )
      {
        v50 = (const WCHAR *)*((_QWORD *)v65 + 5);
        break;
      }
    }
    ZwClose(Handle);
    Handle = 0LL;
LABEL_160:
    Length = v58;
  }
  RegistryKeyInformation = PiDevCfgGetKeySecurityDescriptor(Handle);
  if ( RegistryKeyInformation >= 0 )
  {
    v43 = v66;
  }
  else
  {
    RegistryKeyInformation = 0;
    v66 = 0LL;
    v43 = 0LL;
  }
  if ( v50 )
  {
    while ( 1 )
    {
      if ( !*v50 )
        goto LABEL_155;
      RtlInitUnicodeString(&v81, v50);
      ObjectAttributes.RootDirectory = v60;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.ObjectName = &v81;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = v43;
      v53 = ZwOpenKey(&v64, 0xF003Fu, &ObjectAttributes);
      RegistryKeyInformation = v53;
      if ( v53 < 0 )
      {
        if ( v53 != -1073741772 )
          goto LABEL_155;
        if ( (v62 & 0x10000) != 0 )
        {
          RegistryKeyInformation = 0;
          goto LABEL_174;
        }
        RegistryKeyInformation = ZwCreateKey(&v64, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
        if ( RegistryKeyInformation < 0 )
          goto LABEL_155;
      }
      else if ( v43 )
      {
        ZwSetSecurityObject(v64, 4u, v43);
      }
      v54 = Handle;
      if ( !Handle )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v83;
        ObjectAttributes.RootDirectory = v46;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
        if ( RegistryKeyInformation < 0 )
          goto LABEL_179;
        v54 = Handle;
      }
      RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v45, v54, v64, a5 | 0x40000000u);
      if ( RegistryKeyInformation < 0 )
      {
LABEL_179:
        ZwClose(v64);
        goto LABEL_154;
      }
      Handle = 0LL;
      v64 = 0LL;
LABEL_174:
      v55 = -1LL;
      do
        ++v55;
      while ( v50[v55] );
      v50 += v55 + 1;
    }
  }
  ObjectAttributes.RootDirectory = v60;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &v81;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v43;
  RegistryKeyInformation = ZwCreateKey(&v64, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( RegistryKeyInformation >= 0 )
  {
    if ( Disposition == 2 && v43 )
      ZwSetSecurityObject(v64, 4u, v43);
    RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v45, Handle, v64, a5 | 0x40000000u);
    if ( RegistryKeyInformation < 0 )
      ZwClose(v64);
    Handle = 0LL;
LABEL_154:
    v64 = 0LL;
  }
LABEL_155:
  if ( v43 )
  {
    ExFreePoolWithTag(v43, 0);
    v43 = 0LL;
    v66 = 0LL;
  }
  if ( Handle )
  {
    ZwClose(Handle);
    Handle = 0LL;
  }
  if ( RegistryKeyInformation >= 0 )
    goto LABEL_160;
LABEL_112:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v43 )
    ExFreePoolWithTag(v43, 0);
LABEL_116:
  if ( Handle )
    ZwClose(Handle);
  if ( v64 )
    ZwClose(v64);
  return (unsigned int)RegistryKeyInformation;
}
