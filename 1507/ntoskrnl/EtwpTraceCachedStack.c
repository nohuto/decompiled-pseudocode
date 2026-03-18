/*
 * XREFs of EtwpTraceCachedStack @ 0x140260A38
 * Callers:
 *     EtwpDereferenceStackEntry @ 0x1402608C0 (EtwpDereferenceStackEntry.c)
 *     EtwpStackRundown @ 0x14026091C (EtwpStackRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall EtwpTraceCachedStack(unsigned int a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int16 v3; // r10
  int v6; // edx
  __int64 v7; // rcx
  int v8; // eax
  __int64 *v10; // [rsp+30h] [rbp-A8h] BYREF
  int v11; // [rsp+38h] [rbp-A0h]
  _DWORD v12[33]; // [rsp+3Ch] [rbp-9Ch]
  __int64 v13; // [rsp+F0h] [rbp+18h] BYREF

  v13 = a3;
  v12[0] = 0;
  v10 = &v13;
  v3 = 1;
  v11 = 8;
  do
  {
    v6 = 32;
    if ( *(_DWORD *)(a3 + 32) < 0x20u )
      v6 = *(_DWORD *)(a3 + 32);
    v7 = 2LL * v3++;
    v12[2 * v7] = 0;
    (&v10)[v7] = (__int64 *)(a3 + 40);
    v12[2 * v7 - 1] = 8 * v6;
    a3 = *(_QWORD *)(a3 + 16);
  }
  while ( a3 );
  v8 = 4194306;
  if ( a2 != 6180 )
    v8 = 4195842;
  return EtwpLogKernelEvent((__int64)&v10, a1, v3, a2, v8);
}
