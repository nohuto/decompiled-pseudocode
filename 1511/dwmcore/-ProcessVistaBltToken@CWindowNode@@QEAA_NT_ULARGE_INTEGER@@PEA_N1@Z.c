/*
 * XREFs of ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800B6648
 * Callers:
 *     ?ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z @ 0x1800A5D60 (-ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z.c)
 *     ?ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z @ 0x180109C64 (-ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z.c)
 * Callees:
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x18001B594 (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x180069228 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     ?ValidateContent@CDxAccumulationContext@@QEAAXXZ @ 0x1800A9D14 (-ValidateContent@CDxAccumulationContext@@QEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AE584 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?ShiftLeft@?$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJI@Z @ 0x1800FBF24 (-ShiftLeft@-$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateListRecord@CWindowNode@@K@Z @ 0x1800FC4B8 (-FindElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateLi.c)
 *     Template_q @ 0x180111C90 (Template_q.c)
 *     Template_xxxn @ 0x180124790 (Template_xxxn.c)
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
  unsigned int v16; // r15d
  unsigned int v17; // ebp
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rbx
  int v21; // eax
  CDxAccumulationContext *v22; // rcx
  __int64 v23; // rcx
  bool v24; // zf
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
  Element = CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FindElement(this + 115, a2.HighPart);
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
        v16 = 0;
        v17 = i;
        v18 = 0LL;
        do
        {
          v19 = *v13;
          if ( *(_DWORD *)(v18 + *v13 + 16) == *(_DWORD *)(*v13 + v14 + 16)
            && *(_DWORD *)(v18 + v19 + 20) == *(_DWORD *)(v19 + v14 + 20) )
          {
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              Template_q(v19, &EVTDESC_ETWGUID_FLUSHPENDINGDXUPDATES, i);
            if ( v17 >= v16 )
              v17 = v16;
            *(_BYTE *)(v18 + *v13) = 1;
          }
          ++v16;
          v18 += 88LL;
        }
        while ( v16 < i );
        v7 = v29;
        i = v17;
      }
      if ( !i )
      {
        if ( *(_DWORD *)(v9 + 40) )
        {
          do
          {
            v20 = 88LL * i;
            if ( !*(_BYTE *)(v20 + *v13) )
              break;
            CFlipChain::ProcessVistaBltToken(
              *(struct CFlipChain **)(v9 + 8),
              *(_QWORD *)(v20 + *v13 + 8),
              *(_QWORD *)(v20 + *v13 + 24),
              v20 + *v13 + 32);
            v21 = CWindowNode::AddLocalDirtyRect((CWindowNode *)this, (struct MilRectF *)(v20 + *v13 + 32), 0);
            v22 = this[150];
            v27 = v21 < 0;
            if ( v22 )
              CDxAccumulationContext::ValidateContent(v22);
            if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_FLIPCHAIN_Complete) )
            {
              v23 = *v13;
              LODWORD(v29) = (int)*(float *)(v20 + *v13 + 32);
              HIDWORD(v29) = (int)*(float *)(v20 + v23 + 36);
              v30 = (int)*(float *)(v20 + v23 + 40);
              v31 = (int)*(float *)(v20 + v23 + 44);
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                Template_xxxn(
                  (unsigned int)&v29,
                  (unsigned int)&EVTDESC_ETWGUID_FLIPCHAIN_Complete,
                  *(_DWORD *)(v20 + v23 + 12),
                  (unsigned int)this[103],
                  *(_DWORD *)(v20 + v23 + 8),
                  v26,
                  (__int64)&v29);
            }
            *v7 = 1;
            CWindowNode::PendingDxUpdate::ReleaseResponses((CWindowNode::PendingDxUpdate *)(v20 + *v13));
            ++i;
          }
          while ( i < *(_DWORD *)(v9 + 40) );
        }
        DynArray<CWindowNode::PendingDxUpdate,0>::ShiftLeft(v9 + 16, i);
      }
    }
    v5 = (struct CVisual *)this;
  }
  v24 = ((unsigned __int8)v27 | *v7) == 0;
  *v7 |= v27;
  if ( !v24 )
    CVisual::PropagateFlags(v5, 0, v27, 1, 0, 0, 0);
  return v11;
}
