/*
 * XREFs of LdrpResolveProcedureAddress @ 0x180016890
 * Callers:
 *     LdrpResolveDelayloadAddress @ 0x180016A40 (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     LdrpGetProcedureAddress @ 0x180015BD0 (LdrpGetProcedureAddress.c)
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x1800169DC (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180035A90 (RtlReleasePath.c)
 *     LdrpParseForwarderDescription @ 0x18006DE40 (LdrpParseForwarderDescription.c)
 *     RtlGuardCheckImageBase @ 0x18006F6E4 (RtlGuardCheckImageBase.c)
 *     LdrpLoadForwardedDll @ 0x18007A1FC (LdrpLoadForwardedDll.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpResolveProcedureAddress(_QWORD *a1, const char *a2, int a3, char a4, char **a5)
{
  unsigned int v5; // esi
  int v6; // r14d
  const char *v7; // rbx
  int v8; // r13d
  _QWORD *v9; // rdi
  int ProcedureAddress; // eax
  int ForwardedDll; // ebx
  unsigned int v14; // eax
  int v15; // [rsp+30h] [rbp-A1h] BYREF
  const char *v16; // [rsp+38h] [rbp-99h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-91h] BYREF
  _BYTE v18[24]; // [rsp+48h] [rbp-89h] BYREF
  PWSTR Path[3]; // [rsp+60h] [rbp-71h] BYREF
  int v20; // [rsp+78h] [rbp-59h]
  char v21; // [rsp+DCh] [rbp+Bh]

  v5 = 0;
  v6 = a3;
  v16 = a2;
  v7 = a2;
  v15 = a3;
  v8 = (int)a1;
  BaseAddress = a1;
  v9 = a1;
  LdrpInitializeDllPath(a1[10], 1LL, Path);
  while ( 1 )
  {
    ProcedureAddress = LdrpGetProcedureAddress(v9[6], v7, v6, a5);
    ForwardedDll = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v14 = v5++;
    if ( v14 >= 0x20 )
    {
      ForwardedDll = -1073741701;
      goto LABEL_4;
    }
    ForwardedDll = LdrpParseForwarderDescription(*a5, v18, &v16, &v15);
    if ( ForwardedDll < 0 )
      goto LABEL_4;
    v20 = *((_DWORD *)v9 + 68);
    ForwardedDll = LdrpLoadForwardedDll((unsigned int)v18, (unsigned int)Path, v8, (_DWORD)v9, 2, (__int64)&BaseAddress);
    if ( ForwardedDll < 0 )
      goto LABEL_4;
    v9 = BaseAddress;
    LdrpDereferenceModule((char *)BaseAddress);
    v7 = v16;
    v6 = v15;
  }
  if ( (a4 & 1) != 0 && ProcedureAddress >= 0 )
    RtlGuardCheckImageBase(v9[6]);
LABEL_4:
  if ( v21 )
    RtlReleasePath(Path[0]);
  return (unsigned int)ForwardedDll;
}
