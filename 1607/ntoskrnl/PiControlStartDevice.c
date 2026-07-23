/*
 * XREFs of PiControlStartDevice @ 0x14064ACD8
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C1740 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404E3368 (PiControlMakeUserModeCallersCopy.c)
 *     PiQueueDeviceRequest @ 0x14064B3D8 (PiQueueDeviceRequest.c)
 */

__int64 __fastcall PiControlStartDevice(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  int UserModeCallersCopy; // ebx
  int v7; // r8d
  unsigned __int16 v9; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 v10; // [rsp+32h] [rbp-16h]
  void *v11; // [rsp+38h] [rbp-10h] BYREF

  v4 = *a2;
  v10 = v4;
  v9 = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v10 & 1) != 0 )
    return 3221225485LL;
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v11, *((void **)a2 + 1), v4, 2u, a4, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    UserModeCallersCopy = PiQueueDeviceRequest((unsigned int)&v9, 16, v7, 1, 0LL);
    PiControlFreeUserModeCallersBuffer(a4, v11);
  }
  return (unsigned int)UserModeCallersCopy;
}
