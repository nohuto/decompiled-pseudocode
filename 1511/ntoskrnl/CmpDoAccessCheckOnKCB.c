/*
 * XREFs of CmpDoAccessCheckOnKCB @ 0x1405E21C8
 * Callers:
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     CmpCheckKeyBodyAccess @ 0x1404033B0 (CmpCheckKeyBodyAccess.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     SeCreateAccessState @ 0x1404704A0 (SeCreateAccessState.c)
 */

BOOLEAN __fastcall CmpDoAccessCheckOnKCB(__int64 a1, GUID *a2, ACCESS_MASK a3, char a4)
{
  BOOLEAN v4; // si
  _QWORD *v10; // rdi
  BOOLEAN v11; // bl
  PVOID Object[2]; // [rsp+50h] [rbp-1C8h] BYREF
  struct _ACCESS_STATE v13; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v14[28]; // [rsp+100h] [rbp-118h] BYREF

  v4 = 0;
  if ( (int)ObCreateObject(a4, CmKeyObjectType, 0LL, a4, 0, 88, 0, 0, Object) < 0 )
    return 0;
  v10 = Object[0];
  *((_QWORD *)Object[0] + 7) = 0LL;
  v10[8] = 0LL;
  *(_DWORD *)v10 = 1803104306;
  v10[1] = 0LL;
  *((_DWORD *)v10 + 12) = 0;
  v10[10] = v10 + 9;
  v10[9] = v10 + 9;
  LODWORD(Object[0]) = SeCreateAccessState(&v13, v14, a3, (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76));
  if ( SLODWORD(Object[0]) >= 0 )
  {
    v10[1] = a1;
    v11 = CmpCheckKeyBodyAccess(v10, a2, &v13, a4, (PNTSTATUS)Object);
    SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&v13);
    v10[1] = 0LL;
    v4 = v11;
  }
  ObfDereferenceObject(v10);
  return v4;
}
