/*
 * XREFs of ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCResource@@0PEAM@Z @ 0x18000A518
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000D3E0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x180033EB8 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::GetBrush(
        CTransitionWindowSnapshot *this,
        struct CResource **a2,
        struct CResource **a3,
        float *a4)
{
  unsigned int v4; // ebx
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rax

  v4 = 0;
  if ( a2 && a3 && *((_QWORD *)this + 35) && *((_QWORD *)this + 34) )
  {
    if ( *a2 )
      CBaseObject::Release(*a2);
    v9 = (volatile signed __int32 *)*((_QWORD *)this + 35);
    *a2 = (struct CResource *)v9;
    if ( v9 )
      _InterlockedIncrement(v9 + 2);
    if ( *a3 )
      CBaseObject::Release(*a3);
    v10 = (volatile signed __int32 *)*((_QWORD *)this + 34);
    *a3 = (struct CResource *)v10;
    if ( v10 )
      _InterlockedIncrement(v10 + 2);
    *a4 = *((float *)this + 84);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
