/*
 * XREFs of xxxSetCsrssThreadDesktop @ 0x1C0098C50
 * Callers:
 *     xxxQueryInformationThread @ 0x1C0096AA8 (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00DCC90 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x1C0226628 (xxxHardErrorControl.c)
 * Callees:
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     xxxSetThreadDesktop @ 0x1C0099B20 (xxxSetThreadDesktop.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00DCB44 (CloseProtectedHandle.c)
 *     xxxInternalGetMessage @ 0x1C00DF5A8 (xxxInternalGetMessage.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

NTSTATUS __fastcall xxxSetCsrssThreadDesktop(_DWORD *Object, PVOID *a2)
{
  void *v4; // rcx
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // rax
  NTSTATUS result; // eax
  ULONG v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v13[6]; // [rsp+40h] [rbp-38h] BYREF

  if ( (Object[8] & 8) != 0 )
    return -1073741823;
  v4 = *(void **)(gptiCurrent + 408LL);
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
      v7 = *(_DWORD **)(gptiCurrent + 408LL);
      if ( Object != v7 )
      {
        if ( v7 )
        {
          memset(v13, 0, sizeof(v13));
          while ( (unsigned int)xxxInternalGetMessage((unsigned int)v13, 0, 0, 0, 3, 0) )
            xxxDispatchMessage(v13, v10, v11, v12);
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
