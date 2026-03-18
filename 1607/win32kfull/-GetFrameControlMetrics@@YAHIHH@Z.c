/*
 * XREFs of ?GetFrameControlMetrics@@YAHIHH@Z @ 0x1C006125C
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0060E84 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 * Callees:
 *     ?GFCM_SYSMET@@YAHHH@Z @ 0x1C00614B8 (-GFCM_SYSMET@@YAHHH@Z.c)
 */

__int64 __fastcall GetFrameControlMetrics(unsigned int a1, int a2, int a3)
{
  int v5; // edi
  int v7; // r9d
  __int16 v8; // r10
  __int64 v9; // rax
  __int64 v10; // rbp
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // ebx
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rbx
  int v19; // ebx
  int v20; // ecx
  int v21; // eax
  int v22; // ebx

  v5 = 0;
  v7 = 0;
  v8 = *((_WORD *)&unk_1C02E8400 + 2 * a1 + 1);
  v9 = gpsi + 7140LL;
  if ( !a3 )
    v9 = gpsi + 5652LL;
  v10 = v9 + 16LL * a1;
  switch ( *((_WORD *)&unk_1C02E8400 + 2 * a1) )
  {
    case 1:
      if ( (v8 & 0x80u) != 0 )
      {
        v11 = GFCM_SYSMET(52, a3);
        v12 = 53;
      }
      else if ( (v8 & 0x40) != 0 )
      {
        v19 = GFCM_SYSMET(54, a3);
        if ( (unsigned int)GFCM_SYSMET(30, a3) == v19 )
        {
          v22 = GFCM_SYSMET(55, a3);
          if ( (unsigned int)GFCM_SYSMET(31, a3) == v22 )
          {
            v7 = a1 - 18;
            goto LABEL_14;
          }
        }
        v11 = GFCM_SYSMET(54, a3);
        v12 = 55;
      }
      else
      {
        v11 = GFCM_SYSMET(30, a3);
        v12 = 31;
      }
      v13 = v11;
      v14 = GFCM_SYSMET(v12, a3);
      v5 = v13 - GFCM_SYSMET(45, a3);
      v7 = v14 - 2 * GFCM_SYSMET(46, a3);
      goto LABEL_14;
    case 2:
      goto LABEL_26;
    case 3:
      if ( (v8 & 8) != 0 )
      {
        v20 = 2;
      }
      else
      {
        if ( (v8 & 2) == 0 )
        {
          v16 = GFCM_SYSMET(2, a3);
          v17 = 20;
LABEL_20:
          v5 = v16;
          goto LABEL_21;
        }
        v20 = 21;
      }
      v16 = GFCM_SYSMET(v20, a3);
      v17 = 3;
      goto LABEL_20;
  }
  if ( *((_WORD *)&unk_1C02E8400 + 2 * a1) != 4 )
  {
    if ( *((_WORD *)&unk_1C02E8400 + 2 * a1) != 5 )
    {
      if ( *((unsigned __int16 *)&unk_1C02E8400 + 2 * a1) != 0xFFFF )
        goto LABEL_14;
      if ( (v8 & 1) == 0 )
      {
        v7 = GFCM_SYSMET(31, a3);
        v5 = v7;
        goto LABEL_14;
      }
      v21 = GFCM_SYSMET(30, a3);
      v17 = 31;
      v5 = 4 * v21;
LABEL_21:
      v7 = GFCM_SYSMET(v17, a3);
      goto LABEL_14;
    }
LABEL_26:
    v18 = gdpiSystem;
    if ( a3 )
      v18 = gdpi96;
    if ( (v8 & 0x18) != 0 )
      v7 = *(_DWORD *)(v18 + 68);
    else
      v7 = (((unsigned __int16)GFCM_SYSMET(6, a3) + *(_WORD *)(v18 + 60) + (unsigned __int16)*(_DWORD *)(v18 + 52)) & 0xFFFE)
         - 1;
    goto LABEL_9;
  }
  if ( (v8 & 0x408) != 8 )
  {
    v7 = *(unsigned __int16 *)(gpsi + 8678LL) / 8 + 1;
LABEL_9:
    v5 = v7;
    goto LABEL_14;
  }
  v7 = a1 - 8;
LABEL_14:
  if ( v5 > a2 )
    a2 = v5;
  *(_DWORD *)(v10 + 8) = v5;
  *(_DWORD *)(v10 + 12) = v7;
  return (unsigned int)a2;
}
