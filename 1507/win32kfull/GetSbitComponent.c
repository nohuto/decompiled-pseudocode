/*
 * XREFs of GetSbitComponent @ 0x1C02D9864
 * Callers:
 *     GetSbitComponent @ 0x1C02D9864 (GetSbitComponent.c)
 *     sbit_GetBitmap @ 0x1C02DB5F4 (sbit_GetBitmap.c)
 * Callees:
 *     sfac_ShaveSbitMetrics @ 0x1C01108EC (sfac_ShaveSbitMetrics.c)
 *     sfac_GetSbitMetrics @ 0x1C0111354 (sfac_GetSbitMetrics.c)
 *     sfac_SearchForBitmap @ 0x1C011153C (sfac_SearchForBitmap.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     sfac_GetSbitBitmap @ 0x1C02D88EC (sfac_GetSbitBitmap.c)
 *     sfac_GetSbitComponentInfo @ 0x1C02D8D48 (sfac_GetSbitComponentInfo.c)
 *     ExpandSbitToBytePerPixel @ 0x1C02D95F8 (ExpandSbitToBytePerPixel.c)
 *     GetSbitComponent @ 0x1C02D9864 (GetSbitComponent.c)
 */

__int64 __fastcall GetSbitComponent(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5,
        unsigned __int16 a6,
        unsigned __int16 a7,
        __int16 a8,
        __int16 a9,
        __int16 a10,
        __int16 a11,
        unsigned __int16 a12,
        unsigned __int16 a13,
        unsigned __int16 a14,
        unsigned __int16 a15,
        __int16 a16,
        unsigned __int16 a17,
        unsigned int a18,
        void *a19,
        int a20,
        __int64 a21)
{
  unsigned __int16 v21; // di
  unsigned __int64 v22; // rbx
  __int64 result; // rax
  unsigned __int16 v24; // si
  unsigned __int16 v25; // ax
  bool i; // cf
  __int16 v27; // [rsp+50h] [rbp-E8h]
  unsigned __int16 v28[2]; // [rsp+B8h] [rbp-80h] BYREF
  unsigned __int16 v29; // [rsp+BCh] [rbp-7Ch] BYREF
  unsigned __int16 v30[2]; // [rsp+C0h] [rbp-78h] BYREF
  __int16 v31; // [rsp+C4h] [rbp-74h] BYREF
  _WORD v32[2]; // [rsp+C8h] [rbp-70h] BYREF
  __int16 v33; // [rsp+CCh] [rbp-6Ch] BYREF
  __int16 v34[2]; // [rsp+D0h] [rbp-68h] BYREF
  __int16 v35; // [rsp+D4h] [rbp-64h] BYREF
  _WORD v36[2]; // [rsp+D8h] [rbp-60h] BYREF
  _WORD v37[2]; // [rsp+DCh] [rbp-5Ch] BYREF
  __int16 v38[2]; // [rsp+E0h] [rbp-58h] BYREF
  __int16 v39; // [rsp+E4h] [rbp-54h] BYREF
  unsigned __int16 v40[2]; // [rsp+E8h] [rbp-50h] BYREF
  _WORD v41[2]; // [rsp+ECh] [rbp-4Ch] BYREF
  _WORD v42[2]; // [rsp+F0h] [rbp-48h] BYREF
  __int16 v43; // [rsp+F4h] [rbp-44h] BYREF
  int v44; // [rsp+F8h] [rbp-40h] BYREF
  int v45; // [rsp+FCh] [rbp-3Ch] BYREF
  int v46; // [rsp+100h] [rbp-38h] BYREF
  int v47; // [rsp+104h] [rbp-34h] BYREF
  _WORD v48[2]; // [rsp+108h] [rbp-30h] BYREF
  int v49; // [rsp+10Ch] [rbp-2Ch] BYREF
  _WORD v50[2]; // [rsp+110h] [rbp-28h] BYREF
  _DWORD v51[5]; // [rsp+114h] [rbp-24h] BYREF

  v21 = a17;
  LODWORD(v22) = 0;
  v46 = 0;
  v44 = 0;
  v45 = 0;
  v28[0] = 0;
  v40[0] = 0;
  v32[0] = 0;
  v31 = 0;
  v34[0] = 0;
  v38[0] = 0;
  v29 = 0;
  v30[0] = 0;
  a11 = 0;
  v43 = 0;
  v35 = 0;
  v39 = 0;
  v33 = 0;
  v42[0] = 0;
  v41[0] = 0;
  v36[0] = 0;
  v37[0] = 0;
  v47 = 0;
  v51[0] = 0;
  v49 = 0;
  result = sfac_GetSbitBitmap(
             a1,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             v27,
             a12,
             a13,
             a15,
             a17,
             a18,
             (unsigned __int64)a19,
             v28);
  if ( !(_DWORD)result )
  {
    v24 = v28[0];
    if ( v21 == 1 )
    {
      if ( !v28[0] )
        return 0LL;
    }
    else if ( !v28[0] )
    {
      result = ExpandSbitToBytePerPixel(a6, a7, a15, a16, v21, a18, (unsigned __int64)a19, a20, a21);
      if ( (_DWORD)result )
        return result;
      return 0LL;
    }
    if ( (unsigned int)a14 + 1 > 0x14 )
      return 5131LL;
    if ( v21 != 1 )
    {
      v22 = a15 * (unsigned __int64)a6;
      if ( v22 > 0xFFFFFFFF || (unsigned int)v22 > a18 )
        return 6656LL;
    }
    v25 = 0;
    for ( i = v28[0] != 0; ; i = (unsigned __int16)(v28[0] + 1) < v24 )
    {
      v28[0] = v25;
      if ( !i )
        break;
      if ( v21 != 1 )
      {
        memset(a19, 0, (unsigned int)v22);
        v25 = v28[0];
      }
      result = sfac_GetSbitComponentInfo(a1, v25, a4, a5, v40, v32, &v31);
      if ( (_DWORD)result )
        return result;
      result = sfac_SearchForBitmap(
                 a1,
                 v40[0],
                 a2,
                 &v47,
                 v34,
                 v38,
                 (unsigned __int32 *)&v46,
                 &v29,
                 (unsigned __int32 *)&v44,
                 (unsigned __int32 *)&v45);
      if ( (_DWORD)result )
        return result;
      if ( !v47 )
        return 6145LL;
      result = sfac_GetSbitMetrics(a1, v34[0], v38[0], v46, v30, &a11, v42, v41, v36, v37, v50, v48, v51, &v49);
      if ( (_DWORD)result )
        return result;
      result = sfac_ShaveSbitMetrics(
                 a1,
                 v29,
                 v44,
                 v45,
                 v21,
                 v30,
                 (unsigned __int16 *)&a11,
                 &v43,
                 &v35,
                 &v39,
                 &v33,
                 v42,
                 v41,
                 v36,
                 v37);
      if ( (_DWORD)result )
        return result;
      result = GetSbitComponent(
                 a1,
                 a2,
                 v29,
                 v44,
                 v45,
                 v30[0],
                 a11,
                 v43,
                 v35,
                 v39,
                 v33,
                 a12 + v32[0] + v43,
                 a13 + v31 + v39,
                 a14 + 1,
                 a15,
                 a16,
                 v21,
                 a18,
                 a19,
                 a20,
                 a21);
      if ( (_DWORD)result )
        return result;
      v25 = v28[0] + 1;
    }
    return 0LL;
  }
  return result;
}
