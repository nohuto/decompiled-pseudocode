/*
 * XREFs of ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x180024E40
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180025004 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001F090 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18005056A (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaButton(__int64 a1, int a2, LONG a3, int a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v10; // r14
  CVisual *v11; // rsi
  int v13; // ebx
  __int64 v14; // rax
  int v15; // eax
  float v16; // xmm1_4
  LONG v17; // ebx
  _DWORD *v18; // rsi
  CVisual *v19; // rcx
  struct tagSIZE *v20; // rcx
  __int64 (__fastcall *v21)(struct tagSIZE *, const struct tagSIZE *); // rax
  int v22; // eax
  __int64 v23; // rax
  void (__fastcall *v24)(CVisual *, int); // rax
  void (__fastcall *v25)(CVisual *, int); // rax
  struct tagSIZE v26; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0;
  v10 = a2;
  v11 = *(CVisual **)(a1 + 8LL * a2 + 504);
  if ( !v11 )
    return v6;
  v13 = *(_DWORD *)(a1 + 608);
  v14 = *(_QWORD *)(a1 + 744);
  if ( (v13 & 2) != 0 )
  {
    v17 = (int)floor_0((float)((float)*(int *)(v14 + 788) * 0.95454544) + 0.5);
    a3 = v17;
    goto LABEL_11;
  }
  v15 = (int)floor_0((float)((float)*(int *)(v14 + 688) * 0.95454544) + 0.5);
  if ( a2 == 3 )
  {
    if ( (v13 & 0xB00) == 0 )
    {
      v16 = FLOAT_1_6363636;
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  if ( a2 == 1 && !*(_QWORD *)(a1 + 504) || !a2 )
  {
LABEL_9:
    v16 = FLOAT_2_2272727;
    goto LABEL_10;
  }
  v16 = FLOAT_2_1818182;
LABEL_10:
  v17 = (int)floor_0((float)((float)v15 * v16) + 0.5);
LABEL_11:
  if ( *((_DWORD *)v11 + 32) != a4 )
  {
    v23 = *(_QWORD *)v11;
    *((_DWORD *)v11 + 32) = a4;
    v24 = *(void (__fastcall **)(CVisual *, int))(v23 + 24);
    if ( v24 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v11, 2);
    else
      v24(v11, 2);
  }
  v18 = a5;
  v19 = *(CVisual **)(a1 + 8 * v10 + 504);
  if ( *((_DWORD *)v19 + 31) != *a5 )
  {
    *((_DWORD *)v19 + 31) = *a5;
    v25 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v19 + 24LL);
    if ( v25 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v19, 2);
    else
      v25(v19, 2);
  }
  v20 = *(struct tagSIZE **)(a1 + 8 * v10 + 504);
  v26.cx = v17;
  v26.cy = a3;
  v21 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v20 + 80LL);
  if ( v21 == CVisual::SetSize )
    v22 = CVisual::SetSize(v20, &v26);
  else
    v22 = v21(v20, &v26);
  v6 = v22;
  if ( v22 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xB10u);
  else
    *v18 += *(_DWORD *)(*(_QWORD *)(a1 + 8 * v10 + 504) + 112LL);
  return v6;
}
