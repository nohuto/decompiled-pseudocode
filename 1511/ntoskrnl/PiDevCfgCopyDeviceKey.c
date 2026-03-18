/*
 * XREFs of PiDevCfgCopyDeviceKey @ 0x140515118
 * Callers:
 *     PiDevCfgCopyDeviceKeys @ 0x140515030 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceProperties @ 0x140608220 (PiDevCfgCopyDeviceProperties.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     PnpValidateStringData @ 0x14012C378 (PnpValidateStringData.c)
 *     PnpRegistryValueExists @ 0x14012C890 (PnpRegistryValueExists.c)
 *     PiDevCfgParseVariableName @ 0x14012C8F0 (PiDevCfgParseVariableName.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x14012C990 (PiDevCfgPushCopyKeyEntry.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x140150880 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x140150C60 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140151F40 (ZwDeleteValueKey.c)
 *     ZwSetSecurityObject @ 0x1401537E0 (ZwSetSecurityObject.c)
 *     PiDevCfgParsePropertyKeyName @ 0x1401C04F4 (PiDevCfgParsePropertyKeyName.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     IopGetRegistryKeyInformation @ 0x140507A9C (IopGetRegistryKeyInformation.c)
 *     PiDevCfgSetObjectProperty @ 0x140512D8C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgResolveVariable @ 0x1405156FC (PiDevCfgResolveVariable.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140515DF8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpCtxRegDeleteTree @ 0x140522444 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140607F90 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14060A6AC (PiDevCfgResolveMultiSzValue.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKey(
        HANDLE KeyHandle,
        void *a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        HANDLE *a6,
        __int64 a7)
{
  __int64 v7; // rsi
  __int64 v8; // r15
  int RegistryKeyInformation; // ebx
  unsigned int v10; // edi
  WCHAR *v11; // r14
  ULONG i; // r12d
  NTSTATUS v13; // eax
  HANDLE *v14; // r12
  HANDLE v15; // r15
  ULONG j; // esi
  NTSTATUS v17; // eax
  int v19; // edi
  unsigned int v20; // ebx
  bool v21; // si
  int v22; // ebx
  void *v23; // r12
  unsigned int v24; // r15d
  unsigned int MaximumLength; // edi
  wchar_t *Buffer; // rsi
  ULONG v27; // r14d
  _WORD *v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  PVOID v31; // rdi
  HANDLE v32; // rsi
  bool v33; // al
  int v34; // eax
  __int64 v35; // rbx
  const WCHAR *v36; // rdi
  void *v37; // r13
  wchar_t *v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  int v42; // r9d
  unsigned int v43; // r9d
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // eax
  wchar_t *v47; // rdi
  int v48; // eax
  int v49; // eax
  int v50; // edx
  NTSTATUS v51; // eax
  HANDLE v52; // rdx
  __int64 v53; // rax
  wchar_t *Length; // [rsp+20h] [rbp-E0h]
  int ResultLength; // [rsp+28h] [rbp-D8h]
  ULONG ResultLengtha; // [rsp+28h] [rbp-D8h]
  ULONG v57; // [rsp+60h] [rbp-A0h]
  unsigned int v58; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE v59; // [rsp+68h] [rbp-98h]
  ULONG v60; // [rsp+70h] [rbp-90h] BYREF
  int v61; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE v62; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  PVOID v64; // [rsp+88h] [rbp-78h] BYREF
  __int64 v65; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v66; // [rsp+98h] [rbp-68h] BYREF
  _WORD *v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h]
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING ValueName; // [rsp+C0h] [rbp-40h] BYREF
  ULONG v72; // [rsp+D0h] [rbp-30h]
  unsigned int v73; // [rsp+D4h] [rbp-2Ch]
  unsigned int v74; // [rsp+D8h] [rbp-28h] BYREF
  PVOID PoolWithTag; // [rsp+E0h] [rbp-20h]
  void *v76; // [rsp+E8h] [rbp-18h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v78; // [rsp+120h] [rbp+20h] BYREF
  HANDLE KeyHandlea; // [rsp+130h] [rbp+30h]
  UNICODE_STRING v80; // [rsp+140h] [rbp+40h] BYREF
  ULONG Disposition; // [rsp+150h] [rbp+50h] BYREF
  HANDLE *v82; // [rsp+158h] [rbp+58h]
  UNICODE_STRING v83; // [rsp+160h] [rbp+60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+170h] [rbp+70h] BYREF
  GUID v85; // [rsp+180h] [rbp+80h] BYREF

  v7 = a7;
  KeyHandlea = KeyHandle;
  v8 = a3;
  v82 = a6;
  v59 = a2;
  Handle = 0LL;
  v62 = 0LL;
  v76 = 0LL;
  v74 = 1;
  v73 = a4;
  v70 = a3;
  v68 = a7;
  RegistryKeyInformation = IopGetRegistryKeyInformation(KeyHandle, &P);
  if ( RegistryKeyInformation < 0 )
    goto LABEL_17;
  v10 = 2 * *((_DWORD *)P + 6) + 26;
  v60 = 2 * *((_DWORD *)P + 9) + 18;
  if ( v60 > v10 )
    v10 = v60;
  v57 = v10;
  ExFreePoolWithTag(P, 0);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x63647050u);
  v11 = (WCHAR *)PoolWithTag;
  if ( !PoolWithTag )
  {
    RegistryKeyInformation = -1073741670;
    goto LABEL_17;
  }
  for ( i = 0; ; ++i )
  {
    v72 = i;
    v13 = ZwEnumerateValueKey(KeyHandlea, i, KeyValueBasicInformation, v11, v10, &v60);
    RegistryKeyInformation = v13;
    if ( v13 >= 0 )
    {
      v11[((unsigned __int64)*((unsigned int *)v11 + 2) >> 1) + 6] = 0;
      RegistryKeyInformation = RtlInitUnicodeStringEx(&DestinationString, v11 + 6);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_15;
      v19 = 0;
      ValueName = DestinationString;
      v61 = 0;
      if ( v7 )
      {
        if ( *(_QWORD *)(v7 + 16) )
        {
          v33 = PiDevCfgParseVariableName(DestinationString.Buffer, &v78, &v61);
          v19 = v61;
          if ( v33 )
          {
            if ( (v61 & 0x400000) != 0 )
              goto LABEL_52;
            v65 = 0LL;
            v34 = PiDevCfgResolveVariable(v7, v78.Buffer, &v65);
            if ( v34 >= 0 )
            {
              if ( (unsigned int)(*(_DWORD *)(v65 + 32) - 1) > 1 || *(_DWORD *)(v65 + 36) > 0xFFFEu )
                goto LABEL_52;
              ValueName.Buffer = *(wchar_t **)(v65 + 40);
              ValueName.Length = *(_WORD *)(v65 + 36) - 2;
              ValueName.MaximumLength = *(_WORD *)(v65 + 36);
            }
            else
            {
              if ( v34 != -1073741772 )
                goto LABEL_52;
              ValueName = v78;
            }
          }
        }
      }
      v20 = *((_DWORD *)v11 + 1) & 0xFFFF0000;
      v11[3] = 0;
      if ( (v20 & 0x400000) != 0 || v8 && !PiDevCfgParsePropertyKeyName(&ValueName.Length, &v85, &v74) )
        goto LABEL_52;
      v21 = (a5 & 1) != 0;
      v22 = v19 | v20;
      if ( (v22 & 0x30000) == 0 && v21 )
      {
LABEL_28:
        v64 = 0LL;
        v23 = 0LL;
        v67 = 0LL;
        RegistryKeyInformation = IopGetRegistryValue(KeyHandlea, DestinationString.Buffer, 0, &v64);
        if ( RegistryKeyInformation < 0 )
          goto LABEL_15;
        v24 = *((_DWORD *)v64 + 1) & 0xFFFF0000;
        MaximumLength = *((_DWORD *)v64 + 3);
        Buffer = (wchar_t *)((char *)v64 + *((unsigned int *)v64 + 2));
        v27 = (unsigned __int16)*((_DWORD *)v64 + 1);
        if ( v68
          && *(_QWORD *)(v68 + 16)
          && v27 - 1 <= 1
          && PnpValidateStringData((__int64)v64 + *((unsigned int *)v64 + 2), MaximumLength)
          && PiDevCfgParseVariableName(v28, &v78, &v61) )
        {
          Buffer = v78.Buffer;
          v65 = 0LL;
          v29 = PiDevCfgResolveVariable(v68, v78.Buffer, &v65);
          RegistryKeyInformation = v29;
          if ( v29 < 0 )
          {
            RegistryKeyInformation = 0;
            if ( v29 == -1073741772 )
              MaximumLength = v78.MaximumLength;
            else
              Buffer = 0LL;
            goto LABEL_37;
          }
          if ( (v61 & 0xC0000) == 0 )
          {
            MaximumLength = *(_DWORD *)(v65 + 36);
            Buffer = *(wchar_t **)(v65 + 40);
            v27 = (unsigned __int16)*(_DWORD *)(v65 + 32);
            v24 |= *(_DWORD *)(v65 + 32) & 0xFFFF0000;
LABEL_37:
            if ( !Buffer )
              goto LABEL_117;
            if ( v27 == 0x8000 )
            {
              if ( !v70 && v82 )
              {
                v42 = 0x80000000;
                if ( (v24 & 0x20000) == 0 )
                  v42 = -2147483647;
                RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v82, Buffer, v59, v42);
              }
              goto LABEL_117;
            }
            if ( !v27 && (v24 & 0x100000) != 0 )
            {
LABEL_117:
              v32 = v59;
              goto LABEL_118;
            }
            v30 = v70;
            if ( !v70 )
            {
              if ( (v24 & 0x200000) == 0 )
              {
                ResultLengtha = MaximumLength;
                v31 = v64;
                Length = Buffer;
                v32 = v59;
                RegistryKeyInformation = ZwSetValueKey(v59, &ValueName, *(_DWORD *)v64, v27, Length, ResultLengtha);
LABEL_43:
                if ( v23 )
                  ExFreePoolWithTag(v23, 0);
                if ( !v70 && v27 != 0x8000 && (v24 & 0x100000) != 0 )
                  PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v32, ValueName.Buffer);
                ExFreePoolWithTag(v31, 0);
                if ( RegistryKeyInformation < 0 )
                  goto LABEL_15;
                v11 = (WCHAR *)PoolWithTag;
                v8 = v70;
                i = v72;
                goto LABEL_51;
              }
              v32 = v59;
              RegistryKeyInformation = ZwDeleteValueKey(v59, &ValueName);
              if ( RegistryKeyInformation == -1073741772 )
                RegistryKeyInformation = 0;
LABEL_118:
              v31 = v64;
              goto LABEL_43;
            }
            if ( (v24 & 0x200000) != 0 )
            {
              v46 = 0;
              P = 0LL;
              v45 = 0;
              v58 = 0;
              v66 = 0;
              v47 = 0LL;
              goto LABEL_137;
            }
            if ( v74 != 1 )
            {
              v43 = v74;
              v58 = v74;
              goto LABEL_135;
            }
            if ( v27 )
            {
              if ( v27 <= 2 )
              {
                v43 = 18;
                goto LABEL_133;
              }
              switch ( v27 )
              {
                case 4u:
                  v43 = 7;
                  goto LABEL_133;
                case 7u:
                  v43 = 8210;
                  goto LABEL_133;
                case 0xBu:
                  v43 = 9;
LABEL_133:
                  v58 = v43;
LABEL_135:
                  v44 = PiDevCfgConvertPropertyFromValue(
                          v27,
                          MaximumLength,
                          (_DWORD)Buffer,
                          v43,
                          (__int64)&v66,
                          (__int64)&P);
                  v45 = v66;
                  RegistryKeyInformation = v44;
                  v46 = v58;
                  v47 = (wchar_t *)P;
                  v30 = v70;
LABEL_137:
                  if ( RegistryKeyInformation >= 0 && (v47 || !v46) )
                  {
                    v48 = PiDevCfgSetObjectProperty(
                            *(__int64 *)&PiPnpRtlCtx,
                            0LL,
                            v30,
                            v73,
                            (__int64)v59,
                            ResultLength,
                            (__int64)&v85,
                            v46,
                            (__int64)v47,
                            v45);
                    RegistryKeyInformation = v48;
                    if ( !v58 && v48 == -1073741275 )
                      RegistryKeyInformation = 0;
                    if ( v47 )
                    {
                      if ( v47 != Buffer )
                        ExFreePoolWithTag(v47, 0);
                      P = 0LL;
                    }
                  }
                  goto LABEL_117;
              }
            }
            v43 = 4099;
            goto LABEL_133;
          }
          ResultLength = (int)ValueName.Buffer;
          v38 = *(wchar_t **)(v65 + 40);
          v39 = *(unsigned int *)(v65 + 36);
          v40 = *(unsigned int *)(v65 + 32);
        }
        else
        {
          if ( v27 - 1 > 1 && v27 != 7 || (v24 & 0xC0000) == 0 )
            goto LABEL_37;
          v38 = Buffer;
          v39 = MaximumLength;
          v40 = v27;
          ResultLength = (int)ValueName.Buffer;
        }
        v41 = PiDevCfgResolveMultiSzValue(v40, v39, v38);
        v23 = v67;
        RegistryKeyInformation = v41;
        if ( v41 < 0 )
        {
          Buffer = 0LL;
          RegistryKeyInformation = 0;
        }
        else
        {
          MaximumLength = v60;
          v27 = 7;
          Buffer = v67;
          if ( v60 >= 2 && !*v67 )
            v24 |= 0x200000u;
        }
        goto LABEL_37;
      }
      if ( v8 )
      {
        if ( (unsigned int)PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             v8,
                             v73,
                             (__int64)v59,
                             0LL,
                             (__int64)&v85,
                             (__int64)&v58,
                             0LL,
                             0,
                             (__int64)&v66,
                             0) == -1073741789 )
        {
LABEL_56:
          if ( (v22 & 0x20000) == 0 && v21 )
            goto LABEL_28;
          goto LABEL_51;
        }
      }
      else if ( PnpRegistryValueExists(v59, &ValueName) )
      {
        goto LABEL_56;
      }
      if ( (v22 & 0x10000) == 0 )
        goto LABEL_28;
LABEL_51:
      v7 = v68;
LABEL_52:
      v10 = v57;
      continue;
    }
    if ( v13 == -2147483622 )
    {
      RegistryKeyInformation = 0;
      goto LABEL_9;
    }
    if ( v13 != -2147483643 )
      goto LABEL_151;
    ExFreePoolWithTag(v11, 0);
    v10 = v60;
    v57 = v60;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v60, 0x63647050u);
    v11 = (WCHAR *)PoolWithTag;
    if ( !PoolWithTag )
      break;
    --i;
  }
  RegistryKeyInformation = -1073741670;
LABEL_151:
  if ( RegistryKeyInformation < 0 )
    goto LABEL_15;
LABEL_9:
  if ( !v8 )
  {
    v14 = v82;
    if ( v82 )
    {
      v15 = KeyHandlea;
      for ( j = 0; ; ++j )
      {
        v17 = ZwEnumerateKey(v15, j, KeyBasicInformation, v11, v10, &v60);
        RegistryKeyInformation = v17;
        if ( v17 >= 0 )
          break;
        if ( v17 == -2147483622 )
        {
          RegistryKeyInformation = 0;
          goto LABEL_15;
        }
        if ( v17 != -2147483643 )
          goto LABEL_15;
        ExFreePoolWithTag(v11, 0);
        v10 = v60;
        v57 = v60;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v60, 0x63647050u);
        v11 = (WCHAR *)PoolWithTag;
        if ( !PoolWithTag )
        {
          RegistryKeyInformation = -1073741670;
          goto LABEL_15;
        }
        --j;
LABEL_86:
        ;
      }
      v11[((unsigned __int64)*((unsigned int *)v11 + 3) >> 1) + 8] = 0;
      RegistryKeyInformation = RtlInitUnicodeStringEx(&v83, v11 + 8);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_15;
      v80 = v83;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = v15;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = &v83;
      RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_15;
      v35 = v68;
      v36 = 0LL;
      v61 = 0;
      if ( v68 && *(_QWORD *)(v68 + 16) && PiDevCfgParseVariableName(v83.Buffer, &v78, &v61) )
      {
        v65 = 0LL;
        v49 = PiDevCfgResolveVariable(v35, v78.Buffer, &v65);
        if ( v49 < 0 )
        {
          if ( v49 != -1073741772 )
            goto LABEL_161;
          v80 = v78;
        }
        else
        {
          v50 = *(_DWORD *)(v65 + 32);
          if ( (unsigned int)(v50 - 1) > 1 )
          {
            if ( v50 == 7 )
            {
              v36 = *(const WCHAR **)(v65 + 40);
              goto LABEL_69;
            }
LABEL_161:
            ZwClose(Handle);
            Handle = 0LL;
LABEL_85:
            v10 = v57;
            goto LABEL_86;
          }
          v80.Buffer = *(wchar_t **)(v65 + 40);
          v80.Length = *(_WORD *)(v65 + 36) - 2;
          v80.MaximumLength = *(_WORD *)(v65 + 36);
        }
      }
LABEL_69:
      RegistryKeyInformation = PiDevCfgGetKeySecurityDescriptor(Handle);
      if ( RegistryKeyInformation >= 0 )
      {
        v37 = v76;
      }
      else
      {
        RegistryKeyInformation = 0;
        v76 = 0LL;
        v37 = 0LL;
      }
      if ( !v36 )
      {
        ObjectAttributes.RootDirectory = v59;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.ObjectName = &v80;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = v37;
        RegistryKeyInformation = ZwCreateKey(&v62, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( RegistryKeyInformation >= 0 )
        {
          if ( Disposition == 2 && v37 )
            ZwSetSecurityObject(v62, 4u, v37);
          RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v14, Handle, v62, 0x40000000);
          if ( RegistryKeyInformation < 0 )
            ZwClose(v62);
          Handle = 0LL;
LABEL_79:
          v62 = 0LL;
        }
LABEL_80:
        if ( v37 )
        {
          ExFreePoolWithTag(v37, 0);
          v76 = 0LL;
        }
        if ( Handle )
        {
          ZwClose(Handle);
          Handle = 0LL;
        }
        if ( RegistryKeyInformation < 0 )
          goto LABEL_15;
        goto LABEL_85;
      }
      while ( 2 )
      {
        if ( !*v36 )
          goto LABEL_80;
        RtlInitUnicodeString(&v80, v36);
        ObjectAttributes.RootDirectory = v59;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.ObjectName = &v80;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = v37;
        v51 = ZwOpenKey(&v62, 0xF003Fu, &ObjectAttributes);
        RegistryKeyInformation = v51;
        if ( v51 >= 0 )
        {
          if ( v37 )
            ZwSetSecurityObject(v62, 4u, v37);
          goto LABEL_173;
        }
        if ( v51 != -1073741772 )
          goto LABEL_80;
        if ( (v61 & 0x10000) != 0 )
        {
          RegistryKeyInformation = 0;
        }
        else
        {
          RegistryKeyInformation = ZwCreateKey(&v62, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
          if ( RegistryKeyInformation < 0 )
            goto LABEL_80;
LABEL_173:
          v52 = Handle;
          if ( !Handle )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &v83;
            ObjectAttributes.RootDirectory = v15;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
            if ( RegistryKeyInformation < 0 )
              goto LABEL_183;
            v52 = Handle;
          }
          RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v14, v52, v62, 0x40000000);
          if ( RegistryKeyInformation < 0 )
          {
LABEL_183:
            ZwClose(v62);
            goto LABEL_79;
          }
          Handle = 0LL;
          v62 = 0LL;
        }
        v53 = -1LL;
        do
          ++v53;
        while ( v36[v53] );
        v36 += v53 + 1;
        continue;
      }
    }
  }
LABEL_15:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  if ( v62 )
    ZwClose(v62);
  return (unsigned int)RegistryKeyInformation;
}
