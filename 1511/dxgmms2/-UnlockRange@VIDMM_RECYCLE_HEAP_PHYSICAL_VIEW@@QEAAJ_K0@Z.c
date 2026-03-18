/*
 * XREFs of ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C005DD30
 * Callers:
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C005D7CC (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C00120EC (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C005E38C (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 *     ?LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z @ 0x1C005E3A8 (-LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C005E488 (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E4B0 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C005E5B0 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C005E694 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0061DF0 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v4; // r8
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v6; // r9
  __int64 v7; // rsi
  int v8; // eax
  unsigned __int64 *v9; // rbx
  bool v10; // zf
  char *v11; // rbp
  unsigned __int64 *NextRange; // r15
  bool v13; // r8
  unsigned __int64 v14; // r10
  bool v15; // di
  char v16; // di
  unsigned __int64 *v17; // r8
  _QWORD *v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 *v20; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // r10
  int v24; // ecx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rcx
  VIDMM_MDL_RANGE *v28; // rbx
  VIDMM_MDL_RANGE *v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rdx
  _VIDMM_GLOBAL_ALLOC *v33; // r8
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rdx
  VIDMM_MDL_RANGE *v38; // rax
  VIDMM_MDL_RANGE *v39; // rdi
  VIDMM_MDL_RANGE *v40; // rax
  enum _LOCK_OPERATION v41; // r8d
  VIDMM_MDL_RANGE *v42; // r14
  __int64 v43; // rcx
  enum _LOCK_OPERATION v44; // r8d
  __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  struct VIDMM_MDL_RANGE *v47; // rbp
  char v48; // r12
  unsigned __int64 *v49; // r9
  _QWORD *v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 *v52; // r8
  int v53; // eax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _VIDMM_GLOBAL_ALLOC *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // ecx
  void *v63; // rbx
  void *v64; // rax
  __int64 CurrentProcess; // rax
  _QWORD *v66; // rax
  void *v67; // [rsp+40h] [rbp-58h] BYREF
  PVOID MappedBase; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v69; // [rsp+50h] [rbp-48h]
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v70; // [rsp+A0h] [rbp+8h]
  bool v71; // [rsp+B8h] [rbp+20h]
  struct VIDMM_MDL_RANGE *v72; // [rsp+B8h] [rbp+20h]

  v70 = this;
  v4 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8);
  v6 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)*((_QWORD *)this + 1);
  LODWORD(v7) = 0;
  v8 = -1;
  v9 = 0LL;
  if ( v6 != (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8) )
  {
    while ( 1 )
    {
      v10 = v8 == 0;
      if ( v8 >= 0 )
        break;
      v9 = (unsigned __int64 *)((char *)v6 - 24);
      if ( *((_QWORD *)v6 - 1) > a2 )
        v8 = *((_QWORD *)v6 - 2) >= a3;
      else
        v8 = -1;
      v6 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v6;
      if ( v6 == v4 )
      {
        v10 = v8 == 0;
        break;
      }
    }
    if ( v10 )
    {
      v11 = (char *)v9[1];
      NextRange = v9;
      v13 = (unsigned __int64)v11 < a2;
      v71 = (unsigned __int64)v11 < a2;
      if ( v9[2] < a3 )
      {
        do
          NextRange = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
        while ( NextRange[2] < a3 );
        this = v70;
      }
      v14 = NextRange[2];
      v15 = v14 > a3;
      if ( !v13 && v14 <= a3 )
      {
        v16 = 0;
        do
        {
          VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v9);
          v17 = v9;
          if ( v9 == NextRange )
            v16 = 1;
          else
            v9 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v9);
          v18 = v17 + 3;
          v19 = v17[3];
          v20 = (unsigned __int64 *)v17[4];
          if ( *(unsigned __int64 **)(v19 + 8) != v17 + 3 || (_QWORD *)*v20 != v18 )
            __fastfail(3u);
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
          *v18 = 0LL;
          v17[4] = 0LL;
          operator delete(v17);
        }
        while ( !v16 );
        return (unsigned int)v7;
      }
      v22 = *(_QWORD *)this;
      v23 = v14 - (_QWORD)v11;
      v67 = 0LL;
      MappedBase = 0LL;
      v69 = v23;
      v24 = **(_DWORD **)(v22 + 32);
      if ( (unsigned int)(v24 - 3) > 3 || (unsigned int)(v24 - 5) <= 1 )
      {
        v67 = v11;
      }
      else
      {
        v53 = VidMmRecycleHeapMapSection(
                *(PVOID *)(v22 + 56),
                (unsigned __int64)v11,
                v23,
                ((v24 - 4) & 0xFFFFFFFD) == 0,
                &v67,
                &MappedBase,
                0,
                0LL);
        v7 = v53;
        if ( v53 < 0 )
        {
          _InterlockedIncrement(&dword_1C002F5E0);
          v55 = (_QWORD *)WdLogNewEntry5_WdLowResource(v54);
          v55[3] = v69;
          v55[4] = v9[1];
          v55[5] = *(_QWORD *)v70;
          v55[6] = v7;
          WdLogEvent5_WdLowResource(v55);
          return (unsigned int)v7;
        }
        v11 = (char *)v67;
        v13 = v71;
      }
      if ( v13 )
      {
        if ( !v15 )
        {
          LODWORD(v7) = VIDMM_MDL_RANGE::LockUnlock((VIDMM_MDL_RANGE *)v9, v11, v9[1], a2);
          if ( (int)v7 >= 0 )
          {
            if ( v9 != NextRange )
            {
              v28 = VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v9);
              do
              {
                VIDMM_MDL_RANGE::Unlock(v28);
                v29 = v28;
                if ( v28 == (VIDMM_MDL_RANGE *)NextRange )
                  v15 = 1;
                else
                  v28 = VIDMM_MDL_RANGE::GetNextRange(v28);
                v30 = (_QWORD *)((char *)v29 + 24);
                v31 = *((_QWORD *)v29 + 3);
                v32 = (_QWORD *)*((_QWORD *)v29 + 4);
                if ( *(VIDMM_MDL_RANGE **)(v31 + 8) != (VIDMM_MDL_RANGE *)((char *)v29 + 24) || (_QWORD *)*v32 != v30 )
                  __fastfail(3u);
                *v32 = v31;
                *(_QWORD *)(v31 + 8) = v32;
                *v30 = 0LL;
                *((_QWORD *)v29 + 4) = 0LL;
                _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v29);
              }
              while ( !v15 );
            }
            goto LABEL_28;
          }
          _InterlockedIncrement(&dword_1C002F5B0);
          v56 = WdLogNewEntry5_WdLowResource(v27);
          *(_QWORD *)(v56 + 24) = 5575LL;
LABEL_73:
          WdLogEvent5_WdLowResource(v56);
          goto LABEL_28;
        }
      }
      else if ( v15 )
      {
        LODWORD(v7) = VIDMM_MDL_RANGE::LockUnlock((VIDMM_MDL_RANGE *)NextRange, &v11[a3 - v9[1]], a3, NextRange[2]);
        if ( (int)v7 >= 0 )
        {
          while ( v9 != NextRange )
          {
            VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v9);
            v9 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v9);
            v35 = (_QWORD *)(v34 + 24);
            v36 = *(_QWORD *)(v34 + 24);
            v37 = (_QWORD *)v35[1];
            if ( *(_QWORD **)(v36 + 8) != v35 || (_QWORD *)*v37 != v35 )
              __fastfail(3u);
            *v37 = v36;
            *(_QWORD *)(v36 + 8) = v37;
            *v35 = 0LL;
            *((_QWORD *)v33 + 4) = 0LL;
            _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v33);
          }
          goto LABEL_28;
        }
        _InterlockedIncrement(&dword_1C002F5B0);
        v56 = WdLogNewEntry5_WdLowResource(v25);
        *(_QWORD *)(v56 + 24) = 5631LL;
        goto LABEL_73;
      }
      v38 = (VIDMM_MDL_RANGE *)operator new(0x30uLL, 0x32316956u, PagedPool);
      v39 = v38;
      if ( v38 )
      {
        *((_QWORD *)v38 + 1) = v9[1];
        *(_QWORD *)v38 = 0LL;
        *((_QWORD *)v38 + 2) = a2;
        *((_QWORD *)v38 + 5) = v70;
        *((_QWORD *)v38 + 3) = 0LL;
        *((_QWORD *)v38 + 4) = 0LL;
      }
      else
      {
        v39 = 0LL;
      }
      if ( v39 )
      {
        v40 = (VIDMM_MDL_RANGE *)operator new(0x30uLL, 0x32316956u, PagedPool);
        v42 = v40;
        if ( v40 )
        {
          *((_QWORD *)v40 + 2) = NextRange[2];
          *(_QWORD *)v40 = 0LL;
          *((_QWORD *)v40 + 1) = a3;
          *((_QWORD *)v40 + 5) = v70;
          *((_QWORD *)v40 + 3) = 0LL;
          *((_QWORD *)v40 + 4) = 0LL;
        }
        else
        {
          v42 = 0LL;
        }
        if ( v42 )
        {
          if ( VIDMM_MDL_RANGE::Lock(v39, v11, v41, 0LL, 0LL) < 0 )
          {
            _InterlockedIncrement(&dword_1C002F5B0);
            v60 = WdLogNewEntry5_WdLowResource(v43);
            *(_QWORD *)(v60 + 24) = 5703LL;
            WdLogEvent5_WdLowResource(v60);
          }
          else
          {
            LODWORD(v7) = VIDMM_MDL_RANGE::Lock(v42, &v11[a3 - v9[1]], v44, 0LL, 0LL);
            if ( (int)v7 >= 0 )
            {
              v46 = v9[4];
              if ( v46 == v9[5] + 8 )
                v47 = 0LL;
              else
                v47 = (struct VIDMM_MDL_RANGE *)(v46 - 24);
              v72 = VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
              v48 = 0;
              do
              {
                VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)v9);
                v49 = v9;
                if ( v9 == NextRange )
                  v48 = 1;
                else
                  v9 = (unsigned __int64 *)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)v9);
                v50 = v49 + 3;
                v51 = v49[3];
                v52 = (unsigned __int64 *)v49[4];
                if ( *(unsigned __int64 **)(v51 + 8) != v49 + 3 || (_QWORD *)*v52 != v50 )
                  __fastfail(3u);
                *v52 = v51;
                *(_QWORD *)(v51 + 8) = v52;
                *v50 = 0LL;
                v49[4] = 0LL;
                _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v49);
              }
              while ( !v48 );
              VIDMM_MDL_RANGE::InsertBetween(v39, v47, v42);
              VIDMM_MDL_RANGE::InsertBetween(v42, v39, v72);
              goto LABEL_28;
            }
            _InterlockedIncrement(&dword_1C002F5B0);
            v61 = WdLogNewEntry5_WdLowResource(v45);
            *(_QWORD *)(v61 + 24) = 5723LL;
            WdLogEvent5_WdLowResource(v61);
            VIDMM_MDL_RANGE::Unlock(v39);
          }
          _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v39);
          v59 = v42;
        }
        else
        {
          _InterlockedIncrement(&dword_1C002F5B0);
          v58 = WdLogNewEntry5_WdLowResource(0LL);
          *(_QWORD *)(v58 + 24) = 5685LL;
          WdLogEvent5_WdLowResource(v58);
          v59 = v39;
        }
        _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v59);
      }
      else
      {
        _InterlockedIncrement(&dword_1C002F5B0);
        v57 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v57 + 24) = 5675LL;
        WdLogEvent5_WdLowResource(v57);
      }
      LODWORD(v7) = -1073741801;
LABEL_28:
      v26 = **(_DWORD **)(*(_QWORD *)v70 + 32LL);
      if ( (unsigned int)(v26 - 3) <= 3 && (unsigned int)(v26 - 5) > 1 )
      {
        v62 = dword_1C002F33C;
        if ( (unsigned __int64)qword_1C002F118 > 0x53333333 )
          v62 = dword_1C002F32C;
        if ( v69 <= (unsigned int)(v62 << 20) )
        {
          CurrentProcess = PsGetCurrentProcess();
          MmUnmapViewOfSection(CurrentProcess, MappedBase);
        }
        else
        {
          v63 = *(void **)(*(_QWORD *)v70 + 56LL);
          v64 = (void *)PsGetCurrentProcess();
          VidMmUnmapViewAsync(v64, v63, MappedBase);
        }
      }
      return (unsigned int)v7;
    }
  }
  v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, 0xFFFFFFFFLL, v4, v6);
  v66[3] = 270LL;
  v66[4] = 52LL;
  v66[5] = 9LL;
  v66[6] = 0LL;
  v66[7] = 0LL;
  WdLogEvent5_WdCriticalError(v66);
  return 3221225473LL;
}
