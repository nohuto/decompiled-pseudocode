/*
 * XREFs of ?vReleaseRao@DC@@QEAAXXZ @ 0x1C002C720
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall DC::vReleaseRao(DC *this)
{
  unsigned int v1; // eax
  GdiHandleEntryDirectory **DeferredContext; // rbp
  unsigned int v4; // eax
  GdiHandleEntryDirectory *v5; // rsi
  unsigned int v6; // edx
  signed int v7; // ecx
  unsigned int v8; // r8d
  __int64 v9; // r10
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned __int64 v14; // rdx
  signed int v15; // ecx
  __int64 v16; // r9
  DC *v17; // rdx

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  v4 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
         (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000);
  v5 = DeferredContext[2];
  v6 = *((_DWORD *)v5 + 514);
  if ( v4 >= v6 + ((*((unsigned __int16 *)v5 + 1) - 1) << 16) )
    goto LABEL_22;
  if ( v4 >= v6 )
  {
    v7 = ((v4 - v6) >> 16) + 1;
    if ( (v4 - v6) >> 16 != -2 )
      goto LABEL_4;
LABEL_22:
    v10 = 0LL;
    goto LABEL_10;
  }
  v7 = 0;
LABEL_4:
  v8 = v4;
  v9 = *((_QWORD *)v5 + v7 + 1);
  if ( v7 )
    v8 = v4 - ((v7 - 1) << 16) - v6;
  v10 = 0LL;
  if ( v8 >= *(_DWORD *)(v9 + 20) )
    v11 = 0LL;
  else
    v11 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                    + 16LL * (unsigned __int8)v8
                    + 8);
  if ( v11 )
    v10 = *(_QWORD *)v9 + 24LL * v8;
LABEL_10:
  v12 = GdiHandleManager::DecodeIndex(DeferredContext, v4);
  v13 = *((_DWORD *)v5 + 514);
  v14 = v12;
  if ( v12 < v13 + ((*((unsigned __int16 *)v5 + 1) - 1) << 16) )
  {
    if ( v12 >= v13 )
    {
      v15 = ((v12 - v13) >> 16) + 1;
      if ( (v12 - v13) >> 16 == -2 )
        goto LABEL_20;
    }
    else
    {
      v15 = 0;
    }
    v16 = *((_QWORD *)v5 + v15 + 1);
    if ( v15 )
      v14 = v12 - ((v15 - 1) << 16) - v13;
    if ( (unsigned int)v14 < *(_DWORD *)(v16 + 20) )
    {
      v17 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * (v14 >> 8)) + 16LL * (unsigned __int8)v14 + 8);
      goto LABEL_17;
    }
  }
LABEL_20:
  v17 = 0LL;
LABEL_17:
  if ( v17 != this )
    v10 = 0LL;
  *(_BYTE *)(v10 + 15) |= 4u;
}
