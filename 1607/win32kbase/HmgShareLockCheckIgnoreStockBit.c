/*
 * XREFs of HmgShareLockCheckIgnoreStockBit @ 0x1C0073650
 * Callers:
 *     bDeleteSurface @ 0x1C003A320 (bDeleteSurface.c)
 *     EngLockSurface @ 0x1C0075140 (EngLockSurface.c)
 *     EngAssociateSurface @ 0x1C007ABA0 (EngAssociateSurface.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z @ 0x1C002B060 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z.c)
 */

__int64 __fastcall HmgShareLockCheckIgnoreStockBit(unsigned int a1, char a2)
{
  signed int v3; // ebp
  unsigned int v4; // esi
  __int64 v6; // r15
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v8; // rax
  __int64 v9; // r13
  GdiHandleEntryDirectory **DeferredContext; // rbx
  unsigned int v11; // eax
  unsigned int v12; // edx
  GdiHandleEntryDirectory **v13; // rsi
  unsigned int v14; // eax
  struct _ENTRY *Entry; // rax
  struct _ENTRY *v16; // r14
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // edi
  GdiHandleEntryDirectory *v20; // rcx
  unsigned int v21; // r9d
  signed int v22; // edx
  __int64 v23; // r8
  unsigned int v24; // edi
  GdiHandleEntryDirectory *v25; // rcx
  unsigned int v26; // r8d
  signed int v27; // edx
  __int64 v28; // r9
  _DWORD *v29; // rdx
  int v30; // eax
  __int64 v31; // rbx
  GdiHandleEntryDirectory *v32; // rcx
  unsigned int v33; // edx
  __int64 v34; // r10
  unsigned int v36; // ebx
  unsigned int v37; // ebx
  unsigned int v38; // edi
  struct _ENTRY *v39; // [rsp+20h] [rbp-48h] BYREF
  int v40; // [rsp+28h] [rbp-40h]
  int v41; // [rsp+2Ch] [rbp-3Ch]
  int v42; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0;
  v39 = 0LL;
  v4 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  v6 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v42);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v8 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v9 = *(_QWORD *)(v8 + 72);
  else
    v9 = 0LL;
  DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  v40 = 1;
  v11 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext, v4);
  if ( GdiHandleEntryDirectory::AcquireEntryLock(DeferredContext[2], v11, 0) )
  {
    v12 = v4;
    v13 = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
    v14 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext, v12);
    Entry = GdiHandleEntryDirectory::GetEntry(v13[2], v14, 0);
    v16 = Entry;
    v39 = Entry;
    _m_prefetchw((char *)Entry + 8);
    v41 = *((_DWORD *)Entry + 2);
    v17 = v41 & 0xFFFFFFFE;
    if ( ((v41 & 0xFFFFFFFE) == (v42 & 0xFFFFFFFC) || !v17 || v9 && v17 == *(_DWORD *)(v9 + 8))
      && (*((_BYTE *)Entry + 15) & 0x20) == 0 )
    {
      v18 = v40;
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v39);
      v18 = v40;
      if ( !v40 )
        return v6;
      v16 = v39;
      v13 = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
    }
    if ( !v16 )
    {
      if ( v18 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v39);
      return v6;
    }
    if ( *((_BYTE *)v16 + 14) != a2 || ((*((unsigned __int16 *)v16 + 6) ^ HIWORD(a1)) & 0xFFFFFF7F) != 0 )
    {
LABEL_22:
      v24 = *(_DWORD *)v16 & 0xFFFFFF;
      if ( v24 >= 0x10000 )
      {
        if ( *(_DWORD *)v13 > 0x10000u )
        {
          v37 = *(unsigned __int16 *)v16;
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(v13[2], v37, 1) + 13) == HIWORD(v24) )
            v24 = v37;
        }
        else
        {
          v24 = *(unsigned __int16 *)v16;
        }
      }
      v25 = v13[2];
      v26 = *((_DWORD *)v25 + 514);
      if ( v24 >= v26 + ((*((unsigned __int16 *)v25 + 1) - 1) << 16) )
        goto LABEL_60;
      if ( v24 >= v26 )
      {
        v27 = ((v24 - v26) >> 16) + 1;
        if ( (v24 - v26) >> 16 == -2 )
          goto LABEL_60;
      }
      else
      {
        v27 = 0;
      }
      v28 = *((_QWORD *)v25 + v27 + 1);
      if ( v27 )
        v24 = v24 - ((v27 - 1) << 16) - v26;
      if ( v24 < *(_DWORD *)(v28 + 20) )
      {
        v29 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * ((unsigned __int64)v24 >> 8))
                         + 16LL * (unsigned __int8)v24
                         + 8);
