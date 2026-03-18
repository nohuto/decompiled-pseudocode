/*
 * XREFs of OffTextOut @ 0x1C0102A30
 * Callers:
 *     ?SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C01027A0 (-SpTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02973D0 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C0102D38 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffTextOut(
        __int64 (__fastcall *a1)(__int64, int *, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64, __int64, __int64, int),
        int *a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        struct _CLIPOBJ *a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  _DWORD *v13; // r14
  int v16; // esi
  int v17; // edi
  int v18; // edx
  int v19; // r8d
  int v20; // edi
  unsigned int v21; // ebp
  int v22; // esi
  int v23; // ecx
  int v24; // r8d
  int v26; // ecx
  __int64 v27; // rax
  _DWORD *v28; // r10
  int v29; // r9d
  _DWORD *v30; // rcx
  int v31; // ecx
  _DWORD *v32; // rax
  int v33; // edx
  __int64 v34; // rax
  int v35; // r9d
  _DWORD *v36; // r10
  _DWORD *v37; // rdx
  int v38; // edx
  _DWORD *v39; // rax
  _DWORD v40[4]; // [rsp+80h] [rbp-68h] BYREF

  v13 = a8;
  v16 = *a2;
  v17 = a2[1];
  if ( a8 )
  {
    v40[0] = v16 + *a8;
    v40[2] = v16 + a8[2];
    v40[1] = v17 + a8[1];
    v13 = v40;
    v40[3] = v17 + a8[3];
  }
  v18 = v17;
  v19 = v16;
  if ( v16 || v17 )
  {
    a4[3] += v16;
    a4[5] += v16;
    a4[4] += v17;
    a4[6] += v17;
    v26 = a4[16];
    if ( (v26 & 0x100) != 0 )
    {
      v19 = 16 * v16;
      v18 = 16 * v17;
    }
    v27 = *((_QWORD *)a4 + 9);
    if ( (v26 & 0x1400) != 0 )
    {
      v28 = (_DWORD *)*((_QWORD *)a4 + 27);
      v29 = *a4;
      if ( v29 )
      {
        v30 = (_DWORD *)(v27 + 20);
        do
        {
          if ( *v28 == a4[60] )
          {
            *(v30 - 1) += v19;
            --v29;
            *v30 += v18;
          }
          v30 += 6;
          ++v28;
        }
        while ( v29 );
      }
    }
    else if ( a4[2] )
    {
      *(_DWORD *)(v27 + 16) += v19;
      *(_DWORD *)(v27 + 20) += v18;
    }
    else
    {
      v31 = *a4;
      if ( *a4 )
      {
        v32 = (_DWORD *)(v27 + 20);
        do
        {
          *(v32 - 1) += v19;
          *v32 += v18;
          v32 += 6;
          --v31;
        }
        while ( v31 );
      }
    }
  }
  CLIPOBJ_vOffset(a6, v16, v17);
  v20 = -v17;
  v21 = a1(a3, a4, a5, a6, a7, v13, a9, a10, a11, a12);
  v22 = -v16;
  v23 = v20;
  v24 = v22;
  if ( v22 || v20 )
  {
    a4[3] += v22;
    a4[5] += v22;
    a4[4] += v20;
    a4[6] += v20;
    v33 = a4[16];
    if ( (v33 & 0x100) != 0 )
    {
      v24 = 16 * v22;
      v23 = 16 * v20;
    }
    v34 = *((_QWORD *)a4 + 9);
    if ( (v33 & 0x1400) != 0 )
    {
      v35 = *a4;
      v36 = (_DWORD *)*((_QWORD *)a4 + 27);
      if ( *a4 )
      {
        v37 = (_DWORD *)(v34 + 20);
        do
        {
          if ( *v36 == a4[60] )
          {
            *(v37 - 1) += v24;
            --v35;
            *v37 += v23;
          }
          v37 += 6;
          ++v36;
        }
        while ( v35 );
      }
    }
    else if ( a4[2] )
    {
      *(_DWORD *)(v34 + 16) += v24;
      *(_DWORD *)(v34 + 20) += v23;
    }
    else
    {
      v38 = *a4;
      if ( *a4 )
      {
        v39 = (_DWORD *)(v34 + 20);
        do
        {
          *(v39 - 1) += v24;
          *v39 += v23;
          v39 += 6;
          --v38;
        }
        while ( v38 );
      }
    }
  }
  CLIPOBJ_vOffset(a6, v22, v20);
  return v21;
}
