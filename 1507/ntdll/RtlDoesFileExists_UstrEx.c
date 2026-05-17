/*
 * XREFs of RtlDoesFileExists_UstrEx @ 0x1800272A0
 * Callers:
 *     RtlDoesFileExists_UEx @ 0x180054E14 (RtlDoesFileExists_UEx.c)
 *     RtlDosSearchPath_Ustr @ 0x18005FCB0 (RtlDosSearchPath_Ustr.c)
 *     sxsisol_RespectDotLocal @ 0x1800C99DC (sxsisol_RespectDotLocal.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180025B80 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwQueryAttributesFile @ 0x180093CD0 (ZwQueryAttributesFile.c)
 */

bool __fastcall RtlDoesFileExists_UstrEx(__int128 *a1, char a2)
{
  char v2; // bl
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // edi
  __int128 v8; // [rsp+40h] [rbp-49h] BYREF
  __int64 v9; // [rsp+50h] [rbp-39h]
  HANDLE *v10; // [rsp+58h] [rbp-31h]
  __int128 v11; // [rsp+60h] [rbp-29h] BYREF
  int v12; // [rsp+70h] [rbp-19h] BYREF
  __int64 v13; // [rsp+78h] [rbp-11h]
  __int128 *v14; // [rsp+80h] [rbp-9h]
  int v15; // [rsp+88h] [rbp-1h]
  __int128 v16; // [rsp+90h] [rbp+7h]
  _BYTE v17[40]; // [rsp+A0h] [rbp+17h] BYREF

  v2 = 0;
  if ( (int)RtlDosPathNameToRelativeNtPathName(0, 1, a1, 0LL, (unsigned __int16 *)&v11, 0LL, 0LL, (__int64)&v8) < 0 )
    return 0;
  v4 = *((_QWORD *)&v11 + 1);
  if ( (_WORD)v8 )
  {
    v5 = v9;
    v11 = v8;
  }
  else
  {
    v5 = 0LL;
    v9 = 0LL;
  }
  v13 = v5;
  v12 = 48;
  v14 = &v11;
  v15 = 64;
  v16 = 0LL;
  v6 = ZwQueryAttributesFile(&v12, v17);
  if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF) == 1 )
  {
    NtClose(v10[1]);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v10);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v4);
  if ( v6 >= 0 )
    return 1;
  if ( v6 == -1073741757 || v6 == -1073741790 )
    return a2 != 0;
  return v2;
}
