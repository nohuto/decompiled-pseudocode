/*
 * XREFs of ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x1801706A4
 * Callers:
 *     ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180110170 (-InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ?GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z @ 0x18016FE90 (-GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x18018B220 (-CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PE.c)
 */

void __fastcall CInteractionContextWrapper::_UpdateInteractionOutput(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2,
        struct InteractionOutput *a3)
{
  const struct MANIPULATION_TRANSFORM *v4; // rsi
  int v7; // edx
  float v8; // xmm0_4
  __int64 v9; // rcx
  const struct tagRECT *v10; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // zf
  int v14; // eax
  const struct MANIPULATION_TRANSFORM *v15; // rcx
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // [rsp+50h] [rbp-39h] BYREF
  float v20; // [rsp+54h] [rbp-35h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v22[2]; // [rsp+68h] [rbp-21h] BYREF
  int v23; // [rsp+78h] [rbp-11h]
  _QWORD v24[2]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v25[3]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+1Fh]
  __int64 v27; // [rsp+B0h] [rbp+27h]

  *((_DWORD *)a3 + 10) = *((_DWORD *)a2 + 3);
  v4 = 0LL;
  *((_DWORD *)a3 + 11) = *((_DWORD *)a2 + 4);
  v7 = *(_DWORD *)a2;
  if ( ((v7 - 1) & 0xFFFFFFFC) == 0 && v7 != 3 )
  {
    *(_DWORD *)a3 = v7;
    *((_DWORD *)a3 + 1) = *((_DWORD *)a2 + 1);
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( *((_DWORD *)a2 + 19) == 2 )
      {
        if ( *((float *)a2 + 10) == 0.0 )
        {
          if ( *((float *)a2 + 11) != 0.0 )
            *((_DWORD *)a3 + 5) = 2;
        }
        else
        {
          *((_DWORD *)a3 + 5) = 1;
        }
      }
      else if ( *((_DWORD *)a2 + 19) == 1 )
      {
        *((_DWORD *)a3 + 5) = 0;
      }
      *((float *)a3 + 2) = *((float *)a2 + 5) + *((float *)a3 + 2);
      *((float *)a3 + 3) = *((float *)a2 + 6) + *((float *)a3 + 3);
      v8 = *((float *)a2 + 7);
      if ( v8 != 0.0 )
        *((float *)a3 + 4) = v8 * *((float *)a3 + 4);
      *((_DWORD *)a3 + 6) = *((_DWORD *)a2 + 15);
      *((_DWORD *)a3 + 7) = *((_DWORD *)a2 + 16);
      *((_DWORD *)a3 + 8) = *((_DWORD *)a2 + 17);
      *((_DWORD *)a3 + 9) = 0;
      *((_DWORD *)a3 + 12) = *((_DWORD *)a2 + 12);
      *((_DWORD *)a3 + 13) = *((_DWORD *)a2 + 13);
    }
  }
  if ( !CCommonRegistryData::m_fDisableInteractionOutputPrediction )
  {
    v9 = *((_QWORD *)this + 30);
    v21[0] = 0LL;
    v21[1] = 0LL;
    v24[0] = 0LL;
    v24[1] = 0LL;
    v10 = (const struct tagRECT *)v21;
    if ( !(unsigned int)GetPointerDeviceRects(v9, v21, v24) )
      v10 = 0LL;
    NtDCompositionGetFrameStatistics(v25, 0LL, 0LL);
    v11 = 1000LL * v25[2] / v26;
    v12 = 1000LL * v25[0] / v26;
    v13 = *(_DWORD *)a2 == 1;
    v22[0] = 0LL;
    v22[1] = 0LL;
    v23 = 0;
    if ( v13 && (v11 || v12 || 1000 * v27 / v26) )
    {
      v14 = OutputPredictionInteractionContext(*((_QWORD *)this + 3), 1000LL, v11, v12, 1000 * v27 / v26, v22);
      v15 = (const struct MANIPULATION_TRANSFORM *)v22;
      if ( v14 < 0 )
        v15 = 0LL;
      v4 = v15;
    }
    v16 = *((float *)a3 + 3);
    v17 = *((float *)a3 + 2);
    v19 = 0.0;
    v20 = 0.0;
    CInteractionContextTransformHelper::CalculatePrediction(
      (CInteractionContextWrapper *)((char *)this + 320),
      a2,
      v4,
      v10,
      *((_DWORD *)this + 79),
      v17,
      v16,
      &v19,
      &v20);
    v18 = v20;
    *((float *)a3 + 2) = v19;
    *((float *)a3 + 3) = v18;
  }
}
