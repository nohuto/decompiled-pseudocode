/*
 * XREFs of ?vPlgWrite1@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02D07D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C002DCE8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002DD54 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C02CFDC0 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWrite1(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  __int64 v5; // rax
  struct _PLGRUN *v7; // rdi
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r9
  int v10; // r12d
  __int64 v11; // r10
  int v12; // r15d
  int v13; // edi
  unsigned __int8 v14; // bl
  char *v15; // rdx
  bool v16; // r14
  char v17; // r8
  _BYTE *v18; // rdx
  char v19; // r8
  __int64 v20; // r9
  __int64 v21; // r10
  int v22; // r11d
  LONG v23; // edi
  struct _PLGRUN *v24; // r15
  __int64 v25; // r9
  __int64 v26; // r10
  int v27; // r8d
  char *v28; // r11
  unsigned __int8 v29; // r12
  char v30; // bl
  int v31; // r14d
  int v32; // r8d
  LONG v33; // r10d
  int v34; // r8d
  int v35; // r10d
  _BYTE *v36; // r11
  int v37; // [rsp+30h] [rbp-40h]
  LONG v38; // [rsp+34h] [rbp-3Ch]
  int i; // [rsp+38h] [rbp-38h]
  int v40; // [rsp+3Ch] [rbp-34h]
  __int64 v41; // [rsp+40h] [rbp-30h]
  struct _PLGRUN *v42; // [rsp+48h] [rbp-28h]
  struct _RECTL si128; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v44[2]; // [rsp+60h] [rbp-10h] BYREF

  if ( a2 )
  {
    v5 = *((unsigned int *)a3 + 16);
    v44[0] = *((_QWORD *)a3 + 9);
    v7 = a2;
    v8 = a1;
    v44[1] = v5 + v44[0] - 1;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v8 != v7 )
      {
        do
        {
          v23 = *((_DWORD *)v8 + 1);
          v24 = (struct _PLGRUN *)((char *)v8 + 12);
          v38 = v23;
          v42 = (struct _PLGRUN *)((char *)v8 + 12);
          v40 = -(*(_DWORD *)v8 != 0);
          v25 = *((_QWORD *)a3 + 10) + v23 * *((_DWORD *)a3 + 22);
          v41 = v25;
          for ( i = *((_DWORD *)v8 + 2); i; v42 = v24 )
          {
            if ( v23 < si128.top || v23 >= si128.bottom )
            {
              XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &si128, v23);
              v25 = v41;
            }
            if ( v23 >= si128.top && v23 < si128.bottom )
            {
              v26 = *(int *)v24;
              v27 = *((_DWORD *)v24 + 1);
              v37 = v27;
              v28 = (char *)(v25 + (v26 >> 3));
              v29 = byte_1C02E8318[*(_DWORD *)v24 & 7];
              if ( (int)v26 >= 0
                && (int)v26 < *((_DWORD *)a3 + 14)
                && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v44, v25 + (v26 >> 3)) )
              {
                v30 = *v28;
                v31 = 1;
              }
              else
              {
                v31 = 0;
                v30 = 0;
              }
              if ( v27 )
              {
                do
                {
                  if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v44, (unsigned __int64)v28) )
                    break;
                  if ( v33 < si128.left || v33 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v33);
                    v32 = v37;
                  }
                  if ( v33 >= si128.left && v33 < si128.right )
                    v30 = v29 & v40 | ~v29 & v30;
                  v34 = v32 - 1;
                  v35 = v33 + 1;
                  v29 >>= 1;
                  v37 = v34;
                  if ( !v29 )
                  {
                    if ( v31 )
                      *v28 = v30;
                    ++v28;
                    v29 = byte_1C02E8318[v35 & 7];
                    if ( v35 >= 0
                      && v35 < *((_DWORD *)a3 + 14)
                      && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v44, (unsigned __int64)v28) )
                    {
                      v30 = *v28;
                      v31 = 1;
                    }
                    else
                    {
                      v31 = 0;
                      v30 = 0;
                    }
                  }
                }
                while ( v34 );
                v23 = v38;
                v24 = v42;
                v25 = v41;
              }
              if ( v31 && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v44, (unsigned __int64)v28) )
                *v36 = v30;
            }
            v25 += *((int *)a3 + 22);
            ++v23;
            v24 = (struct _PLGRUN *)((char *)v24 + 8);
            v41 = v25;
            v38 = v23;
            --i;
          }
          v8 = v24;
        }
        while ( v24 != a2 );
      }
    }
    else if ( a1 != a2 )
    {
      do
      {
        v9 = (struct _PLGRUN *)((char *)v8 + 12);
        v10 = -(*(_DWORD *)v8 != 0);
        v11 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * *((_DWORD *)v8 + 1);
        if ( *((_DWORD *)v8 + 2) )
        {
          do
          {
            v12 = *(_DWORD *)v9;
            v13 = *((_DWORD *)v9 + 1);
            v14 = byte_1C02E8318[*(_DWORD *)v9 & 7];
            v16 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v44, v11 + ((__int64)*(int *)v9 >> 3));
            if ( v16 )
              v17 = *v15;
            else
              v17 = 0;
            while ( v13 && v16 )
            {
              --v13;
              v17 = v14 & v10 | ~v14 & v17;
              LOBYTE(v12) = v12 + 1;
              v14 >>= 1;
              if ( !v14 )
              {
                *v15 = v17;
                v16 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v44, (unsigned __int64)(v15 + 1));
                if ( v16 )
                  v17 = *v15;
                else
                  v17 = 0;
                v14 = byte_1C02E8318[v12 & 7];
              }
            }
            if ( PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v44, (unsigned __int64)v15) )
              *v18 = v19;
            v9 = (struct _PLGRUN *)(v20 + 8);
            v11 = *((int *)a3 + 22) + v21;
          }
          while ( v22 != 1 );
          v7 = a2;
        }
        v8 = v9;
      }
      while ( v9 != v7 );
    }
  }
}
