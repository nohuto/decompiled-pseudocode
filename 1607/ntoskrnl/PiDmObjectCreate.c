/*
 * XREFs of PiDmObjectCreate @ 0x14056471C
 * Callers:
 *     PiDmAddCacheReferenceForObject @ 0x1404E9218 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectManagerPopulate @ 0x1405645E8 (PiDmObjectManagerPopulate.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiDmCacheDataEncode @ 0x1404C3F78 (PiDmCacheDataEncode.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1404D9D6C (_CmSetDeviceInterfacePathFormat.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     RtlHashUnicodeString @ 0x1404E21B0 (RtlHashUnicodeString.c)
 *     PiDmGetCacheKeys @ 0x1404E2474 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x1404E24C0 (PiDmGetCachedKeyIndex.c)
 *     PnpAllocatePWSTR @ 0x1404E4D00 (PnpAllocatePWSTR.c)
 *     _PnpValidateObjectName @ 0x1405649D8 (_PnpValidateObjectName.c)
 */

__int64 __fastcall PiDmObjectCreate(unsigned int a1, const wchar_t *a2, _QWORD *a3)
{
  __int64 v5; // r13
  SIZE_T v6; // rbx
  char *PoolWithTag; // rax
  char *v8; // rdi
  int PWSTR; // ebx
  wchar_t **v10; // rsi
  __int64 v11; // rcx
  wchar_t *v12; // rdx
  wchar_t *v13; // rdx
  wchar_t *v14; // rdx
  wchar_t *v15; // r8
  __int64 v16; // rcx
  _QWORD *v17; // rax
  wchar_t *v18; // r8
  wchar_t *v19; // rdx
  __int64 v20; // rcx
  _DWORD *v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // r14d
  __int64 *v25; // rsi
  DEVPROPKEY **v26; // r12
  unsigned int CachedKeyIndex; // eax
  unsigned int v28; // [rsp+30h] [rbp-20h] BYREF
  DEVPROPKEY **v29; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING String; // [rsp+40h] [rbp-10h] BYREF
  char v32; // [rsp+A8h] [rbp+58h] BYREF

  *a3 = 0LL;
  v32 = 0;
  PiDmGetCacheKeys(a1, &v29, &v28);
  v5 = v28;
  v6 = 24 * v28 + 104;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v6, 0x5A706E50u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v6);
  *(_QWORD *)v8 = 0LL;
  v10 = (wchar_t **)(v8 + 16);
  *((_DWORD *)v8 + 2) = 1;
  *((_DWORD *)v8 + 7) = a1;
  PWSTR = PnpAllocatePWSTR(a2, 0x7FFFFFFFuLL, 0x5A706E50u, (PVOID *)v8 + 2);
  if ( PWSTR < 0 )
    goto LABEL_25;
  v12 = *v10;
  if ( a1 == 3 )
  {
    PWSTR = CmSetDeviceInterfacePathFormat(v11, v12, 0);
    if ( PWSTR < 0 )
      goto LABEL_25;
    v13 = *v10;
    *(_DWORD *)&String.Length = 0;
    String.Buffer = 0LL;
    v14 = v13 + 4;
    if ( v14 )
    {
      v15 = v14;
      v16 = 0x7FFFLL;
      do
      {
        if ( !*v15 )
          break;
        ++v15;
        --v16;
      }
      while ( v16 );
      if ( v16 )
      {
        String.Buffer = v14;
        String.Length = 2 * (0x7FFF - v16);
        String.MaximumLength = String.Length + 2;
        goto LABEL_12;
      }
LABEL_24:
      PWSTR = -1073741811;
      goto LABEL_25;
    }
  }
  else
  {
    PWSTR = PnpValidateObjectName(v11, v12, a1, 0LL);
    if ( PWSTR < 0 )
      goto LABEL_25;
    v18 = *v10;
    *(_DWORD *)&String.Length = 0;
    String.Buffer = 0LL;
    if ( v18 )
    {
      v19 = v18;
      v20 = 0x7FFFLL;
      do
      {
        if ( !*v19 )
          break;
        ++v19;
        --v20;
      }
      while ( v20 );
      if ( !v20 )
        goto LABEL_24;
      String.Buffer = v18;
      String.Length = 2 * (0x7FFF - v20);
      String.MaximumLength = String.Length + 2;
    }
  }
LABEL_12:
  PWSTR = RtlHashUnicodeString(&String, 1u, 0, (PULONG)v8 + 6);
  switch ( a1 )
  {
    case 1u:
      v17 = v8 + 72;
      goto LABEL_29;
    case 2u:
    case 4u:
      v17 = v8 + 40;
      goto LABEL_29;
    case 5u:
      *((_QWORD *)v8 + 6) = v8 + 40;
      *((_QWORD *)v8 + 5) = v8 + 40;
      v17 = v8 + 64;
LABEL_29:
      *v17 = v17;
      v17[1] = v17;
      break;
  }
  if ( (_DWORD)v5 )
  {
    v22 = v8 + 104;
    v23 = v5;
    do
    {
      *v22 = 1;
      v22 += 6;
      --v23;
    }
    while ( v23 );
  }
  v24 = 0;
  v25 = (__int64 *)&off_140257AB8;
  v26 = v29;
  while ( a1 != *((_DWORD *)v25 - 2) )
  {
LABEL_37:
    ++v24;
    v25 += 7;
    if ( v24 >= 3 )
      goto LABEL_40;
  }
  CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v26, v5, *v25);
  if ( CachedKeyIndex < (unsigned int)v5 )
  {
    PWSTR = PiDmCacheDataEncode(
              17,
              (__int128 *)&v32,
              1u,
              (int)v26[3 * CachedKeyIndex + 1],
              HIDWORD(v26[3 * CachedKeyIndex + 1]),
              (__int64)&v8[24 * CachedKeyIndex + 104]);
    if ( PWSTR < 0 )
      goto LABEL_25;
    goto LABEL_37;
  }
  PWSTR = -1073741595;
LABEL_40:
  if ( PWSTR >= 0 )
  {
    *a3 = v8;
    return (unsigned int)PWSTR;
  }
LABEL_25:
  PiDmObjectRelease((unsigned int *)v8);
  return (unsigned int)PWSTR;
}
