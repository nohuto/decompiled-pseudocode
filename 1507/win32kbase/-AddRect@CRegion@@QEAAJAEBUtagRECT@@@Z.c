/*
 * XREFs of ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C004A3EC
 * Callers:
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C0047FEC (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenB.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C004CBB8 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?Initialize@CScatterToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@W4TokenState@CTokenBase@@@Z @ 0x1C00E13E8 (-Initialize@CScatterToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@W4TokenState@CTokenBa.c)
 * Callees:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003EE60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C003FC40 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049F40 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049FFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C004A358 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CRegion::AddRect(CRegion *this, struct _RECTL *a2)
{
  int v4; // ecx
  unsigned int v5; // ebx
  int v7; // ecx
  struct _RECTL v8; // [rsp+20h] [rbp-30h] BYREF
  __int16 *v9[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 *v10[2]; // [rsp+40h] [rbp-10h] BYREF
  __m128i *v11; // [rsp+68h] [rbp+18h] BYREF

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
  v11 = (__m128i *)*((_QWORD *)this + 1);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v9);
  if ( v10[0] && v9[0] )
  {
    v8 = *a2;
    RGNOBJ::vSet((RGNOBJ *)v10, &v8);
    if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)v9, (struct RGNOBJ *)&v11, (struct RGNOBJ *)v10, byte_1C00FF3FA)
      && (unsigned int)RGNOBJ::bSwap((__int64 **)v9, &v11) )
    {
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
  RGNMEMOBJTMP::~RGNMEMOBJTMP(v9);
  RGNMEMOBJTMP::~RGNMEMOBJTMP(v10);
  return v5;
}
