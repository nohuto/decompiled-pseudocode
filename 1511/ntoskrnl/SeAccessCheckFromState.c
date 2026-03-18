/*
 * XREFs of SeAccessCheckFromState @ 0x14009BC14
 * Callers:
 *     EtwpAccessCheckFromState @ 0x14046D4E8 (EtwpAccessCheckFromState.c)
 *     CmpCheckAdminAccess @ 0x1404974C8 (CmpCheckAdminAccess.c)
 * Callees:
 *     SeAccessCheckFromStateEx @ 0x14008A740 (SeAccessCheckFromStateEx.c)
 *     SepTokenFromAccessInformation @ 0x14009FFCC (SepTokenFromAccessInformation.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
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
  _BYTE v15[1168]; // [rsp+60h] [rbp-968h] BYREF
  _BYTE v16[1168]; // [rsp+4F0h] [rbp-4D8h] BYREF

  v12 = 0LL;
  memset(v16, 0, 1160);
  memset(v15, 0, 1160);
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
           (__int64)Privileges,
           (__int64)GenericMapping,
           AccessMode,
           (__int64)GrantedAccess,
           (__int64)AccessStatus);
}
