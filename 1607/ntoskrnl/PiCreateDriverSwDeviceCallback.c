/*
 * XREFs of PiCreateDriverSwDeviceCallback @ 0x14064D548
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14013C4F0 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1403F64A4 (RtlCreateUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1403F6F7C (ExpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 *     _PnpGetGenericStoreProperty @ 0x1404DD9A0 (_PnpGetGenericStoreProperty.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 *     RtlHashUnicodeString @ 0x1404E21B0 (RtlHashUnicodeString.c)
 *     PnpGenerateDeviceIdsHash @ 0x14050D908 (PnpGenerateDeviceIdsHash.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PipMakeGloballyUniqueId @ 0x14056FB04 (PipMakeGloballyUniqueId.c)
 *     PnpCompareMultiSz @ 0x14062D698 (PnpCompareMultiSz.c)
 *     PiSwStartCreate @ 0x140645A68 (PiSwStartCreate.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC340 (_PnpGetGenericStorePropertyKeys.c)
 */

__int64 __fastcall PiCreateDriverSwDeviceCallback(__int64 *a1, __int64 a2, const WCHAR *a3, __int64 *a4)
{
  __int64 *v4; // rdi
  ULONG v5; // r15d
  wchar_t *v6; // r14
  void *v7; // rsi
  unsigned int v8; // r13d
  signed __int64 v9; // r12
  __int64 v10; // rcx
  int RegistryValues; // ebx
  wchar_t *Buffer; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  ULONG v15; // r15d
  int v16; // edi
  wchar_t *v17; // r15
  PCWCH *v18; // r12
  unsigned int v19; // r14d
  int *v20; // r13
  int v21; // r9d
  const wchar_t *v22; // rdi
  __int64 v23; // rax
  NTSTATUS RegistryValue; // eax
  PCWSTR v25; // rbx
  __int64 v26; // rax
  PVOID v27; // r14
  __int64 v28; // rdi
  int i; // eax
  __int64 v30; // rax
  PVOID v31; // rax
  unsigned int v32; // esi
  signed __int64 v33; // r14
  char *v34; // rdi
  __int64 v35; // r12
  int v36; // eax
  void *v37; // rcx
  PVOID v38; // rax
  PVOID v39; // rax
  PVOID *v40; // rdi
  __int64 v41; // rsi
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v44; // [rsp+78h] [rbp-88h]
  int v45; // [rsp+80h] [rbp-80h]
  _DWORD *v46; // [rsp+88h] [rbp-78h] BYREF
  wchar_t *Str1; // [rsp+90h] [rbp-70h]
  ULONG HashValue; // [rsp+98h] [rbp-68h] BYREF
  ULONG v49; // [rsp+9Ch] [rbp-64h] BYREF
  int v50; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v53; // [rsp+C0h] [rbp-40h] BYREF
  int v54; // [rsp+D0h] [rbp-30h] BYREF
  ULONG v55; // [rsp+D4h] [rbp-2Ch]
  unsigned int v56; // [rsp+D8h] [rbp-28h]
  unsigned int v57; // [rsp+DCh] [rbp-24h]
  PVOID P; // [rsp+E0h] [rbp-20h]
  PVOID PoolWithTag; // [rsp+E8h] [rbp-18h]
  UNICODE_STRING GuidString; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v61; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v62; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v63; // [rsp+120h] [rbp+20h] BYREF
  PVOID v64; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING String2; // [rsp+138h] [rbp+38h] BYREF
  _DWORD v66[2]; // [rsp+148h] [rbp+48h] BYREF
  PCWSTR SourceString; // [rsp+150h] [rbp+50h]
  __int64 *v68; // [rsp+158h] [rbp+58h]
  __int64 v69; // [rsp+160h] [rbp+60h]
  UNICODE_STRING DestinationString; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v71[2]; // [rsp+178h] [rbp+78h] BYREF
  GUID Guid; // [rsp+188h] [rbp+88h] BYREF
  _QWORD v73[50]; // [rsp+1A0h] [rbp+A0h] BYREF

  v44 = a4;
  SourceString = a3;
  v4 = a4;
  v68 = a1;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  Handle = 0LL;
  v5 = 0;
  UnicodeString.Length = 0;
  v6 = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  v7 = 0LL;
  HIWORD(UnicodeString.Buffer) = 0;
  v8 = 0;
  v53.Length = 0;
  v9 = 0LL;
  *(_QWORD *)&v53.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v53.Buffer + 2) = 0;
  HIWORD(v53.Buffer) = 0;
  GuidString.Length = 0;
  *(_QWORD *)&GuidString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&GuidString.Buffer + 2) = 0;
  HIWORD(GuidString.Buffer) = 0;
  v50 = 0;
  v62.Length = 0;
  *(_QWORD *)&v62.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v62.Buffer + 2) = 0;
  HIWORD(v62.Buffer) = 0;
  v63.Length = 0;
  *(_QWORD *)&v63.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v63.Buffer + 2) = 0;
  HIWORD(v63.Buffer) = 0;
  v55 = 0;
  v49 = 0;
  HashValue = 0;
  Str1 = 0LL;
  v54 = 1;
  v45 = 0;
  v46 = 0LL;
  v69 = 0LL;
  v57 = 0;
  v61.Length = 0;
  *(_QWORD *)&v61.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v61.Buffer + 2) = 0;
  HIWORD(v61.Buffer) = 0;
  v64 = 0LL;
  v56 = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  if ( a1 )
    v10 = *a1;
  else
    v10 = 0LL;
  RegistryValues = SysCtxRegOpenKey(v10, a2, (__int64)a3, 0, 0x20019u, (__int64)&Handle);
  if ( RegistryValues < 0 )
    goto LABEL_133;
  memset(v73, 0, 0x188uLL);
  LODWORD(v73[25]) = 0x4000000;
  LODWORD(v73[1]) = 304;
  LODWORD(v73[4]) = 117440512;
  v73[2] = L"HardwareIds";
  LODWORD(v73[8]) = 304;
  v73[3] = &UnicodeString;
  LODWORD(v73[11]) = 117440512;
  v73[9] = L"CompatibleIds";
  LODWORD(v73[15]) = 288;
  v73[10] = &v53;
  LODWORD(v73[18]) = 0x1000000;
  v73[16] = L"ContainerId";
  v73[17] = &GuidString;
  v73[23] = L"Capabilities";
  v73[24] = &v50;
  v73[30] = L"Description";
  v73[31] = &v62;
  v73[37] = L"LocationInfo";
  LODWORD(v73[22]) = 288;
  LODWORD(v73[29]) = 288;
  LODWORD(v73[32]) = 0x1000000;
  LODWORD(v73[36]) = 288;
  LODWORD(v73[39]) = 0x1000000;
  v73[38] = &v63;
  RegistryValues = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)Handle, (__int64)v73, 0LL);
  if ( RegistryValues < 0 )
    goto LABEL_133;
  if ( UnicodeString.Buffer && UnicodeString.Length <= 2u )
    RtlFreeAnsiString(&UnicodeString);
  if ( v53.Buffer && v53.Length <= 2u )
    RtlFreeAnsiString(&v53);
  Buffer = GuidString.Buffer;
  if ( !GuidString.Buffer )
    goto LABEL_17;
  if ( GuidString.Length < 2u )
  {
    RtlFreeAnsiString(&GuidString);
    Buffer = GuidString.Buffer;
  }
  if ( !Buffer || RtlGUIDFromString(&GuidString, &Guid) < 0 )
  {
LABEL_17:
    *(_QWORD *)&Guid.Data1 = 0LL;
    *(_QWORD *)Guid.Data4 = 0LL;
  }
  if ( v62.Buffer && v62.Length < 2u )
    RtlFreeAnsiString(&v62);
  if ( v63.Buffer && v63.Length < 2u )
    RtlFreeAnsiString(&v63);
  if ( !UnicodeString.Buffer && !v53.Buffer )
  {
    RegistryValues = -1073741637;
    goto LABEL_133;
  }
  v13 = *v4;
  v14 = -1LL;
  v71[0] = UnicodeString.Buffer;
  v71[1] = v53.Buffer;
  v66[0] = 2;
  v66[1] = 3;
  if ( v13 == IopRootDeviceNode )
    goto LABEL_72;
  while ( 1 )
  {
    if ( *(PDRIVER_OBJECT *)(*(_QWORD *)(v13 + 32) + 8LL) == PiSwDeviceDriverObject )
    {
      RtlInitUnicodeString(&DestinationString, L"SWD\\");
      if ( RtlPrefixUnicodeString(&DestinationString, (PCUNICODE_STRING)(v13 + 40), 1u) )
      {
        RtlInitUnicodeString(
          &String2,
          (PCWSTR)(*(_QWORD *)(v13 + 48) + 2 * ((unsigned __int64)DestinationString.Length >> 1)));
        RtlInitUnicodeString(&DestinationString, L"DRIVERENUM");
        if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
        {
          if ( String2.Buffer[(unsigned __int64)DestinationString.Length >> 1] == 92 )
          {
            if ( !v5 )
            {
              RegistryValues = PnpGenerateDeviceIdsHash((__int64)UnicodeString.Buffer, (__int64)v53.Buffer, &v49);
              if ( RegistryValues < 0 )
                goto LABEL_44;
              if ( (v50 & 8) != 0 )
              {
                v15 = v49;
              }
              else
              {
                RtlInitUnicodeString(&String2, L"SWD\\GenericRaw");
                RegistryValues = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
                if ( RegistryValues < 0 )
                  goto LABEL_44;
                v15 = HashValue + v49;
              }
              RtlInitUnicodeString(&String2, L"SWD\\Generic");
              RegistryValues = RtlHashUnicodeString(&String2, 1u, 0, &HashValue);
              if ( RegistryValues < 0 )
                goto LABEL_44;
              v5 = HashValue + v15;
              v55 = v5;
              v49 = v5;
            }
            if ( *(_DWORD *)(v13 + 684) == v5 )
              break;
          }
        }
      }
    }
LABEL_68:
    v13 = *(_QWORD *)(v13 + 16);
    if ( v13 == IopRootDeviceNode )
      goto LABEL_71;
  }
  if ( v6 )
  {
    v16 = v45;
  }
  else
  {
    v16 = 2048;
    v45 = 2048;
    Str1 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x20207050u);
    v6 = Str1;
    if ( !Str1 )
    {
      RegistryValues = -1073741670;
LABEL_44:
      v7 = v46;
      goto LABEL_132;
    }
  }
  v17 = Str1;
  v18 = (PCWCH *)v71;
  v19 = 0;
  v20 = v66;
  do
  {
    v21 = *v20;
    LODWORD(NumberOfBytes) = v16;
    RegistryValues = CmGetDeviceRegProp(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(v13 + 48),
                       0LL,
                       v21,
                       (__int64)&v54,
                       (__int64)v17,
                       (__int64)&NumberOfBytes,
                       0);
    if ( RegistryValues < 0 || v54 != 7 || (unsigned int)NumberOfBytes < 2 )
    {
      *v17 = 0;
      RegistryValues = 0;
    }
    if ( v19 == 1 )
    {
      v22 = v17;
      if ( *v17 )
      {
        while ( wcsicmp(v22, L"SWD\\GenericRaw") && wcsicmp(v22, L"SWD\\Generic") )
        {
          v23 = -1LL;
          do
            ++v23;
          while ( v22[v23] );
          v22 += v23 + 1;
          if ( !*v22 )
            goto LABEL_60;
        }
        *v22 = 0;
      }
LABEL_60:
      v16 = v45;
    }
    if ( *v18 )
    {
      if ( !PnpCompareMultiSz(*v18, v17) )
        break;
    }
    else if ( *v17 )
    {
      break;
    }
    ++v19;
    ++v20;
    ++v18;
  }
  while ( v19 < 2 );
  v5 = v55;
  if ( v19 < 2 )
  {
    v6 = Str1;
    goto LABEL_68;
  }
  RegistryValues = -1073740028;
