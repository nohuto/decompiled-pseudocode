/*
 * XREFs of SeCodeIntegrityInitializePolicy @ 0x140770B8C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140150CE0 (ZwQuerySystemInformation.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepIsUmciDisabled @ 0x14064D464 (SepIsUmciDisabled.c)
 */

__int64 __fastcall SeCodeIntegrityInitializePolicy(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx
  NTSTATUS v6; // eax
  int v7; // edi
  int v8; // [rsp+30h] [rbp-78h] BYREF
  __int64 v9; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v10[20]; // [rsp+40h] [rbp-68h] BYREF
  int v11; // [rsp+54h] [rbp-54h]
  _BYTE SystemInformation[24]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v13[32]; // [rsp+70h] [rbp-38h] BYREF

  if ( !SeILSigningPolicy
    && ZwQuerySystemInformation(SystemSecureBootPolicyInformation, SystemInformation, 0x18u, 0LL) >= 0
    && (SystemInformation[20] & 4) != 0 )
  {
    SeILSigningPolicy = 8;
  }
  v2 = 0;
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (SeCiDebugOptions & 1) == 0 )
    SeCiDebugOptions |= 2u;
  if ( SeILSigningPolicy )
  {
    if ( (v6 = ZwQuerySystemInformation(SystemSecureBootPolicyInformation, v10, 0x18u, 0LL), v7 = v6, v6 >= 0)
      && (v11 & 0x10) != 0
      || v6 == -2143092730 )
    {
      if ( SepIsUmciDisabled() )
        SeILSigningPolicy = 0;
      if ( (SeCiDebugOptions & 1) == 0 && (v7 < 0 || (v11 & 0x8000) == 0) )
        SeCiDebugOptions |= 4u;
    }
  }
  if ( !qword_1402DBE20 )
    goto LABEL_12;
  v3 = *(_QWORD *)(a1 + 240);
  v4 = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 2512);
  v2 = qword_1402DBE20(v4, qword_14031CC84, (unsigned int)g_SiPolicyBlob, &v9, &v8);
  if ( qword_14031CC84 )
  {
    ExFreePoolWithTag(qword_14031CC84, 0);
    qword_14031CC84 = 0LL;
    LODWORD(g_SiPolicyBlob) = 0;
  }
  if ( v2 >= 0 )
  {
    SeCiStateElements = v9;
    SeCiStateElementCount = v8;
LABEL_12:
    if ( !SeILSigningPolicy )
    {
      if ( ZwQuerySystemInformation(SystemCodeIntegrityPolicyInformation, v13, 0x20u, 0LL) >= 0 && (v13[0] & 0x10) != 0 )
        SeILSigningPolicy = 2;
      return 0;
    }
  }
  return (unsigned int)v2;
}
