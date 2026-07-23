/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x1800658C0
 * Callers:
 *     RtlCheckSandboxedToken @ 0x180002800 (RtlCheckSandboxedToken.c)
 *     RtlCreateAndSetSD @ 0x180065340 (RtlCreateAndSetSD.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN SaclPresent,
        PACL Sacl,
        BOOLEAN SaclDefaulted)
{
  __int16 v5; // cx
  __int16 v6; // cx
  PACL v7; // rax
  __int16 v8; // cx
  __int16 v10; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1);
  if ( v5 >= 0 )
  {
    if ( SaclPresent )
    {
      *((_QWORD *)SecurityDescriptor + 3) = 0LL;
      v6 = v5 | 0x10;
      v7 = (PACL)*((_QWORD *)SecurityDescriptor + 3);
      if ( Sacl )
        v7 = Sacl;
      *((_QWORD *)SecurityDescriptor + 3) = v7;
      v8 = v6 & 0xFFDF;
      *((_WORD *)SecurityDescriptor + 1) = v8;
      if ( !SaclDefaulted )
        return 0;
      v10 = v8 | 0x20;
    }
    else
    {
      v10 = v5 & 0xFFEF;
    }
    *((_WORD *)SecurityDescriptor + 1) = v10;
    return 0;
  }
  return -1073741703;
}
