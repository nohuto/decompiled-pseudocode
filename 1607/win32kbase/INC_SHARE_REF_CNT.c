/*
 * XREFs of INC_SHARE_REF_CNT @ 0x1C00294C0
 * Callers:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C002AF70 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00C064C (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 */

void __fastcall INC_SHARE_REF_CNT(struct _BASEOBJECT *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx
  _DWORD *v4; // rbx
  GdiHandleManager *DeferredContext; // rdi
  unsigned int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // r10d
  signed int v9; // edx
  __int64 v10; // r9
  _DWORD *v11; // rdx
  unsigned int v12; // ebx
  GdiHandleEntryDirectory *v13; // rcx
  unsigned __int8 v14; // r9
  struct GdiHandleEntryTable *v15; // rdx
  unsigned __int64 v16; // r8
  unsigned int v17; // edx
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  int v19; // [rsp+28h] [rbp-20h]
  unsigned int v20; // [rsp+50h] [rbp+8h] BYREF
  struct GdiHandleEntryTable *v21; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_DWORD *)a1;
  v3 = *(_DWORD *)a1;
  v18 = 0LL;
  v19 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v18, (unsigned __int16)v1 | (v3 >> 8) & 0xFF0000, 0, 0);
  if ( !v19 )
    return;
  v4 = (_DWORD *)v18;
  if ( !v18 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v18);
    return;
  }
  if ( *(_BYTE *)(v18 + 14) == 5 && HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) && gpentHmgrAltStacks )
  {
    v17 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
    RECALTLOCKSTACKBACKTRACE((unsigned __int16)v17 | (v17 >> 8) & 0xFF0000, a1);
  }
  ++*((_DWORD *)a1 + 2);
  DeferredContext = (GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext;
  v6 = GdiHandleManager::DecodeIndex((GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext, *v4 & 0xFFFFFF);
  v7 = *((_QWORD *)DeferredContext + 2);
  v8 = *(_DWORD *)(v7 + 2056);
  if ( v6 >= v8 + ((*(unsigned __int16 *)(v7 + 2) - 1) << 16) )
    goto LABEL_21;
  if ( v6 >= v8 )
  {
    v9 = ((v6 - v8) >> 16) + 1;
    if ( (v6 - v8) >> 16 == -2 )
    {
LABEL_21:
      v11 = 0LL;
      goto LABEL_11;
    }
  }
  else
  {
    v9 = 0;
  }
  v10 = *(_QWORD *)(v7 + 8LL * v9 + 8);
  if ( v9 )
    v6 = v6 - ((v9 - 1) << 16) - v8;
  if ( v6 >= *(_DWORD *)(v10 + 20) )
    goto LABEL_21;
  v11 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                   + 16LL * (unsigned __int8)v6
                   + 8);
LABEL_11:
  v12 = GdiHandleManager::DecodeIndex(DeferredContext, (unsigned __int16)*v11 | (*v11 >> 8) & 0xFF0000);
  GdiHandleManager::DecodeIndex(DeferredContext, v12);
  v13 = (GdiHandleEntryDirectory *)*((_QWORD *)DeferredContext + 2);
  v21 = 0LL;
  v20 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v13, v12, &v21, &v20) )
  {
    v14 = v20;
    v15 = v21;
    v16 = (unsigned __int64)v20 >> 8;
    *(_DWORD *)(*(_QWORD *)v21 + 24LL * v20 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(*(_QWORD *)(**((_QWORD **)v15 + 3) + 8 * v16) + 16LL * v14, 0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
}
