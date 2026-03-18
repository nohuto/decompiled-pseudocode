/*
 * XREFs of ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z @ 0x1C0008DA8
 * Callers:
 *     ResolveDCompInputHandleToPwnd @ 0x1C0008CE0 (ResolveDCompInputHandleToPwnd.c)
 * Callees:
 *     <none>
 */

void __fastcall CInputQueueProp::ReferenceAndStoreUIOwnerPwnd(CInputQueueProp *this, struct tagWND *a2)
{
  _QWORD *v4; // r14

  if ( a2 == *((struct tagWND **)this + 1) )
  {
    if ( !*((_BYTE *)this + 40) )
    {
      v4 = (_QWORD *)((char *)this + 32);
      if ( *((_QWORD *)this + 4) )
      {
        HMAssignmentUnlock((char *)this + 32);
        *v4 = 0LL;
      }
    }
    *((_QWORD *)this + 4) = a2;
    *((_BYTE *)this + 40) = 1;
  }
  else
  {
    if ( *((_BYTE *)this + 40) )
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_BYTE *)this + 40) = 0;
    }
    HMAssignmentLock((char *)this + 32, a2);
  }
}
