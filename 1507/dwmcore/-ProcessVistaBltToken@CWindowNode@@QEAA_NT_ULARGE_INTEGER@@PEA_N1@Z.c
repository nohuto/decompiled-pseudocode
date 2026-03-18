/*
 * XREFs of ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x180105F14
 * Callers:
 *     ?ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z @ 0x1800EFEB0 (-ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z.c)
 *     ?ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z @ 0x1800EFFBC (-ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z.c)
 * Callees:
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x18000E18C (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     Template_q @ 0x1800F7910 (Template_q.c)
 *     ?FindElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateListRecord@CWindowNode@@K@Z @ 0x180104E38 (-FindElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateLi.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x180106194 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     ?ShiftLeft@?$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJI@Z @ 0x1801068E0 (-ShiftLeft@-$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJI@Z.c)
 *     Template_xxxn @ 0x180106C8C (Template_xxxn.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010982C (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?ValidateContent@CDxAccumulationContext@@QEAAXXZ @ 0x180121E3C (-ValidateContent@CDxAccumulationContext@@QEAAXXZ.c)
 */

char __fastcall CWindowNode::ProcessVistaBltToken(CWindowNode *this, union _ULARGE_INTEGER a2, bool *a3, bool *a4)
{
  DWORD LowPart; // ebx
  struct CVisual *v5; // r14
  bool *v7; // r15
  char *Element; // rax
  struct CFlipChain **v9; // r13
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
  char v26; // [rsp+40h] [rbp-78h]
  bool *v28; // [rsp+50h] [rbp-68h] BYREF
  int v29; // [rsp+58h] [rbp-60h]
  int v30; // [rsp+5Ch] [rbp-5Ch]

  LowPart = a2.LowPart;
  *a3 = 0;
  v5 = this;
  *a4 = 0;
  v28 = a3;
  v7 = a3;
  v26 = 0;
  Element = (char *)CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FindElement(
                      (struct _RTL_GENERIC_TABLE *)((char *)this + 968),
                      a2.HighPart);
  v9 = (struct CFlipChain **)Element;
  if ( !Element )
    return 0;
  v10 = *((_DWORD *)Element + 10);
  v11 = 1;
  for ( i = 0; i < v10; ++i )
  {
    if ( *(_DWORD *)(88LL * i + *((_QWORD *)Element + 2) + 8) >= LowPart )
      break;
  }
  if ( i < v10 )
  {
    v13 = (__int64 *)(Element + 16);
    v14 = 88LL * i;
    v15 = *((_QWORD *)Element + 2);
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
        v7 = v28;
        i = v17;
      }
      if ( !i )
      {
        if ( *((_DWORD *)v9 + 10) )
        {
          do
          {
            v20 = 88LL * i;
            if ( !*(_BYTE *)(v20 + *v13) )
              break;
            CFlipChain::ProcessVistaBltToken(v9[1]);
            v21 = CWindowNode::AddLocalDirtyRect(this, (struct MilRectF *)(v20 + *v13 + 32), 0);
            v22 = (CDxAccumulationContext *)*((_QWORD *)this + 156);
            v26 = v21 < 0;
            if ( v22 )
              CDxAccumulationContext::ValidateContent(v22);
            if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_FLIPCHAIN_Complete) )
            {
              v23 = *v13;
              LODWORD(v28) = (int)*(float *)(v20 + *v13 + 32);
              HIDWORD(v28) = (int)*(float *)(v20 + v23 + 36);
              v29 = (int)*(float *)(v20 + v23 + 40);
              v30 = (int)*(float *)(v20 + v23 + 44);
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                Template_xxxn(
                  (unsigned int)&v28,
                  (unsigned int)&EVTDESC_ETWGUID_FLIPCHAIN_Complete,
                  *(_DWORD *)(v20 + v23 + 12),
                  *((_QWORD *)this + 109),
                  *(_DWORD *)(v20 + v23 + 8));
            }
            *v7 = 1;
            CWindowNode::PendingDxUpdate::ReleaseResponses((CWindowNode::PendingDxUpdate *)(v20 + *v13));
            ++i;
          }
          while ( i < *((_DWORD *)v9 + 10) );
        }
        DynArray<CWindowNode::PendingDxUpdate,0>::ShiftLeft(v9 + 2, i);
      }
    }
    v5 = this;
  }
  v24 = ((unsigned __int8)v26 | *v7) == 0;
  *v7 |= v26;
  if ( !v24 )
    CVisual::PropagateFlags(v5, 0, v26, 1, 0, 0, 0);
  return v11;
}
