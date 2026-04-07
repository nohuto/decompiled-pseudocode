/*
 * XREFs of ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x180002238
 * Callers:
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800023B0 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ??0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x180001134 (--0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 *     ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x180001FAC (-_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_RecordUnionRect(__int64 a1, unsigned int a2, RECT *a3)
{
  unsigned int v5; // eax
  __int16 v6; // bx
  _QWORD *v7; // r10
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // edi
  int v11; // eax
  int v12; // ebx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // ebx
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // [rsp+30h] [rbp-68h] BYREF
  __int128 v22; // [rsp+38h] [rbp-60h] BYREF
  _OWORD v23[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v24; // [rsp+68h] [rbp-30h]

  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, a2);
  v21 = 0;
  v6 = v5;
  if ( (int)CGroupingStoryboard::_GroupingIndexByTarget(a1, v5, &v21) < 0 )
  {
    CStoryboard::UnifiedTargetRect::UnifiedTargetRect((__int64)&v22, v6, a3);
    v7 = (_QWORD *)(a1 + 120);
    v8 = *(unsigned int *)(a1 + 144);
    v9 = v8 + 1;
    if ( (int)v8 + 1 < (unsigned int)v8 )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v10 = -2147024362;
    }
    else
    {
      v10 = 0;
      if ( v9 <= *(_DWORD *)(a1 + 140) )
      {
        v20 = *v7 + 56 * v8;
        *(_OWORD *)v20 = v22;
        *(_OWORD *)(v20 + 16) = v23[0];
        *(_OWORD *)(v20 + 32) = v23[1];
        *(_QWORD *)(v20 + 48) = v24;
        *(_DWORD *)(a1 + 144) = v9;
        goto LABEL_7;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet(v7, 56LL, 1LL, &v22);
      v12 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      v10 = v12;
      if ( v12 >= 0 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v12, 0x7DCu);
LABEL_7:
    DynArrayImpl<0>::~DynArrayImpl<0>((char *)v23 + 8);
    return v10;
  }
  v14 = 56LL * v21;
  UnionRect((LPRECT)(v14 + *(_QWORD *)(a1 + 120) + 4LL), a3, (const RECT *)(v14 + *(_QWORD *)(a1 + 120) + 4LL));
  v15 = v14 + *(_QWORD *)(a1 + 120) + 24LL;
  v16 = *(unsigned int *)(v15 + 24);
  v17 = v16 + 1;
  if ( (int)v16 + 1 < (unsigned int)v16 )
  {
    v18 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v10 = -2147024362;
    goto LABEL_16;
  }
  v10 = 0;
  if ( v17 <= *(_DWORD *)(v15 + 20) )
  {
    *(RECT *)(*(_QWORD *)v15 + 16 * v16) = *a3;
    *(_DWORD *)(v15 + 24) = v17;
    return v10;
  }
  v19 = DynArrayImpl<0>::AddMultipleAndSet(v15, 16LL, 1LL, a3);
  v18 = v19;
  if ( v19 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
  v10 = v18;
  if ( v18 < 0 )
LABEL_16:
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v18, 0x7D6u);
  return v10;
}
