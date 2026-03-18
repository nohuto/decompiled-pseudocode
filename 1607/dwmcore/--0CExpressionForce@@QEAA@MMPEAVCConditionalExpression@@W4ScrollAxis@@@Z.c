/*
 * XREFs of ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180168D3C
 * Callers:
 *     ?CheckInertiaModifiers@CScrollAnimation@@AEAA?AW4InertiaModifierType@@XZ @ 0x18015DB38 (-CheckInertiaModifiers@CScrollAnimation@@AEAA-AW4InertiaModifierType@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpressionForce::CExpressionForce(__int64 a1, float a2, float a3, __int64 a4, int a5)
{
  int v6; // eax

  *(_QWORD *)(a1 + 8) = &CMILRefCountBase::`vftable';
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &CExpressionForce::`vftable'{for `IAccelerator'};
  *(_QWORD *)(a1 + 8) = &CExpressionForce::`vftable'{for `CMILRefCountBase'};
  *(_QWORD *)(a1 + 64) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  *(_DWORD *)(a1 + 72) = a5;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(float *)(a1 + 44) = a2;
  *(float *)(a1 + 40) = a3;
  v6 = *(_DWORD *)(a1 + 44);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 56) = v6;
  return a1;
}
