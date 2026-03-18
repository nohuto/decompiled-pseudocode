/*
 * XREFs of ?vSrcCopyS16D8@@YAXPEAUBLTINFO@@@Z @ 0x14033B280
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1401573AC (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vSrcCopyS16D8(struct BLTINFO *a1)
{
  unsigned __int8 (__fastcall *v1)(struct _XLATEOBJ *, const unsigned __int8 *, __int16); // r12
  unsigned int v2; // ebp
  struct BLTINFO *v3; // rsi
  _BYTE *v4; // r13
  struct _XLATEOBJ *v5; // rdi
  unsigned __int16 *v6; // rbx
  int v7; // ecx
  unsigned int v8; // ebp
  unsigned int v9; // eax
  int v10; // ebp
  ULONG v11; // edx
  _BYTE *v12; // r15
  unsigned __int16 *v13; // r14
  int v14; // ebx
  __int64 v15; // r8
  unsigned int v16; // ebp
  int v17; // ebx
  int v18; // edi
  int v19; // ebx
  unsigned __int8 v20; // al
  int v21; // ebx
  __int64 v22; // r8
  unsigned int v23; // [rsp+20h] [rbp-68h]
  int v24; // [rsp+24h] [rbp-64h]
  unsigned __int16 *v25; // [rsp+28h] [rbp-60h]
  unsigned __int8 *Xlate555; // [rsp+30h] [rbp-58h]
  struct _XLATEOBJ *v27; // [rsp+38h] [rbp-50h]
  int v29; // [rsp+98h] [rbp+10h]
  int v30; // [rsp+A0h] [rbp+18h]

  v1 = (unsigned __int8 (__fastcall *)(struct _XLATEOBJ *, const unsigned __int8 *, __int16))XLATEOBJ_ulIndexToPalSurf;
  v2 = *((_DWORD *)a1 + 7);
  v3 = a1;
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v5 = *(struct _XLATEOBJ **)a1;
  v29 = *((_DWORD *)a1 + 8);
  v27 = *(struct _XLATEOBJ **)a1;
  v6 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v25 = v6;
  v7 = v2;
  if ( (-(int)v4 & 3u) <= v2 )
    v7 = -(int)v4 & 3;
  v8 = v2 - v7;
  v30 = v7;
  v9 = v8 >> 2;
  v10 = v8 & 3;
  v23 = v9;
  v24 = v10;
  Xlate555 = XLATEOBJ_pGetXlate555(v5);
  if ( Xlate555 )
  {
    v11 = v5[1].pulXlate[6];
    if ( (v11 & 0x200000) != 0 )
    {
      v1 = XLATEOBJ_RGB16_555ToPalSurf;
    }
    else if ( (v11 & 0x400000) != 0 )
    {
      v1 = (unsigned __int8 (__fastcall *)(struct _XLATEOBJ *, const unsigned __int8 *, __int16))XLATEOBJ_RGB16_565ToPalSurf;
    }
    while ( 1 )
    {
      v12 = v4;
      v13 = v6;
      if ( v30 )
      {
        v14 = v30;
        do
        {
          v15 = *v13++;
          *v12++ = v1(v5, Xlate555, v15);
          --v14;
        }
        while ( v14 );
        v3 = a1;
        v6 = v25;
      }
      if ( v23 )
      {
        v16 = v23;
        do
        {
          v17 = v1(v5, Xlate555, *v13);
          v18 = v17 | (v1(v5, Xlate555, v13[1]) << 8);
          v19 = v18 | (v1(v27, Xlate555, v13[2]) << 16);
          v5 = v27;
          v20 = v1(v27, Xlate555, v13[3]);
          v13 += 4;
          *(_DWORD *)v12 = v19 | (v20 << 24);
          v12 += 4;
          --v16;
        }
        while ( v16 );
        v3 = a1;
        v10 = v24;
        v6 = v25;
      }
      if ( v10 )
      {
        v21 = v10;
        do
        {
          v22 = *v13++;
          *v12++ = v1(v5, Xlate555, v22);
          --v21;
        }
        while ( v21 );
        v3 = a1;
        v6 = v25;
      }
      if ( !--v29 )
        break;
      v6 = (unsigned __int16 *)((char *)v6 + *((int *)v3 + 10));
      v4 += *((int *)v3 + 11);
      v25 = v6;
    }
  }
}
