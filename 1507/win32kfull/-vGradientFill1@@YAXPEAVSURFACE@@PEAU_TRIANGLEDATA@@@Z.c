/*
 * XREFs of ?vGradientFill1@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02CB6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0101EA8 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vGradientFill1(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v2; // esi
  char *v3; // r14
  __int64 v4; // rbx
  struct _TRIANGLEDATA *v5; // rdi
  __int64 v6; // r15
  int v7; // ebp
  int v8; // edx
  int v9; // ebx
  int v10; // r11d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  int v14; // ecx
  int v15; // r13d
  _BYTE *v16; // r12
  __int64 v17; // rdi
  char v18; // bp
  int v19; // r11d
  char v20; // bl
  int v21; // [rsp+20h] [rbp-98h]
  int v22; // [rsp+24h] [rbp-94h]
  __int64 v23; // [rsp+28h] [rbp-90h]
  char *v24; // [rsp+30h] [rbp-88h]
  __int64 v25; // [rsp+38h] [rbp-80h]
  __int64 v26; // [rsp+40h] [rbp-78h]
  __int64 v27; // [rsp+48h] [rbp-70h]
  unsigned __int8 *Xlate555; // [rsp+58h] [rbp-60h]
  __int64 v29; // [rsp+60h] [rbp-58h]
  int v30; // [rsp+C0h] [rbp+8h]
  int v32; // [rsp+D8h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = *((int *)a1 + 22);
  v5 = a2;
  v30 = v2;
  v24 = (char *)a2 + 168;
  v6 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v27 = *((_QWORD *)a2 + 2);
  v25 = *((_QWORD *)a2 + 3);
  v23 = *((_QWORD *)a2 + 4);
  v26 = v6;
  Xlate555 = XLATEOBJ_pGetXlate555(*((struct _XLATEOBJ **)a2 + 19));
  if ( Xlate555 )
  {
    v7 = *((_DWORD *)v5 + 29);
    v8 = *((_DWORD *)v5 + 33);
    if ( *((_DWORD *)v5 + 3) < v7 )
      v7 = *((_DWORD *)v5 + 3);
    v21 = v7;
    v22 = *((_DWORD *)v5 + 33);
    v32 = *((_DWORD *)v5 + 32);
    if ( v2 < v7 )
    {
      v29 = v4;
      do
      {
        v9 = *(_DWORD *)v5;
        v10 = *((_DWORD *)v5 + 2);
        v11 = *((_QWORD *)v3 + 1);
        v12 = *((_QWORD *)v3 + 2);
        if ( *(_DWORD *)v3 > *(_DWORD *)v5 )
          v9 = *(_DWORD *)v3;
        v13 = *((_QWORD *)v3 + 3);
        if ( *((_DWORD *)v3 + 1) < v10 )
          v10 = *((_DWORD *)v3 + 1);
        if ( v9 < v10 )
        {
          v14 = *(_DWORD *)v5 - *(_DWORD *)v3;
          v15 = v9 & 7;
          v16 = (_BYTE *)(v6 + v9 / 8);
          if ( v14 > 0 )
          {
            v11 += v27 * v14;
            v12 += v25 * v14;
            v13 += v23 * v14;
          }
          v17 = (unsigned int)(v10 - v9);
          v18 = v9 + v32;
          do
          {
            v19 = (unsigned __int8)(2
                                  * gDitherMatrix16x16Default[16 * (((unsigned __int8)v8 + (unsigned __int8)v2) & 0xF)
                                                            + (v18 & 0xF)]);
            v20 = 7 - v15++;
            *v16 = *v16 & ~(1 << v20) | (vTranslateIdentity[Xlate555[((unsigned __int8)-(v19 + HIBYTE(v13) >= 0xFFu) >> 3) | (unsigned __int64)(4 * ((v19 + HIBYTE(v12) >= 0xFFu ? 0xF8 : 0) | (32 * (v19 + HIBYTE(v11) >= 0xFFu ? 0xF8 : 0))))]] << v20);
            if ( v15 == 8 )
            {
              v15 = 0;
              ++v16;
            }
            ++v18;
            v11 += v27;
            v12 += v25;
            v13 += v23;
            --v17;
          }
          while ( v17 );
          v5 = a2;
          v2 = v30;
          v7 = v21;
          v3 = v24;
          v6 = v26;
          LOBYTE(v8) = v22;
        }
        v6 += v29;
        v3 += 40;
        ++v2;
        v26 = v6;
        v24 = v3;
        v30 = v2;
      }
      while ( v2 < v7 );
    }
  }
}
