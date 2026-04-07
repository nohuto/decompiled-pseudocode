/*
 * XREFs of ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x180022344
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180022530 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     floor_0 @ 0x18004988A (floor_0.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaButton(__int64 a1, int a2, int a3, int a4, _DWORD *a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v10; // rbp
  __int64 *v11; // r14
  int v12; // ebx
  __int64 v13; // rax
  int v14; // r15d
  int v15; // eax
  float v16; // xmm1_4
  __int64 v17; // rax
  _DWORD *v18; // r14
  _DWORD *v19; // rdi
  __int64 v20; // rdi
  int v21; // eax
  int v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+64h] [rbp+Ch]

  v5 = a2;
  v6 = 0;
  v10 = a2;
  v11 = *(__int64 **)(a1 + 8LL * a2 + 504);
  if ( !v11 )
    return v6;
  v12 = *(_DWORD *)(a1 + 608);
  v13 = *(_QWORD *)(a1 + 744);
  if ( (v12 & 2) == 0 )
  {
    v15 = (int)floor_0((float)((float)*(int *)(v13 + 672) * 0.95454544) + 0.5);
    if ( (_DWORD)v5 == 3 )
    {
      if ( (v12 & 0xB00) == 0 )
      {
        v16 = FLOAT_1_6363636;
LABEL_12:
        v14 = (int)floor_0((float)((float)v15 * v16) + 0.5);
        goto LABEL_13;
      }
    }
    else if ( ((_DWORD)v5 != 1 || *(_QWORD *)(a1 + 504)) && (_DWORD)v5 )
    {
      v16 = FLOAT_2_1818182;
      goto LABEL_12;
    }
    v16 = FLOAT_2_2272727;
    goto LABEL_12;
  }
  v14 = (int)floor_0((float)((float)*(int *)(v13 + 772) * 0.95454544) + 0.5);
  a3 = v14;
LABEL_13:
  if ( *((_DWORD *)v11 + 32) != a4 )
  {
    v17 = *v11;
    *((_DWORD *)v11 + 32) = a4;
    (*(void (__fastcall **)(__int64 *, __int64))(v17 + 24))(v11, 2LL);
  }
  v18 = a5;
  v19 = *(_DWORD **)(a1 + 8 * v5 + 504);
  if ( v19[31] != *a5 )
  {
    v19[31] = *a5;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v19 + 24LL))(v19, 2LL);
  }
  v20 = *(_QWORD *)(a1 + 8 * v10 + 504);
  v23 = v14;
  v24 = a3;
  v21 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 80LL))(v20, &v23);
  v6 = v21;
  if ( v21 >= 0 )
    *v18 += *(_DWORD *)(*(_QWORD *)(a1 + 8 * v10 + 504) + 112LL);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0xCB8u);
  return v6;
}
