/*
 * XREFs of NtRemoveIoCompletionEx @ 0x1404B049C
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoRemoveIoCompletion @ 0x140080540 (IoRemoveIoCompletion.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 */

__int64 __fastcall NtRemoveIoCompletionEx(
        HANDLE Handle,
        volatile void *Address,
        unsigned int a3,
        _DWORD *a4,
        ULONG64 a5,
        BOOLEAN a6)
{
  __int64 v7; // rsi
  __int64 *v10; // rbx
  KPROCESSOR_MODE PreviousMode; // r15
  LARGE_INTEGER *v12; // r14
  PLIST_ENTRY *v13; // rbx
  NTSTATUS v14; // edi
  _DWORD *v16; // rcx
  SIZE_T v17; // rdx
  PLIST_ENTRY *PoolWithTagPriority; // rax
  ULONG v19; // [rsp+44h] [rbp-F4h] BYREF
  LARGE_INTEGER *v20; // [rsp+48h] [rbp-F0h]
  PVOID Object; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE P[128]; // [rsp+70h] [rbp-C8h] BYREF

  v7 = a3;
  v10 = (__int64 *)a5;
  v19 = 0;
  if ( !a3 || a3 > 0x7FFFFFF )
    return 3221225485LL;
  v20 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Address, 32LL * a3, 8u);
    v16 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = *v16;
    if ( a5 )
    {
      v20 = (LARGE_INTEGER *)&v22;
      if ( a5 >= MmUserProbeAddress )
        v10 = (__int64 *)MmUserProbeAddress;
      v22 = *v10;
    }
    v12 = v20;
  }
  else
  {
    v12 = v20;
    if ( a5 )
      v12 = (LARGE_INTEGER *)a5;
  }
  if ( (unsigned int)v7 > 0x10 )
  {
    v17 = 8 * v7;
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = (PLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                             NonPagedPoolNx,
                                             v17,
                                             0x20206F49u,
                                             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = (PLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x20206F49u);
    v13 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
      goto LABEL_8;
    LODWORD(v7) = 16;
  }
  v13 = (PLIST_ENTRY *)P;
LABEL_8:
  v14 = ObReferenceObjectByHandle(Handle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v14 = (unsigned int)IoRemoveIoCompletion(
                          (struct _KQUEUE *)Object,
                          (__int64)Address,
                          v13,
                          v7,
                          &v19,
                          PreviousMode,
                          v12,
                          a6);
    ObfDereferenceObject(Object);
  }
  if ( v13 != (PLIST_ENTRY *)P )
    ExFreePoolWithTag(v13, 0);
  if ( v14 >= 0 )
    *a4 = v19;
  return (unsigned int)v14;
}
