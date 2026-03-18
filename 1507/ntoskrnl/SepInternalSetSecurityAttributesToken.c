/*
 * XREFs of SepInternalSetSecurityAttributesToken @ 0x14024F150
 * Callers:
 *     SeSetSecurityAttributesTokenEx @ 0x14024FCD0 (SeSetSecurityAttributesTokenEx.c)
 *     SeSetSecurityAttributesToken @ 0x1406D1080 (SeSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14002BA68 (AuthzBasepSetSecurityAttributesToken.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SepInternalSetSecurityAttributesToken(void *a1, KPROCESSOR_MODE a2, char a3, _DWORD *a4, __int64 a5)
{
  int v7; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v9; // rsi
  _DWORD *v10; // rdx
  _DWORD *v11; // rbx
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  signed __int32 v15[12]; // [rsp+0h] [rbp-48h] BYREF
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  v7 = ObReferenceObjectByHandle(a1, 0x80u, (POBJECT_TYPE)SeTokenObjectType, a2, &Object, 0LL);
  if ( v7 >= 0 )
  {
    if ( a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v9 = (PERESOURCE *)Object;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Object + 6), 1u);
      _InterlockedOr(v15, 0);
      v10 = a4;
      v11 = Object;
      v7 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)Object + 97), v10, a5);
      if ( v7 >= 0 )
      {
        if ( a3 )
          v11[50] |= 0x20000u;
        *((_QWORD *)v11 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      }
      _InterlockedOr(v15, 0);
      ExReleaseResourceLite(v9[6]);
      v12 = KeGetCurrentThread();
      v13 = v12->KernelApcDisable + 1;
      v12->KernelApcDisable = v13;
      if ( !v13
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
        && !v12->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      v7 = -1073741811;
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return (unsigned int)v7;
}
