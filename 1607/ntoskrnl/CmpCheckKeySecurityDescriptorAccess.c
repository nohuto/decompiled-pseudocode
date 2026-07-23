/*
 * XREFs of CmpCheckKeySecurityDescriptorAccess @ 0x1401B4C94
 * Callers:
 *     CmpCheckKcbStackAccess @ 0x1401B4C64 (CmpCheckKcbStackAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     SeCreateAccessStateEx @ 0x1404B6E3C (SeCreateAccessStateEx.c)
 */

__int64 __fastcall CmpCheckKeySecurityDescriptorAccess(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        KPROCESSOR_MODE a2,
        ACCESS_MASK a3)
{
  signed int AccessState; // ebx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-1A8h] BYREF
  NTSTATUS AccessStatus[3]; // [rsp+54h] [rbp-1A4h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v10[5]; // [rsp+60h] [rbp-198h] BYREF
  _BYTE v11[224]; // [rsp+100h] [rbp-F8h] BYREF

  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  AccessState = SeCreateAccessStateEx(
                  (unsigned int)KeGetCurrentThread(),
                  KeGetCurrentThread()->Process,
                  (unsigned int)v10,
                  (unsigned int)v11,
                  a3,
                  (__int64)CmKeyObjectType + 76);
  if ( AccessState >= 0 )
  {
    GrantedAccess = 0;
    AccessState = SeAccessCheck(
                    SecurityDescriptor,
                    &v10[1],
                    0,
                    a3,
                    0,
                    0LL,
                    (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                    a2,
                    &GrantedAccess,
                    AccessStatus) == 0
                ? 0xC0000022
                : 0;
    SeDeleteAccessState(v10);
  }
  return (unsigned int)AccessState;
}
