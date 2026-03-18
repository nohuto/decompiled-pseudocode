/*
 * XREFs of sfac_ReadComponentData @ 0x1C00C5898
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sfac_ReadComponentData(
        __int64 a1,
        _DWORD *a2,
        int *a3,
        int *a4,
        _DWORD *a5,
        int *a6,
        _WORD *a7,
        _WORD *a8,
        _WORD *a9,
        _WORD *a10,
        _WORD *a11,
        __int64 a12,
        _DWORD *a13,
        int *a14)
{
  __int16 *v14; // r10
  __int16 v17; // dx
  _WORD *v18; // r10
  unsigned __int16 v19; // dx
  __int16 v20; // cx
  char *v21; // r10
  __int16 v22; // ax
  __int16 *v23; // r10
  bool v24; // cf
  __int16 v26; // ax
  __int16 v27; // ax
  __int16 v28; // ax
  int v29; // ecx
  __int16 v30; // ax
  __int16 v31; // ax
  __int16 v32; // ax
  __int16 *v33; // r10
  __int16 v34; // ax
  __int16 v35; // ax

  v14 = *(__int16 **)(a1 + 8);
  *(_OWORD *)a12 = xmmword_1C02E9038;
  *(_OWORD *)(a12 + 16) = xmmword_1C02E9048;
  *(_DWORD *)(a12 + 32) = 0x10000;
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  v17 = *v14;
  v18 = v14 + 1;
  *a13 = 0;
  v19 = __ROR2__(v17, 8);
  *a6 = HIBYTE(v19) & 1;
  *a4 = (v19 >> 9) & 1;
  *a3 = ((unsigned __int8)v19 >> 2) & 1;
  if ( (v19 & 0x800) != 0 )
    *a5 = 1;
  if ( (v19 & 0x1000) != 0 )
    *a5 = 0;
  v20 = *v18;
  v21 = (char *)(v18 + 1);
  *a7 = __ROR2__(v20, 8);
  *a2 = (v19 & 2) != 0;
  if ( (v19 & 1) != 0 )
  {
    v26 = *(_WORD *)v21;
    v21 += 2;
    v27 = __ROR2__(v26, 8);
    if ( (v19 & 2) != 0 )
    {
      *a8 = v27;
      v22 = __ROR2__(*(_WORD *)v21, 8);
      goto LABEL_8;
    }
    *a10 = v27;
    v31 = __ROR2__(*(_WORD *)v21, 8);
  }
  else
  {
    if ( (v19 & 2) != 0 )
    {
      *a8 = *v21;
      v22 = v21[1];
LABEL_8:
      *a9 = v22;
      goto LABEL_9;
    }
    *a10 = (unsigned __int8)*v21;
    v31 = (unsigned __int8)v21[1];
  }
  *a11 = v31;
LABEL_9:
  v23 = (__int16 *)(v21 + 2);
  if ( (v19 & 0xC8) != 0 )
  {
    *a13 = 1;
    if ( (v19 & 0x80u) != 0 )
    {
      v32 = *v23;
      v33 = v23 + 1;
      *(_DWORD *)a12 = 4 * (__int16)__ROR2__(v32, 8);
      v34 = *v33++;
      *(_DWORD *)(a12 + 4) = 4 * (__int16)__ROR2__(v34, 8);
      v35 = *v33;
      v23 = v33 + 1;
      *(_DWORD *)(a12 + 12) = 4 * (__int16)__ROR2__(v35, 8);
    }
    else
    {
      *(_DWORD *)(a12 + 4) = 0;
      *(_DWORD *)(a12 + 12) = 0;
      v28 = *v23++;
      v29 = 4 * (__int16)__ROR2__(v28, 8);
      *(_DWORD *)a12 = v29;
      if ( (v19 & 0x40) == 0 )
      {
        *(_DWORD *)(a12 + 16) = v29;
        goto LABEL_10;
      }
    }
    v30 = *v23++;
    *(_DWORD *)(a12 + 16) = 4 * (__int16)__ROR2__(v30, 8);
  }
LABEL_10:
  *(_QWORD *)(a1 + 8) = v23;
  v24 = *(_QWORD *)(a1 + 16) < (unsigned __int64)v23;
  *a14 = ((unsigned __int8)~(_BYTE)v19 >> 5) & 1;
  return v24 ? 0x140D : 0;
}
