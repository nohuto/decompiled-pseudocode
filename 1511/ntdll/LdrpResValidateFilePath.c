/*
 * XREFs of LdrpResValidateFilePath @ 0x1800D57E8
 * Callers:
 *     LdrResSearchResource @ 0x1800394E0 (LdrResSearchResource.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlDetermineDosPathNameType_U @ 0x1800445D0 (RtlDetermineDosPathNameType_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x180078220 (RtlDosPathNameToNtPathName_U.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1800A5860 (ZwQueryAttributesFile.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResValidateFilePath(_WORD *a1)
{
  signed int AttributesFile; // edi
  int v3; // edx
  unsigned __int64 v4; // rbx
  int v6; // [rsp+20h] [rbp-A8h] BYREF
  const wchar_t *v7; // [rsp+28h] [rbp-A0h]
  int v8; // [rsp+30h] [rbp-98h] BYREF
  const wchar_t *v9; // [rsp+38h] [rbp-90h]
  int v10; // [rsp+40h] [rbp-88h]
  unsigned __int16 v11; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-78h]
  int v13; // [rsp+58h] [rbp-70h]
  __int64 v14; // [rsp+60h] [rbp-68h]
  unsigned __int16 *v15; // [rsp+68h] [rbp-60h]
  int v16; // [rsp+70h] [rbp-58h]
  __int128 v17; // [rsp+78h] [rbp-50h]
  char v18; // [rsp+A8h] [rbp-20h]

  v8 = 3932218;
  v9 = L"LdrpResValidateFilePath Enter";
  v6 = 3801144;
  v7 = L"LdrpResValidateFilePath Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v8);
  if ( !a1 || (v3 = RtlDetermineDosPathNameType_U(a1), v10 = v3, ((v3 - 1) & 0xFFFFFFFA) != 0) || v3 == 5 )
  {
    AttributesFile = -1073741811;
  }
  else if ( RtlDosPathNameToNtPathName_U((__int64)a1, &v11, 0LL, 0LL) )
  {
    v4 = v12;
    v13 = 48;
    v14 = 0LL;
    v16 = 64;
    v15 = &v11;
    v17 = 0LL;
    AttributesFile = ZwQueryAttributesFile();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    if ( AttributesFile >= 0 )
      AttributesFile = (v18 & 0x10) != 0 ? 0xC000000D : 0;
  }
  else
  {
    AttributesFile = -1073741766;
  }
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v6);
  return (unsigned int)AttributesFile;
}
