/*
 * XREFs of ?vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00D9650
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0021670 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00216DC (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002193C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C02CEF80 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWrite32(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  __int64 v5; // rax
  struct _PLGRUN *v7; // r15
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r8
  int v10; // r11d
  int v11; // edi
  __int64 j; // r9
  _DWORD *v13; // rdx
  _DWORD *v14; // rdx
  int v15; // r10d
  __int64 v16; // r8
  __int64 v17; // r9
  struct _PLGRUN *v18; // r14
  LONG v19; // edi
  __int64 v20; // r12
  int v21; // ebx
  _DWORD *i; // r11
  LONG v23; // r10d
  _DWORD *v24; // r11
  int v25; // [rsp+30h] [rbp-30h]
  int v26; // [rsp+34h] [rbp-2Ch]
  struct _RECTL si128; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v28[3]; // [rsp+48h] [rbp-18h] BYREF

  if ( a2 )
  {
    v5 = *((unsigned int *)a3 + 16);
    v28[0] = *((_QWORD *)a3 + 9);
    v7 = a2;
    v8 = a1;
    v28[1] = v5 + v28[0] - 4LL;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v8 != v7 )
      {
        do
        {
          v18 = (struct _PLGRUN *)((char *)v8 + 12);
          v19 = *((_DWORD *)v8 + 1);
          v26 = *(_DWORD *)v8;
          v20 = *((_QWORD *)a3 + 10) + v19 * *((_DWORD *)a3 + 22);
          v25 = *((_DWORD *)v8 + 2);
          if ( v25 )
          {
            do
            {
              if ( v19 < si128.top || v19 >= si128.bottom )
                XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &si128, v19);
              if ( v19 >= si128.top && v19 < si128.bottom )
              {
                v21 = *((_DWORD *)v18 + 1);
                for ( i = (_DWORD *)(v20 + 4LL * *(int *)v18); v21; --v21 )
                {
                  if ( !(unsigned __int8)PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v28, i, v16, v17) )
                    break;
                  if ( v23 < si128.left || v23 >= si128.right )
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v23);
                  if ( v23 >= si128.left && v23 < si128.right )
                    *v24 = v26;
                  i = v24 + 1;
                }
              }
              ++v19;
              v20 += *((int *)a3 + 22);
              v18 = (struct _PLGRUN *)((char *)v18 + 8);
              --v25;
            }
            while ( v25 );
            v7 = a2;
          }
          v8 = v18;
        }
        while ( v18 != v7 );
      }
    }
    else if ( a1 != a2 )
    {
      do
      {
        v9 = (struct _PLGRUN *)((char *)v8 + 12);
        v10 = *((_DWORD *)v8 + 2);
        v11 = *(_DWORD *)v8;
        for ( j = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * *((_DWORD *)v8 + 1); v10; --v10 )
        {
          v13 = (_DWORD *)(j + 4LL * *(int *)v9);
          if ( *((_DWORD *)v9 + 1) )
          {
            do
            {
              if ( !(unsigned __int8)PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v28, v13, v9, j) )
                break;
              *v14 = v11;
              v13 = v14 + 1;
            }
            while ( v15 != 1 );
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
