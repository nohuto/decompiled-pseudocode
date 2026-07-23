/*
 * XREFs of PipGenerateContainerID @ 0x1404CD548
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1403F64A4 (RtlCreateUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1403F6D4C (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     ExUuidCreate @ 0x14051A810 (ExUuidCreate.c)
 */

__int64 __fastcall PipGenerateContainerID(__int64 a1, __int64 a2, char a3, const WCHAR *a4, _QWORD *a5)
{
  int v5; // edi
  NTSTATUS v7; // ebx
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
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-61h] BYREF
  int v21; // [rsp+50h] [rbp-51h] BYREF
  int v22; // [rsp+54h] [rbp-4Dh] BYREF
  GUID Guid; // [rsp+58h] [rbp-49h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-31h] BYREF

  *(_DWORD *)&GuidString.Length = 0;
  v5 = a2;
  GuidString.Buffer = 0LL;
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
      if ( DeviceRegProp >= 0 && v22 == 1 && RtlCreateUnicodeString(&GuidString, SourceString) )
      {
        v7 = RtlGUIDFromString(&GuidString, &Guid);
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
        RtlFreeAnsiString(&GuidString);
      }
    }
    v7 = ExUuidCreate(&Guid);
    if ( v7 < 0 )
      return (unsigned int)v7;
    p_Guid = &Guid;
LABEL_3:
    v7 = RtlStringFromGUIDEx(p_Guid, &GuidString, 1u);
    goto LABEL_4;
  }
  if ( !RtlCreateUnicodeString(&GuidString, a4) )
    return (unsigned int)-1073741670;
LABEL_5:
  Buffer = GuidString.Buffer;
  if ( GuidString.Buffer )
  {
    MaximumLength = GuidString.MaximumLength;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, GuidString.MaximumLength, 0x6E657050u);
    *a5 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, Buffer, MaximumLength);
    else
      v7 = -1073741670;
    RtlFreeAnsiString(&GuidString);
  }
  return (unsigned int)v7;
}
