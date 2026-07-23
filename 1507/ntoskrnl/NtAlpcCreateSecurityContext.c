/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x14047504C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpCreateSecurityContext @ 0x140475880 (AlpcpCreateSecurityContext.c)
 *     AlpcpDeleteBlob @ 0x140475E64 (AlpcpDeleteBlob.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCreateSecurityContext(HANDLE PortHandle, ULONG Flags, PALPC_SECURITY_ATTR SecurityAttribute)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r12
  _BYTE *v7; // rcx
  ULONG64 v8; // xmm2_8
  ULONG64 v9; // r14
  ULONG64 v10; // rcx
  int SecurityContext; // esi
  signed __int64 v12; // rdi
  bool v13; // cc
  ULONG_PTR v14; // rdi
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  unsigned __int64 v18; // xmm2_8
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h]
  int v21; // [rsp+40h] [rbp-38h]
  __m128i v22; // [rsp+48h] [rbp-30h]
  ALPC_HANDLE ContextHandle; // [rsp+58h] [rbp-20h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    SecurityContext = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)SecurityAttribute & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = SecurityAttribute;
      if ( (unsigned __int64)SecurityAttribute >= MmUserProbeAddress )
        v7 = (_BYTE *)MmUserProbeAddress;
      *v7 = *v7;
      v7[23] = v7[23];
      v22 = *(__m128i *)&SecurityAttribute->Flags;
      ContextHandle = SecurityAttribute->ContextHandle;
      v8 = _mm_srli_si128(v22, 8).m128i_u64[0];
      v9 = v8;
      if ( v8 )
      {
        v10 = v8;
        if ( v8 >= MmUserProbeAddress )
          v10 = MmUserProbeAddress;
        v20 = *(_QWORD *)v10;
        v21 = *(_DWORD *)(v10 + 8);
      }
    }
    else
    {
      v22 = *(__m128i *)&SecurityAttribute->Flags;
      ContextHandle = SecurityAttribute->ContextHandle;
      v18 = _mm_srli_si128(v22, 8).m128i_u64[0];
      v9 = v18;
      if ( v18 )
      {
        v20 = *(_QWORD *)v18;
        v21 = *(_DWORD *)(v18 + 8);
      }
    }
    SecurityContext = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( SecurityContext >= 0 )
    {
      if ( !v9 )
      {
        v20 = *(_QWORD *)((char *)Object + 260);
        v21 = *((_DWORD *)Object + 67);
      }
      SecurityContext = AlpcpCreateSecurityContext(Object);
      if ( SecurityContext >= 0 )
      {
        SecurityAttribute->ContextHandle = *(ALPC_HANDLE *)(BugCheckParameter2 + 8);
        v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0xFFFFFFFFFFFFFFFFuLL);
        v13 = v12 <= 1;
        v14 = v12 - 1;
        if ( v13 )
        {
          if ( v14 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, v14);
          AlpcpDestroyBlob(BugCheckParameter2);
        }
      }
      ObfDereferenceObject(Object);
    }
  }
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return SecurityContext;
}
