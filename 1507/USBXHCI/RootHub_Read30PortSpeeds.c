/*
 * XREFs of RootHub_Read30PortSpeeds @ 0x1C0007430
 * Callers:
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C0007230 (RootHub_UcxEvtGet30PortInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C001F854 (WPP_RECORDER_SF_DDDD.c)
 */

__int64 __fastcall RootHub_Read30PortSpeeds(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 a6,
        char a7)
{
  int v9; // ebx
  unsigned __int16 v10; // r10
  unsigned __int16 v11; // si
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // r8
  char v15; // dl
  int v16; // ecx
  unsigned __int16 v17; // r10
  __int64 v18; // r8
  char v19; // dl
  unsigned __int16 v20; // r10
  __int64 v21; // rcx
  unsigned __int16 v22; // r10
  unsigned __int16 v24; // r10
  int v25; // ecx
  __int64 v26; // r8
  bool v27; // dl
  unsigned __int16 v28; // r9
  int v29; // edx

  *a3 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( a6 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(a5 + 4LL * v11);
      v13 = v12 & 0xF;
      if ( _bittest(&v9, v13) )
        break;
      v9 |= 1 << v13;
      if ( v10 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v10) = 0;
        v14 = a2 + 4LL * v10;
        if ( !a7 || (v15 = 1, v13 <= 4) )
          v15 = 0;
        *(_DWORD *)v14 = v12 & 0x30 | ((v15 & 3) << 14);
        *(_WORD *)(v14 + 2) = HIWORD(v12);
        *(_DWORD *)v14 = v13 | *(_DWORD *)v14 & 0xFFFFFFF0;
      }
      v16 = (unsigned __int8)v12 >> 6;
      if ( v16 == 2 )
      {
        if ( v10 < a4 )
          *(_DWORD *)(a2 + 4LL * v10) = *(_DWORD *)(a2 + 4LL * v10) & 0xFFFFFF3F | 0x40;
        v24 = v10 + 1;
        if ( ++v11 >= a6 )
        {
          v28 = 190;
          goto LABEL_51;
        }
        v25 = *(_DWORD *)(a5 + 4LL * v11);
        if ( (v25 & 0xF) != v13 || (v25 & 0xC0) != 0xC0 )
        {
          v29 = (unsigned __int8)v12 >> 6;
          LOBYTE(v29) = 2;
          WPP_RECORDER_SF_DDDD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
            v29,
            10,
            191,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v12 & 0xF,
            (unsigned __int8)v12 >> 6,
            v25 & 0xF,
            (unsigned __int8)v25 >> 6);
          return 3221225485LL;
        }
        if ( v24 < a4 )
        {
          *(_DWORD *)(a2 + 4LL * v24) = 0;
          v26 = a2 + 4LL * v24;
          v27 = a7 && v13 > 4;
          *(_DWORD *)v26 = v25 & 0x30 | ((v27 & 3) << 14);
          *(_WORD *)(v26 + 2) = HIWORD(v25);
          *(_DWORD *)v26 = v25 & 0xF | *(_DWORD *)v26 & 0xFFFFFFF0 | 0xC0;
        }
        v10 = v24 + 1;
      }
      else if ( (unsigned __int8)v12 >> 6 )
      {
        if ( v16 == 3 )
        {
          v28 = 192;
          goto LABEL_51;
        }
      }
      else
      {
        if ( v10 < a4 )
          *(_DWORD *)(a2 + 4LL * v10) &= 0xFFFFFF3F;
        v17 = v10 + 1;
        if ( v17 < a4 )
        {
          *(_DWORD *)(a2 + 4LL * v17) = 0;
          v18 = a2 + 4LL * v17;
          if ( !a7 || (v19 = 1, v13 <= 4) )
            v19 = 0;
          *(_DWORD *)v18 = v12 & 0x30 | ((v19 & 3) << 14);
          *(_WORD *)(v18 + 2) = HIWORD(v12);
          *(_DWORD *)v18 = v12 & 0xF | *(_DWORD *)v18 & 0xFFFFFFB0 | 0x80;
        }
        v10 = v17 + 1;
      }
      if ( ++v11 >= a6 )
        goto LABEL_17;
    }
    v28 = 189;
LABEL_51:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      0xAu,
      v28,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v12 & 0xF);
    return 3221225485LL;
  }
  else
  {
LABEL_17:
    if ( (v9 & 4) == 0 )
    {
      if ( v10 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v10) = 52;
        *(_WORD *)(a2 + 4LL * v10 + 2) = 5;
      }
      v20 = v10 + 1;
      if ( v20 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v20) = 180;
        *(_WORD *)(a2 + 4LL * v20 + 2) = 5;
      }
      v10 = v20 + 1;
    }
    if ( (v9 & 5) == 0 )
    {
      if ( v10 < a4 )
      {
        v21 = a2 + 4LL * v10;
        *(_DWORD *)v21 = ((a7 != 0) << 14) | 0x35;
        *(_WORD *)(v21 + 2) = 10;
      }
      v22 = v10 + 1;
      if ( v22 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v22) = ((a7 != 0) << 14) | 0xB5;
        *(_WORD *)(a2 + 4LL * v22 + 2) = 10;
      }
      v10 = v22 + 1;
    }
    *a3 = v10;
    return 0LL;
  }
}
