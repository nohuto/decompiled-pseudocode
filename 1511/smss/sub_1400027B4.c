/*
 * XREFs of sub_1400027B4 @ 0x1400027B4
 * Callers:
 *     sub_140002540 @ 0x140002540 (sub_140002540.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

void __fastcall sub_1400027B4(__int64 a1, int a2)
{
  int *v2; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+28h] [rbp-20h]
  int v4; // [rsp+2Ch] [rbp-1Ch]
  int v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  if ( RegHandle )
  {
    if ( EtwEventEnabled(RegHandle, &EventDescriptor) )
    {
      v4 = 0;
      v2 = &v5;
      v3 = 4;
      ((void (__fastcall *)(REGHANDLE, const EVENT_DESCRIPTOR *, __int64, int **))EtwEventWrite)(
        RegHandle,
        &EventDescriptor,
        1LL,
        &v2);
    }
  }
}
