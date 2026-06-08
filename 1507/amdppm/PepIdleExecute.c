/*
 * XREFs of PepIdleExecute @ 0x1C0003E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepIdleExecute(__int64 *a1, unsigned int a2, int a3, unsigned int a4, int a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rcx
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( LOBYTE(a1[9 * a2 + 16]) )
  {
    ((void (__fastcall *)(__int64 *, _QWORD))a1[9 * a2 + 11])(&a1[9 * a2 + 12], a4);
    return 0LL;
  }
  else
  {
    v7 = *a1;
    v8[0] = 0;
    v9 = a6;
    v8[1] = a2;
    v8[2] = a3;
    v8[3] = a5;
    result = PoFxProcessorNotification(v7, 5LL, v8);
    if ( (int)result >= 0 && v8[0] < 0 )
      return v8[0];
  }
  return result;
}
