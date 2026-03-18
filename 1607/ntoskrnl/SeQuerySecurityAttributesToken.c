/*
 * XREFs of SeQuerySecurityAttributesToken @ 0x14040EF20
 * Callers:
 *     RtlpQueryPackageIdentityAttributes @ 0x14000DAB8 (RtlpQueryPackageIdentityAttributes.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140219E60 (SepVerifyDesktopAppxPackageName.c)
 * Callees:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000E3E0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
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
  size_t Size; // [rsp+30h] [rbp-18h]

  if ( (_DWORD)a5 )
  {
    if ( a4 )
    {
LABEL_3:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
      LODWORD(Size) = a5;
      SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(a1, v11, a2, a3, 0, a4, Size, a6);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
      return SecurityAttributesToken;
    }
  }
  else if ( !a4 )
  {
    goto LABEL_3;
  }
  return 3221225485LL;
}
