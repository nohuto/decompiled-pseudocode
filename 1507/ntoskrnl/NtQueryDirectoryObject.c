/*
 * XREFs of NtQueryDirectoryObject @ 0x140520F80
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     EvaluateCurrentState @ 0x140233034 (EvaluateCurrentState.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 */

NTSTATUS __stdcall NtQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG BufferLength,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  size_t v7; // rdi
  signed __int64 v9; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  PVOID PoolWithQuotaTag; // rax
  void *v15; // r15
  int v16; // edi
  __int64 v17; // r9
  unsigned int v18; // r12d
  ULONG v19; // r13d
  NTSTATUS v20; // r15d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // r9
  _QWORD *v25; // rdi
  __int64 v26; // rdx
  unsigned int v27; // eax
  ULONG v28; // r14d
  _QWORD *v29; // rsi
  ULONG v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rax
  int v33; // r15d
  int v34; // eax
  unsigned int v35; // r8d
  unsigned __int16 *v36; // r10
  __int64 v37; // r9
  unsigned __int16 *v38; // rdi
  char *v39; // rdi
  int v40; // r14d
  const void **v41; // rsi
  _BYTE *v42; // r12
  char *v43; // rdi
  char *v44; // rdi
  _QWORD *v45; // rdi
  signed __int64 *v46; // roff
  signed __int64 v47; // rax
  struct _KTHREAD *v48; // rcx
  __int16 v49; // ax
  ULONG v50; // eax
  unsigned __int16 Length; // [rsp+30h] [rbp-B8h]
  ULONG v52; // [rsp+34h] [rbp-B4h]
  ULONG v53; // [rsp+38h] [rbp-B0h]
  int v54; // [rsp+3Ch] [rbp-ACh]
  int v55; // [rsp+40h] [rbp-A8h]
  unsigned int v56; // [rsp+44h] [rbp-A4h]
  PVOID Object; // [rsp+48h] [rbp-A0h] BYREF
  void *Src; // [rsp+50h] [rbp-98h]
  unsigned __int16 *v59; // [rsp+58h] [rbp-90h]
  __int64 v60; // [rsp+60h] [rbp-88h]
  _QWORD *v61; // [rsp+68h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-70h] BYREF
  __int64 v64; // [rsp+88h] [rbp-60h]
  __int64 v65; // [rsp+90h] [rbp-58h]
  __int16 v66; // [rsp+A6h] [rbp-42h]
  int v67; // [rsp+A8h] [rbp-40h]

  v7 = BufferLength;
  v66 = 0;
  v9 = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  v67 = -60876;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Buffer, BufferLength, 2u);
    v11 = Context;
    if ( (unsigned __int64)Context >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    *v11 = *v11;
    if ( ReturnLength )
    {
      v12 = ReturnLength;
      if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
        v12 = (_DWORD *)MmUserProbeAddress;
      *v12 = *v12;
    }
    if ( RestartScan )
      v52 = 0;
    else
      v52 = *Context;
  }
  else if ( RestartScan )
  {
    v52 = 0;
  }
  else
  {
    v52 = *Context;
  }
  if ( (unsigned int)v7 >= (int)v7 + 32 )
    return -1073741811;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7 + 32, 0x6D4E624Fu);
  v15 = PoolWithQuotaTag;
  Src = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741670;
  memset(PoolWithQuotaTag, 0, v7);
  v16 = ObReferenceObjectByHandle(DirectoryHandle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v16 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    return v16;
  }
  v59 = (unsigned __int16 *)v15;
  v18 = 32;
  v54 = 32;
  v19 = 0;
  v53 = 0;
  v55 = 0;
  v20 = -2147483622;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v22 = (unsigned __int64 *)((char *)Object + 296);
  BugCheckParameter2 = (ULONG_PTR)Object + 296;
  v23 = KeAbPreAcquire((ULONG_PTR)Object + 296, 0LL, 0LL, v17);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v22, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v22, v23, (ULONG_PTR)v22, v24);
  if ( v23 )
    *(_BYTE *)(v23 + 26) |= 1u;
  v25 = Object;
  v61 = Object;
  ObfReferenceObject(Object);
  v27 = 0;
  v56 = 0;
  v28 = v52;
  while ( 1 )
  {
    v29 = (_QWORD *)*v25;
    if ( *v25 )
      break;
LABEL_38:
    v56 = ++v27;
    v61 = ++v25;
    if ( v27 >= 0x25 )
      goto LABEL_44;
  }
  while ( 1 )
  {
    v30 = v19++;
    v53 = v19;
    if ( v28 == v30 )
      break;
LABEL_36:
    v29 = (_QWORD *)*v29;
    if ( !v29 )
    {
      v25 = v61;
      v27 = v56;
      goto LABEL_38;
    }
  }
  v31 = v29[1];
  if ( (*(_BYTE *)(v31 - 22) & 2) == 0 || (v32 = ObpInfoMaskToOffset[*(_BYTE *)(v31 - 22) & 3], v31 - 48 == v32) )
    RtlInitUnicodeString(&DestinationString, 0LL);
  else
    DestinationString = *(UNICODE_STRING *)(v31 - 48 - v32 + 8);
  v60 = (unsigned __int8)((unsigned __int16)(v31 - 48) >> 8);
  Length = DestinationString.Length;
  v33 = *(unsigned __int16 *)(ObTypeIndexTable[v60 ^ *(unsigned __int8 *)(v31 - 24) ^ (unsigned __int64)(unsigned __int8)ObHeaderCookie]
                            + 16)
      + DestinationString.Length
      + 36;
  LOBYTE(v34) = EvaluateCurrentState((int **)&g_Feature_1215876408_57622604_FeatureDescriptorDetails);
  if ( v34 && v18 > v33 + v18 )
    goto LABEL_42;
  v35 = v33 + v18;
  if ( v33 + v18 <= BufferLength )
  {
    v36 = v59;
    *v59 = Length;
    v36[1] = Length + 2;
    *((_QWORD *)v36 + 1) = DestinationString.Buffer;
    v26 = (unsigned __int8)ObHeaderCookie;
    v37 = v60;
    v36[8] = *(_WORD *)(ObTypeIndexTable[v60 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v31 - 24)]
                      + 16);
    v36[9] = *(_WORD *)(ObTypeIndexTable[v37 ^ v26 ^ *(unsigned __int8 *)(v31 - 24)] + 16) + 2;
    *((_QWORD *)v36 + 3) = *(_QWORD *)(ObTypeIndexTable[v37 ^ v26 ^ *(unsigned __int8 *)(v31 - 24)] + 24);
    v20 = 0;
    v18 = v35;
    v54 = v35;
    v59 = v36 + 16;
    ++v55;
    if ( ReturnSingleEntry )
      goto LABEL_44;
    ++v28;
    goto LABEL_36;
  }
  if ( ReturnSingleEntry )
  {
    v18 += v33;
    v54 = v18;
    v20 = -1073741789;
    goto LABEL_43;
  }
