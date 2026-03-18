/*
 * XREFs of ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x1801464A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801466DC (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x180146D28 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

__int64 __fastcall CManipulation::UpdateOnManipulationThreadWithoutDelta(
        CManipulation *this,
        const struct UpdateOnManipulationThreadWithoutDeltaArgs *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int8 v5; // r9
  __int64 v6; // r10
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // dl
  char v9; // cl
  char v10; // al
  char v11; // cl
  int v12; // eax

  v2 = 0;
  CManipulation::_UpdateCaptureState(this, (*((_BYTE *)a2 + 4) & 0x20) != 0);
  if ( *(_DWORD *)(v3 + 252) != *(_DWORD *)v4
    || (v7 = *(_BYTE *)(v3 + 264), v8 = *(_BYTE *)(v4 + 4), ((unsigned __int8)(v8 ^ v7) & v5) != 0)
    || ((v8 ^ v7) & 2) != 0
    || ((v8 ^ v7) & 4) != 0
    || ((v8 ^ v7) & 8) != 0
    || ((v8 ^ v7) & 0x10) != 0 )
  {
    *(_DWORD *)(v6 + 248) = 0;
    *(_QWORD *)(v6 + 224) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)(v6 + 232) = 0;
    *(_QWORD *)(v6 + 236) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)(v6 + 244) = 0;
    *(_DWORD *)(v6 + 252) = *(_DWORD *)v4;
    *(_BYTE *)(v6 + 264) ^= v5 & (*(_BYTE *)(v4 + 4) ^ *(_BYTE *)(v6 + 264));
    v9 = *(_BYTE *)(v6 + 264) ^ (*(_BYTE *)(v4 + 4) ^ *(_BYTE *)(v6 + 264)) & 2;
    *(_BYTE *)(v6 + 264) = v9;
    v10 = v9 ^ (*(_BYTE *)(v4 + 4) ^ v9) & 4;
    *(_BYTE *)(v6 + 264) = v10;
    v11 = v10 ^ (*(_BYTE *)(v4 + 4) ^ v10) & 8;
    *(_BYTE *)(v6 + 264) = v11;
    *(_BYTE *)(v6 + 264) = v11 ^ (*(_BYTE *)(v4 + 4) ^ v11) & 0x10;
    v12 = CManipulation::_SendUpdateToRenderThread((CManipulation *)v6, 0, 0LL, 0LL);
    v2 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x96u);
  }
  return v2;
}
