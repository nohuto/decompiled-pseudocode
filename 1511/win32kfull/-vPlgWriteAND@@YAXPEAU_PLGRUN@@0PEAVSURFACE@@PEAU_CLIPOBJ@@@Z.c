/*
 * XREFs of ?vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02D1320
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C002DCE8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002DD54 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C02CFDC0 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWriteAND(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  __int64 v5; // rax
  struct _PLGRUN *v7; // r12
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r9
  int v10; // eax
  int v11; // ebx
  __int64 i; // r10
  int v13; // r15d
  int v14; // r14d
  unsigned __int8 v15; // di
  char *v16; // rdx
  bool v17; // cl
  char v18; // r11
  char v19; // r8
  _BYTE *v20; // rdx
  char v21; // r8
  __int64 v22; // r9
  __int64 v23; // r10
  LONG v24; // edi
  struct _PLGRUN *v25; // r15
  __int64 v26; // r9
  __int64 v27; // r10
  int v28; // r8d
  char *v29; // r11
  unsigned __int8 v30; // r12
  char v31; // bl
  int v32; // r14d
  int v33; // r8d
  LONG v34; // r10d
  int v35; // r8d
  int v36; // r10d
  _BYTE *v37; // r11
  int v38; // [rsp+30h] [rbp-40h]
  LONG v39; // [rsp+34h] [rbp-3Ch]
  int v40; // [rsp+38h] [rbp-38h]
  char v41; // [rsp+3Ch] [rbp-34h]
  __int64 v42; // [rsp+40h] [rbp-30h]
  struct _PLGRUN *v43; // [rsp+48h] [rbp-28h]
  struct _RECTL si128; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v45[2]; // [rsp+60h] [rbp-10h] BYREF

  if ( a2 )
  {
    v5 = *((unsigned int *)a3 + 16);
    v45[0] = *((_QWORD *)a3 + 9);
    v7 = a2;
    v8 = a1;
    v45[1] = v5 + v45[0] - 1;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v8 != v7 )
      {
        do
        {
          v24 = *((_DWORD *)v8 + 1);
          v25 = (struct _PLGRUN *)((char *)v8 + 12);
          v39 = v24;
          v43 = (struct _PLGRUN *)((char *)v8 + 12);
          v41 = (*(_DWORD *)v8 != 0) - 1;
          v26 = *((_QWORD *)a3 + 10) + v24 * *((_DWORD *)a3 + 22);
          v42 = v26;
          v40 = *((_DWORD *)v8 + 2);
          if ( v40 )
          {
            do
            {
              if ( v24 < si128.top || v24 >= si128.bottom )
              {
                XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &si128, v24);
                v26 = v42;
              }
              if ( v24 >= si128.top && v24 < si128.bottom )
              {
                v27 = *(int *)v25;
                v28 = *((_DWORD *)v25 + 1);
                v38 = v28;
                v29 = (char *)(v26 + (v27 >> 3));
                v30 = byte_1C02E8318[*(_DWORD *)v25 & 7];
                if ( (int)v27 >= 0
                  && (int)v27 < *((_DWORD *)a3 + 14)
                  && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v45, v26 + (v27 >> 3)) )
                {
                  v31 = *v29;
                  v32 = 1;
                }
                else
                {
                  v32 = 0;
                  v31 = 0;
                }
                if ( v28 >= 0 )
                {
                  do
                  {
                    if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v45, (unsigned __int64)v29) )
                      break;
                    if ( v34 < si128.left || v34 >= si128.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v34);
                      v33 = v38;
                    }
                    if ( v34 >= si128.left && v34 < si128.right )
                      v31 &= ~(v30 & v41);
                    v35 = v33 - 1;
                    v36 = v34 + 1;
                    v30 >>= 1;
                    v38 = v35;
                    if ( !v30 )
                    {
                      if ( v32 )
                        *v29 = v31;
                      ++v29;
                      v30 = byte_1C02E8318[v36 & 7];
                      if ( v36 >= 0
                        && v36 < *((_DWORD *)a3 + 14)
                        && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v45, (unsigned __int64)v29) )
                      {
                        v31 = *v29;
                        v32 = 1;
                      }
                      else
                      {
                        v32 = 0;
                        v31 = 0;
                      }
                    }
                  }
                  while ( v35 >= 0 );
                  v24 = v39;
                  v25 = v43;
                  v26 = v42;
                }
                if ( v32 && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v45, (unsigned __int64)v29) )
                  *v37 = v31;
              }
              v26 += *((int *)a3 + 22);
              ++v24;
              v25 = (struct _PLGRUN *)((char *)v25 + 8);
              v42 = v26;
              v39 = v24;
              --v40;
              v43 = v25;
            }
            while ( v40 );
            v7 = a2;
          }
          v8 = v25;
        }
        while ( v25 != v7 );
      }
    }
    else if ( a1 != a2 )
    {
      do
      {
        v9 = (struct _PLGRUN *)((char *)v8 + 12);
        v10 = *((_DWORD *)v8 + 1);
        v11 = *((_DWORD *)v8 + 2);
        for ( i = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * v10; v11; --v11 )
        {
          v13 = *(_DWORD *)v9;
          v14 = *((_DWORD *)v9 + 1);
          v15 = byte_1C02E8318[*(_DWORD *)v9 & 7];
          v17 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v45, i + ((__int64)*(int *)v9 >> 3));
          if ( v17 )
            v19 = *v16;
          else
            v19 = 0;
          while ( v14 >= 0 && v17 )
          {
            --v14;
            LOBYTE(v13) = v13 + 1;
            v19 &= ~(v15 & v18);
            v15 >>= 1;
            if ( !v15 )
            {
              *v16 = v19;
              v17 = PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v45, (unsigned __int64)(v16 + 1));
              if ( v17 )
                v19 = *v16;
              else
                v19 = 0;
              v15 = byte_1C02E8318[v13 & 7];
            }
          }
          if ( PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v45, (unsigned __int64)v16) )
            *v20 = v21;
          v9 = (struct _PLGRUN *)(v22 + 8);
          i = *((int *)a3 + 22) + v23;
        }
        v8 = v9;
      }
      while ( v9 != v7 );
    }
  }
}
