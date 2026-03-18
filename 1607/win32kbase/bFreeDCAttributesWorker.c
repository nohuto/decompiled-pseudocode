/*
 * XREFs of bFreeDCAttributesWorker @ 0x1C0034080
 * Callers:
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032CE0 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     HmgFreeDcAttr @ 0x1C0034278 (HmgFreeDcAttr.c)
 */

__int64 __fastcall bFreeDCAttributesWorker(int *a1)
{
  int *v1; // rbx
  int *v3; // rcx
  __int64 v4; // r8
  _OWORD *v5; // rax
  __int128 *v6; // rdx
  __int128 v7; // xmm0
  unsigned int v8; // eax
  PVOID DeferredContext; // r15
  unsigned int v10; // ebx
  __int64 v11; // rbp
  unsigned int v12; // edx
  signed int v13; // ecx
  __int64 v14; // r8
  unsigned int v15; // ecx
  __int64 v16; // r14
  unsigned int v17; // edx
  signed int v18; // ecx
  __int64 v19; // r8
  int *v20; // rdx
  __int64 result; // rax

  v1 = a1 + 134;
  v3 = (int *)*((_QWORD *)a1 + 10);
  if ( v3 == v1 )
    return 0LL;
  v4 = 3LL;
  v5 = v1;
  v6 = (__int128 *)v3;
  do
  {
    v5 += 8;
    v7 = *v6;
    v6 += 8;
    *(v5 - 8) = v7;
    *(v5 - 7) = *(v6 - 7);
    *(v5 - 6) = *(v6 - 6);
    *(v5 - 5) = *(v6 - 5);
    *(v5 - 4) = *(v6 - 4);
    *(v5 - 3) = *(v6 - 3);
    *(v5 - 2) = *(v6 - 2);
    *(v5 - 1) = *(v6 - 1);
    --v4;
  }
  while ( v4 );
  *v5 = *v6;
  v5[1] = v6[1];
  if ( v3 == a1 + 240 )
    v3 = (int *)*((_QWORD *)a1 + 119);
  HmgFreeDcAttr(v3);
  v8 = *a1;
  *((_QWORD *)a1 + 10) = v1;
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v10 = (unsigned __int16)v8 | (v8 >> 8) & 0xFF0000;
  if ( v10 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v8,
                                  1)
           + 13) == ((unsigned __int16)v8 | (v8 >> 8) & 0xFF0000) >> 16 )
        v10 = (unsigned __int16)v10;
    }
    else
    {
      v10 = (unsigned __int16)v8;
    }
  }
  v11 = *((_QWORD *)DeferredContext + 2);
  v12 = *(_DWORD *)(v11 + 2056);
  if ( v10 >= v12 + ((*(unsigned __int16 *)(v11 + 2) - 1) << 16) )
    goto LABEL_34;
  if ( v10 < v12 )
  {
    v13 = 0;
    goto LABEL_12;
  }
  v13 = ((v10 - v12) >> 16) + 1;
  if ( (v10 - v12) >> 16 == -2 )
  {
LABEL_34:
    v16 = 0LL;
    goto LABEL_17;
  }
LABEL_12:
  v14 = *(_QWORD *)(v11 + 8LL * v13 + 8);
  if ( v13 )
    v15 = v10 - ((v13 - 1) << 16) - v12;
  else
    v15 = v10;
  v16 = 0LL;
  if ( v15 < *(_DWORD *)(v14 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v15 >> 8))
                 + 16LL * (unsigned __int8)v15
                 + 8) )
  {
    v16 = *(_QWORD *)v14 + 24LL * v15;
  }
LABEL_17:
  if ( v10 >= 0x10000 )
  {
    if ( *(_DWORD *)DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)DeferredContext + 2),
                                  (unsigned __int16)v10,
                                  1)
           + 13) == HIWORD(v10) )
        v10 = (unsigned __int16)v10;
    }
    else
    {
      v10 = (unsigned __int16)v10;
    }
  }
  v17 = *(_DWORD *)(v11 + 2056);
  if ( v10 >= v17 + ((*(unsigned __int16 *)(v11 + 2) - 1) << 16) )
    goto LABEL_29;
  if ( v10 >= v17 )
  {
    v18 = ((v10 - v17) >> 16) + 1;
    if ( (v10 - v17) >> 16 == -2 )
    {
LABEL_29:
      v20 = 0LL;
      goto LABEL_25;
    }
  }
  else
  {
    v18 = 0;
  }
  v19 = *(_QWORD *)(v11 + 8LL * v18 + 8);
  if ( v18 )
    v10 = v10 - ((v18 - 1) << 16) - v17;
  if ( v10 >= *(_DWORD *)(v19 + 20) )
    goto LABEL_29;
  v20 = *(int **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                + 16LL * (unsigned __int8)v10
                + 8);
LABEL_25:
  result = 1LL;
  if ( v20 != a1 )
    v16 = 0LL;
  *(_QWORD *)(v16 + 16) = 0LL;
  return result;
}
