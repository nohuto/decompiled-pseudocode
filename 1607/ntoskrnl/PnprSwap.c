/*
 * XREFs of PnprSwap @ 0x1401D0740
 * Callers:
 *     PnprEndMirroring @ 0x1403DB9D0 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x1403DBA90 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     PnprSwapFinalize @ 0x1401D0964 (PnprSwapFinalize.c)
 *     MmUnmapReservedMapping @ 0x1401E3FC4 (MmUnmapReservedMapping.c)
 *     PnprMirrorMarkedPages @ 0x1403DC208 (PnprMirrorMarkedPages.c)
 */

__int64 PnprSwap()
{
  SIZE_T v0; // rcx
  int v1; // ebx
  SIZE_T v2; // rdx
  int v3; // ecx
  int v4; // ecx
  SIZE_T v5; // rax
  __int64 (__fastcall *v6)(_QWORD); // rax
  int v7; // eax
  int v8; // eax
  int i; // ecx
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 result; // rax

  v0 = PnprContext;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    if ( *(int *)(PnprContext + 200) < 2 )
      *(_DWORD *)(PnprContext + 200) = 2;
    v1 = PnprMirrorMarkedPages();
    if ( v1 < 0 )
    {
      v2 = PnprContext;
      v3 = *(_DWORD *)(PnprContext + 10744);
      if ( !v3 )
        v3 = 2801;
      *(_DWORD *)(PnprContext + 10744) = v3;
      v4 = *(_DWORD *)(v2 + 10748);
      if ( !v4 )
        v4 = 1;
      *(_DWORD *)(v2 + 10748) = v4;
      goto LABEL_35;
    }
    v5 = PnprContext;
    *(_DWORD *)(PnprContext + 204) = 1;
    *(_DWORD *)(v5 + 200) = 3;
    v0 = PnprContext;
    if ( *(_DWORD *)(v5 + 204) < *(_DWORD *)(PnprContext + 176) )
    {
      do
      {
        _mm_pause();
        v0 = PnprContext;
      }
      while ( *(_DWORD *)(PnprContext + 204) < *(_DWORD *)(PnprContext + 176) );
    }
  }
  v6 = *(__int64 (__fastcall **)(_QWORD))(v0 + 10720);
  if ( v6 )
  {
    v1 = v6(*(_QWORD *)(v0 + 10640));
    if ( v1 < 0 )
    {
      v2 = PnprContext;
      v7 = *(_DWORD *)(PnprContext + 10744);
      if ( !v7 )
        v7 = 2821;
      *(_DWORD *)(PnprContext + 10744) = v7;
      v8 = *(_DWORD *)(v2 + 10748);
      if ( !v8 )
        v8 = 8;
      *(_DWORD *)(v2 + 10748) = v8;
      goto LABEL_35;
    }
    v0 = PnprContext;
  }
  *(_DWORD *)(v0 + 204) = 1;
  *(_DWORD *)(v0 + 200) = 4;
  for ( i = *(_DWORD *)(v0 + 204); i < *(_DWORD *)(PnprContext + 176); i = *(_DWORD *)(PnprContext + 204) )
    _mm_pause();
  v10 = PnprSwapFinalize();
  v2 = PnprContext;
  v1 = v10;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
  {
    v11 = 0LL;
    if ( *(_DWORD *)(PnprContext + 176) )
    {
      do
      {
        v12 = *(_QWORD *)(v2 + 136) + 24 * v11;
        if ( v12 )
        {
          v13 = *(_QWORD *)v12;
          if ( *(_QWORD *)v12 )
          {
            if ( (*(_BYTE *)(v13 + 10) & 1) != 0 )
            {
              MmUnmapReservedMapping(*(PVOID *)(v12 + 8), 0x51706E50u, (PMDL)v13);
              v2 = PnprContext;
            }
          }
        }
        v14 = *(_QWORD *)(v2 + 144) + 24 * v11;
        if ( v14 )
        {
          v15 = *(_QWORD *)v14;
          if ( *(_QWORD *)v14 )
          {
            if ( (*(_BYTE *)(v15 + 10) & 1) != 0 )
            {
              MmUnmapReservedMapping(*(PVOID *)(v14 + 8), 0x51706E50u, (PMDL)v15);
              v2 = PnprContext;
            }
          }
        }
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < *(_DWORD *)(v2 + 176) );
    }
  }
LABEL_35:
  result = (unsigned int)v1;
  *(_DWORD *)(v2 + 200) = 5;
  return result;
}
