/*
 * XREFs of ?vSrcCopyS16D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02C5060
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0136668 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS16D8(struct BLTINFO *a1)
{
  unsigned int v1; // ebp
  unsigned __int8 (__fastcall *v2)(struct _XLATEOBJ *, unsigned __int8 *, __int16); // r13
  struct BLTINFO *v3; // r14
  _BYTE *v4; // rbx
  __int64 v5; // r15
  unsigned int v6; // esi
  unsigned __int16 *v7; // rdi
  struct _XLATEOBJ *v8; // rcx
  unsigned int v9; // eax
  int v10; // ebp
  int v11; // edx
  _BYTE *v12; // r12
  unsigned __int16 *v13; // r15
  unsigned int v14; // ebp
  unsigned int v15; // esi
  int v16; // ebx
  int v17; // edi
  int v18; // ebx
  unsigned __int8 v19; // al
  unsigned int v20; // [rsp+20h] [rbp-78h]
  unsigned int v21; // [rsp+24h] [rbp-74h]
  _BYTE *v22; // [rsp+28h] [rbp-70h]
  struct _XLATEOBJ *v23; // [rsp+30h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v25; // [rsp+40h] [rbp-58h]
  int v27; // [rsp+A8h] [rbp+10h]
  int v28; // [rsp+B0h] [rbp+18h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = (unsigned __int8 (__fastcall *)(struct _XLATEOBJ *, unsigned __int8 *, __int16))XLATEOBJ_ulIndexToPalSurf;
  v3 = a1;
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v5 = *(_QWORD *)a1;
  v28 = *((_DWORD *)a1 + 8);
  v6 = -(*((_DWORD *)a1 + 4) + *((_DWORD *)a1 + 14)) & 3;
  v23 = *(struct _XLATEOBJ **)a1;
  v7 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v8 = *(struct _XLATEOBJ **)a1;
  v25 = v7;
  v22 = v4;
  if ( v6 > v1 )
    v6 = v1;
  v21 = v6;
  v9 = v1 - v6;
  v10 = (v1 - v6) & 3;
  v20 = v9 >> 2;
  v27 = v10;
  Xlate555 = XLATEOBJ_pGetXlate555(v8);
  if ( Xlate555 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 24LL);
    if ( (v11 & 0x200000) != 0 )
    {
      v2 = XLATEOBJ_RGB16_555ToPalSurf;
    }
    else if ( (v11 & 0x400000) != 0 )
    {
      v2 = (unsigned __int8 (__fastcall *)(struct _XLATEOBJ *, unsigned __int8 *, __int16))XLATEOBJ_RGB16_565ToPalSurf;
    }
    while ( 1 )
    {
      v12 = v4;
      v13 = v7;
      if ( v6 )
      {
        v14 = v6;
        do
        {
          *v12++ = v2(v23, Xlate555, *v13++);
          --v14;
        }
        while ( v14 );
        v3 = a1;
        v10 = v27;
        v4 = v22;
      }
      if ( v20 )
      {
        v15 = v20;
        do
        {
          v16 = v2(v23, Xlate555, v13[3]) << 8;
          v17 = (v16 | v2(v23, Xlate555, v13[2])) << 8;
          v18 = (v17 | v2(v23, Xlate555, v13[1])) << 8;
          v19 = v2(v23, Xlate555, *v13);
          v13 += 4;
          *(_DWORD *)v12 = v18 | v19;
          v12 += 4;
          --v15;
        }
        while ( v15 );
        v6 = v21;
        v3 = a1;
        v10 = v27;
        v4 = v22;
        v7 = v25;
      }
      if ( v10 )
      {
        do
        {
          *v12++ = v2(v23, Xlate555, *v13++);
          --v10;
        }
        while ( v10 );
        v10 = v27;
        v4 = v22;
        v7 = v25;
      }
      if ( !--v28 )
        break;
      v7 = (unsigned __int16 *)((char *)v7 + *((int *)v3 + 10));
      v4 += *((int *)v3 + 11);
      v25 = v7;
      v22 = v4;
    }
  }
}
