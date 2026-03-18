/*
 * XREFs of ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x1C0261CE0
 * Callers:
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C02617FC (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall vSpDwmMaskToARGB(struct _SURFOBJ *a1, struct _SURFOBJ *a2, int *a3)
{
  __int64 cx; // rcx
  char *v6; // rdx
  int *v7; // r12
  char *pvScan0; // rsi
  LONG v9; // r9d
  char *v10; // r11
  int v11; // r13d
  __int64 v12; // r12
  char *v13; // rbx
  __int32 *v14; // r14
  __int32 v15; // r8d
  __int32 v16; // eax
  __int64 lDelta; // rax
  char *v18; // rbx
  char *v19; // r11
  unsigned int *v20; // r8
  __int64 v21; // r15
  unsigned int *v22; // rdx
  char *v23; // r9
  __int64 v24; // r14
  unsigned int v25; // eax
  __int32 v26; // eax
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-68h]
  __int64 v29; // [rsp+8h] [rbp-60h]
  __m128i si128; // [rsp+18h] [rbp-50h]

  cx = a1->sizlBitmap.cx;
  v6 = 0LL;
  v7 = a3;
  pvScan0 = (char *)a1->pvScan0;
  v9 = a1->sizlBitmap.cy >> 1;
  v10 = &pvScan0[v9 * a1->lDelta];
  if ( a2 )
    v6 = (char *)a2->pvScan0;
  v28 = cx;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffff0000000000ffffffff000000);
  v11 = a2 == 0LL;
  if ( v9 > 0 )
  {
    v12 = (unsigned int)v9;
    do
    {
      v13 = 0LL;
      if ( v6 )
        v13 = v6;
      if ( cx > 0 )
      {
        v29 = cx;
        v14 = (__int32 *)v10;
        do
        {
          if ( v13 )
            v15 = *(__int32 *)((char *)v14 + v13 - v10);
          else
            v15 = *v14;
          v16 = si128.m128i_i32[2 * (*(__int32 *)((char *)v14 + pvScan0 - v10) & 1) + (v15 & 1)];
          *v14++ = v16;
          v11 |= v16 == -1;
          --v29;
        }
        while ( v29 );
        cx = v28;
      }
      if ( v6 )
        v6 += a2->lDelta;
      lDelta = a1->lDelta;
      pvScan0 += lDelta;
      v10 += lDelta;
      --v12;
    }
    while ( v12 );
    v7 = a3;
  }
  if ( v11 )
    goto LABEL_34;
  if ( !a2 )
    goto LABEL_34;
  v18 = (char *)a1->pvScan0;
  v19 = (char *)a2->pvScan0;
  v20 = (unsigned int *)&v18[v9 * a1->lDelta];
  if ( v9 <= 0 )
    goto LABEL_34;
  v21 = (unsigned int)v9;
  do
  {
    if ( cx <= 0 )
      goto LABEL_33;
    v22 = v20;
    v23 = (char *)(v19 - (char *)v20);
    v24 = cx;
    do
    {
      if ( v19 )
        v25 = *(unsigned int *)((char *)v22 + (_QWORD)v23);
      else
        v25 = *v22;
      v26 = si128.m128i_i32[2 * (*(_DWORD *)&v18[(char *)v22 - (char *)v20] & 1) + (v25 & 1)];
      if ( v26 == -16777216 )
        goto LABEL_30;
      if ( v26 )
      {
        if ( v26 != 0xFFFFFF )
          goto LABEL_31;
LABEL_30:
        *v22 = *(unsigned int *)((char *)v22 + (_QWORD)v23) | 0xFF000000;
        goto LABEL_31;
      }
      *v22 = 0;
LABEL_31:
      ++v22;
      --v24;
    }
    while ( v24 );
    cx = v28;
LABEL_33:
    v19 += a2->lDelta;
    v27 = a1->lDelta;
    v18 += v27;
    v20 = (unsigned int *)((char *)v20 + v27);
    --v21;
  }
  while ( v21 );
LABEL_34:
  *v7 = v11;
}
