/*
 * XREFs of IoCreateDriver @ 0x1405900A4
 * Callers:
 *     ViIrpLogExposeWmiCallback @ 0x14074E768 (ViIrpLogExposeWmiCallback.c)
 *     VfFilterAttach @ 0x1407524D4 (VfFilterAttach.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 *     WMIInitialize @ 0x1407C07E4 (WMIInitialize.c)
 *     PiSwInit @ 0x1407E84D8 (PiSwInit.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     RtlStringCchLengthW @ 0x140008670 (RtlStringCchLengthW.c)
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x140180FB0 (ZwMakeTemporaryObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObMakeTemporaryObject @ 0x140539B08 (ObMakeTemporaryObject.c)
 */

__int64 __fastcall IoCreateDriver(_OWORD *a1, __int64 (__fastcall *a2)(PVOID, _QWORD))
{
  __int64 result; // rax
  _QWORD *v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rdx
  unsigned __int64 v7; // rcx
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  SIZE_T v10; // rdx
  _WORD *PoolWithTagPriority; // rax
  _WORD *v12; // rbx
  unsigned __int64 v13; // rdi
  __int128 v14; // xmm0
  PVOID v15; // rcx
  NTSTATUS inserted; // ebx
  NTSTATUS v17; // eax
  PVOID v18; // rdi
  PVOID PoolWithTag; // rax
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h]
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  size_t pcchLength[2]; // [rsp+70h] [rbp-90h] BYREF
  PVOID v24; // [rsp+80h] [rbp-80h] BYREF
  int v25; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h]
  void **v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+A0h] [rbp-60h]
  __int128 v29; // [rsp+A8h] [rbp-58h]
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
  v27 = Src;
  v25 = 48;
  v26 = 0LL;
  v28 = 592;
  v29 = 0LL;
  result = ObCreateObject(0, (int)IoDriverObjectType, (int)&v25, 0);
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
    v8 = KeGetCurrentThread();
    v9 = v8->KernelApcDisable + 1;
    v8->KernelApcDisable = v9;
    if ( !v9
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
      && !v8->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v10 = LOWORD(Src[0]) + 2LL;
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              PagedPool,
                              v10,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = ExAllocatePoolWithTag(PagedPool, v10, 0x20206F49u);
    pcchLength[1] = (size_t)PoolWithTagPriority;
    v12 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
    {
      v13 = LOWORD(Src[0]);
      LOWORD(pcchLength[0]) = Src[0];
      WORD1(pcchLength[0]) = LOWORD(Src[0]) + 2;
      memmove(PoolWithTagPriority, Src[1], LOWORD(Src[0]));
      v14 = *(_OWORD *)pcchLength;
      v15 = Object;
      v12[v13 >> 1] = 0;
      *(_OWORD *)(v4[6] + 24LL) = v14;
      inserted = ObInsertObject(v15, 0LL, 1u, 0, 0LL, &Handle);
      if ( inserted >= 0 )
      {
        v17 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v24, 0LL);
        v18 = v24;
        inserted = v17;
        if ( v17 >= 0 )
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
          *((_QWORD *)v18 + 8) = PoolWithTag;
          if ( PoolWithTag )
          {
            *((_DWORD *)v18 + 14) = Src[0];
            memmove(*((void **)v18 + 8), Src[1], WORD1(Src[0]));
          }
          inserted = a2(v18, 0LL);
          if ( inserted >= 0 )
            return (unsigned int)inserted;
          goto LABEL_34;
        }
        ZwMakeTemporaryObject(Handle);
        ZwClose(Handle);
      }
      return (unsigned int)inserted;
    }
    v18 = Object;
    inserted = -1073741670;
LABEL_34:
    ObMakeTemporaryObject(v18);
    ObfDereferenceObject(v18);
    return (unsigned int)inserted;
  }
  return result;
}
