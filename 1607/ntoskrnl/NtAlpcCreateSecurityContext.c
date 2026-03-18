/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x14040BFE0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     AlpcpDeleteBlob @ 0x14040BDA8 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14040C274 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSecurityContext @ 0x14040D720 (AlpcpCreateSecurityContext.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcCreateSecurityContext(HANDLE Handle, int a2, __m128i *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v7; // rcx
  __m128i v8; // xmm2
  unsigned __int64 v9; // xmm2_8
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  NTSTATUS SecurityContext; // edi
  unsigned __int64 v14; // xmm2_8
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h]
  int v17; // [rsp+40h] [rbp-28h]
  __int64 v18; // [rsp+58h] [rbp-10h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    SecurityContext = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = (__int64)a3;
      if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
        v7 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + 23) = *(_BYTE *)(v7 + 23);
      v8 = *a3;
      v18 = a3[1].m128i_i64[0];
      v9 = _mm_srli_si128(v8, 8).m128i_u64[0];
      v10 = v9;
      if ( v9 )
      {
        v11 = v9;
        if ( v9 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v16 = *(_QWORD *)v11;
        v17 = *(_DWORD *)(v11 + 8);
      }
    }
    else
    {
      v14 = _mm_srli_si128(*a3, 8).m128i_u64[0];
      v10 = v14;
      if ( v14 )
      {
        v16 = *(_QWORD *)v14;
        v17 = *(_DWORD *)(v14 + 8);
      }
    }
    SecurityContext = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
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
        a3[1].m128i_i64[0] = *(_QWORD *)(BugCheckParameter2 + 8);
        AlpcpDereferenceBlobEx(BugCheckParameter2);
      }
      ObfDereferenceObject(Object);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SecurityContext;
}
