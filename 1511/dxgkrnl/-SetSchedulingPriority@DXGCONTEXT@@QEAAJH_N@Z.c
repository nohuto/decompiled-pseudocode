/*
 * XREFs of ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z @ 0x1C0137750
 * Callers:
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z @ 0x1C006D3EC (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00BF380 (DxgkSetContextSchedulingPriority.c)
 *     ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C013BDB0 (-UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::SetSchedulingPriority(DXGCONTEXT *this, __int64 a2, unsigned __int8 a3)
{
  int v4; // edi
  __int64 result; // rax

  v4 = a2;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 400LL)
                                                                                  + 8LL)
                                                                      + 256LL))(
             *((_QWORD *)this + 27),
             a2,
             a3,
             *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 316LL));
  if ( (int)result >= 0 )
    *((_DWORD *)this + 86) = v4;
  return result;
}