LABEL_42:
  v20 = 261;
LABEL_43:
  v53 = --v19;
LABEL_44:
  if ( v20 >= 0 )
  {
    v38 = v59;
    *(_QWORD *)v59 = 0LL;
    *((_QWORD *)v38 + 1) = 0LL;
    *((_QWORD *)v38 + 2) = 0LL;
    *((_QWORD *)v38 + 3) = 0LL;
    v39 = (char *)(v38 + 16);
    v40 = v55;
    if ( v55 )
    {
      v41 = (const void **)((char *)Src + 24);
      v42 = Src;
      do
      {
        memmove(v39, *(v41 - 2), *((unsigned __int16 *)v41 - 12));
        *(v41 - 2) = (char *)Buffer + v39 - v42;
        v43 = &v39[*((unsigned __int16 *)v41 - 12)];
        *(_WORD *)v43 = 0;
        v43 += 2;
        memmove(v43, *v41, *((unsigned __int16 *)v41 - 4));
        *v41 = (char *)Buffer + v43 - v42;
        v44 = &v43[*((unsigned __int16 *)v41 - 4)];
        *(_WORD *)v44 = 0;
        v39 = v44 + 2;
        v41 += 4;
        --v40;
      }
      while ( v40 );
      v18 = v54;
      v19 = v53;
    }
  }
  v45 = (_QWORD *)BugCheckParameter2;
  v46 = (signed __int64 *)BugCheckParameter2;
  _m_prefetchw((const void *)BugCheckParameter2);
  v47 = *v46;
  if ( (*v46 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v9 = v47 - 16;
  if ( (v47 & 2) != 0 || v47 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v9, v47) )
    ExfReleasePushLock(v45, v26);
  KeAbPostRelease((ULONG_PTR)v45);
  ObfDereferenceObject(Object);
  v48 = KeGetCurrentThread();
  v49 = v48->KernelApcDisable + 1;
  v48->KernelApcDisable = v49;
  if ( !v49
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v48->ApcState.ApcListHead[0].Flink != &v48->152
    && !v48->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v50 = BufferLength;
  if ( v18 <= BufferLength )
    v50 = v18;
  memmove(Buffer, Src, v50);
  if ( ReturnLength )
    *ReturnLength = v18;
  if ( v20 >= 0 )
    *Context = v19;
  ObfDereferenceObject(Object);
  ExFreePoolWithTag(Src, 0);
  return v20;
}
