/*
 * XREFs of PipMakeGloballyUniqueId @ 0x14056FB04
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D548 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     RtlStringCchCopyW @ 0x14010B1EC (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlUpcaseUnicodeString @ 0x1404F8140 (RtlUpcaseUnicodeString.c)
 */

__int64 __fastcall PipMakeGloballyUniqueId(__int64 a1, __int64 a2, wchar_t **a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r13
  __int64 v5; // r14
  wchar_t **v6; // r12
  wchar_t *v8; // r15
  wchar_t *v9; // rdi
  wchar_t *v10; // rsi
  int CachedContextBaseKey; // ebx
  unsigned int v12; // r13d
  wchar_t *v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  wchar_t *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v21; // r13d
  wchar_t *PoolWithTag; // rax
  wchar_t *Buffer; // r8
  int v24; // r9d
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  int v28; // eax
  int v29; // ebx
  unsigned int v30; // eax
  ULONG Length[2]; // [rsp+20h] [rbp-79h]
  PULONG ResultLength; // [rsp+28h] [rbp-71h]
  __int64 v33; // [rsp+30h] [rbp-69h]
  __int64 v34; // [rsp+38h] [rbp-61h]
  ULONG v35; // [rsp+50h] [rbp-49h] BYREF
  wchar_t **v36; // [rsp+58h] [rbp-41h]
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-39h] BYREF
  int Data; // [rsp+70h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-21h] BYREF
  int v40; // [rsp+80h] [rbp-19h]
  HANDLE v41; // [rsp+88h] [rbp-11h] BYREF
  size_t cbDest; // [rsp+90h] [rbp-9h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+98h] [rbp-1h] BYREF
  __int64 v44; // [rsp+A0h] [rbp+7h]
  _BYTE KeyValueInformation[4]; // [rsp+A8h] [rbp+Fh] BYREF
  int v46; // [rsp+ACh] [rbp+13h]
  int v47; // [rsp+B0h] [rbp+17h]
  unsigned int v48; // [rsp+B4h] [rbp+1Bh]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = -1LL;
  v36 = a3;
  v6 = a3;
  v44 = a2;
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  v10 = 0LL;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  if ( a1 )
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  CachedContextBaseKey = CmOpenDeviceRegKey(
                           *(__int64 *)&PiPnpRtlCtx,
                           *(_QWORD *)(v4 + 48),
                           0x10u,
                           0,
                           131103,
                           0,
                           (__int64)&KeyHandle,
                           0LL);
  if ( CachedContextBaseKey >= 0 )
  {
    ValueName.Buffer = L"UniqueParentID";
    *(_DWORD *)&ValueName.Length = 1966108;
    CachedContextBaseKey = ZwQueryValueKey(
                             KeyHandle,
                             &ValueName,
                             KeyValuePartialInformation,
                             KeyValueInformation,
                             0x10u,
                             &v35);
    if ( CachedContextBaseKey >= 0 )
    {
      if ( v46 != 4 || v47 != 4 )
      {
        CachedContextBaseKey = -1073741811;
        goto LABEL_18;
      }
      v21 = v48;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x12uLL, 0x6E657050u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_46;
      RtlStringCbPrintfW(PoolWithTag, 0x12uLL, L"%x", v21);
    }
    else
    {
      *(_DWORD *)&ValueName.Length = 1966108;
      v35 = 66;
      ValueName.Buffer = L"ParentIdPrefix";
      v10 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x42uLL, 0x6E657050u);
      if ( !v10 )
        goto LABEL_46;
      CachedContextBaseKey = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v10, v35, &v35);
      if ( CachedContextBaseKey >= 0 )
      {
        if ( *((_DWORD *)v10 + 1) == 1 )
        {
          v12 = *((_DWORD *)v10 + 2);
          v13 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12, 0x6E657050u);
          v9 = v13;
          if ( v13 )
          {
            RtlStringCbCopyW(v13, v12, v10 + 6);
            goto LABEL_10;
          }
LABEL_46:
          CachedContextBaseKey = -1073741670;
          goto LABEL_17;
        }
        CachedContextBaseKey = -1073741811;
LABEL_17:
        v6 = v36;
LABEL_18:
        ZwClose(KeyHandle);
        goto LABEL_19;
      }
      v35 = 31;
      CachedContextBaseKey = RtlUpcaseUnicodeString(&ValueName, (PCUNICODE_STRING)(v4 + 40), 1u);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      Buffer = ValueName.Buffer;
      v24 = 0;
      v25 = 0LL;
      v26 = (unsigned __int64)ValueName.Length >> 1;
      v27 = (2 * v26 + 1) >> 1;
      if ( ValueName.Buffer > &ValueName.Buffer[v26] )
        v27 = 0LL;
      if ( v27 )
      {
        do
        {
          v28 = *Buffer;
          ++v25;
          ++Buffer;
          v24 = v28 + 37 * v24;
        }
        while ( v25 < v27 );
      }
      v29 = (int)abs32(314159269 * v24) % 1000000007;
      v40 = v29;
      RtlFreeAnsiString(&ValueName);
      cbDest = 2 * v35;
      v9 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, cbDest, 0x6E657050u);
      if ( !v9 )
        goto LABEL_46;
      LODWORD(ResultLength) = *(_DWORD *)(v4 + 136);
      Length[0] = v29;
      RtlStringCbPrintfW(v9, cbDest, L"%s.%x.%x", L"NextParentID", *(_QWORD *)Length, ResultLength);
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 **)&PiPnpRtlCtx, 5, (__int64 *)&v41);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      RtlInitUnicodeString(&ValueName, v9);
      if ( ZwQueryValueKey(v41, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &v35) < 0
        || v46 != 4
        || (v30 = v48, v47 != 4) )
      {
        v30 = 0;
      }
      Data = v30 + 1;
      CachedContextBaseKey = ZwSetValueKey(v41, &ValueName, 0, 4u, &Data, 4u);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      ValueName.Buffer = L"ParentIdPrefix";
      --Data;
      LODWORD(v34) = v40;
      *(_DWORD *)&ValueName.Length = 1966108;
      LODWORD(v33) = *(_DWORD *)(v4 + 136);
      ppszDestEnd = v9;
      RtlStringCchPrintfExW(v9, cbDest >> 1, &ppszDestEnd, 0LL, 0, L"%x&%x&%x", v33, v34, Data);
      v35 = ppszDestEnd - v9 + 1;
      CachedContextBaseKey = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v9, 2 * v35);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
    }
LABEL_10:
    v14 = v44;
    if ( v44 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)(v44 + 2 * v15) );
    }
    else
    {
      LODWORD(v15) = 0;
    }
    do
      ++v5;
    while ( v9[v5] );
    v35 = v5 + v15 + 2;
    v16 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v35, 0x6E657050u);
    v8 = v16;
    if ( v16 )
    {
      if ( v14 )
        RtlStringCchPrintfW(v16, v35, L"%s&%s", v9, v14);
      else
        RtlStringCchCopyW(v16, v35, v9);
      goto LABEL_17;
    }
    goto LABEL_46;
  }
LABEL_19:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *v6 = v8;
  return (unsigned int)CachedContextBaseKey;
}
