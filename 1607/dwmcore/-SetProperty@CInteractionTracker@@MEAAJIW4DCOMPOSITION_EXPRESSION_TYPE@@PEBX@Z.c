/*
 * XREFs of ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014B930
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18014B59C (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x18014B678 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18014B6EC (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x18014B7C8 (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18014B84C (-SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@_N@Z @ 0x18014BAF0 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@_N@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM_N@Z @ 0x18014BB58 (-SetRequestedScale@CInteractionTracker@@AEAA_NM_N@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x18014BC54 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z @ 0x18014BD38 (-SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z.c)
 *     ?UpdatePosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18014C614 (-UpdatePosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::SetProperty(__int64 a1, int a2, int a3, const struct D2DVector3 *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  int v17; // [rsp+38h] [rbp-18h]

  v4 = 0;
  if ( a3 == 18 )
  {
    v5 = *(float *)a4;
    v6 = a2 - 2;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 2;
        if ( !v8 )
        {
          CInteractionTracker::SetScale((CInteractionTracker *)a1, v5 * *(float *)(a1 + 176));
          return v4;
        }
        v9 = v8 - 20;
        if ( !v9 )
        {
          CInteractionTracker::SetMinScale((CInteractionTracker *)a1, v5);
          return v4;
        }
        v10 = v9 - 1;
        if ( !v10 )
        {
          CInteractionTracker::SetMaxScale((CInteractionTracker *)a1, v5);
          return v4;
        }
        v11 = v10 - 1;
        if ( !v11 )
        {
          CInteractionTracker::SetRequestedScale((CInteractionTracker *)a1, v5, 1);
          return v4;
        }
        if ( v11 == 30 )
        {
          CInteractionTracker::SetScaleInertiaDecayRate((CInteractionTracker *)a1, v5);
          return v4;
        }
        goto LABEL_18;
      }
      v12 = *(_DWORD *)(a1 + 204) == 2;
      v13 = *(_DWORD *)(a1 + 136);
      v16 = *(_QWORD *)(a1 + 128);
      v17 = v13;
      *((float *)&v16 + 1) = *((float *)&v16 + 1) + v5;
      if ( v12 && *(_QWORD *)(a1 + 424) )
        *(float *)(a1 + 596) = *(float *)(a1 + 596) - v5;
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 204) == 2;
      v14 = *(_DWORD *)(a1 + 136);
      v16 = *(_QWORD *)(a1 + 128);
      v17 = v14;
      *(float *)&v16 = *(float *)&v16 + v5;
      if ( v12 && *(_QWORD *)(a1 + 416) )
        *(float *)(a1 + 592) = *(float *)(a1 + 592) - v5;
    }
    CInteractionTracker::UpdatePosition((CInteractionTracker *)a1, (const struct D2DVector3 *)&v16);
    return v4;
  }
  if ( a3 != 52 )
    goto LABEL_18;
  switch ( a2 )
  {
    case 6:
      CInteractionTracker::SetRequestedPosition((CInteractionTracker *)a1, a4, 1);
      return v4;
    case 19:
      CInteractionTracker::SetMinPosition((CInteractionTracker *)a1, a4);
      return v4;
    case 22:
      CInteractionTracker::SetMaxPosition((CInteractionTracker *)a1, a4);
      return v4;
  }
  if ( a2 != 54 )
  {
LABEL_18:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x506u);
    return v4;
  }
  CInteractionTracker::SetPositionInertiaDecayRate((CInteractionTracker *)a1, a4);
  return v4;
}
