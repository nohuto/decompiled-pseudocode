/*
 * XREFs of OffTextOut @ 0x1400674C8
 * Callers:
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x140066E90 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall OffTextOut(
        __int64 (__fastcall *a1)(__int64, int *, __int64, __int64, __int64, __int128 *, __int64, __int64, __int64, int),
        LONG *a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  __int128 *v12; // r15
  LONG v15; // r14d
  LONG v17; // esi
  LONG v18; // esi
  unsigned int v19; // r15d
  LONG v20; // r14d
  int v22; // ecx
  __int64 v23; // rax
  int v24; // r9d
  int v25; // r10d
  int v26; // ecx
  _DWORD *v27; // rax
  int v28; // ecx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // r9d
  int v32; // ecx
  _DWORD *v33; // rax
  int v34; // edx
  _DWORD *v35; // r8
  _DWORD *v36; // rcx
  int v37; // edx
  _DWORD *v38; // r10
  _DWORD *v39; // rcx
  struct _POINTL v40; // [rsp+60h] [rbp-51h] BYREF
  __int64 v41; // [rsp+68h] [rbp-49h]
  __int64 v42; // [rsp+70h] [rbp-41h]
  __int64 v43; // [rsp+78h] [rbp-39h]
  __int64 v44; // [rsp+80h] [rbp-31h]
  __int64 v45; // [rsp+88h] [rbp-29h]
  __int128 v46; // [rsp+90h] [rbp-21h] BYREF

  v12 = a8;
  v15 = *a2;
  v17 = a2[1];
  v45 = a5;
  v44 = a7;
  v43 = a9;
  v42 = a10;
  v41 = a11;
  v46 = 0LL;
  if ( a8 )
  {
    LODWORD(v46) = v15 + *(_DWORD *)a8;
    DWORD2(v46) = v15 + *((_DWORD *)a8 + 2);
    DWORD1(v46) = v17 + *((_DWORD *)a8 + 1);
    v12 = &v46;
    HIDWORD(v46) = v17 + *((_DWORD *)a8 + 3);
  }
  if ( v15 || v17 )
  {
    a4[3] += v15;
    a4[5] += v15;
    a4[4] += v17;
    a4[6] += v17;
    v22 = a4[58];
    v23 = *((_QWORD *)a4 + 8);
    v24 = 16 * v15;
    if ( (v22 & 0x100) == 0 )
      v24 = v15;
    v25 = 16 * v17;
    if ( (v22 & 0x100) == 0 )
      v25 = v17;
    if ( (v22 & 0x1400) != 0 )
    {
      v34 = *a4;
      v35 = (_DWORD *)*((_QWORD *)a4 + 26);
      if ( *a4 )
      {
        v36 = (_DWORD *)(v23 + 20);
        do
        {
          if ( *v35 == a4[59] )
          {
            *(v36 - 1) += v24;
            --v34;
            *v36 += v25;
          }
          v36 += 6;
          ++v35;
        }
        while ( v34 );
      }
    }
    else if ( a4[2] )
    {
      *(_DWORD *)(v23 + 16) += v24;
      *(_DWORD *)(v23 + 20) += v25;
    }
    else
    {
      v26 = *a4;
      if ( *a4 )
      {
        v27 = (_DWORD *)(v23 + 20);
        do
        {
          *(v27 - 1) += v24;
          *v27 += v25;
          v27 += 6;
          --v26;
        }
        while ( v26 );
      }
    }
  }
  if ( a6 && (v15 || v17) )
  {
    *(_DWORD *)(a6 + 4) += v15;
    *(_DWORD *)(a6 + 12) += v15;
    *(_DWORD *)(a6 + 8) += v17;
    *(_DWORD *)(a6 + 16) += v17;
    if ( *(_BYTE *)(a6 + 20) )
    {
      v40.x = v15;
      v40.y = v17;
      RGNOBJ::bOffset((RGNOBJ *)(a6 + 56), &v40);
    }
  }
  v18 = -v17;
  v19 = a1(a3, a4, v45, a6, v44, v12, v43, v42, v41, a12);
  v20 = -v15;
  if ( v20 || v18 )
  {
    a4[3] += v20;
    a4[5] += v20;
    a4[4] += v18;
    a4[6] += v18;
    v28 = a4[58];
    v29 = *((_QWORD *)a4 + 8);
    v30 = 16 * v20;
    if ( (v28 & 0x100) == 0 )
      v30 = v20;
    v31 = 16 * v18;
    if ( (v28 & 0x100) == 0 )
      v31 = v18;
    if ( (v28 & 0x1400) != 0 )
    {
      v37 = *a4;
      v38 = (_DWORD *)*((_QWORD *)a4 + 26);
      if ( *a4 )
      {
        v39 = (_DWORD *)(v29 + 20);
        do
        {
          if ( *v38 == a4[59] )
          {
            *(v39 - 1) += v30;
            --v37;
            *v39 += v31;
          }
          v39 += 6;
          ++v38;
        }
        while ( v37 );
      }
    }
    else if ( a4[2] )
    {
      *(_DWORD *)(v29 + 16) += v30;
      *(_DWORD *)(v29 + 20) += v31;
    }
    else
    {
      v32 = *a4;
      if ( *a4 )
      {
        v33 = (_DWORD *)(v29 + 20);
        do
        {
          *(v33 - 1) += v30;
          *v33 += v31;
          v33 += 6;
          --v32;
        }
        while ( v32 );
      }
    }
  }
  if ( a6 && (v20 || v18) )
  {
    *(_DWORD *)(a6 + 4) += v20;
    *(_DWORD *)(a6 + 12) += v20;
    *(_DWORD *)(a6 + 8) += v18;
    *(_DWORD *)(a6 + 16) += v18;
    if ( *(_BYTE *)(a6 + 20) )
    {
      v40.x = v20;
      v40.y = v18;
      RGNOBJ::bOffset((RGNOBJ *)(a6 + 56), &v40);
    }
  }
  return v19;
}
