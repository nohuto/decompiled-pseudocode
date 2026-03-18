/*
 * XREFs of ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x1C0049090
 * Callers:
 *     ??_GCInputQueue@@UEAAPEAXI@Z @ 0x1C0049160 (--_GCInputQueue@@UEAAPEAXI@Z.c)
 * Callees:
 *     IsUserDetachQueueFromInputWindowApiExtSupported_0 @ 0x1C0002F40 (IsUserDetachQueueFromInputWindowApiExtSupported_0.c)
 *     UserDetachQueueFromInputWindowApiExt_0 @ 0x1C0002F48 (UserDetachQueueFromInputWindowApiExt_0.c)
 */

void __fastcall CInputQueue::MarkInvalid(CInputQueue *this)
{
  if ( (int)IsUserDetachQueueFromInputWindowApiExtSupported_0() < 0 )
  {
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  else if ( *((_QWORD *)this + 3) )
  {
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    UserDetachQueueFromInputWindowApiExt_0();
  }
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
}
