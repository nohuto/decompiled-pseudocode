/*
 * XREFs of LdrpResolveProcedureAddress @ 0x18007B5EC
 * Callers:
 *     LdrpResolveDelayloadAddress @ 0x18007B524 (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     LdrpReleaseDllPath @ 0x18001216C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121B8 (LdrpInitializeDllPath.c)
 *     LdrpLoadForwardedDll @ 0x180013300 (LdrpLoadForwardedDll.c)
 *     RtlGuardCheckImageBase @ 0x180030064 (RtlGuardCheckImageBase.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x180032370 (LdrpGetProcedureAddress.c)
 *     LdrpParseForwarderDescription @ 0x18007B844 (LdrpParseForwarderDescription.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpResolveProcedureAddress(__int64 a1, const char *a2, int a3, char a4, char **a5)
{
  unsigned int v5; // esi
  int v6; // r14d
  const char *v7; // rbx
  __int64 v9; // rdi
  int ProcedureAddress; // eax
  int v12; // ebx
  unsigned int v14; // eax
  char *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v19; // [rsp+38h] [rbp-99h] BYREF
  const char *v20; // [rsp+40h] [rbp-91h] BYREF
  STRING v21; // [rsp+48h] [rbp-89h] BYREF
  __int64 v22[3]; // [rsp+60h] [rbp-71h] BYREF
  int v23; // [rsp+78h] [rbp-59h]

  v5 = 0;
  v6 = a3;
  v20 = a2;
  v7 = a2;
  v18 = a3;
  v19 = a1;
  v9 = a1;
  LdrpInitializeDllPath(*(void **)(a1 + 80), 1LL, v22);
  while ( 1 )
  {
    ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(v9 + 48), v7, v6, a5);
    v12 = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v14 = v5++;
    if ( v14 >= 0x20 )
    {
      v12 = -1073741701;
      goto LABEL_4;
    }
    v12 = LdrpParseForwarderDescription(*a5, &v21, &v20, &v18);
    if ( v12 < 0 )
      goto LABEL_4;
    v23 = *(_DWORD *)(v9 + 272);
    v12 = LdrpLoadForwardedDll(&v21, (int)v22, a1, v9, 2, (__int64)&v19);
    if ( v12 < 0 )
      goto LABEL_4;
    v9 = v19;
    LdrpDereferenceModule(v19, v15, v16, v17);
    v7 = v20;
    v6 = v18;
  }
  if ( (a4 & 1) != 0 && ProcedureAddress >= 0 )
    RtlGuardCheckImageBase(*(PVOID *)(v9 + 48));
LABEL_4:
  LdrpReleaseDllPath((__int64)v22);
  return (unsigned int)v12;
}
