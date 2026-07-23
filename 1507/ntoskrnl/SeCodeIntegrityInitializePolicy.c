/*
 * XREFs of SeCodeIntegrityInitializePolicy @ 0x1407E5E08
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017F6B0 (ZwQuerySystemInformation.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SepEnableUMCIBySIPolicy @ 0x1405C087C (SepEnableUMCIBySIPolicy.c)
 *     SepInitializeDebugOptions @ 0x1407E5EE4 (SepInitializeDebugOptions.c)
 */

__int64 __fastcall SeCodeIntegrityInitializePolicy(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+38h] [rbp-30h] BYREF
  _BYTE SystemInformation[24]; // [rsp+40h] [rbp-28h] BYREF

  if ( !SeILSigningPolicy
    && ZwQuerySystemInformation(SystemSecureBootPolicyInformation, SystemInformation, 0x18u, 0LL) >= 0
    && (SystemInformation[20] & 4) != 0 )
  {
    SeILSigningPolicy = 8;
  }
  v2 = SepEnableUMCIBySIPolicy();
  if ( v2 >= 0 )
  {
    SepInitializeDebugOptions();
    if ( qword_14032C180 )
    {
      v3 = *(_QWORD *)(a1 + 240);
      v4 = 0LL;
      if ( v3 )
        v4 = *(_QWORD *)(v3 + 2512);
      v2 = qword_14032C180(v4, qword_14036CFFC, (unsigned int)g_SiPolicyBlob, &v7, &v6);
      if ( qword_14036CFFC )
      {
        ExFreePoolWithTag(qword_14036CFFC, 0);
        qword_14036CFFC = 0LL;
        LODWORD(g_SiPolicyBlob) = 0;
      }
      if ( v2 >= 0 )
      {
        SeCiStateElements = v7;
        SeCiStateElementCount = v6;
      }
    }
  }
  return (unsigned int)v2;
}
