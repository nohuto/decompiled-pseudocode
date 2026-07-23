/*
 * XREFs of PiControlGetDeviceDepth @ 0x1403F2940
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C1740 (PiControlFreeUserModeCallersBuffer.c)
 *     PiGetDeviceDepth @ 0x1403F29D4 (PiGetDeviceDepth.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404E3368 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiControlGetDeviceDepth(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  __int64 result; // rax
  unsigned int DeviceDepth; // ebx
  unsigned __int16 v9; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 v10; // [rsp+32h] [rbp-16h]
  void *v11; // [rsp+38h] [rbp-10h] BYREF

  v10 = *a2;
  v9 = v10;
  if ( (unsigned __int16)(v10 - 1) > 0x18Fu || (v10 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&v11, *((_QWORD *)a2 + 1), v10, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    DeviceDepth = PiGetDeviceDepth(&v9, a2 + 8);
    PiControlFreeUserModeCallersBuffer(a4, v11);
    return DeviceDepth;
  }
  return result;
}
