/*
 * XREFs of ??1?$unique_ptr@VInputAttemptedTarget@@U?$default_delete@VInputAttemptedTarget@@@std@@@std@@QEAA@XZ @ 0x18004FA48
 * Callers:
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$4 @ 0x1800A198B (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$4.c)
 *     _MPCGestureHandler::_MPCGestureHandler_::_1_::dtor$4 @ 0x1800A19FD (_MPCGestureHandler--_MPCGestureHandler_--_1_--dtor$4.c)
 *     _InputDeliveryServer::OnAppThreadMessage_::_1_::dtor$1 @ 0x1800A2608 (_InputDeliveryServer--OnAppThreadMessage_--_1_--dtor$1.c)
 *     _InputDeliveryServer::OnAppThreadMessage_::_1_::dtor$2 @ 0x1800A2614 (_InputDeliveryServer--OnAppThreadMessage_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::unique_ptr<InputAttemptedTarget>::~unique_ptr<InputAttemptedTarget>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
