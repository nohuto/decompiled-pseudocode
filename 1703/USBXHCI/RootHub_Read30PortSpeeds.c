/*
 * XREFs of RootHub_Read30PortSpeeds @ 0x1C000AAD0
 * Callers:
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C000A8D0 (RootHub_UcxEvtGet30PortInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0024A24 (WPP_RECORDER_SF_DDDD.c)
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
  int v8; // r8d
  int v10; // ebx
  unsigned __int16 v11; // r10
  unsigned __int16 v12; // si
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rdx
  unsigned __int16 v16; // r10
  __int64 v17; // rdx
  unsigned __int16 v18; // r10
  __int64 v19; // rcx
  unsigned __int16 v20; // r10
  unsigned __int16 v22; // r10
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // r15
  int v26; // edx
  int v27; // eax
  unsigned __int16 v28; // r9
  int v29; // edx

  v8 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  *a3 = 0;
  if ( a6 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(a5 + 4LL * v12);
      v14 = v13 & 0xF;
      if ( _bittest(&v10, v14) )
        break;
      v10 |= 1 << v14;
      if ( v11 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v11) = 0;
        v15 = a2 + 4LL * v11;
        if ( a7 && v14 > 4 )
          v8 = 1;
        *(_DWORD *)v15 = v13 & 0x30 | (v8 << 14);
        *(_WORD *)(v15 + 2) = HIWORD(v13);
        *(_DWORD *)v15 = v14 | *(_DWORD *)v15 & 0xFFFFFFF0;
        v8 = 0;
      }
      if ( (unsigned __int8)v13 >> 6 == 2 )
      {
        if ( v11 < a4 )
          *(_DWORD *)(a2 + 4LL * v11) = *(_DWORD *)(a2 + 4LL * v11) & 0xFFFFFF3F | 0x40;
        v22 = v11 + 1;
        if ( ++v12 >= a6 )
        {
          v27 = v13 & 0xF;
          v28 = 190;
          goto LABEL_48;
        }
        v23 = *(_DWORD *)(a5 + 4LL * v12);
        v24 = v23 & 0xF;
        if ( v24 != v14 || (v23 & 0xC0) != 0xC0 )
        {
          v29 = a1;
          LOBYTE(v29) = 2;
          WPP_RECORDER_SF_DDDD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
            v29,
            10,
            191,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v14,
            (unsigned __int8)v13 >> 6,
            v24,
            (unsigned __int8)v23 >> 6);
          return 3221225485LL;
        }
        if ( v22 < a4 )
        {
          *(_DWORD *)(a2 + 4LL * v22) = 0;
          v25 = a2 + 4LL * v22;
          v26 = a7 && v14 > 4;
          *(_DWORD *)v25 = v23 & 0x30 | (v26 << 14);
          *(_WORD *)(v25 + 2) = HIWORD(v23);
          *(_DWORD *)v25 = v24 | *(_DWORD *)v25 & 0xFFFFFFF0 | 0xC0;
        }
        v11 = v22 + 1;
      }
      else if ( (unsigned __int8)v13 >> 6 )
      {
        if ( (v13 & 0xC0) == 0xC0 )
        {
          v27 = v13 & 0xF;
          v28 = 192;
LABEL_48:
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
            2u,
            0xAu,
            v28,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v27);
          return 3221225485LL;
        }
      }
      else
      {
        if ( v11 < a4 )
          *(_DWORD *)(a2 + 4LL * v11) &= 0xFFFFFF3F;
        v16 = v11 + 1;
        if ( v16 < a4 )
        {
          *(_DWORD *)(a2 + 4LL * v16) = 0;
          v17 = a2 + 4LL * v16;
          if ( a7 && v14 > 4 )
            v8 = 1;
          *(_DWORD *)v17 = v13 & 0x30 | (v8 << 14);
          *(_WORD *)(v17 + 2) = HIWORD(v13);
          *(_DWORD *)v17 = v13 & 0xF | *(_DWORD *)v17 & 0xFFFFFFB0 | 0x80;
        }
        v11 = v16 + 1;
      }
      ++v12;
      v8 = 0;
      if ( v12 >= a6 )
        goto LABEL_15;
    }
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      0xAu,
      0xBDu,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      *(_DWORD *)(a5 + 4LL * v12) & 0xF);
    return 3221225485LL;
  }
  else
  {
LABEL_15:
    if ( (v10 & 4) == 0 )
    {
      if ( v11 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v11) = 52;
        *(_WORD *)(a2 + 4LL * v11 + 2) = 5;
      }
      v18 = v11 + 1;
      if ( v18 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v18) = 180;
        *(_WORD *)(a2 + 4LL * v18 + 2) = 5;
      }
      v11 = v18 + 1;
    }
    if ( (v10 & 5) == 0 )
    {
      if ( v11 < a4 )
      {
        v19 = a2 + 4LL * v11;
        *(_DWORD *)v19 = ((a7 != 0) << 14) | 0x35;
        *(_WORD *)(v19 + 2) = 10;
      }
      v20 = v11 + 1;
      if ( v20 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v20) = ((a7 != 0) << 14) | 0xB5;
        *(_WORD *)(a2 + 4LL * v20 + 2) = 10;
      }
      v11 = v20 + 1;
    }
    *a3 = v11;
    return 0LL;
  }
}
