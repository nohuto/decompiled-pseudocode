/*
 * XREFs of ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C005A930
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0036950 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 * Callees:
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C002AE4C (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall bPEBCacheHandle(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r12
  _QWORD *CurrentProcessWin32Process; // r13
  unsigned int v10; // edi
  PVOID DeferredContext; // rsi
  unsigned int v12; // ebx
  __int64 v13; // r9
  unsigned int v14; // edx
  signed int v15; // ecx
  __int64 v16; // r9
  struct OBJECT *v17; // rdx
  int v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // r15d
  unsigned int v21; // ebx
  __int64 v22; // r11
  unsigned int v23; // edx
  signed int v24; // ecx
  __int64 v25; // r10
  unsigned int v26; // r9d
  __int64 v27; // rbx
  char v28; // al
  unsigned int v29; // edx
  signed int v30; // ecx
  __int64 v31; // r9
  struct OBJECT *v32; // rdx
  struct OBJECT *v33; // rdi
  unsigned __int64 v34; // rcx
  __int64 ProcessPeb; // rax
  volatile signed __int64 *v36; // r15
  __int64 v37; // rax
  __int64 v38; // r8
  volatile signed __int64 *v39; // rdx
  volatile signed __int64 *v40; // rcx
  unsigned int v41; // edi
  PVOID v42; // rsi
  __int64 v43; // r9
  unsigned int v44; // edx
  signed int v45; // ecx
  __int64 v46; // r9
  _DWORD *v47; // rdx
  int v48; // eax
  __int64 v49; // rbx
  unsigned int v50; // edi
  int v51; // eax
  int v52; // ecx
  __int64 v53; // r8
  unsigned int v54; // edx
  signed int v55; // ecx
  __int64 v56; // r10
  struct OBJECT *v57; // rdx
  signed __int32 v59[8]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned int v60; // [rsp+20h] [rbp-B8h]
  unsigned int v61; // [rsp+28h] [rbp-B0h]
  int v62; // [rsp+30h] [rbp-A8h]
  struct OBJECT *v63; // [rsp+38h] [rbp-A0h]
  int v64; // [rsp+40h] [rbp-98h]
  _DWORD *v65; // [rsp+48h] [rbp-90h]
  _DWORD *v66; // [rsp+50h] [rbp-88h]
  volatile signed __int64 *v67; // [rsp+58h] [rbp-80h]
  struct OBJECT *v68; // [rsp+60h] [rbp-78h]
  __int64 v69; // [rsp+68h] [rbp-70h]
  __int64 v70; // [rsp+70h] [rbp-68h]
  __int64 v71; // [rsp+78h] [rbp-60h]
  struct _NT_TIB *Self; // [rsp+80h] [rbp-58h]
  volatile signed __int64 v73; // [rsp+88h] [rbp-50h]
  __int64 v74; // [rsp+90h] [rbp-48h]
  __int64 v75; // [rsp+98h] [rbp-40h]

  v8 = a2;
  v60 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v10 = *a4 & 0xFFFFFF;
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  if ( v10 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      v12 = *(unsigned __int16 *)a4;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v10,
                                  1)
           + 13) == HIWORD(v10) )
        v10 = v12;
    }
    else
    {
      v10 = *(unsigned __int16 *)a4;
    }
  }
  v13 = *((_QWORD *)DeferredContext + 2);
  v14 = *(_DWORD *)(v13 + 2056);
  if ( v10 >= v14 + ((*(unsigned __int16 *)(v13 + 2) - 1) << 16) )
    goto LABEL_14;
  if ( v10 >= v14 )
  {
    v15 = ((v10 - v14) >> 16) + 1;
    if ( (v10 - v14) >> 16 == -2 )
      goto LABEL_14;
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_QWORD *)(v13 + 8LL * v15 + 8);
  v69 = v16;
  if ( v15 )
    v10 = v10 - ((v15 - 1) << 16) - v14;
  if ( v10 < *(_DWORD *)(v16 + 20) )
  {
    v17 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8LL * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
    goto LABEL_15;
  }
LABEL_14:
  v17 = 0LL;
LABEL_15:
  v63 = v17;
  v68 = v17;
  v18 = (unsigned __int16)*(_DWORD *)v17;
  v19 = v18 | (*(_DWORD *)v17 >> 8) & 0xFF0000;
  if ( v19 >= 0x10000 )
  {
    if ( *(_DWORD *)DeferredContext > 0x10000u )
    {
      v21 = (unsigned __int16)v18;
      v20 = v18 | (*(_DWORD *)v17 >> 8) & 0xFF0000;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)DeferredContext + 2),
                                  (unsigned __int16)v18,
                                  1)
           + 13) == HIWORD(v19) )
        v20 = v21;
    }
    else
    {
      v20 = (unsigned __int16)v18;
    }
  }
  else
  {
    v20 = v18 | (*(_DWORD *)v17 >> 8) & 0xFF0000;
  }
  if ( v20 >= 0x10000 || *(_DWORD *)DeferredContext > 0x10000u )
  {
    v33 = v63;
    goto LABEL_50;
  }
  if ( v19 >= 0x10000 )
    v19 = (unsigned __int16)v19;
  v22 = *((_QWORD *)DeferredContext + 2);
  v23 = *(_DWORD *)(v22 + 2056);
  if ( v19 < v23 + ((*(unsigned __int16 *)(v22 + 2) - 1) << 16) )
  {
    if ( v19 < v23 )
    {
      v24 = 0;
LABEL_29:
      v25 = *(_QWORD *)(v22 + 8LL * v24 + 8);
      v70 = v25;
      v26 = v19;
      if ( v24 )
        v26 = v19 - ((v24 - 1) << 16) - v23;
      v27 = 0LL;
      if ( v26 >= *(_DWORD *)(v25 + 20)
        || (v28 = 1,
            !*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v25 + 24) + 8LL * (v26 >> 8)) + 16LL * (unsigned __int8)v26 + 8)) )
      {
        v28 = 0;
      }
      if ( v28 )
        v27 = *(_QWORD *)v25 + 24LL * v26;
      goto LABEL_37;
    }
    v24 = ((v19 - v23) >> 16) + 1;
    if ( (v19 - v23) >> 16 != -2 )
      goto LABEL_29;
  }
  v27 = 0LL;
LABEL_37:
  v29 = *(_DWORD *)(v22 + 2056);
  if ( v19 >= v29 + ((*(unsigned __int16 *)(v22 + 2) - 1) << 16) )
    goto LABEL_45;
  if ( v19 < v29 )
  {
    v30 = 0;
    goto LABEL_41;
  }
  v30 = ((v19 - v29) >> 16) + 1;
  if ( (v19 - v29) >> 16 == -2 )
  {
LABEL_45:
    v32 = 0LL;
    goto LABEL_46;
  }
LABEL_41:
  v31 = *(_QWORD *)(v22 + 8LL * v30 + 8);
  v71 = v31;
  if ( v30 )
    v19 = v19 - ((v30 - 1) << 16) - v29;
  if ( v19 >= *(_DWORD *)(v31 + 20) )
    goto LABEL_45;
  v32 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v31 + 24) + 8LL * (v19 >> 8)) + 16LL * (unsigned __int8)v19 + 8);
LABEL_46:
  v33 = v63;
  if ( v32 != v63 )
    v27 = 0LL;
  ++*(_BYTE *)(v27 + 13);
  v34 = v20 | (unsigned __int64)(*(unsigned __int16 *)(v27 + 12) << 16);
  *(_QWORD *)v33 = v34;
  *(_QWORD *)v27 ^= (*(_DWORD *)v27 ^ (((unsigned int)v34 >> 8) & 0xFFFF0000 | (unsigned __int16)v34)) & 0xFFFFFF;
LABEL_50:
  ProcessPeb = PsGetProcessPeb(*CurrentProcessWin32Process);
  if ( ProcessPeb )
  {
    v36 = (volatile signed __int64 *)(ProcessPeb + 320);
    v37 = *(_QWORD *)(ProcessPeb + 320);
    v64 = 0;
    if ( !v37 )
    {
      Self = KeGetPcr()->NtTib.Self;
      if ( !_InterlockedCompareExchange64(v36, (signed __int64)Self, 0LL) )
      {
        v64 = 1;
        v38 = (unsigned int)gCacheHandleEntries[v8];
        if ( *((_DWORD *)v36 + v8 + 2) < (unsigned int)v38 )
        {
          v39 = &v36[*((unsigned int *)&gCacheHandleOffsets + v8) + 3];
          v67 = v39;
          v40 = &v39[v38];
          while ( 1 )
          {
            if ( v39 == v40 )
              goto LABEL_95;
            if ( !*v39 )
              break;
            v67 = ++v39;
          }
          v73 = *(_QWORD *)v33;
          *v39 = v73;
          ++*((_DWORD *)v36 + v8 + 2);
          *a3 &= 0xFFFFFFF5;
          *a3 |= 1u;
          _InterlockedOr(v59, 0);
          v60 = 1;
          v41 = **(_DWORD **)a5 & 0xFFFFFF;
          v61 = v41;
          v42 = WPP_MAIN_CB.Dpc.DeferredContext;
          if ( v41 >= 0x10000 )
          {
            if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                          (unsigned __int16)v41,
                                          1)
                   + 13) == HIWORD(v41) )
                v41 = (unsigned __int16)v41;
            }
            else
            {
              v41 = (unsigned __int16)v41;
            }
          }
          v61 = v41;
          v43 = *((_QWORD *)v42 + 2);
          v44 = *(_DWORD *)(v43 + 2056);
          if ( v41 < v44 + ((*(unsigned __int16 *)(v43 + 2) - 1) << 16) )
          {
            if ( v41 < v44 )
            {
              v45 = 0;
LABEL_66:
              v46 = *(_QWORD *)(v43 + 8LL * v45 + 8);
              v74 = v46;
              if ( v45 )
                v41 = v41 - ((v45 - 1) << 16) - v44;
              if ( v41 >= *(_DWORD *)(v46 + 20) )
                v47 = 0LL;
              else
                v47 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v46 + 24) + 8LL * (v41 >> 8))
                                 + 16LL * (unsigned __int8)v41
                                 + 8);
              v65 = v47;
LABEL_73:
              v66 = v47;
              v48 = (unsigned __int16)*v47;
              v49 = v48 | (*v47 >> 8) & 0xFF0000u;
              if ( (unsigned int)v49 >= 0x10000 )
              {
                if ( *(_DWORD *)v42 > 0x10000u )
                {
                  v50 = (unsigned __int16)v48;
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)v42 + 2),
                                              (unsigned __int16)v48,
                                              1)
                       + 13) == WORD1(v49) )
                    v49 = v50;
                }
                else
                {
                  v49 = (unsigned __int16)v48;
                }
              }
              v62 = v49;
              if ( (unsigned int)v49 >= 0x10000 )
              {
                if ( *(_DWORD *)v42 > 0x10000u )
                {
                  v52 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                               *((GdiHandleEntryDirectory **)v42 + 2),
                                               (unsigned __int16)v49,
                                               1)
                        + 13);
                  v51 = v49;
                  if ( v52 == WORD1(v49) )
                    v51 = (unsigned __int16)v49;
                }
                else
                {
                  v51 = (unsigned __int16)v49;
                }
                v62 = v51;
              }
              else
              {
                v62 = v49;
              }
              v53 = *((_QWORD *)v42 + 2);
              v54 = *(_DWORD *)(v53 + 2056);
              if ( (unsigned int)v49 >= v54 + ((*(unsigned __int16 *)(v53 + 2) - 1) << 16) )
                goto LABEL_92;
              if ( (unsigned int)v49 >= v54 )
              {
                v55 = (((unsigned int)v49 - v54) >> 16) + 1;
                if ( ((unsigned int)v49 - v54) >> 16 == -2 )
                {
LABEL_92:
                  *(_DWORD *)(a5 + 8) = 0;
                  *(_QWORD *)a5 = 0LL;
                  KeLeaveCriticalRegion();
                  if ( a6 )
                  {
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a6 + 12LL));
                    *(_QWORD *)a6 = 0LL;
                  }
                  goto LABEL_95;
                }
              }
              else
              {
                v55 = 0;
              }
              v56 = *(_QWORD *)(v53 + 8LL * v55 + 8);
              v75 = v56;
              if ( v55 )
                v49 = (_DWORD)v49 - ((v55 - 1) << 16) - v54;
              *(_DWORD *)(*(_QWORD *)v56 + 24 * v49 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v56 + 24) + 8LL * ((unsigned int)v49 >> 8)) + 16LL * (unsigned __int8)v49,
                0LL);
              KeLeaveCriticalRegion();
              goto LABEL_92;
            }
            v45 = ((v41 - v44) >> 16) + 1;
            if ( (v41 - v44) >> 16 != -2 )
              goto LABEL_66;
          }
          v47 = 0LL;
          goto LABEL_73;
        }
LABEL_95:
        *v36 = 0LL;
      }
    }
    v57 = v63;
  }
  else
  {
    v57 = v63;
  }
  if ( !v60 )
    GdiHandleManager::_IncrementOrDecrementUniqueness(
      (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
      v57,
      0);
  return v60;
}
