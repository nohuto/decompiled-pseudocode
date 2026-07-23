/*
 * XREFs of PnprReplaceStart @ 0x14064552C
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x1403DBA90 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     xHalAllocatePmcCounterSet @ 0x140581DE0 (xHalAllocatePmcCounterSet.c)
 */

__int64 PnprReplaceStart()
{
  _DWORD *v0; // rdi
  int v1; // r8d
  SIZE_T v2; // rdx
  int v3; // ecx
  int v4; // eax
  SIZE_T v5; // rbx
  SIZE_T v6; // rcx
  int v7; // eax
  int v8; // eax

  v0 = (_DWORD *)(PnprContext + 72);
  v1 = off_1402F2388();
  if ( v1 >= 0 )
  {
    v5 = PnprContext;
    if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    {
      memset(v0, 0, 0x40uLL);
      *v0 = 64;
      v0[1] = 2;
      *((_QWORD *)v0 + 1) = *(_QWORD *)(v5 + 8);
      *((_QWORD *)v0 + 2) = *(_QWORD *)(v5 + 40);
      *((_QWORD *)v0 + 3) = *(_QWORD *)(v5 + 16);
      *((_QWORD *)v0 + 4) = *(_QWORD *)(v5 + 48);
      *((_QWORD *)v0 + 5) = *(_QWORD *)(v5 + 24);
      *((_QWORD *)v0 + 6) = *(_QWORD *)(v5 + 56);
      *((_QWORD *)v0 + 7) = PnprMapTargetSparePhysicalPages;
      v1 = (*(__int64 (__fastcall **)(_DWORD *, SIZE_T))(v5 + 10672))(v0, v5 + 10640);
      if ( v1 < 0 )
      {
        v6 = PnprContext;
        v7 = *(_DWORD *)(PnprContext + 10744);
        if ( !v7 )
          v7 = 2737;
        *(_DWORD *)(PnprContext + 10744) = v7;
        v8 = *(_DWORD *)(v6 + 10748);
        if ( !v8 )
          v8 = 8;
        *(_DWORD *)(v6 + 10748) = v8;
      }
    }
  }
  else
  {
    v2 = PnprContext;
    v3 = *(_DWORD *)(PnprContext + 10744);
    if ( !v3 )
      v3 = 2711;
    v4 = *(_DWORD *)(PnprContext + 10748);
    *(_DWORD *)(PnprContext + 10744) = v3;
    if ( !v4 )
      v4 = 6;
    *(_DWORD *)(v2 + 10748) = v4;
  }
  return (unsigned int)v1;
}
