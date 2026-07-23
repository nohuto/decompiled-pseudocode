/*
 * XREFs of EtwpTraceCachedStack @ 0x14022AF30
 * Callers:
 *     EtwpDereferenceStackEntry @ 0x14022ADF0 (EtwpDereferenceStackEntry.c)
 *     EtwpStackRundown @ 0x14022AE4C (EtwpStackRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceCachedStack(unsigned int a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int16 v3; // r9
  int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 *v9; // [rsp+30h] [rbp-A8h] BYREF
  int v10; // [rsp+38h] [rbp-A0h]
  _DWORD v11[33]; // [rsp+3Ch] [rbp-9Ch]
  __int64 v12; // [rsp+F0h] [rbp+18h] BYREF

  v12 = a3;
  v11[0] = 0;
  v9 = &v12;
  v3 = 1;
  v10 = 8;
  do
  {
    v6 = 32;
    if ( *(_DWORD *)(a3 + 32) < 0x20u )
      v6 = *(_DWORD *)(a3 + 32);
    v7 = 2LL * v3++;
    v11[2 * v7] = 0;
    (&v9)[v7] = (__int64 *)(a3 + 40);
    v11[2 * v7 - 1] = 8 * v6;
    a3 = *(_QWORD *)(a3 + 16);
  }
  while ( a3 );
  v8 = 4194306;
  if ( a2 != 6180 )
    v8 = 4195842;
  EtwpLogKernelEvent((__int64)&v9, EtwpHostSiloState, a1, v3, a2, v8);
}
