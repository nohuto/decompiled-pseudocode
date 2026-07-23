/*
 * XREFs of VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14061318C
 * Callers:
 *     IoctlDeviceDispatch @ 0x140612B08 (IoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x140091640 (PsGetPermanentSiloContext.c)
 *     PsGetJobSilo @ 0x14020F5C0 (PsGetJobSilo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     VrpLockJobContextExclusive @ 0x140612FD8 (VrpLockJobContextExclusive.c)
 *     VrpUnlockJobContextExclusive @ 0x140613114 (VrpUnlockJobContextExclusive.c)
 *     VrpAddNamespaceNodeToList @ 0x1406143E4 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x1406146FC (VrpCreateNamespaceNode.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x140614980 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x140614A2C (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpHandleIoctlCreateMultipleNamespaceNodes(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        PVOID Object,
        __int64 a6)
{
  unsigned int v6; // r15d
  _QWORD *v8; // rbx
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  int v11; // r13d
  int JobSilo; // edi
  _QWORD *v13; // rsi
  int PermanentSiloContext; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int16 v17; // cx
  unsigned __int64 v18; // r9
  unsigned __int16 v19; // dx
  int v20; // edi
  _QWORD *PoolWithTag; // r15
  unsigned int v22; // ecx
  _QWORD *i; // rsi
  _QWORD *v24; // rsi
  bool v25; // zf
  _WORD v27[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h]
  _WORD v29[4]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v30; // [rsp+58h] [rbp-8h]
  __int64 v32; // [rsp+B8h] [rbp+58h] BYREF

  v6 = a2;
  Object = 0LL;
  v8 = 0LL;
  v32 = 0LL;
  v9 = 0LL;
  a6 = 0LL;
  v10 = 12LL;
  v11 = 0;
  if ( a2 >= 0xC )
  {
    ObReferenceObjectByHandleWithTag(*(HANDLE *)a1, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo < 0 )
      goto LABEL_34;
    PermanentSiloContext = PsGetPermanentSiloContext(a6, gVregSiloContextSlot, (unsigned __int64 *)&v32);
    v9 = v32;
    JobSilo = PermanentSiloContext;
    if ( PermanentSiloContext < 0 )
      goto LABEL_34;
    VrpLockJobContextExclusive(v32);
    JobSilo = 0;
    LODWORD(v32) = 0;
    v11 = 1;
    if ( *(_DWORD *)(a1 + 8) )
    {
      while ( 1 )
      {
        v15 = v10 + 12;
        a6 = 0LL;
        v16 = v10 + a1;
        if ( v10 >= v10 + 12 )
          goto LABEL_22;
        if ( v6 < v15 )
          goto LABEL_22;
        v17 = *(_WORD *)(v16 + 4);
        if ( (v17 & 1) != 0 )
          goto LABEL_22;
        if ( !v17 )
          goto LABEL_22;
        v18 = v17 + v15;
        if ( v15 > v18 )
          goto LABEL_22;
        v19 = *(_WORD *)(v16 + 6);
        if ( (v19 & 1) != 0 )
          goto LABEL_22;
        if ( !v19 )
          goto LABEL_22;
        v10 = v18 + v19;
        if ( v18 > v10
          || v6 < v10
          || (v20 = *(_DWORD *)(v16 + 8),
              v30 = v16 + 12,
              v29[1] = v17,
              v29[0] = v17,
              v27[1] = v19,
              v27[0] = v19,
              v28 = v16 + 2 * (((unsigned __int64)v17 >> 1) + 6),
              v20)
          && (v20 & 2) == 0 )
        {
LABEL_22:
          JobSilo = -1073741811;
          goto LABEL_34;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x67655256u);
        if ( !PoolWithTag )
        {
          JobSilo = -1073741670;
          goto LABEL_34;
        }
        PoolWithTag[1] = 0LL;
        *PoolWithTag = v8;
        v8 = PoolWithTag;
        JobSilo = VrpCreateNamespaceNode(v9, (unsigned int)v29, (unsigned int)v27, v20, (__int64)&a6);
        if ( JobSilo < 0 )
          goto LABEL_34;
        JobSilo = 0;
        v22 = v32 + 1;
        PoolWithTag[1] = a6;
        LODWORD(v32) = v22;
        if ( v22 >= *(_DWORD *)(a1 + 8) )
          break;
        v6 = a2;
      }
    }
    for ( i = v8; i; JobSilo = 0 )
    {
      JobSilo = VrpAddNamespaceNodeToList(v9, i[1]);
      if ( JobSilo < 0 )
        goto LABEL_34;
      i = (_QWORD *)*i;
    }
    v24 = v8;
    v25 = v8 == 0LL;
    if ( !v8 )
      goto LABEL_35;
    do
    {
      JobSilo = VrpCreateNamespaceNodePlaceholderKey(v24[1]);
      if ( JobSilo < 0 )
        break;
      v24 = (_QWORD *)*v24;
      JobSilo = 0;
    }
    while ( v24 );
    goto LABEL_34;
  }
  JobSilo = -1073741811;
  v13 = 0LL;
  while ( v13 )
  {
    if ( JobSilo < 0 && v13[1] )
      VrpDestroyNamespaceNode(v9);
    ExFreePoolWithTag(v13, 0x67655256u);
LABEL_34:
    v25 = v8 == 0LL;
LABEL_35:
    v13 = v8;
    if ( !v25 )
      v8 = (_QWORD *)*v8;
  }
  if ( v11 )
    VrpUnlockJobContextExclusive(v9);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
