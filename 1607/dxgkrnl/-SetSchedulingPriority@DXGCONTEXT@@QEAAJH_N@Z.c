/*
 * XREFs of ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z @ 0x1C00A773C
 * Callers:
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z @ 0x1C0095958 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z.c)
 *     ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C0096078 (-UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00D9AE0 (DxgkSetContextSchedulingPriority.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::SetSchedulingPriority(DXGCONTEXT *this, __int64 a2, unsigned __int8 a3)
{
  int v4; // edi
  __int64 result; // rax

  v4 = a2;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 376LL)
                                                                                  + 8LL)
                                                                      + 256LL))(
             *((_QWORD *)this + 27),
             a2,
             a3,
             *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 292LL));
  if ( (int)result >= 0 )
    *((_DWORD *)this + 86) = v4;
  return result;
}
