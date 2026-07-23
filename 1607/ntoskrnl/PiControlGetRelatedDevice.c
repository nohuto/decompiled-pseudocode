/*
 * XREFs of PiControlGetRelatedDevice @ 0x1403F26B4
 * Callers:
 *     <none>
 * Callees:
 *     PiControlAllocateBufferForUserModeCaller @ 0x1400093B8 (PiControlAllocateBufferForUserModeCaller.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C1740 (PiControlFreeUserModeCallersBuffer.c)
 *     PiGetRelatedDevice @ 0x1403F27F4 (PiGetRelatedDevice.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404E3368 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiControlGetRelatedDevice(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  __int64 v6; // r9
  int v7; // edx
  unsigned int v8; // edx
  int UserModeCallersCopy; // edi
  int v10; // eax
  char v12; // [rsp+20h] [rbp-30h]
  int v13; // [rsp+20h] [rbp-30h]
  void *v14; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 v15; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int16 v16; // [rsp+3Ah] [rbp-16h]
  void *v17; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+28h] BYREF

  v16 = *a2;
  v15 = v16;
  if ( (unsigned __int16)(v16 - 1) > 0x18Fu || (v16 & 1) != 0 )
    return 3221225485LL;
  v14 = 0LL;
  v17 = 0LL;
  v6 = *((_QWORD *)a2 + 3);
  if ( v6 && (v7 = *((_DWORD *)a2 + 8)) != 0 )
    v8 = 2 * v7;
  else
    v8 = 0;
  v18 = v8;
  UserModeCallersCopy = PiControlAllocateBufferForUserModeCaller(&v14, v8, a4, v6);
  if ( UserModeCallersCopy >= 0 )
  {
    v12 = a4;
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v17, *((_QWORD *)a2 + 1), v15, 2LL, v12, 1);
    if ( UserModeCallersCopy >= 0 )
    {
      UserModeCallersCopy = PiGetRelatedDevice(&v15, v14, &v18, *((unsigned int *)a2 + 4));
      if ( v14 )
      {
        LOBYTE(v13) = a4;
        v10 = PiControlMakeUserModeCallersCopy(a2 + 12, v14, (unsigned int)(2 * *((_DWORD *)a2 + 8)), 2LL, v13, 0);
        if ( v10 < 0 )
          UserModeCallersCopy = v10;
      }
      *((_DWORD *)a2 + 8) = v18 >> 1;
    }
  }
  PiControlFreeUserModeCallersBuffer(a4, v17);
  PiControlFreeUserModeCallersBuffer(a4, v14);
  return (unsigned int)UserModeCallersCopy;
}
