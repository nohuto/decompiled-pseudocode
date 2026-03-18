/*
 * XREFs of IopInitializeBuiltinDriver @ 0x1407B91D4
 * Callers:
 *     PnpInitializeBootStartDriver @ 0x1407B8F6C (PnpInitializeBootStartDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     RtlEqualString @ 0x1401115A0 (RtlEqualString.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     HeadlessKernelAddLogEntry @ 0x1401539BC (HeadlessKernelAddLogEntry.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     ObMakeTemporaryObject @ 0x140539B08 (ObMakeTemporaryObject.c)
 *     IopReadyDeviceObjects @ 0x1405724BC (IopReadyDeviceObjects.c)
 *     PnpPrepareDriverLoading @ 0x1405729F0 (PnpPrepareDriverLoading.c)
 *     KseShimDriverIoCallbacks @ 0x140576E20 (KseShimDriverIoCallbacks.c)
 *     KseDriverLoadImage @ 0x1405786C4 (KseDriverLoadImage.c)
 *     IopOpenRegistryKeyEx @ 0x14058F9E4 (IopOpenRegistryKeyEx.c)
 *     PnpDriverLoadingFailed @ 0x1405C1A3C (PnpDriverLoadingFailed.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1407320D4 (VfXdvDriverCaptureIoCallbacks.c)
 *     InbvIndicateProgress @ 0x1407B9620 (InbvIndicateProgress.c)
 */

__int64 __fastcall IopInitializeBuiltinDriver(
        const void **a1,
        UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 *a6)
{
  unsigned __int16 *p_Length; // r15
  int v10; // ecx
  int inserted; // edi
  __int64 v12; // rbx
  PVOID *i; // rdi
  PIMAGE_NT_HEADERS v14; // rax
  SIZE_T v15; // rdx
  _WORD *PoolWithTagPriority; // rax
  _WORD *v17; // rdi
  __int64 v18; // rsi
  _WORD *v19; // rcx
  _WORD *v20; // rdi
  unsigned __int16 v21; // r15
  SIZE_T v22; // rdx
  _WORD *PoolWithTag; // rax
  _WORD *v24; // r13
  UNICODE_STRING *v25; // r8
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  PVOID *NewObject; // [rsp+20h] [rbp-69h]
  _QWORD *Object; // [rsp+50h] [rbp-39h]
  PVOID Objecta; // [rsp+50h] [rbp-39h]
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
  LOBYTE(v10) = KeGetCurrentThread()->PreviousMode;
  v39 = 80;
  v38 = a1;
  v40 = 0LL;
  inserted = ObCreateObject(v10, (int)IoDriverObjectType, (int)&v36, 0);
  if ( inserted < 0 )
    goto LABEL_51;
  v12 = (__int64)Object;
  memset(Object, 0, 0x1A0uLL);
  Object[6] = Object + 42;
  Object[42] = Object;
  memset64(Object + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
  *(_DWORD *)Object = 22020100;
  Object[11] = a3;
  inserted = ObInsertObject(Object, 0LL, 1u, 0, 0LL, &Handle);
  if ( inserted < 0 )
  {
LABEL_51:
    HeadlessKernelAddLogEntry();
    return (unsigned int)inserted;
  }
  ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v35, 0LL);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList && a4; i = (PVOID *)*i )
  {
    if ( RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(i + 11), 1u) )
    {
      Object[5] = i;
      break;
    }
  }
  InbvIndicateProgress();
  if ( a4 )
  {
    Objecta = *(PVOID *)(a4 + 48);
    v14 = RtlImageNtHeader(Objecta);
    *(_QWORD *)(v12 + 24) = Objecta;
    *(_DWORD *)(v12 + 32) = v14->OptionalHeader.SizeOfImage;
    if ( (v14->OptionalHeader.DllCharacteristics & 0x2000) != 0 )
      goto LABEL_13;
  }
  else
  {
    Objecta = 0LL;
  }
  *(_DWORD *)(v12 + 16) |= 2u;
