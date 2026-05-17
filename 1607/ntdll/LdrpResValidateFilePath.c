/*
 * XREFs of LdrpResValidateFilePath @ 0x1800DDB90
 * Callers:
 *     LdrResSearchResource @ 0x180039310 (LdrResSearchResource.c)
 * Callees:
 *     RtlDetermineDosPathNameType_U @ 0x1800095E0 (RtlDetermineDosPathNameType_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x180011710 (RtlDosPathNameToNtPathName_U.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1800A6BC0 (ZwQueryAttributesFile.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC874 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResValidateFilePath(_WORD *a1)
{
  signed int AttributesFile; // edi
  int v3; // edx
  unsigned __int64 v4; // rbx
  int v6; // [rsp+28h] [rbp-A0h] BYREF
  const wchar_t *v7; // [rsp+30h] [rbp-98h]
  int v8; // [rsp+38h] [rbp-90h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-88h]
  char v10; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp-78h]
  int v12; // [rsp+58h] [rbp-70h]
  __int64 v13; // [rsp+60h] [rbp-68h]
  char *v14; // [rsp+68h] [rbp-60h]
  int v15; // [rsp+70h] [rbp-58h]
  __int128 v16; // [rsp+78h] [rbp-50h]
  char v17; // [rsp+A8h] [rbp-20h]

  v6 = 3932218;
  v7 = L"LdrpResValidateFilePath Enter";
  v8 = 3801144;
  v9 = L"LdrpResValidateFilePath Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v6);
  if ( !a1 || (v3 = RtlDetermineDosPathNameType_U(a1), ((v3 - 1) & 0xFFFFFFFA) != 0) || v3 == 5 )
  {
    AttributesFile = -1073741811;
  }
  else if ( RtlDosPathNameToNtPathName_U((int)a1, (int)&v10, 0LL, 0LL) )
  {
    v4 = v11;
    v12 = 48;
    v13 = 0LL;
    v15 = 64;
    v14 = &v10;
    v16 = 0LL;
    AttributesFile = ZwQueryAttributesFile();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    if ( AttributesFile >= 0 )
      AttributesFile = (v17 & 0x10) != 0 ? 0xC000000D : 0;
  }
  else
  {
    AttributesFile = -1073741766;
  }
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v8);
  return (unsigned int)AttributesFile;
}