LABEL_32:
        v30 = (unsigned __int16)*v29;
        v31 = v30 | (*v29 >> 8) & 0xFF0000u;
        if ( (unsigned int)v31 >= 0x10000 )
        {
          if ( *(_DWORD *)v13 > 0x10000u )
          {
            v38 = (unsigned __int16)v30;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(v13[2], (unsigned __int16)v30, 1) + 13) == WORD1(v31) )
              v31 = v38;
          }
          else
          {
            v31 = (unsigned __int16)v30;
          }
          if ( (unsigned int)v31 >= 0x10000 && *(_DWORD *)v13 > 0x10000u )
            GdiHandleEntryDirectory::GetEntry(v13[2], (unsigned __int16)v31, 1);
        }
        v32 = v13[2];
        v33 = *((_DWORD *)v32 + 514);
        if ( (unsigned int)v31 < v33 + ((*((unsigned __int16 *)v32 + 1) - 1) << 16) )
        {
          if ( (unsigned int)v31 < v33
            || (v3 = (((unsigned int)v31 - v33) >> 16) + 1, ((unsigned int)v31 - v33) >> 16 != -2) )
          {
            v34 = *((_QWORD *)v32 + v3 + 1);
            if ( v3 )
              v31 = (_DWORD)v31 - ((v3 - 1) << 16) - v33;
            *(_DWORD *)(*(_QWORD *)v34 + 24 * v31 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * ((unsigned __int64)(unsigned int)v31 >> 8))
            + 16LL * (unsigned __int8)v31,
              0LL);
            KeLeaveCriticalRegion();
          }
        }
        KeLeaveCriticalRegion();
        return v6;
      }
LABEL_60:
      v29 = 0LL;
      goto LABEL_32;
    }
    v19 = *(_DWORD *)v16 & 0xFFFFFF;
    if ( v19 >= 0x10000 )
    {
      if ( *(_DWORD *)v13 > 0x10000u )
      {
        v36 = *(unsigned __int16 *)v16;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(v13[2], v36, 1) + 13) == HIWORD(v19) )
          v19 = v36;
      }
      else
      {
        v19 = *(unsigned __int16 *)v16;
      }
    }
    v20 = v13[2];
    v21 = *((_DWORD *)v20 + 514);
    if ( v19 < v21 + ((*((unsigned __int16 *)v20 + 1) - 1) << 16) )
    {
      if ( v19 < v21 )
      {
        v22 = 0;
LABEL_17:
        v23 = *((_QWORD *)v20 + v22 + 1);
        if ( v22 )
          v19 = v19 - ((v22 - 1) << 16) - v21;
        if ( v19 < *(_DWORD *)(v23 + 20) )
          v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * ((unsigned __int64)v19 >> 8))
                         + 16LL * (unsigned __int8)v19
                         + 8);
        goto LABEL_21;
      }
      v22 = ((v19 - v21) >> 16) + 1;
      if ( (v19 - v21) >> 16 != -2 )
        goto LABEL_17;
    }
LABEL_21:
    ++*(_DWORD *)(v6 + 8);
    v13 = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
    goto LABEL_22;
  }
  KeLeaveCriticalRegion();
  return 0LL;
}
