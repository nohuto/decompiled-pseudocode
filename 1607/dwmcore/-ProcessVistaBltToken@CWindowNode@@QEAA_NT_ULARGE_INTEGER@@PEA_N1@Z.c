/*
 * XREFs of ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800BA674
 * Callers:
 *     ?ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z @ 0x18003788C (-ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z.c)
 *     ?ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z @ 0x18012037C (-ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x180029718 (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA7E4 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1800B3708 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     ?ValidateContent@CDxAccumulationContext@@QEAAXXZ @ 0x1800B7A24 (-ValidateContent@CDxAccumulationContext@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?ShiftLeft@?$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJI@Z @ 0x180110C38 (-ShiftLeft@-$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateListRecord@CWindowNode@@K@Z @ 0x180111584 (-FindElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateLi.c)
 *     Template_q @ 0x180129F68 (Template_q.c)
 *     Template_xxxn @ 0x180140FCC (Template_xxxn.c)
 */

char __fastcall CWindowNode::ProcessVistaBltToken(
        CDxAccumulationContext **this,
        union _ULARGE_INTEGER a2,
        bool *a3,
        bool *a4)
{
  DWORD LowPart; // ebx
  struct CVisual *v5; // r14
  bool *v7; // r15
  __int64 Element; // rax
  __int64 v9; // r13
  unsigned int v10; // edx
  char v11; // si
  unsigned int i; // edi
  __int64 *v13; // r14
  __int64 v14; // r12
  __int64 v15; // rax
  bool v16; // zf
  unsigned int v18; // r15d
  unsigned int v19; // ebp
  __int64 v20; // rbx
  __int64 v21; // rbx
  int v22; // eax
  CDxAccumulationContext *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // [rsp+28h] [rbp-90h]
  char v27; // [rsp+40h] [rbp-78h]
  bool *v29; // [rsp+50h] [rbp-68h] BYREF
  int v30; // [rsp+58h] [rbp-60h]
  int v31; // [rsp+5Ch] [rbp-5Ch]

  LowPart = a2.LowPart;
  *a3 = 0;
  v5 = (struct CVisual *)this;
  *a4 = 0;
  v29 = a3;
  v7 = a3;
  v27 = 0;
  Element = CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FindElement(this + 91, a2.HighPart);
  v9 = Element;
  if ( !Element )
    return 0;
  v10 = *(_DWORD *)(Element + 40);
  v11 = 1;
  for ( i = 0; i < v10; ++i )
  {
    if ( *(_DWORD *)(88LL * i + *(_QWORD *)(Element + 16) + 8) >= LowPart )
      break;
  }
  if ( i < v10 )
  {
    v13 = (__int64 *)(Element + 16);
    v14 = 88LL * i;
    v15 = *(_QWORD *)(Element + 16);
    if ( *(_DWORD *)(v14 + v15 + 8) == LowPart )
    {
      *(_BYTE *)(v14 + v15) = 1;
      *a4 = 1;
      if ( i )
      {
        v18 = 0;
        v19 = i;
        v20 = 0LL;
        do
        {
          v25 = *v13;
          if ( *(_DWORD *)(v20 + *v13 + 16) == *(_DWORD *)(v14 + *v13 + 16)
            && *(_DWORD *)(v20 + v25 + 20) == *(_DWORD *)(v14 + v25 + 20) )
          {
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              Template_q(v25, &EVTDESC_ETWGUID_FLUSHPENDINGDXUPDATES, i);
            if ( v19 >= v18 )
              v19 = v18;
            *(_BYTE *)(v20 + *v13) = 1;
          }
          ++v18;
          v20 += 88LL;
        }
        while ( v18 < i );
        v7 = v29;
        i = v19;
      }
      if ( !i )
      {
        if ( *(_DWORD *)(v9 + 40) )
        {
          do
          {
            v21 = 88LL * i;
            if ( !*(_BYTE *)(v21 + *v13) )
              break;
            CFlipChain::ProcessVistaBltToken(
              *(struct CFlipChain **)(v9 + 8),
              *(_QWORD *)(v21 + *v13 + 8),
              *(_QWORD *)(v21 + *v13 + 24),
              (float *)(v21 + *v13 + 32));
            v22 = CWindowNode::AddLocalDirtyRect((CWindowNode *)this, (struct MilRectF *)(v21 + *v13 + 32), 0);
            v23 = this[126];
            v27 = v22 < 0;
            if ( v23 )
              CDxAccumulationContext::ValidateContent(v23);
            if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_FLIPCHAIN_Complete) )
            {
              v24 = *v13;
              LODWORD(v29) = (int)*(float *)(v21 + *v13 + 32);
              HIDWORD(v29) = (int)*(float *)(v21 + v24 + 36);
              v30 = (int)*(float *)(v21 + v24 + 40);
              v31 = (int)*(float *)(v21 + v24 + 44);
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                Template_xxxn(
                  (unsigned int)&v29,
                  (unsigned int)&EVTDESC_ETWGUID_FLIPCHAIN_Complete,
                  *(_DWORD *)(v21 + v24 + 12),
                  (unsigned int)this[79],
                  *(_DWORD *)(v21 + v24 + 8),
                  v26,
                  (__int64)&v29);
            }
            *v7 = 1;
            CWindowNode::PendingDxUpdate::ReleaseResponses((CWindowNode::PendingDxUpdate *)(v21 + *v13));
            ++i;
          }
          while ( i < *(_DWORD *)(v9 + 40) );
        }
        DynArray<CWindowNode::PendingDxUpdate,0>::ShiftLeft(v9 + 16, i);
      }
    }
    v5 = (struct CVisual *)this;
  }
  v16 = ((unsigned __int8)v27 | *v7) == 0;
  *v7 |= v27;
  if ( !v16 )
    CVisual::PropagateFlags(v5, 0, v27, 1, 0, 0, 0);
  return v11;
}
