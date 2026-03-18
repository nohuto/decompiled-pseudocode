/*
 * XREFs of PiControlStartDevice @ 0x140694E7C
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404379BC (PiControlMakeUserModeCallersCopy.c)
 *     PiQueueDeviceRequest @ 0x14058AF74 (PiQueueDeviceRequest.c)
 */

__int64 __fastcall PiControlStartDevice(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  int UserModeCallersCopy; // ebx
  __int64 v7; // r8
  unsigned __int16 v9; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int16 v10; // [rsp+32h] [rbp-16h]
  PVOID P; // [rsp+38h] [rbp-10h] BYREF

  v4 = *a2;
  v10 = v4;
  v9 = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v10 & 1) != 0 )
    return 3221225485LL;
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&P, *((void **)a2 + 1), v4, 2u, a4, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    UserModeCallersCopy = PiQueueDeviceRequest((__int64)&v9, 16LL, v7, 1LL, 0LL);
    if ( a4 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
  }
  return (unsigned int)UserModeCallersCopy;
}
