/*
 * XREFs of ?vFillGRectDIB1@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02C98A0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0101EA8 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vFillGRectDIB1(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // rdi
  int v3; // esi
  __int64 v4; // rbx
  int v5; // r13d
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // edx
  __int64 v12; // rbx
  int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r8
  __int64 v17; // rax
  _BYTE *v18; // r13
  int v19; // edi
  __int64 v20; // r12
  char v21; // si
  int v22; // r11d
  char v23; // bl
  __int64 v24; // [rsp+20h] [rbp-C8h]
  __int64 v25; // [rsp+30h] [rbp-B8h]
  char v26; // [rsp+38h] [rbp-B0h]
  __int64 v27; // [rsp+40h] [rbp-A8h]
  int v28; // [rsp+48h] [rbp-A0h]
  __int64 v29; // [rsp+50h] [rbp-98h]
  __int64 v30; // [rsp+58h] [rbp-90h]
  __int64 v31; // [rsp+60h] [rbp-88h]
  __int64 v32; // [rsp+68h] [rbp-80h]
  __int64 v33; // [rsp+70h] [rbp-78h]
  __int64 v34; // [rsp+78h] [rbp-70h]
  __int64 v35; // [rsp+80h] [rbp-68h]
  char *v36; // [rsp+88h] [rbp-60h]
  unsigned __int8 *Xlate555; // [rsp+90h] [rbp-58h]
  __int64 v38; // [rsp+98h] [rbp-50h]
  int v39; // [rsp+F0h] [rbp+8h]
  unsigned int v41; // [rsp+100h] [rbp+18h]
  int v42; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((int *)a1 + 22);
  v41 = *((_DWORD *)a2 + 10);
  v5 = v3 + *((_DWORD *)a2 + 11);
  v39 = v3;
  v28 = v5;
  v6 = *((_QWORD *)a1 + 10) + (int)v4 * v3;
  v24 = *((_QWORD *)a2 + 14);
  v30 = *((_QWORD *)a2 + 15);
  v34 = *((_QWORD *)a2 + 16);
  v35 = *((_QWORD *)a2 + 10);
  v31 = *((_QWORD *)a2 + 11);
  v32 = *((_QWORD *)a2 + 12);
  v33 = v6;
  Xlate555 = XLATEOBJ_pGetXlate555(*((struct _XLATEOBJ **)a2 + 20));
  if ( Xlate555 )
  {
    v7 = *((int *)v2 + 45);
    v8 = *((_QWORD *)v2 + 6);
    v9 = *((_QWORD *)v2 + 7);
    v10 = *((_QWORD *)v2 + 8);
    v25 = v8;
    v27 = v9;
    v29 = v10;
    if ( (_DWORD)v7 )
    {
      v9 += v31 * v7;
      v8 += v35 * v7;
      v25 = v8;
      v27 = v9;
      v10 += v32 * v7;
      v29 = v10;
    }
    v11 = *((_DWORD *)v2 + 37);
    v26 = v11;
    v42 = *((_DWORD *)v2 + 36);
    if ( v3 < v5 )
    {
      v38 = v4;
      v12 = v24;
      do
      {
        v13 = *((_DWORD *)v2 + 8);
        v14 = v8;
        v15 = v9;
        v16 = v10;
        v17 = *((int *)v2 + 44);
        v36 = (char *)&gDitherMatrix16x16Default + 16 * (((unsigned __int8)v11 + (unsigned __int8)v3) & 0xF);
        if ( (_DWORD)v17 )
        {
          v15 = v9 + v30 * v17;
          v14 = v8 + v12 * v17;
          v16 = v10 + v34 * v17;
        }
        v18 = (_BYTE *)(v6 + v13 / 8);
        if ( v13 < (int)(v13 + v41) )
        {
          v19 = *((_DWORD *)v2 + 8) & 7;
          v20 = v41;
          v21 = v13 + v42;
          do
          {
            v22 = (unsigned __int8)(2 * v36[v21 & 0xF]);
            v23 = 7 - v19++;
            *v18 = *v18 & ~(1 << v23) | (vTranslateIdentity[Xlate555[((unsigned __int8)-(v22 + (unsigned int)BYTE6(v16) >= 0xFF) >> 3) | (unsigned __int64)(4 * ((v22 + (unsigned int)BYTE6(v15) >= 0xFF ? 0xF8 : 0) | (32 * (v22 + (unsigned int)BYTE6(v14) >= 0xFF ? 0xF8 : 0))))]] << v23);
            if ( v19 == 8 )
            {
              v19 = 0;
              ++v18;
            }
            v16 += v34;
            v14 += v24;
            v15 += v30;
            ++v21;
            --v20;
          }
          while ( v20 );
          v2 = a2;
          v3 = v39;
          v8 = v25;
          v9 = v27;
          v10 = v29;
          v6 = v33;
          v12 = v24;
        }
        v6 += v38;
        ++v3;
        v8 += v35;
        v9 += v31;
        v10 += v32;
        LOBYTE(v11) = v26;
        v33 = v6;
        v25 = v8;
        v27 = v9;
        v29 = v10;
        v39 = v3;
      }
      while ( v3 < v28 );
    }
  }
}
