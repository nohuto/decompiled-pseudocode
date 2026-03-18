/*
 * XREFs of PipGenerateContainerID @ 0x1404EB3C4
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140167460 (RtlCompareMemory.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1403F75E4 (RtlCreateUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1403F7E8C (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     ExUuidCreate @ 0x1404A2404 (ExUuidCreate.c)
 *     RtlGUIDFromString @ 0x1404FB370 (RtlGUIDFromString.c)
 *     _CmGetDeviceRegProp @ 0x1404FCE4C (_CmGetDeviceRegProp.c)
 */

__int64 __fastcall PipGenerateContainerID(__int64 a1, __int64 a2, char a3, const WCHAR *a4, _QWORD *a5)
{
  int v5; // edi
  int v7; // ebx
  GUID *p_Guid; // rcx
  wchar_t *Buffer; // rdi
  unsigned int MaximumLength; // esi
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  int DeviceRegProp; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 i; // rdi
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-61h] BYREF
  int v21; // [rsp+50h] [rbp-51h] BYREF
  int v22; // [rsp+54h] [rbp-4Dh] BYREF
  GUID Guid; // [rsp+58h] [rbp-49h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-31h] BYREF

  *(_DWORD *)&UnicodeString.Length = 0;
  v5 = a2;
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
      v21 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        PiPnpRtlCtx,
                        v14,
                        v5,
                        37,
                        (__int64)&v22,
                        (__int64)SourceString,
                        (__int64)&v21,
                        0);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
      if ( DeviceRegProp >= 0 && v22 == 1 && RtlCreateUnicodeString(&UnicodeString, SourceString) )
      {
        v7 = RtlGUIDFromString(&UnicodeString, &Guid);
        if ( v7 >= 0 )
        {
          for ( i = *(_QWORD *)(a1 + 16); i; i = *(_QWORD *)(i + 16) )
          {
            if ( (GUID *)(i + 664) == &Guid || RtlCompareMemory((const void *)(i + 664), &Guid, 0x10uLL) == 16 )
              goto LABEL_27;
          }
LABEL_4:
          if ( v7 < 0 )
            return (unsigned int)v7;
          goto LABEL_5;
        }
LABEL_27:
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
