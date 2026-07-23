/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x14047C548
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSecurityContext @ 0x14047C700 (AlpcpCreateSecurityContext.c)
 *     AlpcpDeleteBlob @ 0x14047CE68 (AlpcpDeleteBlob.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCreateSecurityContext(HANDLE PortHandle, ULONG Flags, PALPC_SECURITY_ATTR SecurityAttribute)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  _BYTE *v7; // rcx
  __m128i v8; // xmm2
  ULONG64 v9; // xmm2_8
  ULONG64 v10; // rbx
  ULONG64 v11; // rcx
  int SecurityContext; // edi
  unsigned __int64 v14; // xmm2_8
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h]
  int v17; // [rsp+40h] [rbp-28h]
  ALPC_HANDLE ContextHandle; // [rsp+58h] [rbp-10h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+20h]

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
      v8 = *(__m128i *)&SecurityAttribute->Flags;
      ContextHandle = SecurityAttribute->ContextHandle;
      v9 = _mm_srli_si128(v8, 8).m128i_u64[0];
      v10 = v9;
      if ( v9 )
      {
        v11 = v9;
        if ( v9 >= MmUserProbeAddress )
          v11 = MmUserProbeAddress;
        v16 = *(_QWORD *)v11;
        v17 = *(_DWORD *)(v11 + 8);
      }
    }
    else
    {
      v14 = _mm_srli_si128(*(__m128i *)&SecurityAttribute->Flags, 8).m128i_u64[0];
      v10 = v14;
      if ( v14 )
      {
        v16 = *(_QWORD *)v14;
        v17 = *(_DWORD *)(v14 + 8);
      }
    }
    SecurityContext = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( SecurityContext >= 0 )
    {
      if ( !v10 )
      {
        v16 = *(_QWORD *)((char *)Object + 260);
        v17 = *((_DWORD *)Object + 67);
      }
      SecurityContext = AlpcpCreateSecurityContext(Object);
      if ( SecurityContext >= 0 )
      {
        SecurityAttribute->ContextHandle = *(ALPC_HANDLE *)(BugCheckParameter2 + 8);
        AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
      }
      ObfDereferenceObject(Object);
    }
  }
  KeLeaveCriticalRegion();
  return SecurityContext;
}
