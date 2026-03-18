/*
 * XREFs of ?ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT@@PEBXI@Z @ 0x18010AFF4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@_N@Z @ 0x18014BAF0 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@_N@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessApplyPositionShift(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT *a3,
        char *a4)
{
  unsigned int v4; // esi
  unsigned int v7; // r14d
  float *v8; // rbx
  int v9; // ecx
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  int v13; // eax
  float v14; // xmm0_4
  const struct D2DVector3 *v15; // rdx
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  int v19; // eax
  float v20; // xmm0_4
  __int64 v22; // [rsp+30h] [rbp-30h] BYREF
  int v23; // [rsp+38h] [rbp-28h]
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  int v25; // [rsp+48h] [rbp-18h]

  v4 = 0;
  v7 = 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    v8 = (float *)(a4 + 4);
    do
    {
      v9 = *((_DWORD *)v8 - 1);
      if ( v9 )
      {
        if ( v9 != 1 )
        {
          v4 = -2003303421;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x37Du);
          return v4;
        }
        v10 = *((float *)this + 33);
        if ( v10 >= v8[1] )
        {
          v11 = v10 + *v8;
          v12 = *((float *)this + 39);
          v13 = *((_DWORD *)this + 34);
          v22 = *((_QWORD *)this + 16);
          v14 = *((float *)this + 36);
          v23 = v13;
          if ( v11 <= v12 )
          {
            if ( v11 < v14 )
              *((float *)&v22 + 1) = v14;
            else
              *((float *)&v22 + 1) = v11;
          }
          else
          {
            *((float *)&v22 + 1) = v12;
          }
          v15 = (const struct D2DVector3 *)&v22;
LABEL_19:
          CInteractionTracker::SetRequestedPosition(this, v15, 0);
        }
      }
      else
      {
        v16 = *((float *)this + 32);
        if ( v16 >= v8[1] )
        {
          v17 = v16 + *v8;
          v18 = *((float *)this + 38);
          v19 = *((_DWORD *)this + 34);
          v24 = *((_QWORD *)this + 16);
          v20 = *((float *)this + 35);
          v25 = v19;
          if ( v17 <= v18 )
          {
            if ( v17 < v20 )
              *(float *)&v24 = v20;
            else
              *(float *)&v24 = v17;
          }
          else
          {
            *(float *)&v24 = v18;
          }
          v15 = (const struct D2DVector3 *)&v24;
          goto LABEL_19;
        }
      }
      v8 += 3;
      ++v7;
    }
    while ( v7 < *((_DWORD *)a3 + 2) );
  }
  return v4;
}
