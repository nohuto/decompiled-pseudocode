/*
 * XREFs of CmpDoAccessCheckOnKCB @ 0x140600AC8
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1404D91F4 (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     SeDeleteAccessState @ 0x140405E08 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x1404063B0 (SeCreateAccessState.c)
 *     ObCreateObject @ 0x14047181C (ObCreateObject.c)
 *     CmpCheckKeyBodyAccess @ 0x140601F80 (CmpCheckKeyBodyAccess.c)
 */

char __fastcall CmpDoAccessCheckOnKCB(__int64 a1, __int64 a2, ACCESS_MASK a3, char a4)
{
  char v4; // si
  _QWORD *v8; // rdi
  char v9; // bl
  PVOID Object[2]; // [rsp+50h] [rbp-1C8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v11[5]; // [rsp+60h] [rbp-1B8h] BYREF
  _QWORD v12[28]; // [rsp+100h] [rbp-118h] BYREF

  v4 = 0;
  if ( (int)ObCreateObject(a4, CmKeyObjectType, 0LL, a4, 0, 88, 0, 0, Object) < 0 )
    return 0;
  v8 = Object[0];
  *((_QWORD *)Object[0] + 7) = 0LL;
  v8[8] = 0LL;
  *(_DWORD *)v8 = 1803104306;
  v8[1] = 0LL;
  *((_DWORD *)v8 + 12) = 0;
  v8[10] = v8 + 9;
  v8[9] = v8 + 9;
  if ( (int)SeCreateAccessState(v11, v12, a3, (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76)) >= 0 )
  {
    v8[1] = a1;
    v9 = CmpCheckKeyBodyAccess(v8, (__int64)Object);
    SeDeleteAccessState(v11);
    v8[1] = 0LL;
    v4 = v9;
  }
  ObfDereferenceObject(v8);
  return v4;
}
