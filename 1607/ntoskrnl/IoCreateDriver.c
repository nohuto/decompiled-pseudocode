/*
 * XREFs of IoCreateDriver @ 0x1405518C4
 * Callers:
 *     ViIrpLogExposeWmiCallback @ 0x140719A08 (ViIrpLogExposeWmiCallback.c)
 *     VfFilterAttach @ 0x14071AB04 (VfFilterAttach.c)
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 *     WMIInitialize @ 0x14079DDF8 (WMIInitialize.c)
 *     PiSwInit @ 0x1407BC880 (PiSwInit.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     RtlStringCchLengthW @ 0x1400C2600 (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x14015C250 (ZwMakeTemporaryObject.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     ObMakeTemporaryObject @ 0x1404CD494 (ObMakeTemporaryObject.c)
 */

__int64 __fastcall IoCreateDriver(_OWORD *a1, __int64 (__fastcall *a2)(PVOID, _QWORD))
{
  __int64 result; // rax
  _QWORD *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  SIZE_T v11; // rdx
  _WORD *PoolWithTagPriority; // rax
  _WORD *v13; // rbx
  unsigned __int64 v14; // rdi
  __int128 v15; // xmm0
  PVOID v16; // rcx
  NTSTATUS inserted; // ebx
  HANDLE v18; // rsi
  NTSTATUS v19; // eax
  PVOID v20; // rdi
  PVOID PoolWithTag; // rax
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  size_t pcchLength[2]; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  PVOID v26; // [rsp+80h] [rbp-80h] BYREF
  int v27; // [rsp+88h] [rbp-78h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h]
  void **v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+A0h] [rbp-60h]
  __int128 v31; // [rsp+A8h] [rbp-58h]
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
  v29 = Src;
  v27 = 48;
  v28 = 0LL;
  v30 = 592;
  v31 = 0LL;
  result = ObCreateObject(0, IoDriverObjectType, (__int64)&v27, 0, 0, 416, 0, 0, &Object);
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
    v11 = LOWORD(Src[0]) + 2LL;
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              PagedPool,
                              v11,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = ExAllocatePoolWithTag(PagedPool, v11, 0x20206F49u);
    pcchLength[1] = (size_t)PoolWithTagPriority;
    v13 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
    {
      v14 = LOWORD(Src[0]);
      LOWORD(pcchLength[0]) = Src[0];
      WORD1(pcchLength[0]) = LOWORD(Src[0]) + 2;
      memmove(PoolWithTagPriority, Src[1], LOWORD(Src[0]));
      v15 = *(_OWORD *)pcchLength;
      v16 = Object;
      v13[v14 >> 1] = 0;
      *(_OWORD *)(v4[6] + 24LL) = v15;
      inserted = ObInsertObject(v16, 0LL, 1u, 0, 0LL, &Handle);
      if ( inserted >= 0 )
      {
        v18 = Handle;
        v19 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v26, 0LL);
        v20 = v26;
        inserted = v19;
        if ( v19 >= 0 )
        {
          ZwClose(v18);
          if ( ViVerifierDriverAddedThunkListHead )
            PoolWithTag = ExAllocatePoolWithTagPriority(
                            NonPagedPoolNx,
                            WORD1(Src[0]),
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
          else
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, WORD1(Src[0]), 0x20206F49u);
          *((_QWORD *)v20 + 8) = PoolWithTag;
          if ( PoolWithTag )
          {
            *((_DWORD *)v20 + 14) = Src[0];
            memmove(*((void **)v20 + 8), Src[1], WORD1(Src[0]));
          }
          inserted = a2(v20, 0LL);
          if ( inserted >= 0 )
            return (unsigned int)inserted;
          goto LABEL_30;
        }
        ZwMakeTemporaryObject(v18);
        ZwClose(v18);
      }
      return (unsigned int)inserted;
    }
    v20 = Object;
    inserted = -1073741670;
LABEL_30:
    ObMakeTemporaryObject(v20);
    ObfDereferenceObject(v20);
    return (unsigned int)inserted;
  }
  return result;
}
