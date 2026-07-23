/*
 * XREFs of IopInitializeBuiltinDriver @ 0x14079BB9C
 * Callers:
 *     PnpInitializeBootStartDriver @ 0x14079BA3C (PnpInitializeBootStartDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     RtlEqualString @ 0x140096E20 (RtlEqualString.c)
 *     HeadlessKernelAddLogEntry @ 0x14010B72C (HeadlessKernelAddLogEntry.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     ObMakeTemporaryObject @ 0x1404CD494 (ObMakeTemporaryObject.c)
 *     IopReadyDeviceObjects @ 0x1404D1030 (IopReadyDeviceObjects.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     KseDriverLoadImage @ 0x140514D7C (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x14051525C (KseShimDriverIoCallbacks.c)
 *     PnpPrepareDriverLoading @ 0x140515AD8 (PnpPrepareDriverLoading.c)
 *     IopOpenRegistryKeyEx @ 0x140550B8C (IopOpenRegistryKeyEx.c)
 *     PnpDriverLoadingFailed @ 0x14057FD04 (PnpDriverLoadingFailed.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1406FE128 (VfXdvDriverCaptureIoCallbacks.c)
 *     InbvIndicateProgress @ 0x14079BFCC (InbvIndicateProgress.c)
 */

__int64 __fastcall IopInitializeBuiltinDriver(
        const void **a1,
        UNICODE_STRING *a2,
        DRIVER_INITIALIZE *a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _DRIVER_OBJECT **a6)
{
  unsigned __int16 *p_Length; // r15
  char PreviousMode; // cl
  int inserted; // edi
  struct _DRIVER_OBJECT *v12; // rbx
  PVOID *i; // rdi
  PVOID v14; // rdi
  PIMAGE_NT_HEADERS v15; // rax
  SIZE_T v16; // rdx
  _WORD *PoolWithTagPriority; // rax
  _WORD *v18; // rdi
  PDRIVER_EXTENSION DriverExtension; // rsi
  _WORD *v20; // rcx
  _WORD *v21; // rdi
  unsigned __int16 v22; // r15
  SIZE_T v23; // rdx
  _WORD *PoolWithTag; // rax
  _WORD *v25; // r13
  UNICODE_STRING *v26; // r8
  int v27; // eax
  __int64 v28; // rdx
  const void **v29; // r8
  PVOID *NewObject; // [rsp+20h] [rbp-69h]
  PVOID Object; // [rsp+50h] [rbp-39h] BYREF
  HANDLE v33; // [rsp+58h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-29h] BYREF
  PVOID v35; // [rsp+68h] [rbp-21h] BYREF
  int v36; // [rsp+70h] [rbp-19h] BYREF
  __int64 v37; // [rsp+78h] [rbp-11h]
  const void **v38; // [rsp+80h] [rbp-9h]
  int v39; // [rsp+88h] [rbp-1h]
  __int128 v40; // [rsp+90h] [rbp+7h]
  int v41; // [rsp+E0h] [rbp+57h] BYREF
  UNICODE_STRING *v42; // [rsp+E8h] [rbp+5Fh]

  v42 = a2;
  p_Length = &a2->Length;
  v41 = 0;
  *a6 = 0LL;
  HeadlessKernelAddLogEntry();
  v36 = 48;
  v37 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v39 = 80;
  v38 = a1;
  v40 = 0LL;
  inserted = ObCreateObject(PreviousMode, IoDriverObjectType, (__int64)&v36, 0, 0, 416, 0, 0, &Object);
  if ( inserted < 0 )
    goto LABEL_50;
  v12 = (struct _DRIVER_OBJECT *)Object;
  memset(Object, 0, 0x1A0uLL);
  v12->DriverExtension = (PDRIVER_EXTENSION)&v12[1];
  *(_QWORD *)&v12[1].Type = v12;
  memset64(v12->MajorFunction, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
  *(_DWORD *)&v12->Type = 22020100;
  v12->DriverInit = a3;
  inserted = ObInsertObject(v12, 0LL, 1u, 0, 0LL, &Handle);
  if ( inserted < 0 )
  {
LABEL_50:
    HeadlessKernelAddLogEntry();
    return (unsigned int)inserted;
  }
  ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v35, 0LL);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList && a4; i = (PVOID *)*i )
  {
    if ( RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(i + 11), 1u) )
    {
      v12->DriverSection = i;
      break;
    }
  }
  InbvIndicateProgress();
  if ( a4 )
  {
    Object = *(PVOID *)(a4 + 48);
    v14 = Object;
    v15 = RtlImageNtHeader(Object);
    v12->DriverStart = v14;
    v12->DriverSize = v15->OptionalHeader.SizeOfImage;
    if ( (v15->OptionalHeader.DllCharacteristics & 0x2000) != 0 )
      goto LABEL_13;
  }
  else
  {
    Object = 0LL;
  }
  v12->Flags |= 2u;
