/*
 * XREFs of xxxSetCsrssThreadDesktop @ 0x1C007C660
 * Callers:
 *     xxxSetInformationThread @ 0x1C007D080 (xxxSetInformationThread.c)
 *     xxxQueryInformationThread @ 0x1C012B334 (xxxQueryInformationThread.c)
 *     xxxHardErrorControl @ 0x1C0226550 (xxxHardErrorControl.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxInternalGetMessage @ 0x1C007C720 (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C007C9DC (xxxDispatchMessage.c)
 *     CloseProtectedHandle @ 0x1C007D3C0 (CloseProtectedHandle.c)
 *     xxxSetThreadDesktop @ 0x1C007EA90 (xxxSetThreadDesktop.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

NTSTATUS __fastcall xxxSetCsrssThreadDesktop(_DWORD *Object, PVOID *a2)
{
  void *v4; // rcx
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // rax
  NTSTATUS result; // eax
  ULONG v9; // eax
  _BYTE v10[48]; // [rsp+40h] [rbp-38h] BYREF

  if ( (Object[8] & 8) != 0 )
    return -1073741823;
  v4 = *(void **)(gptiCurrent + 416LL);
  *a2 = v4;
  if ( !v4 || (result = ObReferenceObjectByPointer(v4, 0x2000000u, (POBJECT_TYPE)ExDesktopObjectType, 0), result >= 0) )
  {
    v5 = ObOpenObjectByPointer(Object, 0, 0LL, 0x1F0003u, 0LL, 0, a2 + 1);
    v6 = v5;
    if ( v5 < 0 )
    {
      v9 = RtlNtStatusToDosError(v5);
      UserSetLastError(v9);
      if ( *a2 )
        ObfDereferenceObject(*a2);
    }
    else
    {
      v7 = *(_DWORD **)(gptiCurrent + 416LL);
      if ( Object != v7 )
      {
        if ( v7 )
        {
          memset(v10, 0, sizeof(v10));
          while ( (unsigned int)xxxInternalGetMessage((unsigned int)v10, 0, 0, 0, 3, 0) )
            xxxDispatchMessage(v10);
        }
        v6 = xxxSetThreadDesktop(0LL, Object);
        if ( v6 < 0 )
        {
          if ( *a2 )
            ObfDereferenceObject(*a2);
          CloseProtectedHandle(a2[1]);
        }
      }
    }
    return v6;
  }
  return result;
}
