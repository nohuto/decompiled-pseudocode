/*
 * XREFs of EtwpGetAutoLoggerProviderFilter @ 0x1405945D0
 * Callers:
 *     EtwpEnableAutoLoggerProviders @ 0x1405941CC (EtwpEnableAutoLoggerProviders.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x1404AA43C (RtlpQueryRegistryValues.c)
 */

void __fastcall EtwpGetAutoLoggerProviderFilter(__int64 a1, UNICODE_STRING *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  SIZE_T v10; // rdi
  wchar_t *PoolWithTag; // rax
  WCHAR *v12; // rsi
  __int64 v13; // r15
  PVOID *v14; // rbx
  PVOID *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  unsigned int v18; // ecx
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 *v24; // rcx
  _WORD v25[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v38[134]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = -1LL;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(a1 + 2 * v7) );
  v8 = -1LL;
  do
    ++v8;
  while ( aFilters[v8] );
  v9 = v8 + v7;
  do
    ++v5;
  while ( asc_1405C78F0[v5] );
  KeyHandle = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v10 = (unsigned int)(2 * (v5 + v9) + 2);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x50777445u);
  v12 = PoolWithTag;
  v13 = 2LL;
  if ( PoolWithTag )
  {
    if ( !RtlStringCbPrintfW(PoolWithTag, (unsigned int)v10, L"%ws\\Filters", a1) )
    {
      RtlInitUnicodeString(&DestinationString, v12);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
      {
        memset(v38, 0, 0x428uLL);
        v26 = 0;
        v34 = 0LL;
        v15 = (PVOID *)&v27;
        v35 = 0LL;
        v16 = 2LL;
        v32 = 0LL;
        v33 = 0LL;
        v25[0] = 0;
        do
        {
          *v15++ = ExAllocatePoolWithTag(PagedPool, 0x86uLL, 0x46777445u);
          --v16;
        }
        while ( v16 );
        v17 = v27;
        v38[0] = EtwpQueryRegistryCallback;
        LODWORD(v38[25]) = 4;
        v38[2] = L"ExeFilter";
        v38[5] = v25;
        v38[10] = a2 + 1;
        v38[9] = L"PackageIdFilter";
        v38[12] = v25;
        v38[17] = a2 + 2;
        v38[16] = L"PackageRelativeAppIdFilter";
        v38[19] = v25;
        v38[24] = &v31;
        v38[23] = L"EventIdFilterIn";
        v38[31] = &v30;
        v38[30] = L"StackWalkFilterIn";
        v38[38] = &v26;
        LODWORD(v38[32]) = 4;
        LODWORD(v38[39]) = 4;
        v18 = 6;
        v38[37] = L"Enabled";
        v19 = 3LL;
        v38[3] = a2;
        LODWORD(v38[4]) = 1;
        v38[7] = EtwpQueryRegistryCallback;
        LODWORD(v38[11]) = 1;
        v38[14] = EtwpQueryRegistryCallback;
        LODWORD(v38[18]) = 1;
        v38[21] = EtwpQueryRegistryCallback;
        v38[28] = EtwpQueryRegistryCallback;
        v38[35] = EtwpQueryRegistryCallback;
        if ( v27 )
        {
          LODWORD(v32) = 128;
          v33 = v27 + 4;
          v18 = 7;
          v38[42] = EtwpQueryRegistryCallback;
          v38[45] = &v32;
          v38[44] = L"EventIds";
          LODWORD(v38[46]) = 3;
        }
        v20 = v28;
        if ( v28 )
        {
          LODWORD(v34) = 128;
          v35 = v28 + 4;
          v21 = 7LL * v18;
          v38[v21 + 3] = &v34;
          v38[v21 + 2] = L"StackWalkIds";
          v38[v21] = EtwpQueryRegistryCallback;
          LODWORD(v38[v21 + 4]) = 3;
        }
        if ( (int)RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v38, 0LL) >= 0 )
        {
          if ( v17 )
          {
            *(_BYTE *)v17 = v31 != 0;
            *(_WORD *)(v17 + 2) = (unsigned int)v32 >> 1;
          }
          if ( v20 )
          {
            *(_BYTE *)v20 = v30 != 0;
            *(_WORD *)(v20 + 2) = (unsigned int)v34 >> 1;
          }
          if ( v26 )
          {
            v22 = 2LL;
            v23 = a3 - (_QWORD)&v27;
            v24 = &v27;
            do
            {
              *(__int64 *)((char *)v24 + v23) = *v24;
              *v24++ = 0LL;
              --v22;
            }
            while ( v22 );
          }
          else
          {
            do
            {
              RtlFreeAnsiString(a2++);
              --v19;
            }
            while ( v19 );
          }
        }
      }
    }
  }
  v14 = (PVOID *)&v27;
  do
  {
    if ( *v14 )
      ExFreePoolWithTag(*v14, 0);
    ++v14;
    --v13;
  }
  while ( v13 );
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
}
