/*
 * XREFs of ?vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0003590
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C00417DC (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0041848 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C02D2E68 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWrite32(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  __int64 v5; // rax
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r9
  int v10; // eax
  int v11; // ebx
  __int64 k; // r11
  __int64 v13; // r8
  _DWORD *m; // rdx
  _DWORD *v15; // rdx
  int v16; // r8d
  int v17; // r10d
  __int64 right; // r8
  __int64 left; // r9
  struct _PLGRUN *v20; // rsi
  LONG v21; // edi
  int v22; // r12d
  int v23; // ebp
  __int64 i; // r15
  int v25; // ebx
  _DWORD *j; // r11
  int v27; // r10d
  _DWORD *v28; // r11
  struct _RECTL si128; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-38h] BYREF

  if ( a2 )
  {
    v5 = *((unsigned int *)a3 + 16);
    v30[0] = *((_QWORD *)a3 + 9);
    v8 = a1;
    v30[1] = v5 + v30[0] - 4LL;
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
          v20 = (struct _PLGRUN *)((char *)v8 + 12);
          v21 = *((_DWORD *)v8 + 1);
          v22 = *((_DWORD *)v8 + 2);
          v23 = *(_DWORD *)v8;
          for ( i = *((_QWORD *)a3 + 10) + v21 * *((_DWORD *)a3 + 22); v22; --v22 )
          {
            if ( v21 < si128.top || v21 >= si128.bottom )
            {
              XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &si128, v21);
              left = (unsigned int)si128.left;
              right = (unsigned int)si128.right;
            }
            if ( v21 >= si128.top && v21 < si128.bottom )
            {
              v25 = *((_DWORD *)v20 + 1);
              for ( j = (_DWORD *)(i + 4LL * *(int *)v20); v25; --v25 )
              {
                if ( !(unsigned __int8)PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v30, j, right, left) )
                  break;
                if ( v27 < (int)left || v27 >= (int)right )
                {
                  XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v27, left);
                  right = (unsigned int)si128.right;
                  left = (unsigned int)si128.left;
                }
                if ( v27 >= (int)left && v27 < (int)right )
                  *v28 = v23;
                j = v28 + 1;
              }
            }
            ++v21;
            i += *((int *)a3 + 22);
            v20 = (struct _PLGRUN *)((char *)v20 + 8);
          }
          v8 = v20;
        }
        while ( v20 != a2 );
      }
    }
    else if ( a1 != a2 )
    {
      do
      {
        v9 = (struct _PLGRUN *)((char *)v8 + 12);
        v10 = *((_DWORD *)a3 + 22) * *((_DWORD *)v8 + 1);
        v11 = *((_DWORD *)v8 + 2);
        for ( k = *((_QWORD *)a3 + 10) + v10; v11; --v11 )
        {
          v13 = *((unsigned int *)v9 + 1);
          for ( m = (_DWORD *)(k + 4LL * *(int *)v9); (_DWORD)v13; v13 = (unsigned int)(v16 - 1) )
          {
            if ( !(unsigned __int8)PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v30, m, v13, v9) )
              break;
            *v15 = v17;
            m = v15 + 1;
          }
          v9 = (struct _PLGRUN *)((char *)v9 + 8);
          k += *((int *)a3 + 22);
        }
        v8 = v9;
      }
      while ( v9 != a2 );
    }
  }
}
