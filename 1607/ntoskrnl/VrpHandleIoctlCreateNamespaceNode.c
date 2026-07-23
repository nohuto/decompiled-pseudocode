/*
 * XREFs of VrpHandleIoctlCreateNamespaceNode @ 0x140613440
 * Callers:
 *     IoctlDeviceDispatch @ 0x140612B08 (IoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x140091640 (PsGetPermanentSiloContext.c)
 *     PsGetJobSilo @ 0x14020F5C0 (PsGetJobSilo.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     VrpLockJobContextExclusive @ 0x140612FD8 (VrpLockJobContextExclusive.c)
 *     VrpUnlockJobContextExclusive @ 0x140613114 (VrpUnlockJobContextExclusive.c)
 *     VrpAddNamespaceNodeToList @ 0x1406143E4 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x1406146FC (VrpCreateNamespaceNode.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x140614980 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x140614A2C (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpHandleIoctlCreateNamespaceNode(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  PVOID v8; // rdi
  __int64 v9; // r15
  int v10; // r12d
  __int64 v11; // rsi
  int JobSilo; // ebx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // dx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  int v17; // esi
  unsigned __int64 v18; // rax
  int NamespaceNode; // eax
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  __int16 v22; // [rsp+48h] [rbp-28h] BYREF
  __int16 v23; // [rsp+4Ah] [rbp-26h]
  __int64 v24; // [rsp+50h] [rbp-20h]
  _WORD v25[4]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]
  PVOID Object; // [rsp+B8h] [rbp+48h] BYREF

  Object = 0LL;
  v21 = 0LL;
  v8 = 0LL;
  a5 = 0LL;
  v9 = 0LL;
  a6 = 0LL;
  v10 = 0;
  v11 = 0LL;
  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  v13 = *(_WORD *)(a1 + 8);
  if ( (v13 & 1) != 0 || (v14 = *(_WORD *)(a1 + 10), (v14 & 1) != 0) )
  {
    JobSilo = -1073741811;
    goto LABEL_21;
  }
  if ( !v13 )
    return (unsigned int)-1073741811;
  if ( !v14 )
    return (unsigned int)-1073741811;
  v15 = v13 + 16;
  v16 = v15 + v14;
  if ( v15 > v16 || a2 < v16 )
    return (unsigned int)-1073741811;
  JobSilo = ObReferenceObjectByHandleWithTag(*(HANDLE *)a1, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
  if ( JobSilo < 0 )
    goto LABEL_13;
  v17 = *(_DWORD *)(a1 + 12);
  v26 = a1 + 16;
  v18 = *(unsigned __int16 *)(a1 + 8);
  v25[1] = v18;
  v25[0] = v18;
  v24 = a1 + 2 * ((v18 >> 1) + 8);
  v23 = *(_WORD *)(a1 + 10);
  v22 = v23;
  if ( v17 && (v17 & 2) == 0 )
  {
    JobSilo = -1073741811;
LABEL_13:
    v8 = Object;
    goto LABEL_25;
  }
  v8 = Object;
  JobSilo = PsGetJobSilo((__int64)Object);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetPermanentSiloContext(a6, gVregSiloContextSlot, (unsigned __int64 *)&v21);
    if ( JobSilo >= 0 )
    {
      v9 = v21;
      VrpLockJobContextExclusive(v21);
      v10 = 1;
      NamespaceNode = VrpCreateNamespaceNode(v9, (unsigned int)v25, (unsigned int)&v22, v17, (__int64)&a5);
      v11 = a5;
      JobSilo = NamespaceNode;
      if ( NamespaceNode >= 0 )
      {
        JobSilo = VrpAddNamespaceNodeToList(v9, a5);
        if ( JobSilo >= 0 )
        {
          JobSilo = VrpCreateNamespaceNodePlaceholderKey(v11);
          if ( JobSilo >= 0 )
          {
            JobSilo = 0;
LABEL_24:
            VrpUnlockJobContextExclusive(v9);
            goto LABEL_25;
          }
        }
      }
LABEL_21:
      if ( v11 )
        VrpDestroyNamespaceNode(v9);
      if ( !v10 )
        goto LABEL_25;
      goto LABEL_24;
    }
  }
LABEL_25:
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x52566D43u);
  return (unsigned int)JobSilo;
}
