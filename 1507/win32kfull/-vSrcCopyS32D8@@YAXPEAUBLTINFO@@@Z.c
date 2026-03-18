/*
 * XREFs of ?vSrcCopyS32D8@@YAXPEAUBLTINFO@@@Z @ 0x1C0101D00
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0101EA8 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS32D8(struct BLTINFO *a1)
{
  unsigned int v1; // ebp
  unsigned __int8 (__fastcall *v2)(struct _XLATEOBJ *, unsigned __int8 *, unsigned int); // r13
  struct BLTINFO *v3; // r14
  struct _XLATEOBJ *v4; // rdx
  _BYTE *v5; // rbx
  unsigned int *v6; // rdi
  unsigned int v7; // esi
  unsigned int v8; // ebp
  unsigned int v9; // eax
  int v10; // ebp
  ULONG v11; // ecx
  _BYTE *v12; // r12
  unsigned int *v13; // r15
  unsigned int v14; // esi
  int v15; // ebx
  int v16; // edi
  int v17; // ebx
  unsigned __int8 v18; // al
  unsigned int v19; // ebp
  unsigned int v20; // [rsp+20h] [rbp-78h]
  unsigned int v21; // [rsp+24h] [rbp-74h]
  _BYTE *v22; // [rsp+28h] [rbp-70h]
  struct _XLATEOBJ *v23; // [rsp+30h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+38h] [rbp-60h]
  unsigned int *v25; // [rsp+40h] [rbp-58h]
  int v27; // [rsp+A8h] [rbp+10h]
  int v28; // [rsp+B0h] [rbp+18h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = XLATEOBJ_ulIndexToPalSurf;
  v3 = a1;
  v4 = *(struct _XLATEOBJ **)a1;
  v5 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v6 = (unsigned int *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v7 = -(*((_DWORD *)a1 + 4) + *((_DWORD *)a1 + 14)) & 3;
  v28 = *((_DWORD *)a1 + 8);
  if ( v7 > v1 )
    v7 = *((_DWORD *)a1 + 7);
  v25 = (unsigned int *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v8 = v1 - v7;
  v22 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v23 = *(struct _XLATEOBJ **)a1;
  v9 = v8 >> 2;
  v10 = v8 & 3;
  v20 = v9;
  v21 = v7;
  v27 = v10;
  v11 = v4[1].pulXlate[6];
  if ( (v11 & 4) != 0 )
  {
    v2 = XLATEOBJ_RGB32ToPalSurf;
  }
  else if ( (v11 & 8) != 0 )
  {
    v2 = XLATEOBJ_BGR32ToPalSurf;
  }
  Xlate555 = XLATEOBJ_pGetXlate555(v4);
  if ( Xlate555 )
  {
    while ( 1 )
    {
      v12 = v5;
      v13 = v6;
      if ( v7 )
      {
        v19 = v7;
        do
        {
          *v12++ = v2(v23, Xlate555, *v13++);
          --v19;
        }
        while ( v19 );
        v3 = a1;
        v10 = v27;
        v5 = v22;
      }
      if ( v20 )
      {
        v14 = v20;
        do
        {
          v15 = v2(v23, Xlate555, v13[3]) << 8;
          v16 = (v15 | v2(v23, Xlate555, v13[2])) << 8;
          v17 = (v16 | v2(v23, Xlate555, v13[1])) << 8;
          v18 = v2(v23, Xlate555, *v13);
          v13 += 4;
          *(_DWORD *)v12 = v17 | v18;
          v12 += 4;
          --v14;
        }
        while ( v14 );
        v7 = v21;
        v3 = a1;
        v10 = v27;
        v5 = v22;
        v6 = v25;
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
        v5 = v22;
        v6 = v25;
      }
      if ( !--v28 )
        break;
      v6 = (unsigned int *)((char *)v6 + *((int *)v3 + 10));
      v5 += *((int *)v3 + 11);
      v25 = v6;
      v22 = v5;
    }
  }
}
