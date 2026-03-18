/*
 * XREFs of ?vPlgWrite8@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02CFEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0021670 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00216DC (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002193C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C02CEF80 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWrite8(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  __int64 v5; // rax
  struct _PLGRUN *v7; // r12
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r8
  int v10; // r10d
  int v11; // edi
  __int64 m; // r9
  unsigned __int64 v13; // rdx
  _BYTE *v14; // rdx
  int v15; // r11d
  struct _PLGRUN *v16; // r8
  LONG v17; // r10d
  int v18; // edi
  int v19; // r14d
  __int64 i; // r11
  int v21; // ebx
  unsigned __int64 j; // rdx
  _BYTE *v23; // rdx
  LONG v24; // r9d
  struct _PLGRUN *v25; // r15
  LONG v26; // edi
  __int64 v27; // r13
  int v28; // ebx
  unsigned __int64 k; // r11
  LONG v30; // r10d
  _BYTE *v31; // r11
  int v32; // [rsp+30h] [rbp-30h]
  int v33; // [rsp+34h] [rbp-2Ch]
  struct _RECTL rclBounds; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v35[3]; // [rsp+48h] [rbp-18h] BYREF

  if ( a2 )
  {
    v5 = *((unsigned int *)a3 + 16);
    v35[0] = *((_QWORD *)a3 + 9);
    v7 = a2;
    v8 = a1;
    v35[1] = v5 + v35[0] - 1;
    if ( a4 )
    {
      if ( a4->iDComplexity == 1 )
      {
        rclBounds = a4->rclBounds;
        if ( a1 != a2 )
        {
          do
          {
            v16 = (struct _PLGRUN *)((char *)v8 + 12);
            v17 = *((_DWORD *)v8 + 1);
            v18 = *((_DWORD *)v8 + 2);
            v19 = *(_DWORD *)v8;
            for ( i = *((_QWORD *)a3 + 10) + v17 * *((_DWORD *)a3 + 22); v18; --v18 )
            {
              if ( v17 >= rclBounds.top && v17 < rclBounds.bottom )
              {
                v21 = *((_DWORD *)v16 + 1);
                for ( j = i + *(int *)v16; v21; --v21 )
                {
                  if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v35, j) )
                    break;
                  if ( v24 >= rclBounds.left && v24 < rclBounds.right )
                    *v23 = v19;
                  j = (unsigned __int64)(v23 + 1);
                }
              }
              ++v17;
              i += *((int *)a3 + 22);
              v16 = (struct _PLGRUN *)((char *)v16 + 8);
            }
            v8 = v16;
          }
          while ( v16 != v7 );
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
            v25 = (struct _PLGRUN *)((char *)v8 + 12);
            v26 = *((_DWORD *)v8 + 1);
            v33 = *(_DWORD *)v8;
            v27 = *((_QWORD *)a3 + 10) + v26 * *((_DWORD *)a3 + 22);
            v32 = *((_DWORD *)v8 + 2);
            if ( v32 )
            {
              do
              {
                if ( v26 < rclBounds.top || v26 >= rclBounds.bottom )
                  XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v26);
                if ( v26 >= rclBounds.top && v26 < rclBounds.bottom )
                {
                  v28 = *((_DWORD *)v25 + 1);
                  for ( k = *(int *)v25 + v27; v28; --v28 )
                  {
                    if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v35, k) )
                      break;
                    if ( v30 < rclBounds.left || v30 >= rclBounds.right )
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v30);
                    if ( v30 >= rclBounds.left && v30 < rclBounds.right )
                      *v31 = v33;
                    k = (unsigned __int64)(v31 + 1);
                  }
                }
                ++v26;
                v27 += *((int *)a3 + 22);
                v25 = (struct _PLGRUN *)((char *)v25 + 8);
                --v32;
              }
              while ( v32 );
              v7 = a2;
            }
            v8 = v25;
          }
          while ( v25 != v7 );
        }
      }
    }
    else if ( a1 != a2 )
    {
      do
      {
        v9 = (struct _PLGRUN *)((char *)v8 + 12);
        v10 = *((_DWORD *)v8 + 2);
        v11 = *(_DWORD *)v8;
        for ( m = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * *((_DWORD *)v8 + 1); v10; --v10 )
        {
          v13 = m + *(int *)v9;
          if ( *((_DWORD *)v9 + 1) )
          {
            do
            {
              if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v35, v13) )
                break;
              *v14 = v11;
              v13 = (unsigned __int64)(v14 + 1);
            }
            while ( v15 != 1 );
          }
          v9 = (struct _PLGRUN *)((char *)v9 + 8);
          m += *((int *)a3 + 22);
        }
        v8 = v9;
      }
      while ( v9 != v7 );
    }
  }
}
