/*
 * XREFs of SeSetSecurityAttributesTokenEx @ 0x140200DEC
 * Callers:
 *     <none>
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400059B0 (AuthzBasepSetSecurityAttributesToken.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140200254 (SepInternalSetSecurityAttributesToken.c)
 *     SepSetSingletonEntry @ 0x140201014 (SepSetSingletonEntry.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x1406550E0 (SepGetProcUniqueLuidAndIndexFromToken.c)
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
  _DWORD *v13; // r9
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0LL;
  v17 = 0;
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
        ProcUniqueLuidAndIndexFromToken = SepGetProcUniqueLuidAndIndexFromToken(v9, &v17, &v16);
        v11 = a6;
        v12 = a5;
        if ( ProcUniqueLuidAndIndexFromToken >= 0 )
        {
          v7 = SepSetSingletonEntry(v17, a5, a6);
          if ( v7 >= 0 )
            *a7 = 1;
        }
        else
        {
          *a7 = 0;
          v7 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)v9 + 97), v12, v11);
        }
        ExReleaseResourceLite(*((PERESOURCE *)v9 + 6));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    }
  }
  else
  {
    v13 = a5;
    *a7 = 0;
    return (unsigned int)SepInternalSetSecurityAttributesToken(a1, a2, 1, v13, a6);
  }
  return (unsigned int)v7;
}
