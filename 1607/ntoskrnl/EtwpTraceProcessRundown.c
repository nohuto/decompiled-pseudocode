/*
 * XREFs of EtwpTraceProcessRundown @ 0x140499740
 * Callers:
 *     EtwpProcessEnumCallback @ 0x140499444 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     EtwpBuildProcessEvent @ 0x14045C730 (EtwpBuildProcessEvent.c)
 */

__int64 __fastcall EtwpTraceProcessRundown(struct _KPROCESS *a1, unsigned int a2, __int16 a3, __int64 a4)
{
  char v7; // r8
  __int64 v9; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+68h] [rbp-98h] BYREF
  PVOID v11; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  __int64 v13; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v15[40]; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR v16[52]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v17[18]; // [rsp+260h] [rbp+160h] BYREF

  v11 = *(PVOID *)(a4 + 16);
  WORD1(v10) = *(_WORD *)(a4 + 24);
  v7 = *(_BYTE *)(a4 + 97);
  LOWORD(v10) = 0;
  EtwpBuildProcessEvent(
    a1,
    a3,
    v7,
    (__int64)v15,
    &v13,
    (__int64)v17,
    (unsigned int *)&v9,
    v16,
    (PANSI_STRING)&UnicodeString,
    (unsigned __int16 *)&v10,
    &P);
  EtwpLogKernelEvent((__int64)v17, EtwpHostSiloState, a2, v9, a3, 5249029 - (a3 != 807));
  if ( v11 != *(PVOID *)(a4 + 16) )
    ExFreePoolWithTag(v11, 0);
  RtlFreeAnsiString(&UnicodeString);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
