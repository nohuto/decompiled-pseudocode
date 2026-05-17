/*
 * XREFs of RtlDoesFileExists_UstrEx @ 0x180018498
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x1800185F0 (RtlDosSearchPath_Ustr.c)
 *     RtlDoesFileExists_UEx @ 0x18003FE78 (RtlDoesFileExists_UEx.c)
 *     sxsisol_RespectDotLocal @ 0x1800D24BC (sxsisol_RespectDotLocal.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180016A90 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwQueryAttributesFile @ 0x1800A5860 (ZwQueryAttributesFile.c)
 */

bool __fastcall RtlDoesFileExists_UstrEx(__m128i *a1, char a2)
{
  char v2; // bl
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // edi
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
  v5 = *((_QWORD *)&v11 + 1);
  if ( (_WORD)v8 )
  {
    v6 = v9;
    v11 = v8;
  }
  else
  {
    v6 = 0LL;
    v9 = 0LL;
  }
  v13 = v6;
  v12 = 48;
  v14 = &v11;
  v15 = 64;
  v16 = 0LL;
  v7 = ZwQueryAttributesFile(&v12, v17);
  if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF) == 1 )
  {
    NtClose(v10[1]);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v10);
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
  if ( v7 >= 0 )
    return 1;
  if ( v7 == -1073741757 || v7 == -1073741790 )
    return a2 != 0;
  return v2;
}
