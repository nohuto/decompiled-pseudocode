/*
 * XREFs of ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C002AAF0
 * Callers:
 *     HmgCreate @ 0x1C00533A4 (HmgCreate.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00C0400 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z @ 0x1C002B1E0 (-AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C0079944 (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

char __fastcall GdiHandleManager::AcquireEntryIndex(GdiHandleManager *this, unsigned int *a2)
{
  PVOID DeferredContext; // rbx
  __int64 v4; // rsi
  GdiHandleEntryTable *v5; // rcx
  unsigned int v6; // edi
  char v7; // si
  unsigned int v8; // eax
  unsigned int v9; // eax
  struct _ENTRY *Entry; // rax
  unsigned int v12; // edi
  GdiHandleEntryTable *v13; // rbp
  GdiHandleEntryTable *v14; // rcx
  void *v15; // rax
  GdiHandleManager *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = this;
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  if ( *((_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 1) < *((_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 2) )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)DeferredContext + 2);
      if ( *(_BYTE *)v4 )
        return 0;
      v5 = *(GdiHandleEntryTable **)(v4 + 8);
      LODWORD(v16) = 0;
      if ( GdiHandleEntryTable::AcquireEntryIndex(v5, (unsigned int *)&v16) )
      {
        v6 = (unsigned int)v16;
      }
      else
      {
        v12 = 1;
        if ( *(_WORD *)(v4 + 2) <= 1u )
        {
LABEL_18:
          if ( *(_WORD *)(v4 + 2) == 256 )
          {
            *(_BYTE *)v4 = 1;
            return 0;
          }
          *(_QWORD *)(v4 + 8LL * *(unsigned __int16 *)(v4 + 2) + 8) = GdiHandleEntryTable::_Create(0x10000u, 1);
          v14 = *(GdiHandleEntryTable **)(v4 + 8LL * *(unsigned __int16 *)(v4 + 2) + 8);
          if ( !v14 )
            return 0;
          GdiHandleEntryTable::AcquireEntryIndex(v14, (unsigned int *)&v16);
          v12 = *(unsigned __int16 *)(v4 + 2);
          *(_WORD *)(v4 + 2) = v12 + 1;
        }
        else
        {
          while ( 1 )
          {
            v13 = *(GdiHandleEntryTable **)(v4 + 8LL * v12 + 8);
            if ( GdiHandleEntryTable::AcquireEntryIndex(v13, (unsigned int *)&v16) )
              break;
            if ( *((_DWORD *)v13 + 4) != *((_DWORD *)v13 + 2) )
              return 0;
            if ( ++v12 >= *(unsigned __int16 *)(v4 + 2) )
              goto LABEL_18;
          }
        }
        v6 = (_DWORD)v16 + *(_DWORD *)(v4 + 2056) + ((v12 - 1) << 16);
      }
      ++*((_DWORD *)DeferredContext + 1);
      v7 = 0;
      v8 = *((_DWORD *)DeferredContext + 1);
      if ( v8 > *(_DWORD *)DeferredContext )
      {
        *(_DWORD *)DeferredContext = v8;
        v7 = 1;
        gcMaxHmgr = v8;
      }
      v9 = GdiHandleManager::DecodeIndex((GdiHandleManager *)DeferredContext, (unsigned __int16)v6);
      Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)DeferredContext + 2), v9, 1);
      if ( v6 < 0x10000 )
      {
        if ( v7 || *(_DWORD *)DeferredContext > 0x10000u )
          *((_BYTE *)Entry + 13) = 0;
        else
          v6 += (unsigned __int8)++*((_BYTE *)Entry + 13) << 16;
LABEL_11:
        *a2 = v6;
        return 1;
      }
      if ( *((unsigned __int8 *)Entry + 13) != HIWORD(v6) )
        goto LABEL_11;
      if ( *((_QWORD *)DeferredContext + 3) )
        goto LABEL_26;
      v15 = (void *)Win32AllocPool(0x40000LL, 1668114503LL);
      *((_QWORD *)DeferredContext + 3) = v15;
      if ( v15 )
        break;
LABEL_27:
      if ( *((_DWORD *)DeferredContext + 1) >= *((_DWORD *)DeferredContext + 2) )
        return 0;
    }
    memset(v15, 0, 0x40000uLL);
LABEL_26:
    *(_DWORD *)(*((_QWORD *)DeferredContext + 3) + 4LL * (unsigned __int16)v6) = v6;
    goto LABEL_27;
  }
  return 0;
}
