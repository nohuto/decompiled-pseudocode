/*
 * XREFs of IoCreateDriver @ 0x140523034
 * Callers:
 *     ViIrpLogExposeWmiCallback @ 0x1406CAFF8 (ViIrpLogExposeWmiCallback.c)
 *     VfFilterAttach @ 0x1406CEA4C (VfFilterAttach.c)
 *     PiSwInit @ 0x140755538 (PiSwInit.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 *     WMIInitialize @ 0x1407572D0 (WMIInitialize.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlStringCchLengthW @ 0x140090A3C (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x140152640 (ZwMakeTemporaryObject.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     ObMakeTemporaryObject @ 0x140494274 (ObMakeTemporaryObject.c)
 */

__int64 __fastcall IoCreateDriver(_OWORD *a1, __int64 (__fastcall *a2)(PVOID, _QWORD))
{
  __int64 result; // rax
  _QWORD *v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rdx
  unsigned __int64 v7; // rcx
  SIZE_T v8; // rdx
  _WORD *PoolWithTagPriority; // rax
  _WORD *v10; // rbx
  unsigned __int64 v11; // rdi
  __int128 v12; // xmm0
  PVOID v13; // rcx
  NTSTATUS inserted; // ebx
  NTSTATUS v15; // eax
  PVOID v16; // rdi
  PVOID PoolWithTag; // rax
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  size_t pcchLength[2]; // [rsp+70h] [rbp-90h] BYREF
  PVOID v22; // [rsp+80h] [rbp-80h] BYREF
  int v23; // [rsp+88h] [rbp-78h] BYREF
  __int64 v24; // [rsp+90h] [rbp-70h]
  void **v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+A0h] [rbp-60h]
  __int128 v27; // [rsp+A8h] [rbp-58h]
  wchar_t pszDest[64]; // [rsp+C0h] [rbp-40h] BYREF

  if ( a1 )
  {
    *(_OWORD *)Src = *a1;
  }
  else
  {
    RtlStringCchPrintfW(pszDest, 0x3CuLL, L"\\Driver\\%08u", MEMORY[0xFFFFF78000000320]);
    RtlStringCchLengthW(pszDest, 0x3CuLL, pcchLength);
    if ( pcchLength[0] > 0xFFFF )
      return 2147483653LL;
    LOWORD(Src[0]) = 2 * LOWORD(pcchLength[0]);
    WORD1(Src[0]) = 2 * LOWORD(pcchLength[0]) + 2;
    Src[1] = pszDest;
  }
  v25 = Src;
  v23 = 48;
  v24 = 0LL;
  v26 = 592;
  v27 = 0LL;
  result = ObCreateObject(0, IoDriverObjectType, (__int64)&v23, 0, 0, 416, 0, 0, &Object);
  if ( (int)result >= 0 )
  {
    v4 = Object;
    memset(Object, 0, 0x1A0uLL);
    v4[6] = v4 + 42;
    v4[42] = v4;
    *(_DWORD *)v4 = 22020100;
    *((_DWORD *)v4 + 4) = 4;
    memset64(v4 + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    v4[11] = a2;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      v7 = (unsigned __int64)i[6];
      if ( (unsigned __int64)a2 >= v7 && (unsigned __int64)a2 < v7 + *((unsigned int *)i + 16) )
      {
        *((_QWORD *)Object + 3) = v7;
        break;
      }
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v8 = LOWORD(Src[0]) + 2LL;
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              PagedPool,
                              v8,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = ExAllocatePoolWithTag(PagedPool, v8, 0x20206F49u);
    pcchLength[1] = (size_t)PoolWithTagPriority;
    v10 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
    {
      v11 = LOWORD(Src[0]);
      LOWORD(pcchLength[0]) = Src[0];
      WORD1(pcchLength[0]) = LOWORD(Src[0]) + 2;
      memmove(PoolWithTagPriority, Src[1], LOWORD(Src[0]));
      v12 = *(_OWORD *)pcchLength;
      v13 = Object;
      v10[v11 >> 1] = 0;
      *(_OWORD *)(v4[6] + 24LL) = v12;
      inserted = ObInsertObject(v13, 0LL, 1u, 0, 0LL, &Handle);
      if ( inserted >= 0 )
      {
        v15 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v22, 0LL);
        v16 = v22;
        inserted = v15;
        if ( v15 >= 0 )
        {
          ZwClose(Handle);
          if ( ViVerifierDriverAddedThunkListHead )
            PoolWithTag = ExAllocatePoolWithTagPriority(
                            NonPagedPoolNx,
                            WORD1(Src[0]),
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
          else
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, WORD1(Src[0]), 0x20206F49u);
          *((_QWORD *)v16 + 8) = PoolWithTag;
          if ( PoolWithTag )
          {
            *((_DWORD *)v16 + 14) = Src[0];
            memmove(*((void **)v16 + 8), Src[1], WORD1(Src[0]));
          }
          inserted = a2(v16, 0LL);
          if ( inserted >= 0 )
            return (unsigned int)inserted;
          goto LABEL_30;
        }
        ZwMakeTemporaryObject(Handle);
        ZwClose(Handle);
      }
      return (unsigned int)inserted;
    }
    v16 = Object;
    inserted = -1073741670;
LABEL_30:
    ObMakeTemporaryObject(v16);
    ObfDereferenceObject(v16);
    return (unsigned int)inserted;
  }
  return result;
}
