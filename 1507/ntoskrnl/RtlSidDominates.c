/*
 * XREFs of RtlSidDominates @ 0x14002D850
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14002B81C (SepMandatorySubProcessToken.c)
 *     SepValidLabelSubjectContext @ 0x14046DA40 (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x14046DB50 (SepAdjustPrivileges.c)
 *     SeTokenCanImpersonate @ 0x1404798B0 (SeTokenCanImpersonate.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     SeIsTokenAssignableToProcess @ 0x140545528 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 */

NTSTATUS __cdecl RtlSidDominates(PSID Sid1, PSID Sid2, PBOOLEAN Dominates)
{
  int v4; // r9d
  int v7; // eax
  BOOLEAN v8; // al
  unsigned __int8 v10; // al
  unsigned int v11; // edx
  unsigned __int8 v12; // al

  *Dominates = 0;
  v4 = *(_DWORD *)((char *)Sid1 + 2);
  if ( !v4 )
    v4 = *((unsigned __int16 *)Sid1 + 3) - 4096;
  if ( v4 )
    return -1073741811;
  v7 = *(_DWORD *)((char *)Sid2 + 2);
  if ( !v7 )
    v7 = *((unsigned __int16 *)Sid2 + 3) - 4096;
  if ( v7 )
    return -1073741811;
  v8 = 1;
  if ( *(_WORD *)Sid1 != *(_WORD *)Sid2 || memcmp(Sid1, Sid2, 4 * (unsigned int)*((unsigned __int8 *)Sid1 + 1) + 8) )
  {
    v10 = *((_BYTE *)Sid1 + 1);
    v11 = v10 ? *((_DWORD *)Sid1 + (unsigned int)v10 + 1) : 0;
    v12 = *((_BYTE *)Sid2 + 1);
    if ( v12 )
    {
      if ( v11 < *((_DWORD *)Sid2 + (unsigned int)v12 + 1) )
        v8 = 0;
    }
  }
  *Dominates = v8;
  return 0;
}
