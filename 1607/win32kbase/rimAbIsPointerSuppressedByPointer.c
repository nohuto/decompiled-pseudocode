/*
 * XREFs of rimAbIsPointerSuppressedByPointer @ 0x1C00D0E00
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C00D0C3C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 * Callees:
 *     rimAbIsPointInPenDeadzone @ 0x1C00D0B1C (rimAbIsPointInPenDeadzone.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByPointer(__int128 *a1, int *a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v7; // ecx
  __int128 v8; // xmm0
  __int64 v9; // r8
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int64 v12; // r8
  __int64 v13; // rdx
  bool v14; // zf
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( !gDeviceArbitrationType )
    return 0LL;
  v7 = *a2;
  if ( *a2 == *(_DWORD *)a3 )
    return 0LL;
  if ( v7 == 5 )
    return 1LL;
  if ( *(_DWORD *)a3 == 5 )
    return 0LL;
  if ( gDeviceArbitrationType == 1 )
  {
    v14 = v7 == 2;
  }
  else
  {
    if ( gDeviceArbitrationType != 2 )
    {
      if ( gDeviceArbitrationType == 3 && v7 == 2 )
      {
LABEL_14:
        v8 = *a1;
        v9 = *(_QWORD *)(a3 + 40);
        v10 = *((_QWORD *)a2 + 5);
        v15 = v8;
        return rimAbIsPointInPenDeadzone(&v15, v10, v9);
      }
      return 0LL;
    }
    if ( v7 == 2 )
    {
      if ( (*(_DWORD *)(a3 + 12) & 4) != 0 )
        return 1LL;
      goto LABEL_14;
    }
    if ( (a2[3] & 4) != 0 )
      return 0LL;
    v11 = *a1;
    v12 = *((_QWORD *)a2 + 5);
    v13 = *(_QWORD *)(a3 + 40);
    v15 = v11;
    v14 = (unsigned int)rimAbIsPointInPenDeadzone(&v15, v13, v12) == 0;
  }
  LOBYTE(v3) = v14;
  return v3;
}
