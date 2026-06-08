/*
 * XREFs of PepIdleExecute @ 0x1C0003A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepIdleExecute(__int64 *a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rcx
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  if ( LOBYTE(a1[9 * a2 + 16]) )
  {
    ((void (__fastcall *)(__int64 *))a1[9 * a2 + 11])(&a1[9 * a2 + 12]);
    return 0LL;
  }
  else
  {
    v6 = *a1;
    v7[0] = 0;
    v7[1] = a2;
    v7[2] = a3;
    v8 = a5;
    v7[3] = a4;
    result = PoFxProcessorNotification(v6, 5LL, v7);
    if ( (int)result >= 0 && v7[0] < 0 )
      return v7[0];
  }
  return result;
}
