/*
 * XREFs of ?TerminateDesktopThreads@@YAXXZ @ 0x1C009F248
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C009EDC8 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     IPostQuitMessage @ 0x1C009F3C4 (IPostQuitMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall TerminateDesktopThreads(__int64 a1, __int64 a2)
{
  ULONG v2; // ebx
  PVOID *v3; // rcx
  __int64 v4; // rcx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v6; // [rsp+48h] [rbp-10h]
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (PVOID *)*((_QWORD *)&gTermIO + 2);
  if ( v3 )
  {
    Object = *v3;
    ObfReferenceObject(Object);
    v2 = 1;
    if ( *((_QWORD *)&gTermIO + 7) )
    {
      LODWORD(gTermIO) = (unsigned int)gTermIO | 8;
      KeSetEvent(*((PRKEVENT *)&gTermIO + 7), 1, 0);
    }
    else
    {
      IPostQuitMessage(*((_QWORD *)&gTermIO + 2), 0LL);
    }
    gdwHydraHint |= 0x80000u;
  }
  else if ( *((_QWORD *)&gTermIO + 1) )
  {
    HMAssignmentUnlock(&gTermIO + 1);
  }
  v4 = qword_1C0322410;
  if ( qword_1C0322410 )
  {
    v6 = *(PVOID *)qword_1C0322410;
    ObfReferenceObject(v6);
    ++v2;
    if ( Event )
    {
      gTermNOIO |= 8u;
      KeSetEvent(Event, 1, 0);
    }
    else
    {
      IPostQuitMessage(qword_1C0322410, 0LL);
    }
  }
  if ( v2 )
  {
    UserSessionSwitchLeaveCrit(v4, a2);
    Timeout.QuadPart = -3000000000LL;
    while ( KeWaitForMultipleObjects(v2, &Object, WaitAll, WrUserRequest, 0, 1u, &Timeout, 0LL) == 258 )
      gdwHydraHint |= 0x800000u;
    ObfDereferenceObject(Object);
    if ( v2 > 1 )
      ObfDereferenceObject(v6);
    EnterCrit(0LL, 1LL);
  }
  gdwHydraHint |= 0x800u;
}
