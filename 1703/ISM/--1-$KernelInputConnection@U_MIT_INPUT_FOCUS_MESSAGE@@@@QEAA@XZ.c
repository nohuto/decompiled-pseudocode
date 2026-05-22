/*
 * XREFs of ??1?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAA@XZ @ 0x180011D44
 * Callers:
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x180011DE8 (--1DWMInputRouter@@MEAA@XZ.c)
 *     ??1InputDeliveryServer@@EEAA@XZ @ 0x180068CAC (--1InputDeliveryServer@@EEAA@XZ.c)
 *     _DWMInputRouter::_DWMInputRouter_::_1_::dtor$24 @ 0x18009F989 (_DWMInputRouter--_DWMInputRouter_--_1_--dtor$24.c)
 *     _InputDeliveryServer::_InputDeliveryServer_::_1_::dtor$9 @ 0x1800A258D (_InputDeliveryServer--_InputDeliveryServer_--_1_--dtor$9.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$9 @ 0x1800A2745 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$9.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>::~KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v3 = a1 + 8;
  v4 = (__int64 *)a1[15];
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v3;
    result = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v4 + 32))(v4, a2);
    v3[7] = 0LL;
  }
  if ( *((_DWORD *)a1 + 4) )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 144LL))(a1[1]);
  *((_DWORD *)a1 + 4) = 0;
  v6 = a1[1];
  if ( v6 )
  {
    a1[1] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}
