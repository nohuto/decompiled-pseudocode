/*
 * XREFs of KiInitializeDynamicProcessor @ 0x1403DD584
 * Callers:
 *     KiStartDynamicProcessor @ 0x14064F124 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeGenericCallDpc @ 0x14009EDE4 (KeGenericCallDpc.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiStartDpcThread @ 0x14054E428 (KiStartDpcThread.c)
 */

__int64 __fastcall KiInitializeDynamicProcessor(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp-18h] BYREF
  char v4; // [rsp+38h] [rbp-10h]

  v3 = a1;
  v4 = 0;
  result = KeGenericCallDpc((__int64)KiInitializeDynamicProcessorDpc, (__int64)&v3);
  if ( KeThreadDpcEnable )
  {
    result = KiStartDpcThread(a1);
    if ( (int)result < 0 )
      KeBugCheckEx(0x33u, (int)result, 0LL, 0LL, 0LL);
  }
  return result;
}
