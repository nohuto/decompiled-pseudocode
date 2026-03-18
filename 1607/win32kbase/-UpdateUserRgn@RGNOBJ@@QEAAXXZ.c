/*
 * XREFs of ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C002D3A0
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     SetRectRgnIndirect @ 0x1C002F110 (SetRectRgnIndirect.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C002F220 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0036760 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreOffsetRgn @ 0x1C0036A90 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x1C0039670 (GreSetRectRgn.c)
 *     GreGetRgnBox @ 0x1C00749E0 (GreGetRgnBox.c)
 *     GreRectInRegion @ 0x1C0074D50 (GreRectInRegion.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall RGNOBJ::UpdateUserRgn(RGNOBJ *this)
{
  _DWORD *v2; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD *DeferredContext; // r13
  __int64 v6; // r15
  unsigned int v7; // edx
  signed int v8; // ecx
  __int64 v9; // r10
  unsigned int v10; // r9d
  __int64 v11; // r11
  int v12; // r12d
  unsigned int v14; // edx
  signed int v15; // ecx
  __int64 v16; // r9
  _DWORD *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // [rsp+50h] [rbp+8h]

  v2 = *(_DWORD **)this;
  if ( !*(_QWORD *)this )
    return;
  v3 = (unsigned __int16)*v2;
  v4 = v3 | (*v2 >> 8) & 0xFF0000;
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      v19 = (unsigned __int16)v3;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v3,
                                  1)
           + 13) == HIWORD(v4) )
        v4 = v19;
    }
    else
    {
      v4 = (unsigned __int16)v3;
    }
  }
  v6 = DeferredContext[2];
  v7 = *(_DWORD *)(v6 + 2056);
  if ( v4 >= v7 + ((*(unsigned __int16 *)(v6 + 2) - 1) << 16) )
    goto LABEL_38;
  if ( v4 < v7 )
  {
    v8 = 0;
    goto LABEL_8;
  }
  v8 = ((v4 - v7) >> 16) + 1;
  if ( (v4 - v7) >> 16 == -2 )
  {
LABEL_38:
    v11 = 0LL;
    v12 = 1;
    goto LABEL_15;
  }
LABEL_8:
  v9 = *(_QWORD *)(v6 + 8LL * v8 + 8);
  v10 = v4;
  if ( v8 )
    v10 = v4 - ((v8 - 1) << 16) - v7;
  v11 = 0LL;
  v20 = 0LL;
  v12 = 1;
  if ( v10 < *(_DWORD *)(v9 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8LL * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8) )
  {
    v11 = *(_QWORD *)v9 + 24LL * v10;
LABEL_15:
    v20 = v11;
  }
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v6,
                                  (unsigned __int16)v4,
                                  1)
           + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
      v11 = v20;
    }
    else
    {
      v4 = (unsigned __int16)v4;
    }
  }
  v14 = *(_DWORD *)(v6 + 2056);
  if ( v4 >= v14 + ((*(unsigned __int16 *)(v6 + 2) - 1) << 16) )
    goto LABEL_45;
  if ( v4 >= v14 )
  {
    v15 = ((v4 - v14) >> 16) + 1;
    if ( (v4 - v14) >> 16 == -2 )
    {
LABEL_45:
      v17 = 0LL;
      goto LABEL_24;
    }
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_QWORD *)(v6 + 8LL * v15 + 8);
  if ( v15 )
    v4 = v4 - ((v15 - 1) << 16) - v14;
  if ( v4 >= *(_DWORD *)(v16 + 20) )
    goto LABEL_45;
  v17 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8LL * (v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8);
LABEL_24:
  if ( v17 != v2 )
    v11 = 0LL;
  v18 = *(_QWORD *)(v11 + 16);
  if ( v18 && (*(_DWORD *)v18 & 0x10) != 0 )
  {
    if ( v2[21] != 1 )
      v12 = (v2[20] > 0xA0u) + 2;
    *(_DWORD *)(v18 + 4) = v12;
    *(_OWORD *)(v18 + 8) = *(_OWORD *)(*(_QWORD *)this + 88LL);
  }
}
