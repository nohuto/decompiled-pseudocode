/*
 * XREFs of CmpCheckCreateAccess @ 0x1404BBDE0
 * Callers:
 *     CmpCheckCreateAccessOnKcbStack @ 0x1400A8FFC (CmpCheckCreateAccessOnKcbStack.c)
 * Callees:
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     RtlIsSandboxedToken @ 0x1404118D0 (RtlIsSandboxedToken.c)
 */

BOOLEAN __fastcall CmpCheckCreateAccess(
        __int64 a1,
        void *a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        KPROCESSOR_MODE AccessMode,
        int a5,
        PNTSTATUS a6)
{
  PNTSTATUS v6; // rdi
  struct _SECURITY_SUBJECT_CONTEXT *v7; // rbp
  BOOLEAN v9; // bl
  ACCESS_MASK v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+64h] [rbp+Ch]

  v12 = HIDWORD(a1);
  v6 = a6;
  v7 = a3 + 1;
  v11 = 0;
  v9 = SeAccessCheck(
         a2,
         a3 + 1,
         0,
         a5 | 4,
         0,
         0LL,
         (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
         AccessMode,
         &v11,
         a6);
  if ( v9 && (a5 & 0x20) != 0 && RtlIsSandboxedToken(v7, AccessMode) )
  {
    v9 = 0;
    *v6 = -1073741790;
  }
  return v9;
}
