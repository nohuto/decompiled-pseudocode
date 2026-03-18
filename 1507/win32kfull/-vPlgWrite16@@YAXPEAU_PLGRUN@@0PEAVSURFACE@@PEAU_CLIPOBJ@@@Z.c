/*
 * XREFs of ?vPlgWrite16@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02CF5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z @ 0x1C0021670 (-vFindSegment@XCLIPOBJ@@QEAAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00216DC (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002193C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?inBounds@?$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z @ 0x1C02CEF80 (-inBounds@-$PjoffInSurfaceBound@UtagRGBTRIPLE@@@@QEAA_NPEAUtagRGBTRIPLE@@@Z.c)
 */

void __fastcall vPlgWrite16(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  __int64 v5; // rax
  struct _PLGRUN *v7; // r15
  struct _PLGRUN *v8; // rbx
  struct _PLGRUN *v9; // r8
  int v10; // r11d
  int v11; // edi
  __int64 j; // r9
  unsigned __int64 v13; // rdx
  _WORD *v14; // rdx
  int v15; // r10d
  struct _PLGRUN *v16; // r14
  LONG v17; // edi
  __int64 v18; // r12
  int v19; // ebx
  unsigned __int64 i; // r11
  LONG v21; // r10d
  _WORD *v22; // r11
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
    v26[1] = v5 + v26[0] - 2;
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
          v24 = *(_DWORD *)v8;
          v18 = *((_QWORD *)a3 + 10) + v17 * *((_DWORD *)a3 + 22);
          v23 = *((_DWORD *)v8 + 2);
          if ( v23 )
          {
            do
            {
              if ( v17 < si128.top || v17 >= si128.bottom )
                XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &si128, v17);
              if ( v17 >= si128.top && v17 < si128.bottom )
              {
                v19 = *((_DWORD *)v16 + 1);
                for ( i = v18 + 2LL * *(int *)v16; v19; --v19 )
                {
                  if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v26, i) )
                    break;
                  if ( v21 < si128.left || v21 >= si128.right )
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v21);
                  if ( v21 >= si128.left && v21 < si128.right )
                    *v22 = v24;
                  i = (unsigned __int64)(v22 + 1);
                }
              }
              ++v17;
              v18 += *((int *)a3 + 22);
              v16 = (struct _PLGRUN *)((char *)v16 + 8);
              --v23;
            }
            while ( v23 );
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
          v13 = j + 2LL * *(int *)v9;
          if ( *((_DWORD *)v9 + 1) )
          {
            do
            {
              if ( !PjoffInSurfaceBound<tagRGBTRIPLE>::inBounds(v26, v13) )
                break;
              *v14 = v11;
              v13 = (unsigned __int64)(v14 + 1);
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
