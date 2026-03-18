/*
 * XREFs of Isoch_ProcessSegment @ 0x1C002B490
 * Callers:
 *     Isoch_CalculateBytesTransferred @ 0x1C002A8C0 (Isoch_CalculateBytesTransferred.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C0027E34 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDL @ 0x1C002C698 (WPP_RECORDER_SF_DDDDL.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C002C8C4 (WPP_RECORDER_SF_DDL.c)
 */

bool __fastcall Isoch_ProcessSegment(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        int *a7)
{
  __int64 v7; // rbx
  bool v11; // si
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // r12
  __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  unsigned int v17; // r8d
  int v18; // r9d
  int v19; // edx
  unsigned __int64 v20; // rbx
  int v21; // edx
  int v22; // ebx
  __int64 v23; // rcx
  int v25; // [rsp+20h] [rbp-68h]
  __int64 v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int64 v28; // [rsp+38h] [rbp-50h]
  __int64 v29; // [rsp+40h] [rbp-48h]
  __int64 v30; // [rsp+98h] [rbp+10h]
  __int64 v31; // [rsp+A8h] [rbp+20h]

  v7 = *(_QWORD *)(a4 + 24);
  v11 = 0;
  v31 = *(_QWORD *)(a4 + 16);
  v30 = *a2;
  v12 = *(_DWORD *)(a4 + 40) & 0xFFFFFFF0;
  v13 = 16LL * a5;
  v14 = v12 + v31 - 16;
  v15 = v13 + v7;
  v16 = v13 + v31;
  if ( v13 + v31 > v14 )
    return v11;
  while ( 1 )
  {
    v11 = v15 == *(_QWORD *)a3;
    v17 = (unsigned __int16)*(_DWORD *)(v16 + 12) >> 10;
    if ( v17 == 1 || v17 == 5 )
      break;
    if ( v17 == 6 )
      goto LABEL_45;
    if ( v17 != 7 )
    {
      v18 = 32;
LABEL_7:
      v19 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_DDL(
        *(_QWORD *)(a1[7] + 80LL),
        v19,
        v17,
        v18,
        v25,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL),
        v17);
      goto LABEL_31;
    }
    if ( v15 == *(_QWORD *)a3 )
      goto LABEL_34;
    *a7 = 0;
LABEL_32:
    v16 += 16LL;
    v15 += 16LL;
    if ( v16 > v14 )
      return v11;
  }
  if ( v15 == *(_QWORD *)a3 )
  {
    v17 = *(unsigned __int8 *)(a3 + 11);
    if ( v17 <= 0x1A )
    {
      if ( v17 != 26 )
      {
        if ( v17 < 2 )
          goto LABEL_25;
        if ( v17 > 4 && v17 != 6 )
        {
          if ( v17 == 20 )
            goto LABEL_31;
          if ( v17 == 23 )
          {
            if ( !*(_BYTE *)(a1[5] + 215LL) )
              goto LABEL_31;
            if ( (*(_DWORD *)(v16 + 8) & 0x1FFFFu) < (*(_DWORD *)(a3 + 8) & 0xFFFFFFu) )
              WPP_RECORDER_SF_DDDD(
                *(_QWORD *)(a1[7] + 80LL),
                2u,
                0xDu,
                0x1Eu,
                (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids);
            goto LABEL_28;
          }
LABEL_25:
          v18 = 31;
          goto LABEL_7;
        }
      }
LABEL_26:
      if ( (*(_DWORD *)(v16 + 8) & 0x1FFFFu) < (*(_DWORD *)(a3 + 8) & 0xFFFFFFu) )
        WPP_RECORDER_SF_DDDDL(
          *(_QWORD *)(a1[7] + 80LL),
          *(unsigned __int8 *)(a1[6] + 135LL),
          v17,
          *(_DWORD *)(a3 + 8) & 0xFFFFFF,
          v25,
          *(_BYTE *)(a1[6] + 135LL),
          *(_DWORD *)(a1[7] + 144LL),
          *(_BYTE *)(v16 + 8),
          *(_BYTE *)(a3 + 8),
          *(_BYTE *)(a3 + 11));
LABEL_28:
      *a7 += (*(_DWORD *)(v16 + 8) & 0x1FFFF) - (*(_DWORD *)(a3 + 8) & 0xFFFFFF);
      goto LABEL_31;
    }
    if ( v17 == 27 )
      goto LABEL_31;
    if ( v17 != 28 )
    {
      if ( v17 != 31 && v17 != 36 )
        goto LABEL_25;
      goto LABEL_26;
    }
    *a7 = *(_DWORD *)(a3 + 8) & 0xFFFFFF;
  }
  else
  {
    *a7 += *(_DWORD *)(v16 + 8) & 0x1FFFF;
  }
LABEL_31:
  if ( !v11 )
    goto LABEL_32;
LABEL_34:
  v20 = v16;
  if ( v16 >= v14 )
    goto LABEL_45;
  while ( 2 )
  {
    if ( (unsigned __int8)HIBYTE(*(_WORD *)(v20 + 12)) >> 2 == 1
      || (unsigned __int8)HIBYTE(*(_WORD *)(v20 + 12)) >> 2 == 5 )
    {
LABEL_40:
      v20 += 16LL;
      if ( v20 >= v14 )
        goto LABEL_45;
      continue;
    }
    break;
  }
  if ( (unsigned __int8)HIBYTE(*(_WORD *)(v20 + 12)) >> 2 == 6 )
    goto LABEL_45;
  if ( (unsigned __int8)HIBYTE(*(_WORD *)(v20 + 12)) >> 2 != 7 )
  {
    v21 = *(unsigned __int8 *)(a1[6] + 135LL);
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_DDL(
      *(_QWORD *)(a1[7] + 80LL),
      v21,
      (unsigned __int8)HIBYTE(*(_WORD *)(v20 + 12)) >> 2,
      34,
      v25,
      *(_BYTE *)(a1[6] + 135LL),
      *(_DWORD *)(a1[7] + 144LL),
      (unsigned __int8)HIBYTE(*(_WORD *)(v20 + 12)) >> 2);
    goto LABEL_40;
  }
  v22 = *(unsigned __int16 *)(v20 + 2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v23 = a1[7];
    LODWORD(v29) = v22 + 1;
    LODWORD(v28) = *((_DWORD *)a2 + 12);
    LODWORD(v27) = *(_DWORD *)(v23 + 144);
    LODWORD(v26) = *(unsigned __int8 *)(a1[6] + 135LL);
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(v23 + 80),
      5u,
      0xDu,
      0x21u,
      (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
      v26,
      v27,
      v28,
      v29);
  }
  *(_DWORD *)(v30 + 84) = v22 + 1;
  *((_DWORD *)a2 + 12) = v22 + 1;
LABEL_45:
  if ( v11 )
    *a6 = (__int64)(v16 - v31) >> 4;
  return v11;
}
