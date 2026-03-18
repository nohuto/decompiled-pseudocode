/*
 * XREFs of PiDevCfgCopyDeviceKey @ 0x14068426C
 * Callers:
 *     PiDevCfgCopyDeviceKeys @ 0x1406852B8 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceProperties @ 0x140685510 (PiDevCfgCopyDeviceProperties.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyNW @ 0x140154884 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     wcschr @ 0x140173B98 (wcschr.c)
 *     wcstoul @ 0x1401740E0 (wcstoul.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14017F250 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x14017F630 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401808F0 (ZwDeleteValueKey.c)
 *     ZwSetSecurityObject @ 0x140182150 (ZwSetSecurityObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     IopGetRegistryKeyInformation @ 0x14057E268 (IopGetRegistryKeyInformation.c)
 *     PiDevCfgSetObjectProperty @ 0x140589E38 (PiDevCfgSetObjectProperty.c)
 *     _PnpCtxRegDeleteTree @ 0x14058F9B0 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140683FDC (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140686DE0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140689694 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKey(
        HANDLE KeyHandle,
        void *a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  HANDLE v7; // r15
  __int64 v8; // rsi
  NTSTATUS RegistryKeyInformation; // ebx
  unsigned int Length; // r14d
  WCHAR *v11; // rdi
  ULONG v12; // r12d
  NTSTATUS v13; // eax
  int v14; // r15d
  wchar_t *Buffer; // r13
  wchar_t *v16; // rbx
  wchar_t v17; // ax
  int v18; // eax
  unsigned int v19; // r14d
  const wchar_t *v20; // rdi
  __int64 v21; // rbx
  wchar_t *v22; // rax
  wchar_t *v23; // rsi
  NTSTATUS v24; // ebx
  int v25; // r8d
  wchar_t *v26; // rcx
  const wchar_t *v27; // rcx
  int v28; // r8d
  bool v29; // bl
  int v30; // r14d
  bool v31; // zf
  NTSTATUS v32; // eax
  WCHAR *i; // rdi
  unsigned int v34; // r12d
  unsigned int MaximumLength; // r15d
  WCHAR *v36; // r14
  unsigned int v37; // r13d
  unsigned int v38; // esi
  WCHAR v39; // ax
  int v40; // eax
  int v41; // eax
  __int64 v42; // r15
  unsigned int v43; // esi
  PVOID v44; // rdi
  HANDLE v45; // r15
  PVOID v46; // rdi
  _QWORD *v47; // rax
  unsigned int v48; // r9d
  NTSTATUS v49; // eax
  unsigned int v50; // ecx
  int v51; // eax
  NTSTATUS v52; // eax
  __int64 v53; // r13
  PVOID v54; // r12
  HANDLE v55; // rsi
  ULONG v56; // r15d
  NTSTATUS v57; // eax
  NTSTATUS inited; // eax
  int v59; // edi
  const WCHAR *v60; // rsi
  wchar_t *v61; // rbx
  wchar_t v62; // ax
  int v63; // eax
  int v64; // edx
  NTSTATUS v65; // eax
  HANDLE v66; // rbx
  HANDLE v67; // r14
  _DWORD *v68; // rax
  _QWORD *v69; // rcx
  __int64 v70; // rax
  HANDLE v71; // rbx
  HANDLE v72; // rdi
  _DWORD *v73; // rax
  _QWORD *v74; // rdx
  int ResultLength; // [rsp+28h] [rbp-D8h]
  ULONG ResultLengtha; // [rsp+28h] [rbp-D8h]
  ULONG v78; // [rsp+60h] [rbp-A0h]
  unsigned int v80; // [rsp+70h] [rbp-90h] BYREF
  HANDLE KeyHandlea; // [rsp+78h] [rbp-88h]
  ULONG v82; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v84; // [rsp+90h] [rbp-70h] BYREF
  PVOID PoolWithTag; // [rsp+98h] [rbp-68h]
  PVOID v86; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v87; // [rsp+A8h] [rbp-58h]
  __int64 v88; // [rsp+B0h] [rbp-50h]
  __int64 v89; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v90; // [rsp+C0h] [rbp-40h]
  int v91[3]; // [rsp+C4h] [rbp-3Ch] BYREF
  UNICODE_STRING ValueName; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v93; // [rsp+E0h] [rbp-20h]
  PVOID v94; // [rsp+E8h] [rbp-18h]
  unsigned int v95; // [rsp+F0h] [rbp-10h]
  ULONG v96; // [rsp+F4h] [rbp-Ch]
  PVOID P; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING v98; // [rsp+100h] [rbp+0h] BYREF
  OBJECT_ATTRIBUTES v99; // [rsp+110h] [rbp+10h] BYREF
  PVOID v100; // [rsp+140h] [rbp+40h] BYREF
  ULONG Disposition; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING v102; // [rsp+150h] [rbp+50h] BYREF
  __int64 v103; // [rsp+160h] [rbp+60h]
  wchar_t *EndPtr; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING v105; // [rsp+170h] [rbp+70h] BYREF
  UNICODE_STRING GuidString; // [rsp+180h] [rbp+80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+190h] [rbp+90h] BYREF
  ULONG v108[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+1D0h] [rbp+D0h] BYREF
  GUID Guid; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v111; // [rsp+1F0h] [rbp+F0h]
  _BYTE KeyValueInformation[16]; // [rsp+1F8h] [rbp+F8h] BYREF
  wchar_t pszDest[2]; // [rsp+208h] [rbp+108h] BYREF
  char v114; // [rsp+20Ch] [rbp+10Ch] BYREF

  v7 = KeyHandle;
  v8 = a3;
  KeyHandlea = a2;
  v93 = a7;
  v90 = 1;
  v95 = a4;
  v88 = a3;
  v103 = a6;
  Handle = 0LL;
  v84 = 0LL;
  v87 = 0LL;
  RegistryKeyInformation = IopGetRegistryKeyInformation(KeyHandle, &P);
  if ( RegistryKeyInformation < 0 )
    goto LABEL_257;
  Length = 2 * *((_DWORD *)P + 6) + 26;
  v82 = 2 * *((_DWORD *)P + 9) + 18;
  if ( v82 > Length )
    Length = v82;
  v78 = Length;
  ExFreePoolWithTag(P, 0);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x63647050u);
  v11 = (WCHAR *)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_5;
  v12 = 0;
LABEL_7:
  v96 = v12;
  v13 = ZwEnumerateValueKey(v7, v12, KeyValueBasicInformation, v11, Length, &v82);
  RegistryKeyInformation = v13;
  if ( v13 >= 0 )
  {
    v11[((unsigned __int64)*((unsigned int *)v11 + 2) >> 1) + 6] = 0;
    RegistryKeyInformation = RtlInitUnicodeStringEx(&DestinationString, v11 + 6);
    if ( RegistryKeyInformation < 0 )
      goto LABEL_252;
    v14 = 0;
    Buffer = DestinationString.Buffer;
    ValueName = DestinationString;
    if ( !v93 || !*(_QWORD *)(v93 + 16) )
      goto LABEL_37;
    v16 = 0LL;
    if ( *DestinationString.Buffer != 36 )
      goto LABEL_29;
    v16 = DestinationString.Buffer + 1;
    v17 = DestinationString.Buffer[1];
    if ( !v17 )
      goto LABEL_29;
    while ( 1 )
    {
      switch ( v17 )
      {
        case '?':
          v14 |= 0x10000u;
          break;
        case '!':
          v14 |= 0x20000u;
          break;
        case '+':
          v14 |= 0x40000u;
          break;
        case '-':
          v14 |= 0x80000u;
          break;
        default:
          if ( *v16 == 36 )
            ++v16;
LABEL_29:
          RtlInitUnicodeString(&v98, v16);
          if ( !v16 )
            goto LABEL_37;
          if ( (v14 & 0x400000) != 0 )
            goto LABEL_171;
          v89 = 0LL;
          v18 = PiDevCfgResolveVariable(v93, v98.Buffer, &v89);
          if ( v18 < 0 )
          {
            if ( v18 != -1073741772 )
              goto LABEL_171;
            ValueName = v98;
LABEL_37:
            v19 = *((_DWORD *)v11 + 1) & 0xFFFF0000;
            v11[3] = 0;
            if ( (v19 & 0x400000) != 0 )
              goto LABEL_170;
            if ( !v8 )
              goto LABEL_61;
            if ( ValueName.Length < 0x50u )
              goto LABEL_170;
            GuidString.Buffer = ValueName.Buffer;
            GuidString.Length = 76;
            GuidString.MaximumLength = ValueName.MaximumLength;
            if ( RtlGUIDFromString(&GuidString, &Guid) < 0 )
              goto LABEL_170;
            if ( ValueName.Buffer[38] == 44 )
            {
              v20 = ValueName.Buffer + 39;
              v21 = (ValueName.Length >> 1) - 39;
              if ( !ValueName.Buffer[v21 + 39] )
              {
                v22 = wcschr((const wchar_t *)ValueName.Buffer + 39, 0x2Cu);
                v23 = v22;
                if ( v22 )
                {
                  v21 = v22 - v20;
                  v23 = v22 + 1;
                }
                v24 = RtlStringCchCopyNW(pszDest, 0xBuLL, v20, (unsigned int)v21);
                if ( v24 >= 0 )
                {
                  if ( pszDest[0] != 48 || ((pszDest[1] - 88) & 0xFFDF) != 0 )
                  {
                    v25 = 10;
                    v26 = pszDest;
                  }
                  else
                  {
                    v25 = 16;
                    v26 = (wchar_t *)&v114;
                  }
                  v111 = wcstoul(v26, &EndPtr, v25);
                  if ( EndPtr )
                  {
                    if ( !*EndPtr )
                    {
                      v90 = 1;
                      if ( v23 )
                      {
                        if ( *v23 != 48 || ((v23[1] - 88) & 0xFFDF) != 0 )
                        {
                          v28 = 10;
                          v27 = v23;
                        }
                        else
                        {
                          v27 = v23 + 2;
                          v28 = 16;
                        }
                        v90 = wcstoul(v27, (wchar_t **)&P, v28);
                        if ( !P || *(_WORD *)P )
                          v24 = -1073741823;
                      }
                      v11 = (WCHAR *)PoolWithTag;
                      v8 = v88;
                      if ( v24 >= 0 )
                      {
LABEL_61:
                        v29 = (a5 & 1) != 0;
                        v30 = v14 | v19;
                        if ( (v30 & 0x30000) == 0 && v29 )
                          goto LABEL_70;
                        if ( v8 )
                        {
                          v31 = (unsigned int)PnpGetObjectProperty(
                                                *(__int64 *)&PiPnpRtlCtx,
                                                v8,
                                                v95,
                                                (__int64)KeyHandlea,
                                                0LL,
                                                (__int64)&Guid,
                                                (__int64)&v80,
                                                0LL,
                                                0,
                                                (__int64)v91,
                                                0) == -1073741789;
                          goto LABEL_66;
                        }
                        v32 = ZwQueryValueKey(
                                KeyHandlea,
                                &ValueName,
                                KeyValueBasicInformation,
                                KeyValueInformation,
                                0x10u,
                                v108);
                        if ( (int)(v32 + 0x80000000) < 0 )
                          goto LABEL_69;
                        v31 = v32 == -2147483643;
LABEL_66:
                        if ( v31 )
                        {
LABEL_69:
                          if ( (v30 & 0x20000) == 0 && v29 )
                            goto LABEL_70;
                        }
                        else if ( (v30 & 0x10000) == 0 )
                        {
LABEL_70:
                          i = 0LL;
                          v86 = 0LL;
                          v94 = 0LL;
                          RegistryKeyInformation = IopGetRegistryValue(KeyHandle, Buffer, 0, &v86);
                          if ( RegistryKeyInformation >= 0 )
                          {
                            v34 = *((_DWORD *)v86 + 1) & 0xFFFF0000;
                            MaximumLength = *((_DWORD *)v86 + 3);
                            v36 = (WCHAR *)((char *)v86 + *((unsigned int *)v86 + 2));
                            v37 = (unsigned __int16)*((_DWORD *)v86 + 1);
                            if ( !v93
                              || !*(_QWORD *)(v93 + 16)
                              || v37 - 1 > 1
                              || MaximumLength < 2
                              || v36[((unsigned __int64)MaximumLength >> 1) - 1] )
                            {
                              goto LABEL_121;
                            }
                            v38 = 0;
                            if ( *v36 == 36 )
                            {
                              for ( i = v36 + 1; ; ++i )
                              {
                                v39 = *i;
                                if ( !*i )
                                  break;
                                switch ( v39 )
                                {
                                  case '?':
                                    v38 |= 0x10000u;
                                    break;
                                  case '!':
                                    v38 |= 0x20000u;
                                    break;
                                  case '+':
                                    v38 |= 0x40000u;
                                    break;
                                  case '-':
                                    v38 |= 0x80000u;
                                    break;
                                  default:
                                    if ( *i == 36 )
                                      ++i;
                                    goto LABEL_91;
                                }
                              }
                            }
LABEL_91:
                            RtlInitUnicodeString(&v98, i);
                            if ( i )
                            {
                              v36 = v98.Buffer;
                              i = 0LL;
                              v89 = 0LL;
                              v40 = PiDevCfgResolveVariable(v93, v98.Buffer, &v89);
                              RegistryKeyInformation = v40;
                              if ( v40 < 0 )
                              {
                                RegistryKeyInformation = 0;
                                if ( v40 == -1073741772 )
                                  MaximumLength = v98.MaximumLength;
                                else
                                  v36 = 0LL;
                              }
                              else if ( (v38 & 0xC0000) != 0 )
                              {
                                ResultLength = (int)ValueName.Buffer;
                                v41 = PiDevCfgResolveMultiSzValue(
                                        *(unsigned int *)(v89 + 32),
                                        *(unsigned int *)(v89 + 36),
                                        *(_QWORD *)(v89 + 40),
                                        v38,
                                        KeyHandlea);
LABEL_123:
                                RegistryKeyInformation = v41;
                                if ( v41 < 0 )
                                {
                                  v36 = i;
                                  RegistryKeyInformation = (int)i;
                                }
                                else
                                {
                                  MaximumLength = v82;
                                  v37 = 7;
                                  v36 = (WCHAR *)v94;
                                  if ( v82 >= 2 && *(_WORD *)v94 == (_WORD)i )
                                    v34 |= 0x200000u;
                                }
                              }
                              else
                              {
                                MaximumLength = *(_DWORD *)(v89 + 36);
                                v36 = *(WCHAR **)(v89 + 40);
                                v37 = (unsigned __int16)*(_DWORD *)(v89 + 32);
                                v34 |= *(_DWORD *)(v89 + 32) & 0xFFFF0000;
                              }
                            }
                            else
                            {
LABEL_121:
                              if ( (v37 - 1 <= 1 || v37 == 7) && (v34 & 0xC0000) != 0 )
                              {
                                ResultLength = (int)ValueName.Buffer;
                                v41 = PiDevCfgResolveMultiSzValue(v37, MaximumLength, v36, v34, KeyHandlea);
                                goto LABEL_123;
                              }
                            }
                            if ( !v36 )
                            {
LABEL_105:
                              v8 = v88;
                              goto LABEL_106;
                            }
                            if ( v37 == 0x8000 )
                            {
                              v8 = v88;
                              if ( !v88 )
                              {
                                v42 = v103;
                                if ( v103 )
                                {
                                  v43 = 0x80000000;
                                  if ( (v34 & 0x20000) == 0 )
                                    v43 = -2147483647;
                                  v44 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x63647050u);
                                  if ( v44 )
                                  {
                                    *((_DWORD *)v44 + 8) = v43;
                                    ObjectAttributes.RootDirectory = v36;
                                    ObjectAttributes.Length = 48;
                                    ObjectAttributes.Attributes = 512;
                                    ObjectAttributes.ObjectName = (PUNICODE_STRING)PiDevCfgEmptyString;
                                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                                    RegistryKeyInformation = ZwOpenKey((PHANDLE)v44 + 2, 0x20019u, &ObjectAttributes);
                                    if ( RegistryKeyInformation >= 0 )
                                    {
                                      ObjectAttributes.Attributes = 512;
                                      ObjectAttributes.Length = 48;
                                      ObjectAttributes.RootDirectory = KeyHandlea;
                                      ObjectAttributes.ObjectName = (PUNICODE_STRING)PiDevCfgEmptyString;
                                      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                                      RegistryKeyInformation = ZwOpenKey((PHANDLE)v44 + 3, 0xF003Fu, &ObjectAttributes);
                                      if ( RegistryKeyInformation >= 0 )
                                      {
                                        *((_DWORD *)v44 + 8) |= 0x40000000u;
                                        v47 = *(_QWORD **)(v42 + 8);
                                        *(_QWORD *)v44 = v42;
                                        *((_QWORD *)v44 + 1) = v47;
                                        if ( *v47 != v42 )
                                          __fastfail(3u);
                                        *v47 = v44;
                                        *(_QWORD *)(v42 + 8) = v44;
                                        v44 = 0LL;
                                      }
                                      else
                                      {
                                        ZwClose(*((HANDLE *)v44 + 2));
                                      }
                                    }
                                    if ( v44 )
                                      ExFreePoolWithTag(v44, 0);
                                  }
                                  else
                                  {
                                    RegistryKeyInformation = -1073741670;
                                  }
                                  goto LABEL_105;
                                }
                              }
LABEL_106:
                              v45 = KeyHandlea;
                              goto LABEL_107;
                            }
                            if ( !v37 && (v34 & 0x100000) != 0 )
                              goto LABEL_105;
                            v8 = v88;
                            if ( v88 )
                            {
                              if ( (v34 & 0x200000) != 0 )
                              {
                                v51 = (int)i;
                                v100 = i;
                                v50 = (unsigned int)i;
                                v80 = (unsigned int)i;
                                v91[0] = (int)i;
                              }
                              else
                              {
                                if ( v90 == 1 )
                                {
                                  if ( !v37 )
                                    goto LABEL_148;
                                  if ( v37 <= 2 )
                                  {
                                    v48 = 18;
                                  }
                                  else
                                  {
                                    switch ( v37 )
                                    {
                                      case 4u:
                                        v48 = 7;
                                        break;
                                      case 7u:
                                        v48 = 8210;
                                        break;
                                      case 0xBu:
                                        v48 = 9;
                                        break;
                                      default:
LABEL_148:
                                        v48 = 4099;
                                        break;
                                    }
                                  }
                                  v80 = v48;
                                }
                                else
                                {
                                  v48 = v90;
                                  v80 = v90;
                                }
                                v49 = PiDevCfgConvertPropertyFromValue(v37, MaximumLength, v36, v48, v91, &v100);
                                v50 = v91[0];
                                RegistryKeyInformation = v49;
                                v51 = v80;
                                i = (WCHAR *)v100;
                              }
                              if ( RegistryKeyInformation < 0 || !i && v51 )
                                goto LABEL_106;
                              v45 = KeyHandlea;
                              v52 = PiDevCfgSetObjectProperty(
                                      *(__int64 *)&PiPnpRtlCtx,
                                      0LL,
                                      v8,
                                      v95,
                                      (__int64)KeyHandlea,
                                      ResultLength,
                                      (__int64)&Guid,
                                      v51,
                                      (__int64)i,
                                      v50);
                              RegistryKeyInformation = v52;
                              if ( !v80 && v52 == -1073741275 )
                                RegistryKeyInformation = 0;
                              if ( i )
                              {
                                if ( i != v36 )
                                  ExFreePoolWithTag(i, 0);
                                v100 = 0LL;
                              }
LABEL_107:
                              v46 = v86;
                            }
                            else
                            {
                              if ( (v34 & 0x200000) != 0 )
                              {
                                v45 = KeyHandlea;
                                RegistryKeyInformation = ZwDeleteValueKey(KeyHandlea, &ValueName);
                                if ( RegistryKeyInformation == -1073741772 )
                                  RegistryKeyInformation = (int)i;
                                goto LABEL_107;
                              }
                              v46 = v86;
                              ResultLengtha = MaximumLength;
                              v45 = KeyHandlea;
                              RegistryKeyInformation = ZwSetValueKey(
                                                         KeyHandlea,
                                                         &ValueName,
                                                         *(_DWORD *)v86,
                                                         v37,
                                                         v36,
                                                         ResultLengtha);
                            }
                            if ( v94 )
                              ExFreePoolWithTag(v94, 0);
                            if ( !v8 && v37 != 0x8000 && (v34 & 0x100000) != 0 )
                              PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v45, (__int64)ValueName.Buffer);
                            ExFreePoolWithTag(v46, 0);
                            if ( RegistryKeyInformation >= 0 )
                            {
                              v12 = v96;
                              goto LABEL_169;
                            }
                          }
LABEL_252:
                          v54 = v87;
LABEL_253:
                          if ( PoolWithTag )
                            ExFreePoolWithTag(PoolWithTag, 0);
                          goto LABEL_255;
                        }
                      }
LABEL_170:
                      Length = v78;
                      goto LABEL_171;
                    }
                  }
                }
                v8 = v88;
              }
            }
LABEL_169:
            v11 = (WCHAR *)PoolWithTag;
            goto LABEL_170;
          }
          if ( (unsigned int)(*(_DWORD *)(v89 + 32) - 1) <= 1 && *(_DWORD *)(v89 + 36) <= 0xFFFEu )
          {
            ValueName.Buffer = *(wchar_t **)(v89 + 40);
            ValueName.Length = *(_WORD *)(v89 + 36) - 2;
            ValueName.MaximumLength = *(_WORD *)(v89 + 36);
            goto LABEL_37;
          }
LABEL_171:
          v7 = KeyHandle;
LABEL_172:
          ++v12;
          goto LABEL_7;
      }
      v17 = *++v16;
      if ( !*v16 )
        goto LABEL_29;
    }
  }
  if ( v13 != -2147483622 )
  {
    if ( v13 != -2147483643 )
      goto LABEL_252;
    ExFreePoolWithTag(v11, 0);
    Length = v82;
    v78 = v82;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v82, 0x63647050u);
    v11 = (WCHAR *)PoolWithTag;
    if ( PoolWithTag )
    {
      --v12;
      goto LABEL_172;
    }
LABEL_5:
    RegistryKeyInformation = -1073741670;
    goto LABEL_257;
  }
  RegistryKeyInformation = 0;
  if ( v8 )
    goto LABEL_252;
  v53 = v103;
  v54 = v87;
  if ( !v103 )
    goto LABEL_253;
  v55 = KeyHandle;
  v56 = 0;
LABEL_176:
  v57 = ZwEnumerateKey(v55, v56, KeyBasicInformation, v11, Length, &v82);
  RegistryKeyInformation = v57;
  if ( v57 >= 0 )
  {
    v11[((unsigned __int64)*((unsigned int *)v11 + 3) >> 1) + 8] = 0;
    inited = RtlInitUnicodeStringEx(&v105, v11 + 8);
    v59 = 0;
    RegistryKeyInformation = inited;
    if ( inited < 0 )
      goto LABEL_253;
    v102 = v105;
    v99.Length = 48;
    v99.RootDirectory = v55;
    v99.ObjectName = &v105;
    v99.Attributes = 576;
    *(_OWORD *)&v99.SecurityDescriptor = 0LL;
    RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &v99);
    if ( RegistryKeyInformation < 0 )
      goto LABEL_253;
    v60 = 0LL;
    if ( !v93 || !*(_QWORD *)(v93 + 16) )
      goto LABEL_208;
    v61 = 0LL;
    if ( *v105.Buffer != 36 )
      goto LABEL_199;
    v61 = v105.Buffer + 1;
    v62 = v105.Buffer[1];
    if ( !v62 )
      goto LABEL_199;
    while ( 1 )
    {
      switch ( v62 )
      {
        case '?':
          v59 |= 0x10000u;
          break;
        case '!':
          v59 |= 0x20000u;
          break;
        case '+':
          v59 |= 0x40000u;
          break;
        case '-':
          v59 |= 0x80000u;
          break;
        default:
          if ( *v61 == 36 )
            ++v61;
LABEL_199:
          RtlInitUnicodeString(&v98, v61);
          if ( v61 )
          {
            v89 = 0LL;
            v63 = PiDevCfgResolveVariable(v93, v98.Buffer, &v89);
            if ( v63 < 0 )
            {
              if ( v63 != -1073741772 )
                goto LABEL_204;
              v102 = v98;
            }
            else
            {
              v64 = *(_DWORD *)(v89 + 32);
              if ( (unsigned int)(v64 - 1) > 1 )
              {
                if ( v64 == 7 )
                {
                  v60 = *(const WCHAR **)(v89 + 40);
                  goto LABEL_208;
                }
LABEL_204:
                ZwClose(Handle);
                Handle = 0LL;
                goto LABEL_234;
              }
              v102.Buffer = *(wchar_t **)(v89 + 40);
              v102.Length = *(_WORD *)(v89 + 36) - 2;
              v102.MaximumLength = *(_WORD *)(v89 + 36);
            }
          }
LABEL_208:
          RegistryKeyInformation = PiDevCfgGetKeySecurityDescriptor(Handle);
          if ( RegistryKeyInformation >= 0 )
          {
            v54 = v87;
          }
          else
          {
            RegistryKeyInformation = 0;
            v87 = 0LL;
            v54 = 0LL;
          }
          if ( !v60 )
          {
            v99.Attributes = 576;
            v99.SecurityDescriptor = v54;
            v99.Length = 48;
            v99.RootDirectory = KeyHandlea;
            v99.SecurityQualityOfService = 0LL;
            v99.ObjectName = &v102;
            RegistryKeyInformation = ZwCreateKey(&v84, 0xF003Fu, &v99, 0, 0LL, 0, &Disposition);
            if ( RegistryKeyInformation >= 0 )
            {
              if ( Disposition == 2 && v54 )
                ZwSetSecurityObject(v84, 4u, v54);
              v71 = v84;
              v72 = Handle;
              v73 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x63647050u);
              if ( v73 )
              {
                v73[8] = 0x40000000;
                *((_QWORD *)v73 + 2) = v72;
                *((_QWORD *)v73 + 3) = v71;
                v74 = *(_QWORD **)(v53 + 8);
                *(_QWORD *)v73 = v53;
                *((_QWORD *)v73 + 1) = v74;
                if ( *v74 != v53 )
                  __fastfail(3u);
                *v74 = v73;
                *(_QWORD *)(v53 + 8) = v73;
                RegistryKeyInformation = 0;
              }
              else
              {
                RegistryKeyInformation = -1073741670;
                ZwClose(v84);
              }
              Handle = 0LL;
              v84 = 0LL;
            }
            goto LABEL_229;
          }
          if ( !*v60 )
            goto LABEL_229;
          while ( 2 )
          {
            RtlInitUnicodeString(&v102, v60);
            v99.Attributes = 576;
            v99.Length = 48;
            v99.RootDirectory = KeyHandlea;
            v99.SecurityDescriptor = v54;
            v99.ObjectName = &v102;
            v99.SecurityQualityOfService = 0LL;
            v65 = ZwOpenKey(&v84, 0xF003Fu, &v99);
            RegistryKeyInformation = v65;
            if ( v65 >= 0 )
            {
              if ( v54 )
                ZwSetSecurityObject(v84, 4u, v54);
              goto LABEL_219;
            }
            if ( v65 != -1073741772 )
              goto LABEL_228;
            if ( (v59 & 0x10000) != 0 )
            {
LABEL_225:
              RegistryKeyInformation = 0;
              v70 = -1LL;
              do
                ++v70;
              while ( v60[v70] );
              v60 += v70 + 1;
              if ( !*v60 )
              {
LABEL_228:
                Length = v78;
                goto LABEL_229;
              }
              continue;
            }
            break;
          }
          RegistryKeyInformation = ZwCreateKey(&v84, 0xF003Fu, &v99, 0, 0LL, 0, 0LL);
          if ( RegistryKeyInformation < 0 )
            goto LABEL_228;
LABEL_219:
          v66 = Handle;
          if ( !Handle )
          {
            v99.Attributes = 576;
            v99.Length = 48;
            v99.RootDirectory = KeyHandle;
            v99.ObjectName = &v105;
            *(_OWORD *)&v99.SecurityDescriptor = 0LL;
            RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &v99);
            if ( RegistryKeyInformation < 0 )
              goto LABEL_237;
            v66 = Handle;
          }
          v67 = v84;
          v68 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x63647050u);
          if ( v68 )
          {
            v68[8] = 0x40000000;
            *((_QWORD *)v68 + 2) = v66;
            *((_QWORD *)v68 + 3) = v67;
            v69 = *(_QWORD **)(v53 + 8);
            *(_QWORD *)v68 = v53;
            *((_QWORD *)v68 + 1) = v69;
            if ( *v69 != v53 )
              __fastfail(3u);
            *v69 = v68;
            *(_QWORD *)(v53 + 8) = v68;
            Handle = 0LL;
            v84 = 0LL;
            goto LABEL_225;
          }
          RegistryKeyInformation = -1073741670;
LABEL_237:
          ZwClose(v84);
          Length = v78;
          v84 = 0LL;
LABEL_229:
          if ( v54 )
          {
            ExFreePoolWithTag(v54, 0);
            v54 = 0LL;
            v87 = 0LL;
          }
          if ( Handle )
          {
            ZwClose(Handle);
            Handle = 0LL;
          }
          if ( RegistryKeyInformation < 0 )
            goto LABEL_253;
LABEL_234:
          v11 = (WCHAR *)PoolWithTag;
          v55 = KeyHandle;
LABEL_235:
          ++v56;
          goto LABEL_176;
      }
      v62 = *++v61;
      if ( !*v61 )
        goto LABEL_199;
    }
  }
  if ( v57 == -2147483622 )
  {
    RegistryKeyInformation = 0;
    goto LABEL_253;
  }
  if ( v57 != -2147483643 )
    goto LABEL_253;
  ExFreePoolWithTag(v11, 0);
  Length = v82;
  v78 = v82;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v82, 0x63647050u);
  v11 = (WCHAR *)PoolWithTag;
  if ( PoolWithTag )
  {
    --v56;
    goto LABEL_235;
  }
  RegistryKeyInformation = -1073741670;
LABEL_255:
  if ( v54 )
    ExFreePoolWithTag(v54, 0);
LABEL_257:
  if ( Handle )
    ZwClose(Handle);
  if ( v84 )
    ZwClose(v84);
  return (unsigned int)RegistryKeyInformation;
}
