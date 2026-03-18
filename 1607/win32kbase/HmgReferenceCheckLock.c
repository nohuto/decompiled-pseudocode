/*
 * XREFs of HmgReferenceCheckLock @ 0x1C0074BE0
 * Callers:
 *     EngUnlockSurface @ 0x1C0074B90 (EngUnlockSurface.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgReferenceCheckLock(unsigned int a1, char a2)
{
  GdiHandleEntryDirectory **DeferredContext; // r15
  __int16 v4; // edi^2
  __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // rbx
  unsigned int v8; // eax
  struct _ENTRY *Entry; // rax
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdx
  signed int v13; // ecx
  __int64 v14; // r9

  DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  v4 = HIWORD(a1);
  v5 = *((_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 2);
  v6 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  v7 = 0LL;
  v8 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext, v6);
  Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v5, v8, 0);
  if ( Entry )
  {
    if ( *((_BYTE *)Entry + 14) == a2 && *((_WORD *)Entry + 6) == v4 )
    {
      v10 = GdiHandleManager::DecodeIndex(DeferredContext, v6);
      v11 = *(_DWORD *)(v5 + 2056);
      v12 = v10;
      if ( v10 < v11 + ((*(unsigned __int16 *)(v5 + 2) - 1) << 16) )
      {
        if ( v10 >= v11 )
        {
          v13 = ((v10 - v11) >> 16) + 1;
          if ( (v10 - v11) >> 16 == -2 )
            return v7;
        }
        else
        {
          v13 = 0;
        }
        v14 = *(_QWORD *)(v5 + 8LL * v13 + 8);
        if ( v13 )
          v12 = v10 - ((v13 - 1) << 16) - v11;
        if ( (unsigned int)v12 < *(_DWORD *)(v14 + 20) )
          return *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
      }
    }
  }
  return v7;
}
