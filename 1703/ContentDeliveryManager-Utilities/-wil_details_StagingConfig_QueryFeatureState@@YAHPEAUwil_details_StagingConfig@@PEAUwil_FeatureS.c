/*
 * XREFs of ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x180007AFC
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180009C58 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_StagingConfig_QueryFeatureState(
        struct wil_details_StagingConfig *a1,
        struct wil_FeatureState *a2,
        int a3,
        int a4)
{
  __int64 v4; // r15
  int v5; // r10d
  __int64 v6; // r11
  int v8; // esi
  int v11; // edx
  unsigned int i; // ebx
  __int64 v13; // xmm0_8
  unsigned int v14; // r11d
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // r9d
  int v19; // r8d
  int v20; // edx
  unsigned int v21; // ecx
  _DWORD *v22; // rax
  __int64 result; // rax
  __int64 v24; // [rsp+0h] [rbp-38h]
  int v25; // [rsp+8h] [rbp-30h]

  v4 = *((_QWORD *)a1 + 3);
  v5 = 0;
  v6 = *((_QWORD *)a1 + 4);
  v8 = v25;
  v11 = 0;
  for ( i = 0; i < *(unsigned __int16 *)(v4 + 4); ++i )
  {
    if ( *(_DWORD *)(v6 + 12LL * i) == a3 )
    {
      if ( a4 && *((_DWORD *)a1 + 12) )
      {
        if ( (*(_BYTE *)(v6 + 12LL * i + 4) & 1) == 0 )
        {
          v13 = *(_QWORD *)(v6 + 12LL * i);
          v8 = *(_DWORD *)(v6 + 12LL * i + 8);
          v14 = 0;
          v24 = v13;
          goto LABEL_13;
        }
      }
      else
      {
        v11 = 1;
        if ( (*(_BYTE *)(v6 + 12LL * i + 4) & 1) != 0 )
        {
          v8 = *(_DWORD *)(v6 + 12LL * i + 8);
          v24 = *(_QWORD *)(v6 + 12LL * i);
          break;
        }
        v8 = *(_DWORD *)(v6 + 12LL * i + 8);
        v24 = *(_QWORD *)(v6 + 12LL * i);
      }
    }
  }
  v14 = 0;
  if ( v11 )
  {
LABEL_13:
    if ( !a4 || (v15 = 12LL, !*((_DWORD *)a1 + 12)) )
      v15 = 8LL;
    v16 = *(_DWORD *)(v15 + v4);
    if ( (v16 & 4) != 0 )
      v17 = HIDWORD(v24) & 0xFFFFCFFF;
    else
      v17 = HIDWORD(v24);
    if ( (v16 & 2) != 0 )
      v17 &= 0xFFFFF3FF;
    if ( (v16 & 1) != 0 )
      v17 &= 0xFFFFFCFF;
    if ( (v16 & 8) != 0 )
    {
      v17 &= 0xC0FFFFFF;
      v8 = 0;
    }
    if ( (_DWORD)v24
      && (((BYTE1(v17) | (unsigned __int8)((v17 >> 10) | (v17 >> 12))) & 3) != 0 || (v17 & 0x3F000000) != 0) )
    {
      *((_DWORD *)a2 + 3) = v8;
      *((_DWORD *)a2 + 2) = v17 >> 30;
      *((_BYTE *)a2 + 4) = HIBYTE(v17) & 0x3F;
      v18 = (v17 >> 12) & 3;
      if ( v18 )
      {
        *(_DWORD *)a2 = v18;
      }
      else
      {
        v19 = (v17 >> 10) & 3;
        if ( v19 )
        {
          *(_DWORD *)a2 = v19;
        }
        else
        {
          v20 = (v17 >> 8) & 3;
          if ( v20 )
            *(_DWORD *)a2 = v20;
        }
      }
      v14 = 1;
    }
  }
  v21 = 0;
  v22 = (_DWORD *)*((_QWORD *)a1 + 5);
  if ( *(_WORD *)(v4 + 6) )
  {
    while ( *v22 != a3 )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)(v4 + 6) )
        goto LABEL_40;
    }
    v5 = 1;
  }
LABEL_40:
  result = v14;
  *((_DWORD *)a2 + 4) = v5;
  return result;
}
