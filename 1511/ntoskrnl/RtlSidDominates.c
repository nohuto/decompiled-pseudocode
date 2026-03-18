/*
 * XREFs of RtlSidDominates @ 0x140004D80
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140092DB0 (SepMandatorySubProcessToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1403C2698 (SeIsTokenAssignableToProcess.c)
 *     SepValidLabelSubjectContext @ 0x1403C2800 (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x1403C2C94 (SepAdjustPrivileges.c)
 *     SeTokenCanImpersonate @ 0x140426A30 (SeTokenCanImpersonate.c)
 *     RtlpNewSecurityObject @ 0x14042F920 (RtlpNewSecurityObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 */

__int64 __fastcall RtlSidDominates(char *Buf1, char *Buf2, bool *a3)
{
  int v4; // r9d
  int v7; // eax
  bool v8; // al
  unsigned __int8 v10; // al
  unsigned int v11; // edx
  unsigned __int8 v12; // al

  *a3 = 0;
  v4 = *(_DWORD *)(Buf1 + 2);
  if ( !v4 )
    v4 = *((unsigned __int16 *)Buf1 + 3) - 4096;
  if ( v4 )
    return 3221225485LL;
  v7 = *(_DWORD *)(Buf2 + 2);
  if ( !v7 )
    v7 = *((unsigned __int16 *)Buf2 + 3) - 4096;
  if ( v7 )
    return 3221225485LL;
  v8 = 1;
  if ( *(_WORD *)Buf1 != *(_WORD *)Buf2 || memcmp(Buf1, Buf2, 4 * (unsigned int)(unsigned __int8)Buf1[1] + 8) )
  {
    v10 = Buf1[1];
    v11 = v10 ? *(_DWORD *)&Buf1[4 * v10 + 4] : 0;
    v12 = Buf2[1];
    if ( v12 )
    {
      if ( v11 < *(_DWORD *)&Buf2[4 * v12 + 4] )
        v8 = 0;
    }
  }
  *a3 = v8;
  return 0LL;
}
