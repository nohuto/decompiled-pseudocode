/*
 * XREFs of CmpDoAccessCheckOnKCB @ 0x1406583CC
 * Callers:
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     CmpCheckKeyBodyAccess @ 0x1404C17F0 (CmpCheckKeyBodyAccess.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x1404CDC7C (SeCreateAccessState.c)
 */

BOOLEAN __fastcall CmpDoAccessCheckOnKCB(__int64 a1, GUID *a2, ACCESS_MASK a3, int a4)
{
  BOOLEAN v4; // si
  __int64 v7; // r14
  KPROCESSOR_MODE v8; // bl
  _QWORD *v10; // rdi
  BOOLEAN v11; // bl
  PVOID Object[2]; // [rsp+50h] [rbp-1C8h] BYREF
  struct _ACCESS_STATE v13; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v14[28]; // [rsp+100h] [rbp-118h] BYREF

  v4 = 0;
  v7 = a1;
  LOBYTE(a1) = a4;
  v8 = a4;
  if ( (int)ObCreateObject(a1, (int)CmKeyObjectType, 0, a4) < 0 )
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
    v10[1] = v7;
    v11 = CmpCheckKeyBodyAccess(v10, a2, &v13, v8, (PNTSTATUS)Object);
    SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&v13);
    v10[1] = 0LL;
    v4 = v11;
  }
  ObfDereferenceObject(v10);
  return v4;
}
