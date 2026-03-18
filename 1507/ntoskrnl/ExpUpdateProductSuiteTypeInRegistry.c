/*
 * XREFs of ExpUpdateProductSuiteTypeInRegistry @ 0x1407DDA08
 * Callers:
 *     sub_1407DD578 @ 0x1407DD578 (sub_1407DD578.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ExVerifySuite @ 0x14016C2D4 (ExVerifySuite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 */

NTSTATUS ExpUpdateProductSuiteTypeInRegistry()
{
  HANDLE v0; // r12
  NTSTATUS result; // eax
  int v2; // ebx
  __int64 v3; // r14
  int v4; // ebx
  __int64 v5; // rax
  ULONG DataSize; // eax
  NTSTATUS v7; // eax
  _BYTE *v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // rax
  unsigned int v11; // r15d
  __int64 v12; // rax
  unsigned int v13; // r15d
  const WCHAR *v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // rax
  unsigned int v18; // r15d
  __int64 v19; // rax
  unsigned int v20; // r15d
  __int64 v21; // rax
  unsigned int v22; // r15d
  __int64 v23; // rax
  unsigned int v24; // r15d
  __int64 v25; // rax
  unsigned int v26; // r15d
  __int64 v27; // rax
  unsigned int v28; // r15d
  __int64 v29; // rax
  unsigned int v30; // r15d
  __int64 v31; // rax
  unsigned int v32; // r15d
  __int64 v33; // rax
  unsigned int v34; // r15d
  __int64 v35; // rax
  unsigned int v36; // r15d
  __int64 v37; // rax
  unsigned int v38; // r15d
  unsigned int v39; // ebx
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING Data; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v42[768]; // [rsp+58h] [rbp-B0h] BYREF

  v0 = ExpProductTypeKey;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  *(_QWORD *)&Data.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Data.Buffer + 2) = 0;
  HIWORD(Data.Buffer) = 0;
  v42[0] = 0;
  result = (unsigned int)memset(&v42[1], 0, 0x2F5uLL);
  if ( ExpSetupModeDetected )
    return result;
  v2 = ExpProductInfoMappedType;
  if ( !ExpProductInfoMappedType )
    return result;
  RtlInitUnicodeString(&DestinationString, L"ProductType");
  v3 = -1LL;
  v4 = v2 - 2;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      RtlInitUnicodeString(&Data, L"WinNT");
      v5 = -1LL;
      do
        ++v5;
      while ( aWinnt_0[v5] );
      DataSize = 2 * v5 + 2;
      goto LABEL_8;
    }
    v14 = L"ServerNT";
  }
  else
  {
    v14 = L"LanmanNT";
  }
  RtlInitUnicodeString(&Data, v14);
  DataSize = 18;
LABEL_8:
  v7 = NtSetValueKey(v0, &DestinationString, 0, 1u, Data.Buffer, DataSize);
  if ( v7 < 0 )
    KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v7, 1uLL, 0LL);
  RtlInitUnicodeString(&DestinationString, L"ProductSuite");
  v8 = v42;
  v9 = 758;
  if ( ExVerifySuite(SmallBusiness) )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( aSmallBusiness[v15] );
    v16 = 2 * v15 + 2;
    if ( v16 < 0x2F6 )
    {
      memmove(v42, L"Small Business", v16);
      v8 = &v42[v16];
      v9 = 758 - v16;
    }
  }
  if ( ExVerifySuite(Enterprise) )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( aEnterprise[v17] );
    v18 = 2 * v17 + 2;
    if ( v9 > v18 )
    {
      memmove(v8, L"Enterprise", v18);
      v8 += v18;
      v9 -= v18;
    }
  }
  if ( ExVerifySuite(BackOffice) )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( aBackoffice[v19] );
    v20 = 2 * v19 + 2;
    if ( v9 > v20 )
    {
      memmove(v8, L"BackOffice", v20);
      v8 += v20;
      v9 -= v20;
    }
  }
  if ( ExVerifySuite(CommunicationServer) )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( aCommunications[v21] );
    v22 = 2 * v21 + 2;
    if ( v9 > v22 )
    {
      memmove(v8, L"CommunicationServer", v22);
      v8 += v22;
      v9 -= v22;
    }
  }
  if ( ExVerifySuite(TerminalServer) )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( aTerminalServer_0[v10] );
    v11 = 2 * v10 + 2;
    if ( v9 > v11 )
    {
      memmove(v8, L"Terminal Server", v11);
      v8 += v11;
      v9 -= v11;
    }
  }
  if ( ExVerifySuite(SmallBusinessRestricted) )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( aSmallBusinessR[v23] );
    v24 = 2 * v23 + 2;
    if ( v9 > v24 )
    {
      memmove(v8, L"Small Business(Restricted)", v24);
      v8 += v24;
      v9 -= v24;
    }
  }
  if ( ExVerifySuite(EmbeddedNT) )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( aEmbeddednt[v25] );
    v26 = 2 * v25 + 2;
    if ( v9 > v26 )
    {
      memmove(v8, L"EmbeddedNT", v26);
      v8 += v26;
      v9 -= v26;
    }
  }
  if ( ExVerifySuite(DataCenter) )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( aDatacenter[v12] );
    v13 = 2 * v12 + 2;
    if ( v9 > v13 )
    {
      memmove(v8, L"DataCenter", v13);
      v8 += v13;
      v9 -= v13;
    }
  }
  if ( ExVerifySuite(Personal) )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( aPersonal[v27] );
    v28 = 2 * v27 + 2;
    if ( v9 > v28 )
    {
      memmove(v8, L"Personal", v28);
      v8 += v28;
      v9 -= v28;
    }
  }
  if ( ExVerifySuite(Blade) )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( aBlade[v29] );
    v30 = 2 * v29 + 2;
    if ( v9 > v30 )
    {
      memmove(v8, L"Blade", v30);
      v8 += v30;
      v9 -= v30;
    }
  }
  if ( ExVerifySuite(EmbeddedRestricted) )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( aEmbeddedRestri[v31] );
    v32 = 2 * v31 + 2;
    if ( v9 > v32 )
    {
      memmove(v8, L"Embedded(Restricted)", v32);
      v8 += v32;
      v9 -= v32;
    }
  }
  if ( ExVerifySuite(SecurityAppliance) )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( aSecurityApplia[v33] );
    v34 = 2 * v33 + 2;
    if ( v9 > v34 )
    {
      memmove(v8, L"Security Appliance", v34);
      v8 += v34;
      v9 -= v34;
    }
  }
  if ( ExVerifySuite(StorageServer) )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( aStorageServer[v35] );
    v36 = 2 * v35 + 2;
    if ( v9 > v36 )
    {
      memmove(v8, L"Storage Server", v36);
      v8 += v36;
      v9 -= v36;
    }
  }
  if ( ExVerifySuite(ComputeServer) )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( aComputeServer[v37] );
    v38 = 2 * v37 + 2;
    if ( v9 > v38 )
    {
      memmove(v8, L"Compute Server", v38);
      v8 += v38;
      v9 -= v38;
    }
  }
  if ( ExVerifySuite(PhoneNT) )
  {
    do
      ++v3;
    while ( aPhonent[v3] );
    v39 = 2 * v3 + 2;
    if ( v9 > v39 )
    {
      memmove(v8, L"PhoneNT", v39);
      v9 -= v39;
    }
  }
  result = NtSetValueKey(v0, &DestinationString, 0, 7u, v42, 760 - v9);
  if ( result < 0 )
    KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)result, 2uLL, 0LL);
  return result;
}