LABEL_71:
  v8 = v56;
  v14 = -1LL;
  v9 = v56;
LABEL_72:
  if ( RegistryValues < 0 )
    goto LABEL_130;
  RegistryValue = IopGetRegistryValue(Handle, L"Security", 0, &v46);
  v7 = v46;
  RegistryValues = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( v46[1] == 3 )
    {
      v57 = v46[3];
      if ( v57 >= 0x28 )
      {
        v69 = (__int64)v46 + (unsigned int)v46[2];
        goto LABEL_79;
      }
    }
    RegistryValues = -1073741823;
    goto LABEL_120;
  }
  if ( RegistryValue != -1073741772 )
    goto LABEL_131;
LABEL_79:
  if ( *v44 == IopRootDeviceNode )
  {
    if ( !RtlCreateUnicodeString(&v61, SourceString) )
      goto LABEL_86;
    goto LABEL_90;
  }
  RegistryValues = PipMakeGloballyUniqueId(*(_QWORD *)(*v44 + 32), 0LL, (wchar_t **)&v64);
  if ( RegistryValues >= 0 )
  {
    v25 = SourceString;
    v26 = -1LL;
    v61.Length = 0;
    do
      ++v26;
    while ( SourceString[v26] );
    v27 = v64;
    do
      ++v14;
    while ( *((_WORD *)v64 + v14) );
    v61.MaximumLength = 2 * (v14 + v26 + 2);
    v61.Buffer = (wchar_t *)ExpAllocateStringRoutine(v61.MaximumLength);
    if ( !v61.Buffer )
    {
LABEL_86:
      RegistryValues = -1073741670;
      goto LABEL_131;
    }
    RegistryValues = RtlUnicodeStringPrintf(&v61, L"%ws&%ws", v25, v27);
    if ( RegistryValues < 0 )
      goto LABEL_131;
LABEL_90:
    v28 = (__int64)v68;
    for ( i = PnpGetGenericStorePropertyKeys(v68, Handle, 0LL, 0LL);
          ;
          i = PnpGetGenericStorePropertyKeys(v28, Handle, 0LL, 0LL) )
    {
      RegistryValues = i;
      if ( i != -1073741789 )
      {
        v8 = NumberOfBytes;
        goto LABEL_98;
      }
      v30 = (unsigned int)NumberOfBytes;
      if ( (unsigned int)NumberOfBytes <= v8 )
      {
        RegistryValues = -1073741595;
        goto LABEL_128;
      }
      if ( v9 )
      {
        ExFreePoolWithTag((PVOID)v9, 0);
        v30 = (unsigned int)NumberOfBytes;
      }
      v8 = v30;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 20 * v30, 0x20207050u);
      v9 = (signed __int64)PoolWithTag;
      if ( !PoolWithTag )
        break;
    }
    RegistryValues = -1073741670;
