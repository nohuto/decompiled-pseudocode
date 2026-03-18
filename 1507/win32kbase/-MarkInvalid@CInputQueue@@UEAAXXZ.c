/*
 * XREFs of ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x1C0023810
 * Callers:
 *     ??_GCInputQueue@@UEAAPEAXI@Z @ 0x1C0023790 (--_GCInputQueue@@UEAAPEAXI@Z.c)
 * Callees:
 *     IsUserDetachQueueFromInputWindowApiExtSupported_0 @ 0x1C0002F20 (IsUserDetachQueueFromInputWindowApiExtSupported_0.c)
 *     UserDetachQueueFromInputWindowApiExt_0 @ 0x1C0002F28 (UserDetachQueueFromInputWindowApiExt_0.c)
 */

void __fastcall CInputQueue::MarkInvalid(CInputQueue *this)
{
  if ( (unsigned int)IsUserDetachQueueFromInputWindowApiExtSupported_0() )
  {
    if ( *((_QWORD *)this + 3) )
    {
      *((_QWORD *)this + 2) = 0LL;
      *((_QWORD *)this + 3) = 0LL;
      UserDetachQueueFromInputWindowApiExt_0();
    }
  }
  else
  {
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
}
