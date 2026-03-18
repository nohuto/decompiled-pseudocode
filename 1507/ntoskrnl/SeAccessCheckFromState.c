/*
 * XREFs of SeAccessCheckFromState @ 0x1400CF390
 * Callers:
 *     EtwpAccessCheckFromState @ 0x1404D33A8 (EtwpAccessCheckFromState.c)
 *     CmpCheckAdminAccess @ 0x140658050 (CmpCheckAdminAccess.c)
 * Callees:
 *     SeAccessCheckFromStateEx @ 0x1400CD1B0 (SeAccessCheckFromStateEx.c)
 *     SepTokenFromAccessInformation @ 0x1400CF4B0 (SepTokenFromAccessInformation.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

BOOLEAN __stdcall SeAccessCheckFromState(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PTOKEN_ACCESS_INFORMATION PrimaryTokenInformation,
        PTOKEN_ACCESS_INFORMATION ClientTokenInformation,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  _BYTE *v12; // rdi
  _BYTE v15[1152]; // [rsp+60h] [rbp-948h] BYREF
  _BYTE v16[1152]; // [rsp+4E0h] [rbp-4C8h] BYREF

  v12 = 0LL;
  memset(v16, 0, sizeof(v16));
  memset(v15, 0, sizeof(v15));
  SepTokenFromAccessInformation(PrimaryTokenInformation, v16);
  if ( ClientTokenInformation )
  {
    SepTokenFromAccessInformation(ClientTokenInformation, v15);
    v12 = v15;
  }
  return SeAccessCheckFromStateEx(
           (__int64)SecurityDescriptor,
           (__int64)v16,
           (__int64)v12,
           DesiredAccess,
           PreviouslyGrantedAccess,
           Privileges,
           (__int64)GenericMapping,
           AccessMode,
           (int *)GrantedAccess,
           AccessStatus);
}
