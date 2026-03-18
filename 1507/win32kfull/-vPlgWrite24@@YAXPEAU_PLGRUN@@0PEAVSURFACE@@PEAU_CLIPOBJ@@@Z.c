/*
 * XREFs of ?vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0021670 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00216DC (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002193C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C02CEF80 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWrite24(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  __int64 v5; // rax
  struct SURFACE *v6; // rsi
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r9
  int v10; // eax
  int v11; // ebx
  __int64 k; // r11
  __int64 v13; // r8
  __int64 m; // rdx
  __int64 v15; // rdx
  int v16; // r8d
  char v17; // r10
  __int64 right; // r8
  __int64 left; // r9
  LONG v20; // edi
  int v21; // r15d
  __int64 v22; // r12
  struct _PLGRUN *i; // rsi
  int v24; // ebx
  __int64 j; // r11
  int v26; // r10d
  __int64 v27; // r11
  bool v28; // zf
  int v29; // [rsp+30h] [rbp-40h]
  int v30; // [rsp+30h] [rbp-40h]
  struct _RECTL si128; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v32[3]; // [rsp+48h] [rbp-28h] BYREF

  if ( a2 )
  {
    v5 = *((unsigned int *)a3 + 16);
    v6 = a3;
    v32[0] = *((_QWORD *)a3 + 9);
    v8 = a1;
    v32[1] = v5 + v32[0] - 3LL;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v8 != a2 )
      {
        right = (unsigned int)si128.right;
        left = (unsigned int)si128.left;
        do
        {
          v20 = *((_DWORD *)v8 + 1);
          v21 = *((_DWORD *)v8 + 2);
          v30 = *(_DWORD *)v8;
          v22 = *((_QWORD *)v6 + 10) + v20 * *((_DWORD *)v6 + 22);
          for ( i = (struct _PLGRUN *)((char *)v8 + 12); v21; --v21 )
          {
            if ( v20 < si128.top || v20 >= si128.bottom )
            {
              XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &si128, v20);
              left = (unsigned int)si128.left;
              right = (unsigned int)si128.right;
            }
            if ( v20 >= si128.top && v20 < si128.bottom )
            {
              v24 = *((_DWORD *)i + 1);
              for ( j = *(int *)i + v22 + 2LL * *(int *)i; v24; --v24 )
              {
                if ( !(unsigned __int8)PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v32, j, right, left) )
                  break;
                if ( v26 < (int)left || v26 >= (int)right )
                {
                  XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v26, left);
                  right = (unsigned int)si128.right;
                  left = (unsigned int)si128.left;
                }
                if ( v26 >= (int)left && v26 < (int)right )
                {
                  *(_WORD *)v27 = v30;
                  *(_BYTE *)(v27 + 2) = BYTE2(v30);
                }
                j = v27 + 3;
              }
            }
            ++v20;
            i = (struct _PLGRUN *)((char *)i + 8);
            v22 += *((int *)a3 + 22);
          }
          v28 = i == a2;
          v8 = i;
          v6 = a3;
        }
        while ( !v28 );
      }
    }
    else if ( a1 != a2 )
    {
      do
      {
        v9 = (struct _PLGRUN *)((char *)v8 + 12);
        v29 = *(_DWORD *)v8;
        v10 = *((_DWORD *)v6 + 22) * *((_DWORD *)v8 + 1);
        v11 = *((_DWORD *)v8 + 2);
        for ( k = *((_QWORD *)v6 + 10) + v10; v11; --v11 )
        {
          v13 = *((unsigned int *)v9 + 1);
          for ( m = k + 2LL * *(int *)v9 + *(int *)v9; (_DWORD)v13; v13 = (unsigned int)(v16 - 1) )
          {
            if ( !(unsigned __int8)PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v32, m, v13, v9) )
              break;
            *(_WORD *)v15 = v29;
            *(_BYTE *)(v15 + 2) = v17;
            m = v15 + 3;
          }
          v9 = (struct _PLGRUN *)((char *)v9 + 8);
          k += *((int *)v6 + 22);
        }
        v8 = v9;
      }
      while ( v9 != a2 );
    }
  }
}
