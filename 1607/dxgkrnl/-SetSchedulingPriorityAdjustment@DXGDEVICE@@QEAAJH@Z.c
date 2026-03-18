/*
 * XREFs of ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z @ 0x1C0095958
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0073484 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z @ 0x1C00A773C (-SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z.c)
 */

__int64 __fastcall DXGDEVICE::SetSchedulingPriorityAdjustment(DXGDEVICE *this, int a2)
{
  DXGCONTEXT *v2; // rdi
  DXGCONTEXT *v4; // rbx
  __int64 result; // rax

  v2 = (DXGDEVICE *)((char *)this + 312);
  v4 = (DXGCONTEXT *)*((_QWORD *)this + 39);
  result = 0LL;
  while ( v4 != v2 )
  {
    if ( !v4 )
      break;
    result = DXGCONTEXT::SetSchedulingPriority(v4, a2 + *((_DWORD *)v4 + 85), 1);
    if ( (int)result < 0 )
      break;
    *((_DWORD *)v4 + 84) = a2;
    v4 = *(DXGCONTEXT **)v4;
  }
  return result;
}
