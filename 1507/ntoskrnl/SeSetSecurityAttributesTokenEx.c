/*
 * XREFs of SeSetSecurityAttributesTokenEx @ 0x14024FCD0
 * Callers:
 *     <none>
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14002BA68 (AuthzBasepSetSecurityAttributesToken.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SepInternalSetSecurityAttributesToken @ 0x14024F150 (SepInternalSetSecurityAttributesToken.c)
 *     SepSetSingletonEntry @ 0x14024FEF0 (SepSetSingletonEntry.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x1406D6F58 (SepGetProcUniqueLuidAndIndexFromToken.c)
 */

__int64 __fastcall SeSetSecurityAttributesTokenEx(
        void *a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        char a4,
        _DWORD *a5,
        __int64 a6,
        _BYTE *a7)
{
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v9; // rdi
  int ProcUniqueLuidAndIndexFromToken; // eax
  __int64 v11; // r8
  _DWORD *v12; // rdx
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  _DWORD *v15; // r9
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0LL;
  v19 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a4 && (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    if ( a2 )
    {
      return (unsigned int)-1073741790;
    }
    else
    {
      v7 = ObReferenceObjectByHandle(a1, 0x80u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
      if ( v7 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v9 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        ProcUniqueLuidAndIndexFromToken = SepGetProcUniqueLuidAndIndexFromToken(v9, &v19, &v18);
        v11 = a6;
        v12 = a5;
        if ( ProcUniqueLuidAndIndexFromToken >= 0 )
        {
          v7 = SepSetSingletonEntry(v19, a5, a6);
          if ( v7 >= 0 )
            *a7 = 1;
        }
        else
        {
          *a7 = 0;
          v7 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)v9 + 97), v12, v11);
        }
        ExReleaseResourceLite(*((PERESOURCE *)v9 + 6));
        v13 = KeGetCurrentThread();
        v14 = v13->KernelApcDisable + 1;
        v13->KernelApcDisable = v14;
        if ( !v14
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
          && !v13->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    }
  }
  else
  {
    v15 = a5;
    *a7 = 0;
    return (unsigned int)SepInternalSetSecurityAttributesToken(a1, a2, 1, v15, a6);
  }
  return (unsigned int)v7;
}
