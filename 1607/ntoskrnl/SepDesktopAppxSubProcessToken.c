/*
 * XREFs of SepDesktopAppxSubProcessToken @ 0x14007BFB8
 * Callers:
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x14000C86C (RtlQueryPackageClaims.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14007C2E4 (AuthzBasepSetSecurityAttributesToken.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SepVerifyDesktopAppxImage @ 0x140219AD8 (SepVerifyDesktopAppxImage.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall SepDesktopAppxSubProcessToken(__int64 a1, __int64 a2, char a3, _BYTE *a4, _BYTE *a5)
{
  NTSTATUS PackageClaims; // eax
  int v10; // ebx
  KPROCESSOR_MODE PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  signed __int32 v17[8]; // [rsp+0h] [rbp-E1h] BYREF
  PSIZE_T AppIdSize; // [rsp+20h] [rbp-C1h]
  PGUID DynamicId; // [rsp+28h] [rbp-B9h]
  PPS_PKG_CLAIM PkgClaim; // [rsp+30h] [rbp-B1h]
  PULONG64 AttributesPresent; // [rsp+38h] [rbp-A9h]
  _BYTE v22[8]; // [rsp+40h] [rbp-A1h] BYREF
  _PS_PKG_CLAIM v23; // [rsp+48h] [rbp-99h] BYREF
  _DWORD v24[2]; // [rsp+50h] [rbp-91h] BYREF
  int *v25; // [rsp+58h] [rbp-89h]
  _DWORD v26[4]; // [rsp+60h] [rbp-81h] BYREF
  int v27; // [rsp+70h] [rbp-71h] BYREF
  const WCHAR *v28; // [rsp+78h] [rbp-69h]
  __int64 v29; // [rsp+80h] [rbp-61h]
  __int64 v30; // [rsp+88h] [rbp-59h]
  __int64 v31; // [rsp+90h] [rbp-51h]
  int v32; // [rsp+98h] [rbp-49h]
  const wchar_t *v33; // [rsp+A0h] [rbp-41h]
  __int64 v34; // [rsp+A8h] [rbp-39h]
  __int64 v35; // [rsp+B0h] [rbp-31h]
  __int64 v36; // [rsp+B8h] [rbp-29h]
  int v37; // [rsp+C0h] [rbp-21h]
  const wchar_t *v38; // [rsp+C8h] [rbp-19h]
  __int64 v39; // [rsp+D0h] [rbp-11h]
  __int64 v40; // [rsp+D8h] [rbp-9h]
  __int64 v41; // [rsp+E0h] [rbp-1h]

  v28 = L"WIN://SYSAPPID";
  AttributesPresent = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  *a4 = 0;
  v33 = L"WIN://PKG";
  v23 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v22[0] = 0;
  v38 = L"WIN://PKGHOSTID";
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  PkgClaim = &v23;
  DynamicId = 0LL;
  AppIdSize = 0LL;
  v27 = 1966108;
  v32 = 1310738;
  v37 = 2097182;
  *a5 = 0;
  PackageClaims = RtlQueryPackageClaims((HANDLE)a1, 0LL, 0LL, 0LL, AppIdSize, DynamicId, PkgClaim, AttributesPresent);
  v10 = PackageClaims;
  if ( PackageClaims >= 0 )
  {
    if ( (v23.Flags & 4) != 0 )
    {
      *a5 = 1;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( (a3 & 4) == 0 || !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        v10 = SepVerifyDesktopAppxImage(a2, a1, (v23.Flags & 0xFF0000) == 196608LL, v22);
        if ( v10 < 0 )
          goto LABEL_8;
        if ( !v22[0] )
        {
          LODWORD(v30) = 0;
          LOWORD(v29) = 3;
          LOWORD(v34) = 2;
          LOWORD(v39) = 2;
          LODWORD(v35) = 0;
          LODWORD(v40) = 0;
          v25 = &v27;
          CurrentThread = KeGetCurrentThread();
          v26[0] = 3;
          v26[1] = 3;
          v26[2] = 3;
          --CurrentThread->KernelApcDisable;
          v24[0] = 1;
          v24[1] = 3;
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
          _InterlockedOr(v17, 0);
          v10 = AuthzBasepSetSecurityAttributesToken(*(_QWORD *)(a1 + 776), v26, v24);
          *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v17, 0);
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
          *a4 = 1;
          *a5 = 0;
        }
      }
    }
  }
  else if ( PackageClaims == -1073741275 )
  {
    v10 = 0;
  }
  if ( v10 < 0 )
LABEL_8:
    *a5 = 0;
  return (unsigned int)v10;
}
