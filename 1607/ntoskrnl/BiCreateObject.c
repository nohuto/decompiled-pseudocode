/*
 * XREFs of BiCreateObject @ 0x1406D246C
 * Callers:
 *     BcdCreateObject @ 0x1406D20DC (BcdCreateObject.c)
 *     BiBindEfiEntryToBcdObject @ 0x1406D3A0C (BiBindEfiEntryToBcdObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlStringFromGUIDEx @ 0x1403F6D4C (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     ExUuidCreate @ 0x14051A810 (ExUuidCreate.c)
 *     BiCreateKey @ 0x14053DBE0 (BiCreateKey.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053E50C (BiCloseKey.c)
 *     BiIsObjectAliased @ 0x14053EC48 (BiIsObjectAliased.c)
 *     BiIsValidObject @ 0x1406D2730 (BiIsValidObject.c)
 *     BiSetObjectDescription @ 0x1406D27BC (BiSetObjectDescription.c)
 */

NTSTATUS __fastcall BiCreateObject(void *a1, UUID *a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  UUID *p_Uuid; // rdi
  __int64 v8; // rdx
  int v9; // ebx
  NTSTATUS result; // eax
  HANDLE v11; // rdi
  bool v12; // [rsp+30h] [rbp-50h] BYREF
  HANDLE v13; // [rsp+38h] [rbp-48h] BYREF
  HANDLE v14; // [rsp+40h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-38h] BYREF
  int v16; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING GuidString; // [rsp+58h] [rbp-28h] BYREF
  UUID Uuid; // [rsp+68h] [rbp-18h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  Handle = 0LL;
  *a5 = 0LL;
  p_Uuid = a2;
  GuidString.Buffer = 0LL;
  if ( !(unsigned __int8)BiIsValidObject(a3, a2, a4) )
    return -1073741637;
  if ( v8 )
  {
    if ( BiIsObjectAliased(p_Uuid, &v16) )
      return -1073741773;
  }
  else
  {
    result = ExUuidCreate(&Uuid);
    if ( result < 0 )
      return result;
    p_Uuid = &Uuid;
  }
  v9 = BiOpenKey(a1, L"Objects", 4u, &v13);
  if ( v9 >= 0 )
  {
    v9 = RtlStringFromGUIDEx(p_Uuid, &GuidString, 1u);
    if ( v9 >= 0 )
    {
      v9 = BiCreateKey(v13, GuidString.Buffer, 0xF003Fu, 0, &v14, &v12);
      RtlFreeAnsiString(&GuidString);
      v11 = v14;
      if ( v9 < 0 )
        goto LABEL_17;
      v9 = BiSetObjectDescription(v14, a3);
      if ( v9 < 0 )
        goto LABEL_17;
      v9 = BiCreateKey(v11, L"Elements", 0x20019u, 0, &Handle, &v12);
      if ( v9 >= 0 )
      {
        *a5 = v11;
        v9 = 0;
      }
      if ( Handle )
        BiCloseKey(Handle);
      if ( v9 < 0 )
      {
LABEL_17:
        if ( v11 )
          BiCloseKey(v11);
      }
    }
  }
  if ( v13 )
    BiCloseKey(v13);
  return v9;
}
