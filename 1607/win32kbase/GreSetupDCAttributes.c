/*
 * XREFs of GreSetupDCAttributes @ 0x1C0020D30
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgAllocateDcAttr @ 0x1C002498C (HmgAllocateDcAttr.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall GreSetupDCAttributes(HDC a1)
{
  __int64 v1; // r14
  __int64 DcAttr; // rax
  _OWORD *v3; // rsi
  __int64 v4; // r9
  int v5; // ecx
  unsigned int v6; // ebx
  _QWORD *DeferredContext; // r13
  __int64 v8; // r15
  unsigned int v9; // edx
  signed int v10; // ecx
  __int64 v11; // r9
  unsigned int v12; // r10d
  __int64 v13; // r12
  unsigned int v15; // r8d
  signed int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  _OWORD *v19; // rax
  __int64 v20; // rcx
  unsigned int v22; // edi
  _QWORD v23[6]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  if ( !v23[0] )
    goto LABEL_30;
  DcAttr = HmgAllocateDcAttr();
  v3 = (_OWORD *)DcAttr;
  if ( !DcAttr )
    goto LABEL_30;
  *(_QWORD *)(v23[0] + 80LL) = DcAttr;
  v4 = v23[0];
  v5 = (unsigned __int16)*(_DWORD *)v23[0];
  v6 = v5 | (*(_DWORD *)v23[0] >> 8) & 0xFF0000;
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  if ( v6 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      v22 = (unsigned __int16)v5;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v5,
                                  1)
           + 13) == HIWORD(v6) )
        v6 = v22;
      v4 = v23[0];
    }
    else
    {
      v6 = (unsigned __int16)v5;
    }
  }
  v8 = DeferredContext[2];
  v9 = *(_DWORD *)(v8 + 2056);
  if ( v6 >= v9 + ((*(unsigned __int16 *)(v8 + 2) - 1) << 16) )
    goto LABEL_37;
  if ( v6 >= v9 )
  {
    v10 = ((v6 - v9) >> 16) + 1;
    if ( (v6 - v9) >> 16 != -2 )
      goto LABEL_9;
LABEL_37:
    v13 = 0LL;
    goto LABEL_17;
  }
  v10 = 0;
LABEL_9:
  v11 = *(_QWORD *)(v8 + 8LL * v10 + 8);
  v12 = v6;
  if ( v10 )
    v12 = v6 - ((v10 - 1) << 16) - v9;
  v13 = 0LL;
  if ( v12 < *(_DWORD *)(v11 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8LL * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8) )
  {
    v13 = *(_QWORD *)v11 + 24LL * v12;
  }
  v4 = v23[0];
LABEL_17:
  if ( v6 >= 0x10000 )
  {
    if ( *(_DWORD *)DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v8,
                                  (unsigned __int16)v6,
                                  1)
           + 13) == HIWORD(v6) )
        v6 = (unsigned __int16)v6;
      v4 = v23[0];
    }
    else
    {
      v6 = (unsigned __int16)v6;
    }
  }
  v15 = *(_DWORD *)(v8 + 2056);
  if ( v6 >= v15 + ((*(unsigned __int16 *)(v8 + 2) - 1) << 16) )
    goto LABEL_44;
  if ( v6 >= v15 )
  {
    v16 = ((v6 - v15) >> 16) + 1;
    if ( (v6 - v15) >> 16 == -2 )
    {
LABEL_44:
      v18 = 0LL;
      goto LABEL_25;
    }
  }
  else
  {
    v16 = 0;
  }
  v17 = *(_QWORD *)(v8 + 8LL * v16 + 8);
  if ( v16 )
    v6 = v6 - ((v16 - 1) << 16) - v15;
  if ( v6 >= *(_DWORD *)(v17 + 20) )
    goto LABEL_44;
  v18 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8LL * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8);
LABEL_25:
  if ( v18 == v4 )
    v1 = v13;
  *(_QWORD *)(v1 + 16) = v3;
  v19 = (_OWORD *)(v23[0] + 536LL);
  v20 = 3LL;
  do
  {
    *v3 = *v19;
    v3[1] = v19[1];
    v3[2] = v19[2];
    v3[3] = v19[3];
    v3[4] = v19[4];
    v3[5] = v19[5];
    v3[6] = v19[6];
    v3 += 8;
    *(v3 - 1) = v19[7];
    v19 += 8;
    --v20;
  }
  while ( v20 );
  *v3 = *v19;
  v3[1] = v19[1];
  LODWORD(v1) = 1;
LABEL_30:
  DCOBJ::~DCOBJ((DCOBJ *)v23);
  return (unsigned int)v1;
}
