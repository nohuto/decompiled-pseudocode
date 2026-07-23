/*
 * XREFs of LdrpResolveProcedureAddress @ 0x18007B5DC
 * Callers:
 *     LdrpResolveDelayloadAddress @ 0x18007B514 (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     LdrpReleaseDllPath @ 0x18001215C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121A8 (LdrpInitializeDllPath.c)
 *     LdrpLoadForwardedDll @ 0x1800132F0 (LdrpLoadForwardedDll.c)
 *     RtlGuardCheckImageBase @ 0x180030054 (RtlGuardCheckImageBase.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x180032360 (LdrpGetProcedureAddress.c)
 *     LdrpParseForwarderDescription @ 0x18007B834 (LdrpParseForwarderDescription.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpResolveProcedureAddress(const WCHAR **a1, const char *a2, int a3, char a4, char **a5)
{
  unsigned int v5; // esi
  int v6; // r14d
  const char *v7; // rbx
  _QWORD *v9; // rdi
  int ProcedureAddress; // eax
  int v12; // ebx
  unsigned int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-B1h]
  int v16; // [rsp+30h] [rbp-A1h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-99h] BYREF
  const char *v18; // [rsp+40h] [rbp-91h] BYREF
  ANSI_STRING v19; // [rsp+48h] [rbp-89h] BYREF
  const WCHAR *v20[3]; // [rsp+60h] [rbp-71h] BYREF
  int v21; // [rsp+78h] [rbp-59h]

  v5 = 0;
  v6 = a3;
  v18 = a2;
  v7 = a2;
  v16 = a3;
  BaseAddress = a1;
  v9 = a1;
  LdrpInitializeDllPath(a1[10], (const WCHAR *)1, v20);
  while ( 1 )
  {
    ProcedureAddress = LdrpGetProcedureAddress(v9[6], v7, v6, a5);
    v12 = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v14 = v5++;
    if ( v14 >= 0x20 )
    {
      v12 = -1073741701;
      goto LABEL_4;
    }
    v12 = LdrpParseForwarderDescription(*a5, &v19, &v18, &v16);
    if ( v12 < 0 )
      goto LABEL_4;
    v21 = *((_DWORD *)v9 + 68);
    LODWORD(v15) = 2;
    v12 = LdrpLoadForwardedDll(&v19, (__int64)v20, (__int64)a1, (__int64)v9, v15, (__int64)&BaseAddress);
    if ( v12 < 0 )
      goto LABEL_4;
    v9 = BaseAddress;
    LdrpDereferenceModule((char *)BaseAddress);
    v7 = v18;
    v6 = v16;
  }
  if ( (a4 & 1) != 0 && ProcedureAddress >= 0 )
    RtlGuardCheckImageBase((PVOID)v9[6]);
LABEL_4:
  LdrpReleaseDllPath((__int64)v20);
  return (unsigned int)v12;
}
