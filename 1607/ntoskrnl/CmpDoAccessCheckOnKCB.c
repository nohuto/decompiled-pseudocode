/*
 * XREFs of CmpDoAccessCheckOnKCB @ 0x140600B7C
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1404BC7F8 (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140405270 (SeCreateAccessState.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     CmpCheckKeyBodyAccess @ 0x140602034 (CmpCheckKeyBodyAccess.c)
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
