/*
 * XREFs of SepCopyClientTokenAndSetSilo @ 0x1406D0D40
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140410C10 (NtImpersonateAnonymousToken.c)
 *     SepCreateClientSecurityEx @ 0x140481870 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x1406D5084 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     SeCopyClientToken @ 0x1404D25E4 (SeCopyClientToken.c)
 *     SeSetSessionIdToken @ 0x140527E54 (SeSetSessionIdToken.c)
 *     SepSetServerSiloToken @ 0x1406D1220 (SepSetServerSiloToken.c)
 */

__int64 __fastcall SepCopyClientTokenAndSetSilo(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  __int64 result; // rax
  NTSTATUS v7; // ebx
  ULONG v8; // edx

  result = SeCopyClientToken(a1, a2, (__int64)a3, 0, 0LL, a4);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v8 = *(_DWORD *)PsGetServerSiloGlobals(a3);
    if ( v8 != -1 )
      v7 = SeSetSessionIdToken((PACCESS_TOKEN)*a4, v8);
    if ( v7 < 0 || (v7 = SepSetServerSiloToken(*a4, a3), v7 < 0) )
    {
      ObfDereferenceObject((PVOID)*a4);
      *a4 = 0LL;
    }
    return (unsigned int)v7;
  }
  return result;
}
