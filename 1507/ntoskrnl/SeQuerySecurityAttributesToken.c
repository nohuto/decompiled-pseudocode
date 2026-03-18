/*
 * XREFs of SeQuerySecurityAttributesToken @ 0x1404829C4
 * Callers:
 *     RtlpQueryPackageIdentityAttributes @ 0x14001AEF0 (RtlpQueryPackageIdentityAttributes.c)
 * Callees:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140044E10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall SeQuerySecurityAttributesToken(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        size_t a5,
        _DWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  char v11; // dl
  unsigned int SecurityAttributesToken; // ebx
  struct _KTHREAD *v13; // rdx
  __int16 v14; // cx
  size_t Size; // [rsp+28h] [rbp-30h]

  if ( (_DWORD)a5 )
  {
    if ( a4 )
      goto LABEL_3;
    return 3221225485LL;
  }
  if ( a4 )
    return 3221225485LL;
LABEL_3:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  LODWORD(Size) = a5;
  SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(a1, v11, a2, a3, a4, Size, a6);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return SecurityAttributesToken;
}
