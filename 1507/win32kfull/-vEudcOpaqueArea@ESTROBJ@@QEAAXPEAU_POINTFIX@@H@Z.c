/*
 * XREFs of ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C00230F0
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C001E8B0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     AdjustBoundingBox @ 0x1C028A880 (AdjustBoundingBox.c)
 */

void __fastcall ESTROBJ::vEudcOpaqueArea(ESTROBJ *this, struct _POINTFIX *a2, int a3)
{
  __int64 *v3; // rax
  __int64 v7; // r8
  int v8; // esi
  __int64 v9; // r14
  int v10; // r10d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // r11d
  int v17; // r8d
  int v18; // r14d
  int v19; // edx
  int v20; // esi
  int v21; // r15d
  int v22; // ecx
  int v23; // eax
  int v24; // r8d
  int v25; // r12d
  int v26; // edx
  int v27; // ecx
  int v28; // r12d
  int v29; // r8d
  int v30; // edx
  int v31; // ecx
  __int128 v32; // [rsp+30h] [rbp-20h] BYREF
  __int64 v33; // [rsp+40h] [rbp-10h] BYREF
  __int64 v34; // [rsp+48h] [rbp-8h] BYREF
  int v35; // [rsp+90h] [rbp+40h] BYREF
  int v36; // [rsp+A8h] [rbp+58h] BYREF

  v3 = (__int64 *)*((_QWORD *)this + 7);
  v36 = 0;
  v35 = 0;
  v34 = 0LL;
  v7 = *v3;
  v8 = 0;
  v33 = 0LL;
  if ( *(_DWORD *)(v7 + 848) + 4 <= 0 )
    return;
  v9 = -16LL;
  do
  {
    switch ( v8 )
    {
      case 0:
        goto LABEL_9;
      case 1:
        if ( !*((_DWORD *)this + 63) )
          goto LABEL_9;
        v14 = *((_QWORD *)this + 7);
        v15 = *(_QWORD *)(*(_QWORD *)v14 + 728LL);
        goto LABEL_22;
      case 2:
        if ( !*((_DWORD *)this + 64) )
          goto LABEL_9;
        v14 = *((_QWORD *)this + 7);
        v15 = *(_QWORD *)(*(_QWORD *)v14 + 736LL);
LABEL_22:
        if ( !v15 )
          goto LABEL_9;
        *(_QWORD *)&v32 = v15;
        goto LABEL_24;
      case 3:
        if ( !*((_DWORD *)this + 65) )
          goto LABEL_9;
        v14 = *((_QWORD *)this + 7);
        v15 = *(_QWORD *)(*(_QWORD *)v14 + 744LL);
        goto LABEL_22;
    }
    v12 = *((_QWORD *)this + 34);
    if ( v12 )
    {
      if ( *(_DWORD *)(v9 + v12) )
      {
        v14 = *((_QWORD *)this + 7);
        v13 = *(_QWORD *)(*(_QWORD *)v14 + 752LL);
        if ( v13 )
        {
          if ( *(_QWORD *)(v13 + 8LL * (unsigned int)(v8 - 4)) )
          {
            *(_QWORD *)&v32 = *(_QWORD *)(v13 + 8LL * (unsigned int)(v8 - 4));
LABEL_24:
            AdjustBoundingBox(
              v14,
              (unsigned int)&v32,
              (unsigned int)&v36,
              (unsigned int)&v35,
              (__int64)&v34,
              (__int64)&v33);
          }
        }
      }
    }
LABEL_9:
    *(_QWORD *)&v32 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
    ++v8;
    v9 += 4LL;
  }
  while ( v8 < *(_DWORD *)(**((_QWORD **)this + 7) + 848LL) + 4 );
  v10 = v36;
  v11 = v35;
  if ( v36 || v35 )
  {
    v16 = v33;
    v17 = v33;
    v18 = v34;
    v19 = v33;
    v20 = HIDWORD(v33);
    v21 = HIDWORD(v34);
    v22 = HIDWORD(v33);
    if ( (int)v34 < (int)v33 )
      v17 = v34;
    v23 = HIDWORD(v33);
    v24 = v17 >> 4;
    v25 = _mm_cvtsi128_si32(*(__m128i *)((char *)this + 12));
    v32 = *(_OWORD *)((char *)this + 12);
    if ( (int)v34 > (int)v33 )
      v19 = v34;
    v26 = (v19 + 15) >> 4;
    if ( SHIDWORD(v34) < SHIDWORD(v33) )
      v22 = HIDWORD(v34);
    v27 = v22 >> 4;
    if ( SHIDWORD(v34) > SHIDWORD(v33) )
      v23 = HIDWORD(v34);
    v28 = v24 + v25;
    v29 = v26 + DWORD2(v32);
    v30 = v27 + DWORD1(v32);
    v31 = ((v23 + 15) >> 4) + HIDWORD(v32);
    if ( v30 < *((_DWORD *)this + 4) )
      *((_DWORD *)this + 4) = v30;
    if ( v31 > *((_DWORD *)this + 6) )
      *((_DWORD *)this + 6) = v31;
    if ( v28 < *((_DWORD *)this + 3) )
      *((_DWORD *)this + 3) = v28;
    if ( v29 > *((_DWORD *)this + 5) )
      *((_DWORD *)this + 5) = v29;
    if ( a3 )
    {
      if ( v10 )
      {
        a2->x += v18;
        a2->y += v21;
        a2[1].x += v18;
        a2[1].y += v21;
      }
      if ( v11 )
      {
        a2[2].x += v16;
        a2[2].y += v20;
        a2[3].x += v16;
        a2[3].y += v20;
      }
    }
  }
}