LABEL_13:
  v16 = *((unsigned __int16 *)a1 + 1) + 2;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            NonPagedPoolNx,
                            v16,
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x20206F49u);
  v18 = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    v12->DriverName.Buffer = PoolWithTagPriority;
    v12->DriverName.MaximumLength = *((_WORD *)a1 + 1);
    v12->DriverName.Length = *(_WORD *)a1;
    memmove(v12->DriverName.Buffer, a1[1], *((unsigned __int16 *)a1 + 1));
    v18[(unsigned __int64)*(unsigned __int16 *)a1 >> 1] = 0;
  }
  DriverExtension = v12->DriverExtension;
  if ( !p_Length || !*p_Length )
  {
    DriverExtension->ServiceKeyName.Buffer = 0LL;
    *(_DWORD *)&DriverExtension->ServiceKeyName.Length = 0;
LABEL_34:
    if ( (v41 & 1) != 0 )
      v12->Flags |= 0x100u;
    v12->HardwareDatabase = &CmRegistryMachineHardwareDescriptionSystemName;
    KseDriverLoadImage(a4);
    v27 = ((__int64 (__fastcall *)(struct _DRIVER_OBJECT *, unsigned __int16 *))v12->DriverInit)(v12, p_Length);
    inserted = v27;
    if ( v27 < 0 )
    {
      if ( v27 == -1073741218 )
      {
        LODWORD(NewObject) = -1073741218;
        DbgPrintEx(0x65u, 3u, "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n", a1, NewObject);
      }
      else
      {
        LODWORD(NewObject) = v27;
        DbgPrintEx(0x65u, 0, "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n", a1, NewObject);
      }
    }
    else
    {
      VfXdvDriverCaptureIoCallbacks(v12);
      v29 = (const void **)(a4 + 72);
      if ( !a4 )
        v29 = 0LL;
      KseShimDriverIoCallbacks((__int64 *)&v12->Type, v28, v29);
    }
    goto LABEL_40;
  }
  v20 = (_WORD *)*((_QWORD *)p_Length + 1);
  v21 = &v20[((unsigned __int64)*p_Length >> 1) - 1];
  if ( *v21 == 92 )
    --v21;
  v22 = 0;
  while ( v21 != v20 )
  {
    if ( *v21 == 92 )
    {
      ++v21;
      break;
    }
    v22 += 2;
    --v21;
  }
  if ( v21 == v20 )
    v22 += 2;
  v23 = v22 + 2LL;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTag = ExAllocatePoolWithTagPriority(
                    NonPagedPoolNx,
                    v23,
                    0x20206F49u,
                    (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v23, 0x20206F49u);
  v25 = PoolWithTag;
  if ( PoolWithTag )
  {
    DriverExtension->ServiceKeyName.Buffer = PoolWithTag;
    DriverExtension->ServiceKeyName.Length = v22;
    DriverExtension->ServiceKeyName.MaximumLength = v22 + 2;
    memmove(PoolWithTag, v21, v22);
    p_Length = &v42->Length;
    v26 = v42;
    v25[(unsigned __int64)DriverExtension->ServiceKeyName.Length >> 1] = 0;
    inserted = IopOpenRegistryKeyEx(&v33, 0LL, v26, 0xF003Fu);
    if ( inserted >= 0 )
    {
      inserted = PnpPrepareDriverLoading((int)DriverExtension + 24, v33, Object, a5, &v41);
      NtClose(v33);
      if ( inserted >= 0 )
        goto LABEL_34;
    }
  }
  else
  {
    inserted = -1073741670;
    DriverExtension->ServiceKeyName.Buffer = 0LL;
    DriverExtension->ServiceKeyName.Length = 0;
  }
LABEL_40:
  NtClose(Handle);
  if ( inserted < 0 )
  {
    if ( inserted != -1073741218 )
      PnpDriverLoadingFailed(0LL, &v12->DriverExtension->ServiceKeyName);
    HeadlessKernelAddLogEntry();
    ObMakeTemporaryObject(v12);
    ObfDereferenceObjectWithTag(v12, 0x746C6644u);
  }
  else
  {
    IopReadyDeviceObjects((__int64)v12);
    HeadlessKernelAddLogEntry();
    *a6 = v12;
  }
  return (unsigned int)inserted;
}
