/*
 * XREFs of ?vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02D3BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C00417DC (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0041848 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C02D2E68 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWrite24(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  __int64 v5; // rax
  struct _PLGRUN *v7; // r15
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r8
  int v10; // r10d
  __int64 j; // r9
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // r11d
  struct _PLGRUN *v15; // r14
  LONG v16; // edi
  __int64 v17; // r13
  int v18; // ebx
  unsigned __int64 i; // r11
  LONG v20; // r10d
  __int64 v21; // r11
  int v22; // [rsp+30h] [rbp-30h]
  int v23; // [rsp+30h] [rbp-30h]
  int v24; // [rsp+34h] [rbp-2Ch]
  struct _RECTL si128; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v26[3]; // [rsp+48h] [rbp-18h] BYREF

  if ( a2 )
  {
    v5 = *((unsigned int *)a3 + 16);
    v26[0] = *((_QWORD *)a3 + 9);
    v7 = a2;
    v8 = a1;
    v26[1] = v5 + v26[0] - 3;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v8 != v7 )
      {
        do
        {
          v15 = (struct _PLGRUN *)((char *)v8 + 12);
          v16 = *((_DWORD *)v8 + 1);
          v23 = *(_DWORD *)v8;
          v17 = *((_QWORD *)a3 + 10) + v16 * *((_DWORD *)a3 + 22);
          v24 = *((_DWORD *)v8 + 2);
          if ( v24 )
          {
            do
            {
              if ( v16 < si128.top || v16 >= si128.bottom )
                XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &si128, v16);
              if ( v16 >= si128.top && v16 < si128.bottom )
              {
                v18 = *((_DWORD *)v15 + 1);
                for ( i = *(int *)v15 + v17 + 2LL * *(int *)v15; v18; --v18 )
                {
                  if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v26, i) )
                    break;
                  if ( v20 < si128.left || v20 >= si128.right )
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v20);
                  if ( v20 >= si128.left && v20 < si128.right )
                  {
                    *(_WORD *)v21 = v23;
                    *(_BYTE *)(v21 + 2) = BYTE2(v23);
                  }
                  i = v21 + 3;
                }
              }
              ++v16;
              v17 += *((int *)a3 + 22);
              v15 = (struct _PLGRUN *)((char *)v15 + 8);
              --v24;
            }
            while ( v24 );
            v7 = a2;
          }
          v8 = v15;
        }
        while ( v15 != v7 );
      }
    }
    else if ( a1 != a2 )
    {
      do
      {
        v9 = (struct _PLGRUN *)((char *)v8 + 12);
        v10 = *((_DWORD *)v8 + 2);
        v22 = *(_DWORD *)v8;
        for ( j = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * *((_DWORD *)v8 + 1); v10; --v10 )
        {
          v12 = j + 2LL * *(int *)v9 + *(int *)v9;
          if ( *((_DWORD *)v9 + 1) )
          {
            do
            {
              if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v26, v12) )
                break;
              *(_WORD *)v13 = v22;
              *(_BYTE *)(v13 + 2) = BYTE2(v22);
              v12 = v13 + 3;
            }
            while ( v14 != 1 );
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
