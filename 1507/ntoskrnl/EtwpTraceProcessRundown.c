/*
 * XREFs of EtwpTraceProcessRundown @ 0x14041C47C
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14041C13C (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     EtwpBuildProcessEvent @ 0x14050CB64 (EtwpBuildProcessEvent.c)
 */

__int64 __fastcall EtwpTraceProcessRundown(struct _KPROCESS *a1, unsigned int a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v8; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+68h] [rbp-98h] BYREF
  PVOID v10; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  __int64 v13; // [rsp+90h] [rbp-70h] BYREF
  __int64 v14[52]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v15[18]; // [rsp+260h] [rbp+160h] BYREF

  v10 = *(PVOID *)(a4 + 16);
  WORD1(v9) = *(_WORD *)(a4 + 24);
  LOWORD(v9) = 0;
  EtwpBuildProcessEvent(
    a1,
    (__int64)&v13,
    (__int64)v15,
    (__int64)&v8,
    (__int64)v14,
    (PANSI_STRING)&UnicodeString,
    (__int64)&v9,
    (__int64)&P);
  EtwpLogKernelEvent((__int64)v15, a2, v8, a3, 5249029 - (a3 != 807));
  if ( v10 != *(PVOID *)(a4 + 16) )
    ExFreePoolWithTag(v10, 0);
  RtlFreeAnsiString(&UnicodeString);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
