/*
 * XREFs of ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18014A910
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShouldSuggestPositionRounding@CInteractionTracker@@AEBA_NXZ @ 0x18014C138 (-ShouldSuggestPositionRounding@CInteractionTracker@@AEBA_NXZ.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x18015E010 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 */

__int64 __fastcall CInteractionTracker::GetProperty(
        CInteractionTracker *this,
        unsigned int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // esi
  int v6; // eax
  int v7; // xmm0_4
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  bool ShouldSuggestPositionRounding; // al
  CScrollAnimation *v20; // rcx
  float Velocity; // xmm0_4
  CScrollAnimation *v22; // rcx
  CScrollAnimation *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // xmm0_8
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  __int64 v30; // [rsp+30h] [rbp-10h]
  __int64 v31; // [rsp+30h] [rbp-10h]

  v3 = 0;
  if ( a2 > 0x2E )
  {
    v11 = a2 - 47;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
LABEL_19:
        v7 = *((_DWORD *)this + 44);
        goto LABEL_53;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        v25 = *((_QWORD *)this + 16);
        v26 = *((_QWORD *)this + 52);
        v27 = *((_DWORD *)this + 34);
        v31 = v25;
        if ( v26 )
          LODWORD(v31) = *(_DWORD *)(v26 + 408);
        v28 = *((_QWORD *)this + 53);
        if ( v28 )
          HIDWORD(v31) = *(_DWORD *)(v28 + 408);
        *(_QWORD *)a3 = v31;
        *((_DWORD *)a3 + 2) = v27;
        *((_DWORD *)a3 + 16) = 52;
        goto LABEL_54;
      }
      v14 = v13 - 1;
      if ( !v14 )
      {
        v24 = *((_QWORD *)this + 54);
        v7 = *((_DWORD *)this + 44);
        if ( v24 )
          v7 = *(_DWORD *)(v24 + 408);
        goto LABEL_53;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( !v17 )
          {
            ShouldSuggestPositionRounding = CInteractionTracker::ShouldSuggestPositionRounding(this);
            *(_BYTE *)a3 = ShouldSuggestPositionRounding;
            *((_DWORD *)a3 + 16) = 17;
            goto LABEL_54;
          }
          v18 = v17 - 1;
          if ( !v18 )
          {
            *((_DWORD *)a3 + 16) = 52;
            *(_QWORD *)a3 = *(_QWORD *)((char *)this + 164);
            v6 = *((_DWORD *)this + 43);
            goto LABEL_12;
          }
          if ( v18 == 3 )
          {
            v7 = *((_DWORD *)this + 50);
            goto LABEL_53;
          }
          goto LABEL_32;
        }
        v20 = (CScrollAnimation *)*((_QWORD *)this + 54);
        Velocity = FLOAT_1_0;
        if ( v20 )
          Velocity = CScrollAnimation::GetVelocity(v20);
        *(float *)a3 = Velocity;
        *((_DWORD *)a3 + 16) = 18;
      }
      else
      {
        v30 = 0LL;
        v22 = (CScrollAnimation *)*((_QWORD *)this + 52);
        if ( v22 )
          LODWORD(v30) = CScrollAnimation::GetVelocity(v22);
        v23 = (CScrollAnimation *)*((_QWORD *)this + 53);
        if ( v23 )
          HIDWORD(v30) = CScrollAnimation::GetVelocity(v23);
        *(_QWORD *)a3 = v30;
        *((_DWORD *)a3 + 2) = 0;
        *((_DWORD *)a3 + 16) = 52;
      }
      *((_BYTE *)a3 + 68) = 1;
      return v3;
    }
    goto LABEL_52;
  }
  if ( a2 == 46 )
    goto LABEL_13;
  if ( a2 > 0x13 )
  {
    v8 = a2 - 22;
    if ( !v8 )
    {
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *((_QWORD *)this + 19);
      v6 = *((_DWORD *)this + 40);
      goto LABEL_12;
    }
    v9 = v8 - 3;
    if ( !v9 )
    {
      v7 = *((_DWORD *)this + 45);
      goto LABEL_53;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v7 = *((_DWORD *)this + 46);
      goto LABEL_53;
    }
    if ( v10 == 1 )
      goto LABEL_19;
    goto LABEL_32;
  }
  switch ( a2 )
  {
    case 0x13u:
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *(_QWORD *)((char *)this + 140);
      v6 = *((_DWORD *)this + 37);
      goto LABEL_12;
    case 1u:
LABEL_11:
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *((_QWORD *)this + 16);
      v6 = *((_DWORD *)this + 34);
LABEL_12:
      *((_DWORD *)a3 + 2) = v6;
LABEL_54:
      *((_BYTE *)a3 + 68) = 1;
      return v3;
    case 2u:
LABEL_13:
      v7 = *((_DWORD *)this + 32);
LABEL_53:
      *(_DWORD *)a3 = v7;
      *((_DWORD *)a3 + 16) = 18;
      goto LABEL_54;
    case 3u:
LABEL_52:
      v7 = *((_DWORD *)this + 33);
      goto LABEL_53;
  }
  if ( a2 > 3 )
  {
    if ( a2 > 5 )
    {
      if ( a2 == 6 )
        goto LABEL_11;
      goto LABEL_32;
    }
    goto LABEL_19;
  }
LABEL_32:
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x472u);
  return v3;
}
