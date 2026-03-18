/*
 * XREFs of GetSbitComponent @ 0x1C000A1E0
 * Callers:
 *     sbit_GetBitmap @ 0x1C000A084 (sbit_GetBitmap.c)
 *     GetSbitComponent @ 0x1C000A1E0 (GetSbitComponent.c)
 * Callees:
 *     GetSbitComponent @ 0x1C000A1E0 (GetSbitComponent.c)
 *     sfac_GetSbitBitmap @ 0x1C000A318 (sfac_GetSbitBitmap.c)
 *     sfac_ShaveSbitMetrics @ 0x1C00A1A00 (sfac_ShaveSbitMetrics.c)
 *     sfac_SearchForBitmap @ 0x1C00A479C (sfac_SearchForBitmap.c)
 *     sfac_GetSbitMetrics @ 0x1C00A4CD4 (sfac_GetSbitMetrics.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     sfac_GetSbitComponentInfo @ 0x1C02D9C74 (sfac_GetSbitComponentInfo.c)
 *     ExpandSbitToBytePerPixel @ 0x1C02DA524 (ExpandSbitToBytePerPixel.c)
 */

__int64 __fastcall GetSbitComponent(
        int a1,
        __int64 a2,
        unsigned __int16 a3,
        int a4,
        int a5,
        unsigned __int16 a6,
        unsigned __int16 a7,
        __int16 a8,
        __int16 a9,
        __int16 a10,
        __int16 a11,
        __int16 a12,
        __int16 a13,
        __int16 a14,
        unsigned __int16 a15,
        unsigned __int16 a16,
        __int16 a17,
        int a18,
        void *a19,
        int a20,
        __int64 a21)
{
  __int16 v21; // di
  __int64 result; // rax
  __int16 v23; // [rsp+BCh] [rbp-7Ch]
  __int16 v24; // [rsp+C0h] [rbp-78h]
  __int16 v25; // [rsp+C4h] [rbp-74h]
  __int16 v26; // [rsp+C8h] [rbp-70h]
  __int16 v27; // [rsp+CCh] [rbp-6Ch]
  __int16 v28; // [rsp+D0h] [rbp-68h]
  __int16 v29; // [rsp+D4h] [rbp-64h]
  __int16 v30; // [rsp+D8h] [rbp-60h]
  __int16 v31; // [rsp+DCh] [rbp-5Ch]
  __int16 v32; // [rsp+E0h] [rbp-58h]
  __int16 v33; // [rsp+E4h] [rbp-54h]
  __int16 v34; // [rsp+E8h] [rbp-50h]
  __int16 v35; // [rsp+ECh] [rbp-4Ch]
  __int16 v36; // [rsp+F0h] [rbp-48h]
  __int16 v37; // [rsp+F4h] [rbp-44h]
  int v38; // [rsp+F8h] [rbp-40h]
  int v39; // [rsp+FCh] [rbp-3Ch]
  int v40; // [rsp+100h] [rbp-38h]
  int v41; // [rsp+104h] [rbp-34h]
  int v42; // [rsp+10Ch] [rbp-2Ch]
  int v43; // [rsp+114h] [rbp-24h]

  v21 = a17;
  v40 = 0;
  v38 = 0;
  v39 = 0;
  v34 = 0;
  v26 = 0;
  v25 = 0;
  v28 = 0;
  v32 = 0;
  v23 = 0;
  v24 = 0;
  a11 = 0;
  v37 = 0;
  v29 = 0;
  v33 = 0;
  v27 = 0;
  v36 = 0;
  v35 = 0;
  v30 = 0;
  v31 = 0;
  v41 = 0;
  v43 = 0;
  v42 = 0;
  result = sfac_GetSbitBitmap(a1, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( !(_DWORD)result )
  {
    if ( v21 == 1 )
      return 0LL;
    result = ExpandSbitToBytePerPixel(a6, a7, a15, a16, v21, a18, (__int64)a19, a20, a21);
    if ( !(_DWORD)result )
      return 0LL;
  }
  return result;
}
