/*
 * XREFs of ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x180170F50
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18016B11C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x180008C5C (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18000D954 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004F9CC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A4E20 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z @ 0x180170DE0 (-FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH.c)
 *     ?GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z @ 0x180170F08 (-GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z.c)
 *     ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x18017117C (-IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z.c)
 */

char __fastcall CManipulationContext::InvalidateMCs(
        __int64 a1,
        CVisual **a2,
        const struct CInteraction *a3,
        int a4,
        _DWORD *a5)
{
  struct CManipulationContext *ManipulationContext; // rax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8
  const struct CInteraction *MCRoot; // rax
  int *v12; // r8
  char v13; // cl
  struct CManipulationContext *v14; // rsi
  const struct CInteraction *v15; // rbx
  bool *v16; // rdx
  const struct CVisual *v17; // r10
  const struct CInteraction *v18; // rax
  int *v19; // r8
  struct CManipulationContext *v20; // rax
  char v21; // al
  const struct CVisual *Visual; // rax
  bool *v23; // rdx
  int v24; // esi
  __int64 v25; // r15
  __int64 v26; // rbx

  LODWORD(ManipulationContext) = *(_DWORD *)(a1 + 32);
  if ( *a5 == (_DWORD)ManipulationContext )
    return (char)ManipulationContext;
  if ( a4 )
  {
    if ( a4 != 1 )
    {
      if ( a4 <= 1 || a4 > 3 )
        return (char)ManipulationContext;
      goto LABEL_6;
    }
    if ( !a3 || (*((_BYTE *)a3 + 256) & 2) != 0 )
    {
LABEL_6:
      v8 = 0;
      if ( (int)ManipulationContext > 0 )
      {
        v9 = 0LL;
        do
        {
          ManipulationContext = *(struct CManipulationContext **)(a1 + 24);
          v10 = *(_QWORD *)((char *)ManipulationContext + v9);
          if ( v10 )
          {
            LOBYTE(ManipulationContext) = *(_BYTE *)(v10 + 28);
            if ( ((unsigned __int8)ManipulationContext & 4) == 0 )
            {
              LOBYTE(ManipulationContext) = (unsigned __int8)ManipulationContext | 4;
              *(_BYTE *)(v10 + 28) = (_BYTE)ManipulationContext;
              ++*a5;
            }
          }
          ++v8;
          v9 += 8LL;
        }
        while ( v8 < *(_DWORD *)(a1 + 32) );
      }
      return (char)ManipulationContext;
    }
    MCRoot = CManipulationContext::GetMCRoot(a3);
    ManipulationContext = CManipulationContext::FindManipulationContext((const struct MCCollections *)a1, MCRoot, v12);
    if ( ManipulationContext )
    {
      v13 = *((_BYTE *)ManipulationContext + 28);
      if ( (v13 & 4) == 0 )
      {
        *((_BYTE *)ManipulationContext + 28) = v13 | 4;
        ++*a5;
      }
    }
  }
  else if ( a2 )
  {
    v14 = 0LL;
    ManipulationContext = CVisual::GetInteractionInternal((CVisual *)a2);
    v15 = ManipulationContext;
    if ( !ManipulationContext )
      goto LABEL_32;
    if ( (*((_BYTE *)ManipulationContext + 256) & 2) != 0 && a2[18] )
    {
      ManipulationContext = CVisual::GetInteractionInternal(a2[18]);
      v15 = ManipulationContext;
      if ( ManipulationContext )
        goto LABEL_25;
      ManipulationContext = CManipulationContext::GetClosestInteractionAncestor(v17, v16);
      v15 = ManipulationContext;
    }
    if ( v15 )
    {
LABEL_25:
      while ( !v14 )
      {
        if ( (unsigned int)CInteraction::GetTotalNumContacts(v15) )
        {
          v18 = CManipulationContext::GetMCRoot(v15);
          v20 = CManipulationContext::FindManipulationContext((const struct MCCollections *)a1, v18, v19);
          v14 = v20;
          if ( v20 )
          {
            v21 = *((_BYTE *)v20 + 28);
            if ( (v21 & 4) == 0 )
            {
              *((_BYTE *)v14 + 28) = v21 | 4;
              ++*a5;
            }
          }
        }
        Visual = CInteraction::GetVisual(v15);
        ManipulationContext = CManipulationContext::GetClosestInteractionAncestor(Visual, v23);
        v15 = ManipulationContext;
        if ( !ManipulationContext )
        {
          if ( v14 )
            return (char)ManipulationContext;
          goto LABEL_32;
        }
      }
    }
    else
    {
LABEL_32:
      v24 = 0;
      if ( *(int *)(a1 + 32) > 0 )
      {
        v25 = 0LL;
        do
        {
          ManipulationContext = *(struct CManipulationContext **)(a1 + 24);
          v26 = *(_QWORD *)((char *)ManipulationContext + v25);
          if ( (*(_BYTE *)(v26 + 28) & 4) == 0 )
          {
            LOBYTE(ManipulationContext) = CManipulationContext::IsInteractionDescendantOfVisual(
                                            *(const struct CInteraction **)(v26 + 48),
                                            (const struct CVisual *)a2);
            if ( (_BYTE)ManipulationContext )
            {
              if ( v26 )
              {
                LOBYTE(ManipulationContext) = *(_BYTE *)(v26 + 28);
                if ( ((unsigned __int8)ManipulationContext & 4) == 0 )
                {
                  LOBYTE(ManipulationContext) = (unsigned __int8)ManipulationContext | 4;
                  *(_BYTE *)(v26 + 28) = (_BYTE)ManipulationContext;
                  ++*a5;
                }
              }
            }
          }
          ++v24;
          v25 += 8LL;
        }
        while ( v24 < *(_DWORD *)(a1 + 32) );
      }
    }
  }
  return (char)ManipulationContext;
}
