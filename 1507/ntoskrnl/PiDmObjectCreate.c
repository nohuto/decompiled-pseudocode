/*
 * XREFs of PiDmObjectCreate @ 0x1405AC0E8
 * Callers:
 *     PiDmAddCacheReferenceForObject @ 0x1404E066C (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectManagerPopulate @ 0x1405ABFB4 (PiDmObjectManagerPopulate.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpValidateObjectName @ 0x140416FF0 (_PnpValidateObjectName.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     RtlHashUnicodeString @ 0x140439AA0 (RtlHashUnicodeString.c)
 *     PiDmGetCacheKeys @ 0x140439DB0 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140439E00 (PiDmGetCachedKeyIndex.c)
 *     PnpAllocatePWSTR @ 0x14043B32C (PnpAllocatePWSTR.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x140458398 (_CmSetDeviceInterfacePathFormat.c)
 *     PiDmCacheDataEncode @ 0x1404E0880 (PiDmCacheDataEncode.c)
 */

__int64 __fastcall PiDmObjectCreate(int a1, const wchar_t *a2, _QWORD *a3)
{
  unsigned int v5; // r13d
  unsigned int v6; // ebx
  char *PoolWithTag; // rax
  char *v8; // rdi
  wchar_t **v9; // rsi
  __int64 v10; // rcx
  int PWSTR; // ebx
  wchar_t *v12; // rdx
  wchar_t *v13; // rdx
  wchar_t *v14; // rdx
  wchar_t *v15; // r8
  __int64 v16; // rcx
  unsigned int v17; // r14d
  __int64 *v18; // rsi
  DEVPROPKEY **v19; // r12
  unsigned int CachedKeyIndex; // eax
  wchar_t *v22; // r8
  wchar_t *v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  unsigned int v26; // [rsp+30h] [rbp-20h] BYREF
  DEVPROPKEY **v27; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING String; // [rsp+40h] [rbp-10h] BYREF
  int v30; // [rsp+A8h] [rbp+58h] BYREF

  *a3 = 0LL;
  LOBYTE(v30) = 0;
  PiDmGetCacheKeys(a1, &v27, &v26);
  v5 = v26;
  v6 = 24 * v26 + 104;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v6, 0x5A706E50u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v6);
  *(_QWORD *)v8 = 0LL;
  v9 = (wchar_t **)(v8 + 16);
  *((_DWORD *)v8 + 2) = 1;
  *((_DWORD *)v8 + 7) = a1;
  PWSTR = PnpAllocatePWSTR(a2, 0x7FFFFFFFuLL, 0x5A706E50u, (PVOID *)v8 + 2);
  if ( PWSTR < 0 )
    goto LABEL_37;
  v12 = *v9;
  if ( a1 == 3 )
  {
    PWSTR = CmSetDeviceInterfacePathFormat(v10, v12, 0);
    if ( PWSTR < 0 )
      goto LABEL_37;
    v13 = *v9;
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
        goto LABEL_11;
      }
LABEL_36:
      PWSTR = -1073741811;
      goto LABEL_37;
    }
  }
  else
  {
    PWSTR = PnpValidateObjectName(v10, (__int64)v12, a1, 0);
    if ( PWSTR < 0 )
      goto LABEL_37;
    v22 = *v9;
    *(_DWORD *)&String.Length = 0;
    String.Buffer = 0LL;
    if ( v22 )
    {
      v23 = v22;
      v24 = 0x7FFFLL;
      do
      {
        if ( !*v23 )
          break;
        ++v23;
        --v24;
      }
      while ( v24 );
      if ( !v24 )
        goto LABEL_36;
      String.Buffer = v22;
      String.Length = 2 * (0x7FFF - v24);
      String.MaximumLength = String.Length + 2;
    }
  }
LABEL_11:
  PWSTR = RtlHashUnicodeString(&String, 1u, 0, (PULONG)v8 + 6);
  switch ( a1 )
  {
    case 1:
      v25 = v8 + 72;
LABEL_32:
      *v25 = v25;
      v25[1] = v25;
      break;
    case 2:
    case 4:
      v25 = v8 + 40;
      goto LABEL_32;
    case 5:
      *((_QWORD *)v8 + 6) = v8 + 40;
      *((_QWORD *)v8 + 5) = v8 + 40;
      v25 = v8 + 64;
      goto LABEL_32;
  }
  v17 = 0;
  v18 = (__int64 *)&off_140290328;
  v19 = v27;
  while ( a1 != *((_DWORD *)v18 - 2) )
  {
LABEL_17:
    ++v17;
    v18 += 7;
    if ( v17 >= 3 )
      goto LABEL_18;
  }
  CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v19, v5, *v18);
  if ( CachedKeyIndex < v5 )
  {
    PWSTR = PiDmCacheDataEncode(
              17,
              &v30,
              1u,
              (int)v19[3 * CachedKeyIndex + 1],
              HIDWORD(v19[3 * CachedKeyIndex + 1]),
              (__int64)&v8[24 * CachedKeyIndex + 104]);
    if ( PWSTR < 0 )
      goto LABEL_37;
    goto LABEL_17;
  }
  PWSTR = -1073741595;
LABEL_18:
  if ( PWSTR < 0 )
  {
LABEL_37:
    PiDmObjectRelease((unsigned int *)v8);
    return (unsigned int)PWSTR;
  }
  *a3 = v8;
  return (unsigned int)PWSTR;
}
