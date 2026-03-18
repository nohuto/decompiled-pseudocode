/*
 * XREFs of ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02B7A38
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C0099AD8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C009A950 (GreSetDIBitsToDeviceInternal.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00CF43C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02696C0 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x1C0005914 (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall EXLATEOBJ::bMakeXlate(
        XLATE **a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // r15d
  __int64 v9; // rdx
  signed __int32 v10; // eax
  unsigned int *v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // r15d
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // ecx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // r8
  unsigned int v30; // eax
  struct PALETTE *v31; // [rsp+20h] [rbp-10h] BYREF
  __int64 v32; // [rsp+28h] [rbp-8h] BYREF
  __int64 v34; // [rsp+88h] [rbp+58h] BYREF

  v6 = a6;
  v34 = *(_QWORD *)(a4 + 120);
  if ( a6 <= 0x3FFFFFFF && 4 * (unsigned __int64)a6 + 88 > 4 * (unsigned __int64)a6 )
  {
    v9 = 4LL * a6 == -88 ? 0LL : AllocThreadBufferWithTag(4 * a6 + 88, 1953265735LL, 0LL);
    *a1 = (XLATE *)v9;
    if ( v9 )
    {
      v10 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
      *(_DWORD *)(v9 + 36) = -1;
      v11 = (unsigned int *)(v9 + 80);
      v12 = a5;
      *(_DWORD *)(v9 + 12) = v6;
      v13 = (unsigned int)v12;
      *(_DWORD *)v9 = v10 + 1;
      *(_QWORD *)(v9 + 16) = v9 + 80;
      *(_QWORD *)(v9 + 4) = 2LL;
      *(_QWORD *)(v9 + 24) = 0LL;
      *(_DWORD *)(v9 + 32) = 0;
      *(_QWORD *)(v9 + 40) = 0LL;
      *(_QWORD *)(v9 + 48) = v34;
      *(_QWORD *)(v9 + 56) = a3;
      memset((void *)(v9 + 4 * (v12 + 20)), 0, 4LL * (v6 - (unsigned int)v12));
      v14 = *(_DWORD *)(a3 + 28);
      v32 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      v15 = v34;
      if ( !v34 || (*(_DWORD *)(v34 + 24) & 0x800) != 0 )
      {
        v21 = a3;
        if ( (struct PALETTE *)a3 != ppalDefault )
        {
          if ( v34 )
          {
            v24 = *(_QWORD *)(a3 + 80);
            if ( v24 )
            {
              if ( (_DWORD)v12 )
              {
                do
                {
                  v25 = *a2;
                  if ( (unsigned int)v25 >= v14 )
                    v25 = (unsigned int)v25 % v14;
                  ++a2;
                  *v11++ = *(unsigned __int8 *)(v25 + v24 + 4);
                  --v13;
                }
                while ( v13 );
              }
              goto LABEL_28;
            }
          }
          else
          {
            v26 = *(_QWORD *)(a3 + 72);
            if ( v26 )
            {
              if ( (_DWORD)v12 )
              {
                do
                {
                  v27 = *a2;
                  if ( (unsigned int)v27 >= v14 )
                    v27 = (unsigned int)v27 % v14;
                  ++a2;
                  *v11++ = *(unsigned __int8 *)(v27 + v26 + 4);
                  --v13;
                }
                while ( v13 );
              }
              goto LABEL_28;
            }
          }
          if ( (_DWORD)v12 )
          {
            while ( 1 )
            {
              v28 = *a2;
              if ( v28 >= v14 )
                v28 %= v14;
              v29 = *(unsigned int *)(*(_QWORD *)(v21 + 128) + 4LL * v28);
              if ( HIBYTE(*(_DWORD *)(*(_QWORD *)(v21 + 128) + 4LL * v28)) == 2 )
              {
                v30 = (unsigned __int16)v29;
                if ( (unsigned __int16)v29 >= 0x100u )
                  v30 = (unsigned __int8)v29;
              }
              else
              {
                v31 = ppalDefault;
                v30 = XEPALOBJ::ulDispatchGFPEFunction(&v31, *((unsigned int *)ppalDefault + 24), v29);
                if ( v30 >= 0xA )
                  v30 += 236;
              }
              *v11 = v30;
              ++a2;
              ++v11;
              if ( !--v13 )
                break;
              v21 = a3;
            }
          }
          goto LABEL_28;
        }
        if ( (_DWORD)v12 )
        {
          do
          {
            v22 = *a2;
            if ( v22 >= 0x14 )
              v22 %= 0x14u;
            if ( v22 >= 0xA )
              *v11 = v22 + 236;
            else
              *v11 = v22;
            ++v11;
            ++a2;
            --v13;
          }
          while ( v13 );
        }
      }
      else if ( (_DWORD)v12 )
      {
        while ( 1 )
        {
          v16 = *a2;
          if ( v16 >= v14 )
            v16 %= v14;
          v17 = *(_QWORD *)(a3 + 128);
          v18 = *(unsigned int *)(v17 + 4LL * v16);
          if ( HIBYTE(*(_DWORD *)(v17 + 4LL * v16)) == 2 )
          {
            v19 = *(_DWORD *)(v15 + 28);
            if ( v19 )
            {
              v20 = (unsigned __int16)v18;
              if ( (unsigned __int16)v18 >= v19 )
                v20 = (unsigned __int16)v18 % v19;
            }
            else
            {
              v20 = 0;
            }
          }
          else
          {
            v20 = XEPALOBJ::ulDispatchGFPEFunction(&v34, *(unsigned int *)(v15 + 96), v18);
          }
          *v11 = v20;
          ++a2;
          ++v11;
          if ( !--v13 )
            break;
          v15 = v34;
        }
      }
LABEL_28:
      XLATE::vCheckForTrivial(*a1);
      SEMOBJ::vUnlock((SEMOBJ *)&v32);
      return 1LL;
    }
  }
  return 0LL;
}
