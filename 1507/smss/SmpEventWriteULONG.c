/*
 * XREFs of SmpEventWriteULONG @ 0x140003EA8
 * Callers:
 *     SmpExecuteImage @ 0x140003C84 (SmpExecuteImage.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 */

void __fastcall SmpEventWriteULONG(__int64 a1, int a2)
{
  int *v2; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+28h] [rbp-20h]
  int v4; // [rsp+2Ch] [rbp-1Ch]
  int v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  if ( SmpTraceHandle )
  {
    if ( EtwEventEnabled(SmpTraceHandle, &SmssEvt_ExecuteImage_Stop) )
    {
      v4 = 0;
      v2 = &v5;
      v3 = 4;
      ((void (__fastcall *)(REGHANDLE, const EVENT_DESCRIPTOR *, __int64, int **))EtwEventWrite)(
        SmpTraceHandle,
        &SmssEvt_ExecuteImage_Stop,
        1LL,
        &v2);
    }
  }
}
