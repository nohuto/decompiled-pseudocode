/*
 * XREFs of ?vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0001470
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C002DCE8 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002DD54 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C02CFDC0 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
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
  struct _PLGRUN *v16; // r14
  LONG v17; // edi
  __int64 v18; // r12
  int v19; // ebx
  _DWORD *i; // r11
  int v21; // r9d
  LONG v22; // r10d
  _DWORD *v23; // r11
  int v24; // [rsp+30h] [rbp-30h]
  int v25; // [rsp+34h] [rbp-2Ch]
  struct _RECTL si128; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v27[3]; // [rsp+48h] [rbp-18h] BYREF

  if ( a2 )
  {
    v5 = *((unsigned int *)a3 + 16);
    v27[0] = *((_QWORD *)a3 + 9);
    v7 = a2;
    v8 = a1;
    v27[1] = v5 + v27[0] - 4LL;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v8 != v7 )
      {
        do
        {
          v16 = (struct _PLGRUN *)((char *)v8 + 12);
          v17 = *((_DWORD *)v8 + 1);
          v18 = *((_QWORD *)a3 + 10) + v17 * *((_DWORD *)a3 + 22);
          v24 = *((_DWORD *)v8 + 2);
          if ( v24 )
          {
            v25 = *(_DWORD *)v8;
            do
            {
              if ( v17 < si128.top || v17 >= si128.bottom )
                XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &si128, v17);
              if ( v17 >= si128.top && v17 < si128.bottom )
              {
                v19 = *((_DWORD *)v16 + 1);
                for ( i = (_DWORD *)(v18 + 4LL * *(int *)v16); v19; --v19 )
                {
                  if ( !(unsigned __int8)PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v27, i) )
                    break;
                  if ( v22 < si128.left || v22 >= si128.right )
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v22, v21);
                  if ( v22 >= si128.left && v22 < si128.right )
                    *v23 = v25;
                  i = v23 + 1;
                }
              }
              ++v17;
              v18 += *((int *)a3 + 22);
              v16 = (struct _PLGRUN *)((char *)v16 + 8);
              --v24;
            }
            while ( v24 );
            v7 = a2;
          }
          v8 = v16;
        }
        while ( v16 != v7 );
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
              if ( !(unsigned __int8)PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v27, v13) )
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
