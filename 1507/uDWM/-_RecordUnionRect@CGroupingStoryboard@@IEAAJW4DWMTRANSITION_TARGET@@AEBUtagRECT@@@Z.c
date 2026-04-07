/*
 * XREFs of ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800936D0
 * Callers:
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800966E0 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_RecordUnionRect(__int64 a1, unsigned int a2, const RECT *a3)
{
  unsigned int v5; // esi
  int v6; // eax
  unsigned int v7; // r9d
  __int64 v8; // rdx
  __int16 i; // r8
  __int64 v10; // rax
  RECT v11; // xmm0
  unsigned int v12; // edx
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rbx
  RECT *v18; // r8
  _BYTE v20[24]; // [rsp+30h] [rbp-48h] BYREF

  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, a2);
  v7 = *(_DWORD *)(a1 + 144);
  v8 = 0LL;
  for ( i = v6; (unsigned int)v8 < v7; v8 = (unsigned int)(v8 + 1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 120) + 24 * v8) == v6 )
      break;
  }
  if ( (unsigned int)v8 < v7 )
  {
    v17 = 3 * v8;
    v18 = (RECT *)(*(_QWORD *)(a1 + 120) + 24 * v8 + 4);
    UnionRect(v18, a3, v18);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 120) + 8 * v17 + 20);
    return v5;
  }
  v10 = *(unsigned int *)(a1 + 144);
  v11 = *a3;
  *(_DWORD *)v20 = i & 0xFFF;
  *(_DWORD *)&v20[20] = 1;
  v12 = v10 + 1;
  *(RECT *)&v20[4] = v11;
  if ( (int)v10 + 1 < (unsigned int)v10 )
  {
    v13 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v5 = -2147024362;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x7A9u);
    return v5;
  }
  if ( v12 > *(_DWORD *)(a1 + 140) )
  {
    v16 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 120, 0x18u, 1, v20);
    v13 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0xC0u);
    v5 = v13;
    if ( v13 < 0 )
      goto LABEL_12;
  }
  else
  {
    v14 = 3 * v10;
    v15 = *(_QWORD *)(a1 + 120);
    *(_OWORD *)(v15 + 8 * v14) = *(_OWORD *)v20;
    *(_QWORD *)(v15 + 8 * v14 + 16) = *(_QWORD *)&v20[16];
    *(_DWORD *)(a1 + 144) = v12;
  }
  return v5;
}