LABEL_13:
  v15 = *((unsigned __int16 *)a1 + 1) + 2;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            NonPagedPoolNx,
                            v15,
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x20206F49u);
  v17 = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    *(_QWORD *)(v12 + 64) = PoolWithTagPriority;
    *(_WORD *)(v12 + 58) = *((_WORD *)a1 + 1);
    *(_WORD *)(v12 + 56) = *(_WORD *)a1;
    memmove(*(void **)(v12 + 64), a1[1], *((unsigned __int16 *)a1 + 1));
    v17[(unsigned __int64)*(unsigned __int16 *)a1 >> 1] = 0;
  }
  v18 = *(_QWORD *)(v12 + 48);
  if ( !p_Length || !*p_Length )
  {
    *(_QWORD *)(v18 + 32) = 0LL;
    *(_DWORD *)(v18 + 24) = 0;
LABEL_34:
    if ( (v41 & 1) != 0 )
      *(_DWORD *)(v12 + 16) |= 0x100u;
    *(_QWORD *)(v12 + 72) = &CmRegistryMachineHardwareDescriptionSystemName;
    KseDriverLoadImage(a4);
    v26 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *))(v12 + 88))(v12, p_Length);
    inserted = v26;
    if ( v26 < 0 )
    {
      if ( v26 == -1073741218 )
      {
        LODWORD(NewObject) = -1073741218;
        DbgPrintEx(0x65u, 3u, "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n", a1, NewObject);
      }
      else
      {
        LODWORD(NewObject) = v26;
        DbgPrintEx(0x65u, 0, "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n", a1, NewObject);
      }
    }
    else
    {
      VfXdvDriverCaptureIoCallbacks((struct _DRIVER_OBJECT *)v12);
      v28 = a4 + 72;
      if ( !a4 )
        v28 = 0LL;
      KseShimDriverIoCallbacks((_QWORD *)v12, v27, v28);
    }
    goto LABEL_40;
  }
  v19 = (_WORD *)*((_QWORD *)p_Length + 1);
  v20 = &v19[((unsigned __int64)*p_Length >> 1) - 1];
  if ( *v20 == 92 )
    --v20;
  v21 = 0;
  while ( v20 != v19 )
  {
    if ( *v20 == 92 )
    {
      ++v20;
      break;
    }
    v21 += 2;
    --v20;
  }
  if ( v20 == v19 )
    v21 += 2;
  v22 = v21 + 2LL;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTag = ExAllocatePoolWithTagPriority(
                    NonPagedPoolNx,
                    v22,
                    0x20206F49u,
                    (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v22, 0x20206F49u);
  v24 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)(v18 + 32) = PoolWithTag;
    *(_WORD *)(v18 + 24) = v21;
    *(_WORD *)(v18 + 26) = v21 + 2;
    memmove(PoolWithTag, v20, v21);
    p_Length = &v42->Length;
    v25 = v42;
    v24[(unsigned __int64)*(unsigned __int16 *)(v18 + 24) >> 1] = 0;
    inserted = IopOpenRegistryKeyEx(&v33, 0LL, v25, 0xF003Fu);
    if ( inserted >= 0 )
    {
      inserted = PnpPrepareDriverLoading((int)v18 + 24, v33, Objecta, a5, &v41);
      NtClose(v33);
      if ( inserted >= 0 )
        goto LABEL_34;
    }
  }
  else
  {
    inserted = -1073741670;
    *(_QWORD *)(v18 + 32) = 0LL;
    *(_WORD *)(v18 + 24) = 0;
  }
LABEL_40:
  NtClose(Handle);
  if ( inserted < 0 )
  {
    if ( inserted != -1073741218 )
      PnpDriverLoadingFailed(0LL, (UNICODE_STRING *)(*(_QWORD *)(v12 + 48) + 24LL));
    HeadlessKernelAddLogEntry();
    ObMakeTemporaryObject((PVOID)v12);
    ObfDereferenceObjectWithTag((PVOID)v12, 0x746C6644u);
  }
  else
  {
    IopReadyDeviceObjects(v12);
    HeadlessKernelAddLogEntry();
    *a6 = v12;
  }
  return (unsigned int)inserted;
}
