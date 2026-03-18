/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C002CD80
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall DC::vUpdate_VisRect(DC *this, struct REGION *a2)
{
  PVOID DeferredContext; // r13
  unsigned int v5; // ebx
  __int64 v6; // rbp
  unsigned int v7; // edx
  signed int v8; // ecx
  __int64 v9; // r8
  unsigned int v10; // ecx
  __int64 v11; // r15
  unsigned int v12; // edx
  signed int v13; // ecx
  __int64 v14; // r8
  DC *v15; // rdx
  int v16; // ecx
  __m128i v17; // xmm0
  int v18; // ecx
  int v19; // eax
  __m128i v20; // xmm0
  _QWORD *v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // r15
  unsigned int v24; // edi
  unsigned int v25; // edx
  signed int v26; // ecx
  __int64 v27; // r9
  unsigned int v28; // ecx
  __int64 v29; // rbp
  unsigned int v30; // edx
  signed int v31; // ecx
  __int64 v32; // r8
  DC *v33; // rdx
  __m128i v34; // [rsp+20h] [rbp-38h]

  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v5 = (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000;
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)*(_DWORD *)this,
                                  1)
           + 13) == HIWORD(v5) )
        v5 = (unsigned __int16)v5;
    }
    else
    {
      v5 = (unsigned __int16)*(_DWORD *)this;
    }
  }
  v6 = *((_QWORD *)DeferredContext + 2);
  v7 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v7 + ((*(unsigned __int16 *)(v6 + 2) - 1) << 16) )
    goto LABEL_54;
  if ( v5 < v7 )
  {
    v8 = 0;
    goto LABEL_7;
  }
  v8 = ((v5 - v7) >> 16) + 1;
  if ( (v5 - v7) >> 16 == -2 )
  {
LABEL_54:
    v11 = 0LL;
    goto LABEL_12;
  }
LABEL_7:
  v9 = *(_QWORD *)(v6 + 8LL * v8 + 8);
  if ( v8 )
    v10 = v5 - ((v8 - 1) << 16) - v7;
  else
    v10 = v5;
  v11 = 0LL;
  if ( v10 < *(_DWORD *)(v9 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                 + 16LL * (unsigned __int8)v10
                 + 8) )
  {
    v11 = *(_QWORD *)v9 + 24LL * v10;
  }
LABEL_12:
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)DeferredContext + 2),
                                  (unsigned __int16)v5,
                                  1)
           + 13) == HIWORD(v5) )
        v5 = (unsigned __int16)v5;
    }
    else
    {
      v5 = (unsigned __int16)v5;
    }
  }
  v12 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v12 + ((*(unsigned __int16 *)(v6 + 2) - 1) << 16) )
    goto LABEL_62;
  if ( v5 >= v12 )
  {
    v13 = ((v5 - v12) >> 16) + 1;
    if ( (v5 - v12) >> 16 == -2 )
      goto LABEL_62;
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_QWORD *)(v6 + 8LL * v13 + 8);
  if ( v13 )
    v5 = v5 - ((v13 - 1) << 16) - v12;
  if ( v5 < *(_DWORD *)(v14 + 20) )
  {
    v15 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v5 >> 8))
                 + 16LL * (unsigned __int8)v5
                 + 8);
    goto LABEL_20;
  }
LABEL_62:
  v15 = 0LL;
LABEL_20:
  if ( v15 != this )
    v11 = 0LL;
  if ( (*(_BYTE *)(v11 + 15) & 4) != 0 )
  {
    if ( !a2 )
      goto LABEL_64;
    if ( *((_DWORD *)a2 + 21) == 1 )
    {
      v16 = 1;
    }
    else
    {
      v16 = 3;
      if ( *((_DWORD *)a2 + 20) <= 0xA0u )
        v16 = 2;
    }
    *(_DWORD *)(*((_QWORD *)this + 10) + 392LL) = v16;
    if ( *((_DWORD *)a2 + 21) == 1 )
    {
LABEL_64:
      v20 = (__m128i)rclEmpty;
    }
    else
    {
      v18 = *((_DWORD *)this + 356);
      v34 = *(__m128i *)((char *)a2 + 88);
      v17 = v34;
      v34.m128i_i32[2] -= v18;
      v34.m128i_i32[0] = _mm_cvtsi128_si32(v17) - v18;
      v19 = *((_DWORD *)this + 357);
      v34.m128i_i32[1] -= v19;
      v34.m128i_i32[3] -= v19;
      v20 = v34;
    }
    *(__m128i *)(*((_QWORD *)this + 10) + 396LL) = v20;
    v21 = WPP_MAIN_CB.Dpc.DeferredContext;
    v22 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
            (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000u);
    v23 = v21[2];
    v24 = v22;
    v25 = *(_DWORD *)(v23 + 2056);
    if ( v22 < v25 + ((*(unsigned __int16 *)(v23 + 2) - 1) << 16) )
    {
      if ( v22 < v25 )
      {
        v26 = 0;
        goto LABEL_32;
      }
      v26 = ((v22 - v25) >> 16) + 1;
      if ( (v22 - v25) >> 16 != -2 )
      {
LABEL_32:
        v27 = *(_QWORD *)(v23 + 8LL * v26 + 8);
        if ( v26 )
          v28 = v22 - ((v26 - 1) << 16) - v25;
        else
          v28 = v22;
        v29 = 0LL;
        if ( v28 < *(_DWORD *)(v27 + 20)
          && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v28 >> 8))
                       + 16LL * (unsigned __int8)v28
                       + 8) )
        {
          v29 = *(_QWORD *)v27 + 24LL * v28;
        }
LABEL_37:
        if ( v22 >= 0x10000 )
        {
          if ( *(_DWORD *)v21 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        (GdiHandleEntryDirectory *)v23,
                                        (unsigned __int16)v22,
                                        1)
                 + 13) == HIWORD(v22) )
              v24 = (unsigned __int16)v24;
          }
          else
          {
            v24 = (unsigned __int16)v22;
          }
        }
        v30 = *(_DWORD *)(v23 + 2056);
        if ( v24 >= v30 + ((*(unsigned __int16 *)(v23 + 2) - 1) << 16) )
          goto LABEL_49;
        if ( v24 >= v30 )
        {
          v31 = ((v24 - v30) >> 16) + 1;
          if ( (v24 - v30) >> 16 == -2 )
            goto LABEL_49;
        }
        else
        {
          v31 = 0;
        }
        v32 = *(_QWORD *)(v23 + 8LL * v31 + 8);
        if ( v31 )
          v24 = v24 - ((v31 - 1) << 16) - v30;
        if ( v24 < *(_DWORD *)(v32 + 20) )
        {
          v33 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v32 + 24) + 8 * ((unsigned __int64)v24 >> 8))
                       + 16LL * (unsigned __int8)v24
                       + 8);
LABEL_45:
          if ( v33 != this )
            v29 = 0LL;
          *(_BYTE *)(v29 + 15) &= ~4u;
          return;
        }
LABEL_49:
        v33 = 0LL;
        goto LABEL_45;
      }
    }
    v29 = 0LL;
    goto LABEL_37;
  }
}
