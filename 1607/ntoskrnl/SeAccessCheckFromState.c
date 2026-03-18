/*
 * XREFs of SeAccessCheckFromState @ 0x14000C510
 * Callers:
 *     EtwpAccessCheckFromState @ 0x14040801C (EtwpAccessCheckFromState.c)
 *     CmpCheckAdminAccess @ 0x140600994 (CmpCheckAdminAccess.c)
 * Callees:
 *     SepTokenFromAccessInformation @ 0x14000C610 (SepTokenFromAccessInformation.c)
 *     SeAccessCheckFromStateEx @ 0x1400613EC (SeAccessCheckFromStateEx.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
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
  int v12; // ebp
  _BYTE *v14; // r8
  _BYTE v16[1168]; // [rsp+50h] [rbp-968h] BYREF
  _BYTE v17[1168]; // [rsp+4E0h] [rbp-4D8h] BYREF

  v12 = (int)SecurityDescriptor;
  memset(v17, 0, sizeof(v17));
  memset(v16, 0, sizeof(v16));
  SepTokenFromAccessInformation(PrimaryTokenInformation, v17);
  LODWORD(v14) = 0;
  if ( ClientTokenInformation )
  {
    SepTokenFromAccessInformation(ClientTokenInformation, v16);
    v14 = v16;
  }
  return SeAccessCheckFromStateEx(
           v12,
           (unsigned int)v17,
           (_DWORD)v14,
           DesiredAccess,
           PreviouslyGrantedAccess,
           (__int64)Privileges,
           (__int64)GenericMapping,
           AccessMode,
           (__int64)GrantedAccess,
           (__int64)AccessStatus);
}
