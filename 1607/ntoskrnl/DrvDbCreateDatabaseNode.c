/*
 * XREFs of DrvDbCreateDatabaseNode @ 0x1405790F0
 * Callers:
 *     DrvDbOpenContext @ 0x140578EA0 (DrvDbOpenContext.c)
 *     DrvDbRegisterDatabase @ 0x140579054 (DrvDbRegisterDatabase.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14057EFFC (DrvDbOpenDriverDatabaseRegKey.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     ExDeleteResourceLite @ 0x14010C7A0 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1403F64A4 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DEEA4 (DrvDbOpenObjectRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1406E260C (DrvDbSetDriverDatabaseMappedProperty.c)
 */

__int64 __fastcall DrvDbCreateDatabaseNode(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        wchar_t *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        unsigned __int16 **a8)
{
  unsigned __int16 **v8; // r12
  int v10; // edi
  unsigned __int16 *v13; // rbx
  wchar_t *PoolWithTag; // rsi
  unsigned __int16 *v15; // rax
  int v16; // r13d
  struct _ERESOURCE *v17; // rax
  int v18; // edi
  unsigned __int16 **v19; // rcx
  __int64 v21; // rax
  SIZE_T v22; // rdi
  const UNICODE_STRING *v23; // rdx
  unsigned __int16 **v24; // rax
  void **v25; // rcx
  void *v26; // rbp
  __int64 dwFlags; // [rsp+20h] [rbp-78h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-70h]
  HANDLE Handle[9]; // [rsp+50h] [rbp-48h] BYREF
  int v31; // [rsp+B8h] [rbp+20h] BYREF

  v8 = a8;
  Handle[0] = 0LL;
  v31 = 0;
  v10 = a3;
  *a8 = 0LL;
  v13 = 0LL;
  if ( a4 )
  {
    PoolWithTag = a4;
  }
  else
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a2[v21] );
    v22 = (unsigned int)(2 * v21 + 68);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v22, 0x42444450u);
    if ( !PoolWithTag )
      goto LABEL_25;
    v18 = RtlStringCchPrintfExW(
            PoolWithTag,
            v22 >> 1,
            0LL,
            0LL,
            0x800u,
            L"%ws\\%ws\\%ws",
            L"\\REGISTRY\\MACHINE",
            a2,
            L"DriverDatabase");
    if ( v18 < 0 )
      goto LABEL_13;
    v10 = a3;
  }
  v15 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x42444450u);
  v13 = v15;
  if ( !v15 )
  {
LABEL_25:
    v18 = -1073741801;
    goto LABEL_13;
  }
  memset(v15, 0, 0x98uLL);
  v16 = a5;
  *((_DWORD *)v13 + 15) = *(_DWORD *)(a1 + 8);
  *((_QWORD *)v13 + 8) = a6;
  *((_QWORD *)v13 + 9) = a7;
  *((_DWORD *)v13 + 14) = v16;
  *((_DWORD *)v13 + 8) = v10;
  if ( RtlCreateUnicodeString((PUNICODE_STRING)v13 + 1, a2)
    && RtlCreateUnicodeString((PUNICODE_STRING)(v13 + 20), PoolWithTag) )
  {
    v17 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x42444450u);
    *((_QWORD *)v13 + 17) = v17;
    if ( v17 )
    {
      v18 = ExInitializeResourceLite(v17);
      if ( v18 < 0 )
      {
        ExFreePoolWithTag(*((PVOID *)v13 + 17), 0);
        *((_QWORD *)v13 + 17) = 0LL;
      }
    }
    else
    {
      v18 = -1073741670;
    }
    if ( v18 >= 0 )
    {
      v19 = *(unsigned __int16 ***)(a1 + 24);
      if ( *v19 != (unsigned __int16 *)(a1 + 16) )
        __fastfail(3u);
      *(_QWORD *)v13 = a1 + 16;
      *((_QWORD *)v13 + 1) = v19;
      *v19 = v13;
      *(_QWORD *)(a1 + 24) = v13;
      if ( (v16 & 0x10) == 0
        || (v23 = *(const UNICODE_STRING **)(a1 + 32)) == 0LL
        || (LOBYTE(pszFormat) = 1,
            LODWORD(dwFlags) = 0x2000000,
            v18 = DrvDbOpenObjectRegKey((__int64 **)a1, v23, 1, a2, dwFlags, pszFormat, Handle, &v31),
            v18 >= 0)
        && (v31 != 1
         || (v18 = DrvDbSetDriverDatabaseMappedProperty(
                     a1,
                     a2,
                     Handle[0],
                     &DEVPKEY_DriverDatabase_RegistryPath,
                     18,
                     *((_QWORD *)v13 + 6),
                     v13[21]),
             v18 >= 0)) )
      {
        *v8 = v13;
        v13 = 0LL;
      }
    }
  }
  else
  {
    v18 = -1073741670;
  }
LABEL_13:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( v13 )
  {
    v24 = *(unsigned __int16 ***)v13;
    if ( *(_QWORD *)v13 )
    {
      v25 = (void **)*((_QWORD *)v13 + 1);
      if ( v24[1] != v13 || *v25 != v13 )
        __fastfail(3u);
      *v25 = v24;
      v24[1] = (unsigned __int16 *)v25;
    }
    v26 = (void *)*((_QWORD *)v13 + 17);
    if ( v26 )
    {
      ExDeleteResourceLite(*((PERESOURCE *)v13 + 17));
      ExFreePoolWithTag(v26, 0);
    }
    RtlFreeAnsiString((PUNICODE_STRING)v13 + 1);
    RtlFreeAnsiString((PUNICODE_STRING)(v13 + 20));
    ExFreePoolWithTag(v13, 0);
  }
  if ( PoolWithTag && PoolWithTag != a4 )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v18;
}
