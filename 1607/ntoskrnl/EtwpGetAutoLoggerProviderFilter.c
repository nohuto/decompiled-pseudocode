/*
 * XREFs of EtwpGetAutoLoggerProviderFilter @ 0x14056413C
 * Callers:
 *     EtwpEnableAutoLoggerProviders @ 0x140563D20 (EtwpEnableAutoLoggerProviders.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 */

void __fastcall EtwpGetAutoLoggerProviderFilter(__int64 a1, UNICODE_STRING *a2, __int64 a3)
{
  __int64 v3; // rax
  SIZE_T v7; // rsi
  wchar_t *PoolWithTag; // rax
  WCHAR *v9; // rdi
  __int64 v10; // r12
  PVOID *v11; // rbx
  PVOID *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rsi
  unsigned int v15; // ecx
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 *v21; // rcx
  _WORD v22[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v35[134]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(a1 + 2 * v3) );
  KeyHandle = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v7 = (unsigned int)(2 * v3 + 18);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x50777445u);
  v9 = PoolWithTag;
  v10 = 2LL;
  if ( PoolWithTag )
  {
    if ( !RtlStringCbPrintfW(PoolWithTag, (unsigned int)v7, L"%ws\\Filters", a1) )
    {
      RtlInitUnicodeString(&DestinationString, v9);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
      {
        memset(v35, 0, 0x428uLL);
        v23 = 0;
        v31 = 0LL;
        v12 = (PVOID *)&v27;
        v32 = 0LL;
        v13 = 2LL;
        v29 = 0LL;
        v30 = 0LL;
        v22[0] = 0;
        do
        {
          *v12++ = ExAllocatePoolWithTag(PagedPool, 0x86uLL, 0x46777445u);
          --v13;
        }
        while ( v13 );
        v14 = v27;
        v35[0] = EtwpQueryRegistryCallback;
        LODWORD(v35[25]) = 4;
        v35[2] = L"ExeFilter";
        v35[5] = v22;
        v35[10] = a2 + 1;
        v35[9] = L"PackageIdFilter";
        v35[12] = v22;
        v35[17] = a2 + 2;
        v35[16] = L"PackageRelativeAppIdFilter";
        v35[19] = v22;
        v35[24] = &v24;
        v35[23] = L"EventIdFilterIn";
        v35[31] = &v25;
        v35[30] = L"StackWalkFilterIn";
        v35[38] = &v23;
        LODWORD(v35[32]) = 4;
        LODWORD(v35[39]) = 4;
        v15 = 6;
        v35[37] = L"Enabled";
        v16 = 3LL;
        v35[3] = a2;
        LODWORD(v35[4]) = 1;
        v35[7] = EtwpQueryRegistryCallback;
        LODWORD(v35[11]) = 1;
        v35[14] = EtwpQueryRegistryCallback;
        LODWORD(v35[18]) = 1;
        v35[21] = EtwpQueryRegistryCallback;
        v35[28] = EtwpQueryRegistryCallback;
        v35[35] = EtwpQueryRegistryCallback;
        if ( v27 )
        {
          LODWORD(v29) = 128;
          v30 = v27 + 4;
          v15 = 7;
          v35[42] = EtwpQueryRegistryCallback;
          v35[45] = &v29;
          v35[44] = L"EventIds";
          LODWORD(v35[46]) = 3;
        }
        v17 = v28;
        if ( v28 )
        {
          LODWORD(v31) = 128;
          v32 = v28 + 4;
          v18 = 7LL * v15;
          v35[v18 + 3] = &v31;
          v35[v18 + 2] = L"StackWalkIds";
          v35[v18] = EtwpQueryRegistryCallback;
          LODWORD(v35[v18 + 4]) = 3;
        }
        if ( (int)RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v35, 0LL) >= 0 )
        {
          if ( v14 )
          {
            *(_BYTE *)v14 = v24 != 0;
            *(_WORD *)(v14 + 2) = (unsigned int)v29 >> 1;
          }
          if ( v17 )
          {
            *(_BYTE *)v17 = v25 != 0;
            *(_WORD *)(v17 + 2) = (unsigned int)v31 >> 1;
          }
          if ( v23 )
          {
            v19 = 2LL;
            v20 = a3 - (_QWORD)&v27;
            v21 = &v27;
            do
            {
              *(__int64 *)((char *)v21 + v20) = *v21;
              *v21++ = 0LL;
              --v19;
            }
            while ( v19 );
          }
          else
          {
            do
            {
              RtlFreeAnsiString(a2++);
              --v16;
            }
            while ( v16 );
          }
        }
      }
    }
  }
  v11 = (PVOID *)&v27;
  do
  {
    if ( *v11 )
      ExFreePoolWithTag(*v11, 0);
    ++v11;
    --v10;
  }
  while ( v10 );
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
}
