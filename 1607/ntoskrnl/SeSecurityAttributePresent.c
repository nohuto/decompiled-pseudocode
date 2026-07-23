/*
 * XREFs of SeSecurityAttributePresent @ 0x14000DE80
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x140219C8C (SepVerifyDesktopAppxPackageName.c)
 *     PsQueryProcessAttributesByToken @ 0x14040C014 (PsQueryProcessAttributesByToken.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     AuthzBasepEqualUnicodeString @ 0x14009ED84 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1400AAFC8 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall SeSecurityAttributePresent(__int64 a1, const UNICODE_STRING *a2)
{
  char v4; // bp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r14
  __int64 *v7; // rbx
  const UNICODE_STRING *v8; // rcx
  __int64 *v10; // rdi
  __int64 *v11; // r14
  unsigned __int8 v12; // bl

  v4 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    v4 = 1;
  }
  v6 = *(_QWORD *)(a1 + 776);
  v7 = *(__int64 **)(v6 + 8);
  if ( v7 == (__int64 *)(v6 + 8) )
  {
LABEL_8:
    v10 = (__int64 *)(v6 + 32);
    v11 = *(__int64 **)(v6 + 32);
    if ( v11 == v10 )
    {
LABEL_9:
      v12 = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v7 = v11 - 2;
      if ( (v11[5] & 1) == 0 )
      {
        if ( (unsigned __int8)AuthzBasepEqualUnicodeString(v7 + 4, a2) )
          break;
      }
      v11 = (__int64 *)*v11;
      if ( v11 == v10 )
        goto LABEL_9;
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = (const UNICODE_STRING *)(v7 + 4);
      if ( KeGetCurrentIrql() >= 2u
         ? AuthzBasepEqualUnicodeStringCaseSensitive(v8, a2)
         : RtlEqualUnicodeString(v8, a2, 1u) )
      {
        break;
      }
      v7 = (__int64 *)*v7;
      if ( v7 == (__int64 *)(v6 + 8) )
        goto LABEL_8;
    }
  }
  if ( !v7 )
    goto LABEL_9;
  v12 = 1;
LABEL_10:
  if ( v4 )
  {
    ExpReleaseResourceForThreadLite(*(_QWORD *)(a1 + 48), (ULONG_PTR)KeGetCurrentThread());
    KeLeaveCriticalRegion();
  }
  return v12;
}
