/*
 * XREFs of KiInitializeDynamicProcessor @ 0x1403B1090
 * Callers:
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400E2FD8 (KeGenericCallDpc.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiStartDpcThread @ 0x140521A80 (KiStartDpcThread.c)
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
