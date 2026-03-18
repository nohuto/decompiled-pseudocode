/*
 * XREFs of ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAJH@Z @ 0x1C00B7970
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B47FC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x1C0072C7C (-SetSchedulingPriority@DXGCONTEXT@@QEAAJH@Z.c)
 */

__int64 __fastcall DXGDEVICE::SetSchedulingPriorityAdjustment(DXGDEVICE *this, int a2)
{
  DXGCONTEXT *v2; // rsi
  DXGCONTEXT *v4; // rbx
  __int64 result; // rax

  v2 = (DXGDEVICE *)((char *)this + 288);
  v4 = (DXGCONTEXT *)*((_QWORD *)this + 36);
  result = 0LL;
  while ( v4 != v2 )
  {
    if ( !v4 )
      break;
    result = DXGCONTEXT::SetSchedulingPriority(v4, (unsigned int)(a2 + *((_DWORD *)v4 + 85)));
    if ( (int)result < 0 )
      break;
    *((_DWORD *)v4 + 84) = a2;
    v4 = *(DXGCONTEXT **)v4;
  }
  return result;
}
