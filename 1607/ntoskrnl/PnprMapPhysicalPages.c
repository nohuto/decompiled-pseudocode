/*
 * XREFs of PnprMapPhysicalPages @ 0x1403DBDEC
 * Callers:
 *     PnprMapTargetSparePhysicalPages @ 0x1403DBFB0 (PnprMapTargetSparePhysicalPages.c)
 * Callees:
 *     MmMapLockedPagesWithReservedMapping @ 0x1401E3E60 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x1401E3FC4 (MmUnmapReservedMapping.c)
 */

__int64 __fastcall PnprMapPhysicalPages(PMDL *a1, unsigned __int64 a2, unsigned __int64 *a3, _QWORD *a4)
{
  SIZE_T v4; // r10
  int v8; // eax
  int v9; // eax
  __int64 result; // rax
  unsigned __int64 v11; // rdi
  PMDL v12; // r8
  PMDL v13; // rcx
  unsigned __int64 v14; // r10
  struct _MDL *v15; // rax
  struct _MDL *i; // r8
  PVOID v17; // rax
  SIZE_T v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax

  v4 = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 4) != 0 )
  {
    if ( (a2 & 0xFFF) != 0 || (v11 = *a3) == 0 || (v11 & 0xFFF) != 0 )
    {
      v21 = *(_DWORD *)(PnprContext + 10744);
      if ( !v21 )
        v21 = 4062;
      *(_DWORD *)(PnprContext + 10744) = v21;
      v22 = *(_DWORD *)(v4 + 10748);
      if ( !v22 )
        v22 = 8;
      *(_DWORD *)(v4 + 10748) = v22;
      return 3221225485LL;
    }
    else
    {
      v12 = *a1;
      if ( v11 > 0x10000 )
        v11 = 0x10000LL;
      if ( (v12->MdlFlags & 1) != 0 )
        MmUnmapReservedMapping(a1[1], 0x51706E50u, v12);
      v13 = *a1;
      v14 = v11 >> 12;
      v13->Size = 8 * (((v11 + 4095) >> 12) + 6);
      v13->Next = 0LL;
      v13->MdlFlags = 0;
      v13->StartVa = 0LL;
      v13->ByteOffset = 0;
      v13->ByteCount = v11;
      v15 = *a1 + 1;
      for ( i = (struct _MDL *)(a2 >> 12); v14; --v14 )
      {
        v15->Next = i;
        v15 = (struct _MDL *)((char *)v15 + 8);
        i = (struct _MDL *)((char *)i + 1);
      }
      (*a1)->MdlFlags |= *((_WORD *)a1 + 8);
      v17 = MmMapLockedPagesWithReservedMapping(a1[1], 0x51706E50u, *a1, MmCached);
      if ( v17 )
      {
        *a4 = v17;
        result = 0LL;
        *a3 = v11;
      }
      else
      {
        v18 = PnprContext;
        v19 = *(_DWORD *)(PnprContext + 10744);
        if ( !v19 )
          v19 = 4117;
        *(_DWORD *)(PnprContext + 10744) = v19;
        v20 = *(_DWORD *)(v18 + 10748);
        if ( !v20 )
          v20 = 10;
        *(_DWORD *)(v18 + 10748) = v20;
        return 3221225626LL;
      }
    }
  }
  else
  {
    v8 = *(_DWORD *)(PnprContext + 10744);
    if ( !v8 )
      v8 = 4054;
    *(_DWORD *)(PnprContext + 10744) = v8;
    v9 = *(_DWORD *)(v4 + 10748);
    if ( !v9 )
      v9 = 8;
    *(_DWORD *)(v4 + 10748) = v9;
    return 3221225498LL;
  }
  return result;
}
