/*
 * XREFs of xxxRemoveShadow @ 0x1C0068D84
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0054A5C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxRemoveShadow(__int64 a1)
{
  unsigned int v1; // ebx
  struct tagSHADOW **v2; // rdx
  struct tagSHADOW *v4; // rdi
  __int64 v5; // rsi

  v1 = 0;
  v2 = &gpshadowFirst;
  if ( gpshadowFirst )
  {
    while ( 1 )
    {
      v4 = *v2;
      if ( *(_QWORD *)*v2 == a1 )
        break;
      v2 = (struct tagSHADOW **)((char *)v4 + 16);
      if ( !*((_QWORD *)v4 + 2) )
        return v1;
    }
    *v2 = (struct tagSHADOW *)*((_QWORD *)v4 + 2);
    v5 = HMAssignmentUnlock((char *)v4 + 8);
    HMAssignmentUnlock(v4);
    Win32FreePool(v4);
    if ( v5 )
      return (unsigned int)xxxDestroyWindow(v5);
    else
      return 1;
  }
  return v1;
}
