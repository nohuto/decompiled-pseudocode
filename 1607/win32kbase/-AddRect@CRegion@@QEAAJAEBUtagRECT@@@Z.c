/*
 * XREFs of ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C001EAC8
 * Callers:
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N1W4TokenState@CTokenBase@@@Z @ 0x1C001C8C8 (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N1W4TokenState@CTokenBa.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C001FEF0 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 * Callees:
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C001EA34 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C002D9C0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C002E230 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00345B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0034664 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall CRegion::AddRect(CRegion *this, struct _RECTL *a2)
{
  int v4; // ecx
  unsigned int v5; // ebx
  int v7; // ecx
  struct _RECTL v8; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+68h] [rbp+18h] BYREF

  if ( a2->left > a2->right || a2->top > a2->bottom )
    return (unsigned int)-1073741811;
  v4 = *((_DWORD *)this + 1);
  v5 = 0;
  if ( !v4 )
    return (unsigned int)CRegion::InitializeFromRect(this, a2);
  v7 = v4 - 1;
  if ( !v7 )
    return v5;
  if ( v7 != 1 )
    return (unsigned int)-1073741811;
  v11 = *((_QWORD *)this + 1);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v9);
  if ( v10[0] && v9[0] )
  {
    v8 = *a2;
    RGNOBJ::vSet((RGNOBJ *)v10, &v8);
    if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)v9, (struct RGNOBJ *)&v11, (struct RGNOBJ *)v10, byte_1C0119956) )
    {
      RGNOBJ::vSwap((RGNOBJ *)v9, (struct RGNOBJ *)&v11);
      *((_QWORD *)this + 1) = v11;
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v9);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
  return v5;
}
