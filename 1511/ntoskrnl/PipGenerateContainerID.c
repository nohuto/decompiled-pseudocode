/*
 * XREFs of PipGenerateContainerID @ 0x1404EC9C4
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x14043FEA8 (RtlGUIDFromString.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140447238 (RtlCreateUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x140447328 (RtlStringFromGUIDEx.c)
 *     ExUuidCreate @ 0x140487608 (ExUuidCreate.c)
 */

__int64 __fastcall PipGenerateContainerID(__int64 a1, __int64 a2, char a3, const WCHAR *a4, _QWORD *a5)
{
  int v7; // ebx
  GUID *p_Guid; // rcx
  wchar_t *Buffer; // rdi
  unsigned int MaximumLength; // esi
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  int DeviceRegProp; // edi
  __int64 i; // rdi
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-61h] BYREF
  int v18; // [rsp+50h] [rbp-51h] BYREF
  int v19; // [rsp+54h] [rbp-4Dh] BYREF
  GUID Guid; // [rsp+58h] [rbp-49h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-31h] BYREF

  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v7 = 0;
  *a5 = 0LL;
  if ( !a3 )
  {
    p_Guid = (GUID *)(*(_QWORD *)(a1 + 16) + 664LL);
    goto LABEL_3;
  }
  if ( !a4 )
  {
    if ( a2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      v14 = *(_QWORD *)(a1 + 48);
      v18 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v14,
                        a2,
                        37,
                        (__int64)&v19,
                        (__int64)SourceString,
                        (__int64)&v18);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( DeviceRegProp >= 0 && v19 == 1 && RtlCreateUnicodeString(&UnicodeString, SourceString) )
      {
        v7 = RtlGUIDFromString(&UnicodeString, &Guid);
        if ( v7 >= 0 )
        {
          for ( i = *(_QWORD *)(a1 + 16); i; i = *(_QWORD *)(i + 16) )
          {
            if ( (GUID *)(i + 664) == &Guid || RtlCompareMemory((const void *)(i + 664), &Guid, 0x10uLL) == 16 )
              goto LABEL_26;
          }
LABEL_4:
          if ( v7 < 0 )
            return (unsigned int)v7;
          goto LABEL_5;
        }
LABEL_26:
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    v7 = ExUuidCreate(&Guid);
    if ( v7 < 0 )
      return (unsigned int)v7;
    p_Guid = &Guid;
LABEL_3:
    v7 = RtlStringFromGUIDEx(&p_Guid->Data1, (__int64)&UnicodeString, 1);
    goto LABEL_4;
  }
  if ( !RtlCreateUnicodeString(&UnicodeString, a4) )
    return (unsigned int)-1073741670;
LABEL_5:
  Buffer = UnicodeString.Buffer;
  if ( UnicodeString.Buffer )
  {
    MaximumLength = UnicodeString.MaximumLength;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, UnicodeString.MaximumLength, 0x6E657050u);
    *a5 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, Buffer, MaximumLength);
    else
      v7 = -1073741670;
    RtlFreeAnsiString(&UnicodeString);
  }
  return (unsigned int)v7;
}