LABEL_98:
    if ( RegistryValues < 0 )
      goto LABEL_128;
    if ( v8 )
    {
      v31 = ExAllocatePoolWithTag(PagedPool, 48LL * v8, 0x20207050u);
      P = v31;
      if ( !v31 )
      {
        RegistryValues = -1073741670;
        goto LABEL_128;
      }
      memset(v31, 0, 48LL * v8);
      v32 = 0;
      v33 = v9;
      v34 = (char *)P + 36;
      while ( 2 )
      {
        *(_OWORD *)(v34 - 36) = *(_OWORD *)v33;
        *((_DWORD *)v34 - 5) = *(_DWORD *)(v33 + 16);
        *((_DWORD *)v34 - 4) = 0;
        v35 = v9 + 20LL * v32;
        while ( 1 )
        {
          RegistryValues = PnpGetGenericStoreProperty(
                             (__int64)v68,
                             (__int64)Handle,
                             0LL,
                             v35,
                             (_DWORD *)v34 - 1,
                             *(_QWORD *)(v34 + 4),
                             *(_DWORD *)v34,
                             &NumberOfBytes);
          v36 = NumberOfBytes;
          if ( RegistryValues != -1073741789 )
            break;
          if ( (unsigned int)NumberOfBytes <= *(_DWORD *)v34 )
          {
            RegistryValues = -1073741595;
            goto LABEL_120;
          }
          v37 = *(void **)(v34 + 4);
          if ( v37 )
          {
            ExFreePoolWithTag(v37, 0);
            v36 = NumberOfBytes;
          }
          *(_DWORD *)v34 = v36;
          v38 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20207050u);
          *(_QWORD *)(v34 + 4) = v38;
          if ( !v38 )
          {
            RegistryValues = -1073741670;
            goto LABEL_114;
          }
        }
        *(_DWORD *)v34 = NumberOfBytes;
LABEL_114:
        if ( RegistryValues < 0 )
          goto LABEL_120;
        ++v32;
        v34 += 48;
        v33 += 20LL;
        if ( v32 < v8 )
        {
          v9 = (signed __int64)PoolWithTag;
          continue;
        }
        break;
      }
    }
    RegistryValues = PiSwStartCreate(
                       (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
                       *(_QWORD *)(*v44 + 48),
                       (__int64)v61.Buffer,
                       (__int64)UnicodeString.Buffer,
                       (__int64)v53.Buffer,
                       (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
                       v50,
                       (__int64)v62.Buffer,
                       (__int64)v63.Buffer,
                       v69,
                       v57,
                       (__int64)P,
                       v8);
LABEL_120:
    v39 = P;
    if ( P )
    {
      if ( v8 )
      {
        v40 = (PVOID *)((char *)P + 40);
        v41 = v8;
        do
        {
          if ( *v40 )
            ExFreePoolWithTag(*v40, 0);
          v40 += 6;
          --v41;
        }
        while ( v41 );
        v39 = P;
      }
      ExFreePoolWithTag(v39, 0);
    }
LABEL_128:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
LABEL_130:
    v7 = v46;
  }
LABEL_131:
  v6 = Str1;
LABEL_132:
  v4 = v44;
LABEL_133:
  RtlFreeAnsiString(&v61);
  if ( v64 )
    ExFreePoolWithTag(v64, 0);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v53);
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&v62);
  RtlFreeAnsiString(&v63);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( *((int *)v4 + 2) >= 0 )
    *((_DWORD *)v4 + 2) = RegistryValues;
  return 0LL;
}
