/*
 * XREFs of PipMakeGloballyUniqueId @ 0x14053AE10
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406182B0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140002AB0 (RtlStringCchCopyW.c)
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlStringCchPrintfExW @ 0x14008FB80 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyW @ 0x140090A98 (RtlStringCbCopyW.c)
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043BFA8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x1404D6BE0 (RtlUpcaseUnicodeString.c)
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
  unsigned int v18; // r13d
  wchar_t *PoolWithTag; // rax
  wchar_t *Buffer; // r8
  int v21; // r9d
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  int v25; // eax
  int v26; // ebx
  unsigned int v27; // eax
  ULONG Length[2]; // [rsp+20h] [rbp-79h]
  PULONG ResultLength; // [rsp+28h] [rbp-71h]
  __int64 v30; // [rsp+30h] [rbp-69h]
  __int64 v31; // [rsp+38h] [rbp-61h]
  ULONG v32; // [rsp+50h] [rbp-49h] BYREF
  wchar_t **v33; // [rsp+58h] [rbp-41h]
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-39h] BYREF
  int Data; // [rsp+70h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-21h] BYREF
  int v37; // [rsp+80h] [rbp-19h]
  HANDLE v38; // [rsp+88h] [rbp-11h] BYREF
  size_t cbDest; // [rsp+90h] [rbp-9h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+98h] [rbp-1h] BYREF
  __int64 v41; // [rsp+A0h] [rbp+7h]
  _BYTE KeyValueInformation[4]; // [rsp+A8h] [rbp+Fh] BYREF
  int v43; // [rsp+ACh] [rbp+13h]
  int v44; // [rsp+B0h] [rbp+17h]
  unsigned int v45; // [rsp+B4h] [rbp+1Bh]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = -1LL;
  v33 = a3;
  v6 = a3;
  v41 = a2;
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
                             &v32);
    if ( CachedContextBaseKey >= 0 )
    {
      if ( v43 != 4 || v44 != 4 )
      {
        CachedContextBaseKey = -1073741811;
        goto LABEL_18;
      }
      v18 = v45;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x12uLL, 0x6E657050u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_46;
      RtlStringCbPrintfW(PoolWithTag, 0x12uLL, L"%x", v18);
    }
    else
    {
      *(_DWORD *)&ValueName.Length = 1966108;
      v32 = 66;
      ValueName.Buffer = L"ParentIdPrefix";
      v10 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x42uLL, 0x6E657050u);
      if ( !v10 )
        goto LABEL_46;
      CachedContextBaseKey = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v10, v32, &v32);
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
        v6 = v33;
LABEL_18:
        ZwClose(KeyHandle);
        goto LABEL_19;
      }
      v32 = 31;
      CachedContextBaseKey = RtlUpcaseUnicodeString(&ValueName, (PCUNICODE_STRING)(v4 + 40), 1u);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      Buffer = ValueName.Buffer;
      v21 = 0;
      v22 = 0LL;
      v23 = (unsigned __int64)ValueName.Length >> 1;
      v24 = (2 * v23 + 1) >> 1;
      if ( ValueName.Buffer > &ValueName.Buffer[v23] )
        v24 = 0LL;
      if ( v24 )
      {
        do
        {
          v25 = *Buffer;
          ++v22;
          ++Buffer;
          v21 = v25 + 37 * v21;
        }
        while ( v22 < v24 );
      }
      v26 = (int)abs32(314159269 * v21) % 1000000007;
      v37 = v26;
      RtlFreeAnsiString(&ValueName);
      cbDest = 2 * v32;
      v9 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, cbDest, 0x6E657050u);
      if ( !v9 )
        goto LABEL_46;
      LODWORD(ResultLength) = *(_DWORD *)(v4 + 136);
      Length[0] = v26;
      RtlStringCbPrintfW(v9, cbDest, L"%s.%x.%x", L"NextParentID", *(_QWORD *)Length, ResultLength);
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 5, &v38);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      RtlInitUnicodeString(&ValueName, v9);
      if ( ZwQueryValueKey(v38, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &v32) < 0
        || v43 != 4
        || (v27 = v45, v44 != 4) )
      {
        v27 = 0;
      }
      Data = v27 + 1;
      CachedContextBaseKey = ZwSetValueKey(v38, &ValueName, 0, 4u, &Data, 4u);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
      ValueName.Buffer = L"ParentIdPrefix";
      --Data;
      LODWORD(v31) = v37;
      *(_DWORD *)&ValueName.Length = 1966108;
      LODWORD(v30) = *(_DWORD *)(v4 + 136);
      ppszDestEnd = v9;
      RtlStringCchPrintfExW(v9, cbDest >> 1, &ppszDestEnd, 0LL, 0, L"%x&%x&%x", v30, v31, Data);
      v32 = ppszDestEnd - v9 + 1;
      CachedContextBaseKey = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v9, 2 * v32);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_17;
    }
LABEL_10:
    v14 = v41;
    if ( v41 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)(v41 + 2 * v15) );
    }
    else
    {
      LODWORD(v15) = 0;
    }
    do
      ++v5;
    while ( v9[v5] );
    v32 = v5 + v15 + 2;
    v16 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v32, 0x6E657050u);
    v8 = v16;
    if ( v16 )
    {
      if ( v14 )
        RtlStringCchPrintfW(v16, v32, L"%s&%s", v9, v14);
      else
        RtlStringCchCopyW(v16, v32, v9);
      goto LABEL_17;
    }
    goto LABEL_46;
  }
LABEL_19:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *v6 = v8;
  return (unsigned int)CachedContextBaseKey;
}
