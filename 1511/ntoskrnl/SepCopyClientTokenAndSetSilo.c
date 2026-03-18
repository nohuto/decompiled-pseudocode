/*
 * XREFs of SepCopyClientTokenAndSetSilo @ 0x14064D8F4
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x1403BE658 (NtImpersonateAnonymousToken.c)
 *     SepCreateClientSecurityEx @ 0x14042C5D0 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x14065335C (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     SeSetSessionIdToken @ 0x1403C51A4 (SeSetSessionIdToken.c)
 *     SeCopyClientToken @ 0x140479434 (SeCopyClientToken.c)
 *     SepSetServerSiloToken @ 0x14064DBBC (SepSetServerSiloToken.c)
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
