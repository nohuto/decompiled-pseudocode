/*
 * XREFs of ?vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02CFB50
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0021670 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00216DC (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002193C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C02CEF80 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWrite4(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  __int64 v5; // rax
  struct _PLGRUN *v7; // r12
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r9
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  __int64 j; // r11
  int v14; // esi
  _BYTE *k; // r8
  char v16; // r10
  LONG v17; // r10d
  struct _PLGRUN *v18; // r9
  int v19; // esi
  int v20; // r14d
  __int64 i; // rdi
  int v22; // ebx
  _BYTE *v23; // rdx
  char v24; // r8
  LONG v25; // r11d
  LONG v26; // edi
  struct _PLGRUN *v27; // r14
  __int64 v28; // r13
  char v29; // r12
  int v30; // r8d
  _BYTE *v31; // rbx
  int v32; // r8d
  LONG v33; // r10d
  char v34; // r11
  int v35; // [rsp+30h] [rbp-30h]
  int v36; // [rsp+34h] [rbp-2Ch]
  struct _RECTL rclBounds; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v38[3]; // [rsp+48h] [rbp-18h] BYREF

  if ( a2 )
  {
    v5 = *((unsigned int *)a3 + 16);
    v38[0] = *((_QWORD *)a3 + 9);
    v7 = a2;
    v8 = a1;
    v38[1] = v5 + v38[0] - 1;
    if ( a4 )
    {
      if ( a4->iDComplexity == 1 )
      {
        rclBounds = a4->rclBounds;
        if ( a1 != a2 )
        {
          do
          {
            v17 = *((_DWORD *)v8 + 1);
            v18 = (struct _PLGRUN *)((char *)v8 + 12);
            v19 = *((_DWORD *)v8 + 2);
            v20 = *(_DWORD *)v8 | (16 * *(_DWORD *)v8);
            for ( i = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * v17; v19; --v19 )
            {
              if ( v17 >= rclBounds.top && v17 < rclBounds.bottom )
              {
                v22 = *((_DWORD *)v18 + 1);
                v23 = (_BYTE *)(i + ((__int64)*(int *)v18 >> 1));
                while ( v22 && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v38, (unsigned __int64)v23) )
                {
                  if ( v25 >= rclBounds.left && v25 < rclBounds.right )
                    *v23 = v24 & v20 | *v23 & ~v24;
                  --v22;
                  if ( ~v24 == 0xF0 )
                    ++v23;
                }
              }
              ++v17;
              i += *((int *)a3 + 22);
              v18 = (struct _PLGRUN *)((char *)v18 + 8);
            }
            v8 = v18;
          }
          while ( v18 != v7 );
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        if ( v8 != v7 )
        {
          do
          {
            v26 = *((_DWORD *)v8 + 1);
            v27 = (struct _PLGRUN *)((char *)v8 + 12);
            v28 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * v26;
            v36 = *((_DWORD *)v8 + 2);
            if ( v36 )
            {
              v29 = *(_BYTE *)v8 | (16 * *(_BYTE *)v8);
              do
              {
                if ( v26 < rclBounds.top || v26 >= rclBounds.bottom )
                  XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v26);
                if ( v26 >= rclBounds.top && v26 < rclBounds.bottom )
                {
                  v30 = *((_DWORD *)v27 + 1);
                  v31 = (_BYTE *)(v28 + ((__int64)*(int *)v27 >> 1));
                  v35 = v30;
                  while ( v30 && PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v38, (unsigned __int64)v31) )
                  {
                    if ( v33 < rclBounds.left || v33 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v33);
                      v32 = v35;
                    }
                    if ( v33 >= rclBounds.left && v33 < rclBounds.right )
                      *v31 = v34 & v29 | *v31 & ~v34;
                    v30 = v32 - 1;
                    v35 = v30;
                    if ( ~v34 == 0xF0 )
                      ++v31;
                  }
                }
                ++v26;
                v28 += *((int *)a3 + 22);
                v27 = (struct _PLGRUN *)((char *)v27 + 8);
                --v36;
              }
              while ( v36 );
              v7 = a2;
            }
            v8 = v27;
          }
          while ( v27 != v7 );
        }
      }
    }
    else if ( a1 != a2 )
    {
      do
      {
        v9 = (struct _PLGRUN *)((char *)v8 + 12);
        v10 = *((_DWORD *)a3 + 22) * *((_DWORD *)v8 + 1);
        v11 = *(_DWORD *)v8 | (16 * *(_DWORD *)v8);
        v12 = *((_DWORD *)v8 + 2);
        for ( j = *((_QWORD *)a3 + 10) + v10; v12; --v12 )
        {
          v14 = *((_DWORD *)v9 + 1);
          for ( k = (_BYTE *)(j + ((__int64)*(int *)v9 >> 1)); v14; --v14 )
          {
            if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v38, (unsigned __int64)k) )
              break;
            *k = v16 & v11 | ~v16 & *k;
            if ( ~v16 == 0xF0 )
              ++k;
          }
          v9 = (struct _PLGRUN *)((char *)v9 + 8);
          j += *((int *)a3 + 22);
        }
        v8 = v9;
      }
      while ( v9 != v7 );
    }
  }
}
