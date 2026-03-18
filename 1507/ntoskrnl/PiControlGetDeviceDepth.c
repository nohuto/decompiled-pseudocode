/*
 * XREFs of PiControlGetDeviceDepth @ 0x1404E0CB0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404379BC (PiControlMakeUserModeCallersCopy.c)
 *     PiGetDeviceDepth @ 0x1404E0D40 (PiGetDeviceDepth.c)
 */

__int64 __fastcall PiControlGetDeviceDepth(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  __int64 result; // rax
  unsigned int DeviceDepth; // ebx
  unsigned __int16 v8; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 v9; // [rsp+32h] [rbp-16h]
  PVOID P; // [rsp+38h] [rbp-10h] BYREF

  v9 = *a2;
  v8 = v9;
  if ( (unsigned __int16)(v9 - 1) > 0x18Fu || (v9 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&P, *((void **)a2 + 1), v9, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    DeviceDepth = PiGetDeviceDepth(&v8, a2 + 8);
    if ( a4 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return DeviceDepth;
  }
  return result;
}
