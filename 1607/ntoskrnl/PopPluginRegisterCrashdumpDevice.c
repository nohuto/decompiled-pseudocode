/*
 * XREFs of PopPluginRegisterCrashdumpDevice @ 0x140204674
 * Callers:
 *     PoFxRegisterCrashdumpDevice @ 0x140548DAC (PoFxRegisterCrashdumpDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPluginRegisterCrashdumpDevice(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v6[1] = a2;
  v6[0] = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(a1 + 96))(25LL, v6) && v6[0] )
    *(_QWORD *)(a3 + 560) = v6[0];
  else
    return (unsigned int)-1073741637;
  return v3;
}
