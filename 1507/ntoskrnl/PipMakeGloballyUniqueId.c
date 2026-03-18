/*
 * XREFs of PipMakeGloballyUniqueId @ 0x1405B1CF8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406968A0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     RtlStringCbCopyW @ 0x1400CF240 (RtlStringCbCopyW.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     RtlStringCchCopyW @ 0x14011BAF4 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlUpcaseUnicodeString @ 0x140443520 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
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
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  unsigned int v20; // r13d
  wchar_t *PoolWithTag; // rax
  wchar_t *Buffer; // r8
  int v23; // r9d
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  int v27; // eax
  int v28; // ebx
  unsigned int v29; // eax
  ULONG Length[2]; // [rsp+20h] [rbp-79h]
  PULONG ResultLength; // [rsp+28h] [rbp-71h]
  __int64 v32; // [rsp+30h] [rbp-69h]
  __int64 v33; // [rsp+38h] [rbp-61h]
  ULONG v34; // [rsp+50h] [rbp-49h] BYREF
  wchar_t **v35; // [rsp+58h] [rbp-41h]
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-39h] BYREF
  int Data; // [rsp+70h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-21h] BYREF
  int v39; // [rsp+80h] [rbp-19h]
  HANDLE v40; // [rsp+88h] [rbp-11h] BYREF
  size_t cbDest; // [rsp+90h] [rbp-9h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+98h] [rbp-1h] BYREF
  __int64 v43; // [rsp+A0h] [rbp+7h]
  _BYTE KeyValueInformation[4]; // [rsp+A8h] [rbp+Fh] BYREF
  int v45; // [rsp+ACh] [rbp+13h]
  int v46; // [rsp+B0h] [rbp+17h]
  unsigned int v47; // [rsp+B4h] [rbp+1Bh]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = -1LL;
  v35 = a3;
  v6 = a3;
  v43 = a2;
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
                             &v34);
    if ( CachedContextBaseKey >= 0 )
    {
      if ( v45 != 4 || v46 != 4 )
      {
        CachedContextBaseKey = -1073741811;
        goto LABEL_18;
      }
      v20 = v47;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x12uLL, 0x6E657050u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_47;
      RtlStringCbPrintfW(PoolWithTag, 0x12uLL, L"%x", v20);
    }
    else
    {
      *(_DWORD *)&ValueName.Length = 1966108;
      v34 = 66;
      ValueName.Buffer = L"ParentIdPrefix";
      v10 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x42uLL, 0x6E657050u);
      if ( !v10 )
        goto LABEL_47;
      CachedContextBaseKey = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v10, v34, &v34);
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
LABEL_47:
          CachedContextBaseKey = -1073741670;
          goto LABEL_17;
        }
        CachedContextBaseKey = -1073741811;
LABEL_17:
        v6 = v35;
LABEL_18:
        ZwClose(KeyHandle);
        goto LABEL_19;
      }
      v34 = 31;
      CachedContextBaseKey = RtlUpcaseUnicodeString(&ValueName, (PCUNICODE_STRING)(v4 + 40), 1u);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      Buffer = ValueName.Buffer;
      v23 = 0;
      v24 = 0LL;
      v25 = (unsigned __int64)ValueName.Length >> 1;
      v26 = (2 * v25 + 1) >> 1;
      if ( ValueName.Buffer > &ValueName.Buffer[v25] )
        v26 = 0LL;
      if ( v26 )
      {
        do
        {
          v27 = *Buffer;
          ++v24;
          ++Buffer;
          v23 = v27 + 37 * v23;
        }
        while ( v24 < v26 );
      }
      v28 = (int)abs32(314159269 * v23) % 1000000007;
      v39 = v28;
      RtlFreeAnsiString(&ValueName);
      cbDest = 2 * v34;
      v9 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, cbDest, 0x6E657050u);
      if ( !v9 )
        goto LABEL_47;
      LODWORD(ResultLength) = *(_DWORD *)(v4 + 136);
      Length[0] = v28;
      RtlStringCbPrintfW(v9, cbDest, L"%s.%x.%x", L"NextParentID", *(_QWORD *)Length, ResultLength);
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 5, &v40);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      RtlInitUnicodeString(&ValueName, v9);
      if ( ZwQueryValueKey(v40, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &v34) < 0
        || v45 != 4
        || (v29 = v47, v46 != 4) )
      {
        v29 = 0;
      }
      Data = v29 + 1;
      CachedContextBaseKey = ZwSetValueKey(v40, &ValueName, 0, 4u, &Data, 4u);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      ValueName.Buffer = L"ParentIdPrefix";
      --Data;
      LODWORD(v33) = v39;
      *(_DWORD *)&ValueName.Length = 1966108;
      LODWORD(v32) = *(_DWORD *)(v4 + 136);
      ppszDestEnd = v9;
      RtlStringCchPrintfExW(v9, cbDest >> 1, &ppszDestEnd, 0LL, 0, L"%x&%x&%x", v32, v33, Data);
      v34 = ppszDestEnd - v9 + 1;
      CachedContextBaseKey = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v9, 2 * v34);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
    }
LABEL_10:
    v14 = v43;
    if ( v43 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)(v43 + 2 * v15) );
    }
    else
    {
      LODWORD(v15) = 0;
    }
    do
      ++v5;
    while ( v9[v5] );
    v34 = v5 + v15 + 2;
    v16 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v34, 0x6E657050u);
    v8 = v16;
    if ( v16 )
    {
      if ( v14 )
        RtlStringCchPrintfW(v16, v34, L"%s&%s", v9, v14);
      else
        RtlStringCchCopyW(v16, v34, v9);
      goto LABEL_17;
    }
    goto LABEL_47;
  }
LABEL_19:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *v6 = v8;
  return (unsigned int)CachedContextBaseKey;
}
