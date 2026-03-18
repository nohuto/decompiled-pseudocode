/*
 * XREFs of NtRemoveIoCompletionEx @ 0x1404D3D44
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveIoCompletion @ 0x14006A0E0 (IoRemoveIoCompletion.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E210 (ExAllocatePoolWithTagPriority.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ProbeForWrite @ 0x14044DAC0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtRemoveIoCompletionEx(
        HANDLE Handle,
        volatile void *Address,
        unsigned int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        BOOLEAN a6)
{
  __int64 v7; // rsi
  __int64 v10; // rbx
  KPROCESSOR_MODE PreviousMode; // r15
  LARGE_INTEGER *v12; // r14
  PLIST_ENTRY *v13; // rbx
  int v14; // edi
  __int64 v16; // rcx
  SIZE_T v17; // rdx
  PLIST_ENTRY *PoolWithTagPriority; // rax
  ULONG v19; // [rsp+44h] [rbp-F4h] BYREF
  LARGE_INTEGER *v20; // [rsp+48h] [rbp-F0h]
  PVOID Object; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-E0h] BYREF
  _BYTE P[128]; // [rsp+70h] [rbp-C8h] BYREF

  v7 = a3;
  v10 = a5;
  v19 = 0;
  if ( !a3 || a3 > 0x7FFFFFF )
    return 3221225485LL;
  v20 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Address, 32LL * a3, 8u);
    v16 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    if ( a5 )
    {
      v20 = (LARGE_INTEGER *)&v22;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v22 = *(_QWORD *)v10;
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
    v14 = IoRemoveIoCompletion((struct _KQUEUE *)Object, (__int64)Address, v13, v7, &v19, PreviousMode, v12, a6);
    ObfDereferenceObject(Object);
  }
  if ( v13 != (PLIST_ENTRY *)P )
    ExFreePoolWithTag(v13, 0);
  if ( v14 >= 0 )
    *a4 = v19;
  return (unsigned int)v14;
}
