/*
 * XREFs of ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x1C0072C7C
 * Callers:
 *     DxgkSetContextSchedulingPriority @ 0x1C00AFF30 (DxgkSetContextSchedulingPriority.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z @ 0x1C00B7970 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z.c)
 *     ?UpdatePriorityClass@DXGDEVICE@@QEAAXXZ @ 0x1C00D1518 (-UpdatePriorityClass@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::SetSchedulingPriority(DXGCONTEXT *this, __int64 a2)
{
  int v3; // edi
  __int64 result; // rax

  v3 = a2;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 376LL)
                                                                                  + 8LL)
                                                                      + 256LL))(
             *((_QWORD *)this + 27),
             a2,
             0LL,
             *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 316LL));
  if ( (int)result >= 0 )
    *((_DWORD *)this + 86) = v3;
  return result;
}
