/*
 * XREFs of ??$RunForAllScrollAnimationsWithAxis@V_lambda_d10c4ee2d6fa048af20684fb87925053_@@@CInteractionTracker@@AEAAXAEBV_lambda_d10c4ee2d6fa048af20684fb87925053_@@@Z @ 0x18014984C
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAA_N_N@Z @ 0x18014A2B0 (-CheckForIdle@CInteractionTracker@@AEAA_N_N@Z.c)
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18014A75C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTracker::RunForAllScrollAnimationsWithAxis<_lambda_d10c4ee2d6fa048af20684fb87925053_>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r10
  _QWORD *v3; // r11
  int i; // r8d
  float v5; // xmm3_4
  __int64 v6; // r9
  float CurrentValue; // xmm0_4
  float v8; // xmm4_4
  float *v9; // rax

  v2 = a1 + 416;
  v3 = a2;
  for ( i = 0; i < 3; ++i )
  {
    if ( *(_QWORD *)v2 )
    {
      v5 = *(float *)(*(_QWORD *)v2 + 504LL);
      CurrentValue = CInteractionTracker::GetCurrentValue(*v3, (unsigned int)i);
      if ( v8 >= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v5 - CurrentValue)) & _xmm) )
      {
        if ( i )
        {
          if ( i == 1 )
          {
            v9 = (float *)(v6 + 132);
          }
          else
          {
            if ( i != 2 )
              goto LABEL_12;
            v9 = (float *)(v6 + 176);
          }
        }
        else
        {
          v9 = (float *)(v6 + 128);
        }
        if ( v9 )
        {
          *v9 = v5;
          *(_BYTE *)(v6 + 212) = 1;
        }
      }
    }
LABEL_12:
    v2 += 8LL;
  }
}
