/*
 * XREFs of ?vSrcCopyS32D8@@YAXPEAUBLTINFO@@@Z @ 0x140157190
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1401573AC (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vSrcCopyS32D8(struct BLTINFO *a1)
{
  unsigned __int8 (__fastcall *v1)(struct _XLATEOBJ *, const unsigned __int8 *, unsigned int); // r12
  unsigned int v2; // ebp
  struct BLTINFO *v3; // rsi
  struct _XLATEOBJ *v4; // rdi
  _BYTE *v5; // r13
  int v6; // eax
  unsigned int *v7; // rbx
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ebp
  ULONG v11; // ecx
  _BYTE *v12; // r15
  unsigned int *v13; // r14
  unsigned int v14; // ebp
  int v15; // ebx
  int v16; // edi
  int v17; // ebx
  unsigned __int8 v18; // al
  int v19; // ebx
  __int64 v20; // r8
  int v21; // esi
  __int64 v22; // r8
  unsigned int v23; // [rsp+20h] [rbp-68h]
  int v24; // [rsp+24h] [rbp-64h]
  unsigned int *v25; // [rsp+28h] [rbp-60h]
  unsigned __int8 *Xlate555; // [rsp+30h] [rbp-58h]
  struct _XLATEOBJ *v27; // [rsp+38h] [rbp-50h]
  int v29; // [rsp+98h] [rbp+10h]
  int v30; // [rsp+A0h] [rbp+18h]

  v1 = XLATEOBJ_ulIndexToPalSurf;
  v2 = *((_DWORD *)a1 + 7);
  v3 = a1;
  v4 = *(struct _XLATEOBJ **)a1;
  v5 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v6 = *((_DWORD *)a1 + 8);
  v7 = (unsigned int *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v8 = v2;
  v29 = v6;
  v25 = v7;
  v27 = v4;
  if ( (-(int)v5 & 3u) <= v2 )
    v8 = -(int)v5 & 3;
  v30 = v8;
  v9 = v2 - v8;
  v10 = (v2 - v8) & 3;
  v23 = v9 >> 2;
  v24 = v10;
  v11 = v4[1].pulXlate[6];
  if ( (v11 & 4) != 0 )
  {
    v1 = XLATEOBJ_RGB32ToPalSurf;
  }
  else if ( (v11 & 8) != 0 )
  {
    v1 = XLATEOBJ_BGR32ToPalSurf;
  }
  Xlate555 = XLATEOBJ_pGetXlate555(v4);
  if ( Xlate555 )
  {
    while ( 1 )
    {
      v12 = v5;
      v13 = v7;
      if ( v30 )
      {
        v19 = v30;
        do
        {
          v20 = *v13++;
          *v12++ = v1(v4, Xlate555, v20);
          --v19;
        }
        while ( v19 );
        v3 = a1;
        v7 = v25;
      }
      if ( v23 )
      {
        v14 = v23;
        do
        {
          v15 = v1(v4, Xlate555, *v13);
          v16 = v15 | (v1(v4, Xlate555, v13[1]) << 8);
          v17 = v16 | (v1(v27, Xlate555, v13[2]) << 16);
          v4 = v27;
          v18 = v1(v27, Xlate555, v13[3]);
          v13 += 4;
          *(_DWORD *)v12 = v17 | (v18 << 24);
          v12 += 4;
          --v14;
        }
        while ( v14 );
        v3 = a1;
        v10 = v24;
        v7 = v25;
      }
      if ( v10 )
      {
        v21 = v10;
        do
        {
          v22 = *v13++;
          *v12++ = v1(v4, Xlate555, v22);
          --v21;
        }
        while ( v21 );
        v3 = a1;
        v7 = v25;
      }
      if ( !--v29 )
        break;
      v7 = (unsigned int *)((char *)v7 + *((int *)v3 + 10));
      v5 += *((int *)v3 + 11);
      v25 = v7;
    }
  }
}
