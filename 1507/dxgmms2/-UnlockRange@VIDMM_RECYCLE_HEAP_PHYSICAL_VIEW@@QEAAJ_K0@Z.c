/*
 * XREFs of ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C006A838
 * Callers:
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C00664D8 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 * Callees:
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C00040C0 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C005BA68 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D2C (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C0066F24 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067348 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z @ 0x1C0067B40 (-LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C006A608 (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C006B000 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **this,
        struct _MDL *a2,
        struct _MDL *a3)
{
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v5; // r9
  __int64 v6; // rsi
  int v7; // eax
  struct VIDMM_MDL_RANGE *v8; // rbx
  bool v9; // zf
  struct _MDL *v10; // rbp
  struct _MDL **NextRange; // r15
  bool v12; // r8
  struct _MDL *v13; // r10
  bool v14; // di
  char v15; // di
  struct VIDMM_MDL_RANGE *v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v20; // rdx
  unsigned __int64 v21; // r10
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  char v32; // di
  struct VIDMM_MDL_RANGE *v33; // rbx
  struct VIDMM_MDL_RANGE *v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // rcx
  _VIDMM_GLOBAL_ALLOC *v39; // r8
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rdx
  VIDMM_MDL_RANGE *v44; // rax
  VIDMM_MDL_RANGE *v45; // rdi
  __int64 v46; // rax
  VIDMM_MDL_RANGE *v47; // rax
  enum _LOCK_OPERATION v48; // r8d
  VIDMM_MDL_RANGE *v49; // r14
  __int64 v50; // rax
  _VIDMM_GLOBAL_ALLOC *v51; // rcx
  __int64 v52; // rcx
  enum _LOCK_OPERATION v53; // r8d
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  struct VIDMM_MDL_RANGE *v58; // rbp
  char v59; // r12
  struct VIDMM_MDL_RANGE *v60; // r9
  _QWORD *v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // r8
  int v64; // ecx
  int v65; // ecx
  unsigned __int64 v66; // rcx
  void *v67; // rbx
  void *v68; // rax
  __int64 CurrentProcess; // rax
  _QWORD *v70; // rax
  void *v71; // [rsp+40h] [rbp-58h] BYREF
  PVOID MappedBase; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v73; // [rsp+50h] [rbp-48h]
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v74; // [rsp+A0h] [rbp+8h]
  bool v75; // [rsp+B8h] [rbp+20h]
  struct VIDMM_MDL_RANGE *v76; // [rsp+B8h] [rbp+20h]

  v74 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)this;
  v5 = this[1];
  LODWORD(v6) = 0;
  v7 = -1;
  v8 = 0LL;
  if ( v5 != (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(this + 1) )
  {
    while ( 1 )
    {
      v9 = v7 == 0;
      if ( v7 >= 0 )
        break;
      v8 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v5 - 24);
      if ( *((_QWORD *)v5 - 1) > (unsigned __int64)a2 )
        v7 = *((_QWORD *)v5 - 2) >= (unsigned __int64)a3;
      else
        v7 = -1;
      v5 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v5;
      if ( v5 == (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(this + 1) )
      {
        v9 = v7 == 0;
        break;
      }
    }
    if ( v9 )
    {
      v10 = (struct _MDL *)*((_QWORD *)v8 + 1);
      NextRange = (struct _MDL **)v8;
      v12 = v10 < a2;
      v75 = v10 < a2;
      if ( *((_QWORD *)v8 + 2) < (unsigned __int64)a3 )
      {
        do
          NextRange = (struct _MDL **)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
        while ( NextRange[2] < a3 );
        this = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v74;
      }
      v13 = NextRange[2];
      v14 = v13 > a3;
      if ( !v12 && v13 <= a3 )
      {
        v15 = 0;
        do
        {
          VIDMM_MDL_RANGE::Unlock((PMDL *)v8);
          v16 = v8;
          if ( v8 == (struct VIDMM_MDL_RANGE *)NextRange )
            v15 = 1;
          else
            v8 = VIDMM_MDL_RANGE::GetNextRange(v8);
          v17 = (_QWORD *)((char *)v16 + 24);
          v18 = *((_QWORD *)v16 + 3);
          v19 = (_QWORD *)*((_QWORD *)v16 + 4);
          if ( *(struct VIDMM_MDL_RANGE **)(v18 + 8) != (struct VIDMM_MDL_RANGE *)((char *)v16 + 24)
            || (_QWORD *)*v19 != v17 )
          {
            __fastfail(3u);
          }
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
          *v17 = 0LL;
          *((_QWORD *)v16 + 4) = 0LL;
          _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v16);
        }
        while ( !v15 );
        return (unsigned int)v6;
      }
      v20 = *this;
      v21 = (char *)v13 - (char *)v10;
      v71 = 0LL;
      MappedBase = 0LL;
      v73 = v21;
      v22 = **((_DWORD **)v20 + 4);
      if ( (unsigned int)(v22 - 3) > 3 || (unsigned int)(v22 - 5) <= 1 )
      {
        v71 = v10;
      }
      else
      {
        v23 = VidMmRecycleHeapMapSection(
                *((PVOID *)v20 + 7),
                (unsigned __int64)v10,
                v21,
                ((v22 - 4) & 0xFFFFFFFD) == 0,
                &v71,
                &MappedBase,
                0,
                0LL);
        v6 = v23;
        if ( v23 < 0 )
        {
          _InterlockedIncrement(&dword_1C00275D0);
          v25 = (_QWORD *)WdLogNewEntry5_WdLowResource(v24);
          v25[3] = v73;
          v25[4] = *((_QWORD *)v8 + 1);
          v25[5] = *(_QWORD *)v74;
          v25[6] = v6;
          WdLogEvent5_WdLowResource(v25);
          return (unsigned int)v6;
        }
        v10 = (struct _MDL *)v71;
        v12 = v75;
      }
      if ( v12 )
      {
        if ( !v14 )
        {
          LODWORD(v6) = VIDMM_MDL_RANGE::LockUnlock((PMDL *)v8, v10, *((struct _MDL **)v8 + 1), a2);
          if ( (int)v6 >= 0 )
          {
            if ( v8 != (struct VIDMM_MDL_RANGE *)NextRange )
            {
              v32 = 0;
              v33 = VIDMM_MDL_RANGE::GetNextRange(v8);
              do
              {
                VIDMM_MDL_RANGE::Unlock((PMDL *)v33);
                v34 = v33;
                if ( v33 == (struct VIDMM_MDL_RANGE *)NextRange )
                  v32 = 1;
                else
                  v33 = VIDMM_MDL_RANGE::GetNextRange(v33);
                v35 = (_QWORD *)((char *)v34 + 24);
                v36 = *((_QWORD *)v34 + 3);
                v37 = (_QWORD *)*((_QWORD *)v34 + 4);
                if ( *(struct VIDMM_MDL_RANGE **)(v36 + 8) != (struct VIDMM_MDL_RANGE *)((char *)v34 + 24)
                  || (_QWORD *)*v37 != v35 )
                {
                  __fastfail(3u);
                }
                *v37 = v36;
                *(_QWORD *)(v36 + 8) = v37;
                *v35 = 0LL;
                *((_QWORD *)v34 + 4) = 0LL;
                _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v34);
              }
              while ( !v32 );
            }
            goto LABEL_82;
          }
          _InterlockedIncrement(&dword_1C00275A0);
          v31 = WdLogNewEntry5_WdLowResource(v28);
          *(_QWORD *)(v31 + 24) = 5477LL;
          goto LABEL_47;
        }
      }
      else if ( v14 )
      {
        LODWORD(v6) = VIDMM_MDL_RANGE::LockUnlock(
                        NextRange,
                        (char *)v10 + (_QWORD)a3 - *((_QWORD *)v8 + 1),
                        a3,
                        NextRange[2]);
        if ( (int)v6 >= 0 )
        {
          while ( v8 != (struct VIDMM_MDL_RANGE *)NextRange )
          {
            VIDMM_MDL_RANGE::Unlock((PMDL *)v8);
            v8 = VIDMM_MDL_RANGE::GetNextRange(v8);
            v41 = (_QWORD *)(v40 + 24);
            v42 = *(_QWORD *)(v40 + 24);
            v43 = (_QWORD *)v41[1];
            if ( *(_QWORD **)(v42 + 8) != v41 || (_QWORD *)*v43 != v41 )
              __fastfail(3u);
            *v43 = v42;
            *(_QWORD *)(v42 + 8) = v43;
            *v41 = 0LL;
            *((_QWORD *)v39 + 4) = 0LL;
            _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v39);
          }
          goto LABEL_82;
        }
        _InterlockedIncrement(&dword_1C00275A0);
        v31 = WdLogNewEntry5_WdLowResource(v38);
        *(_QWORD *)(v31 + 24) = 5533LL;
LABEL_47:
        WdLogEvent5_WdLowResource(v31);
        goto LABEL_82;
      }
      v44 = (VIDMM_MDL_RANGE *)operator new(0x30uLL, 0x32316956u, PagedPool);
      v45 = v44;
      if ( v44 )
      {
        *((_QWORD *)v44 + 1) = *((_QWORD *)v8 + 1);
        *(_QWORD *)v44 = 0LL;
        *((_QWORD *)v44 + 2) = a2;
        *((_QWORD *)v44 + 5) = v74;
        *((_QWORD *)v44 + 3) = 0LL;
        *((_QWORD *)v44 + 4) = 0LL;
      }
      else
      {
        v45 = 0LL;
      }
      if ( v45 )
      {
        v47 = (VIDMM_MDL_RANGE *)operator new(0x30uLL, 0x32316956u, PagedPool);
        v49 = v47;
        if ( v47 )
        {
          *((_QWORD *)v47 + 2) = NextRange[2];
          *(_QWORD *)v47 = 0LL;
          *((_QWORD *)v47 + 1) = a3;
          *((_QWORD *)v47 + 5) = v74;
          *((_QWORD *)v47 + 3) = 0LL;
          *((_QWORD *)v47 + 4) = 0LL;
        }
        else
        {
          v49 = 0LL;
        }
        if ( v49 )
        {
          if ( (int)VIDMM_MDL_RANGE::Lock(v45, v10, v48, 0LL, 0LL) >= 0 )
          {
            LODWORD(v6) = VIDMM_MDL_RANGE::Lock(v49, (char *)v10 + (_QWORD)a3 - *((_QWORD *)v8 + 1), v53, 0LL, 0LL);
            if ( (int)v6 >= 0 )
            {
              v57 = *((_QWORD *)v8 + 4);
              if ( v57 == *((_QWORD *)v8 + 5) + 8LL )
                v58 = 0LL;
              else
                v58 = (struct VIDMM_MDL_RANGE *)(v57 - 24);
              v76 = VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
              v59 = 0;
              do
              {
                VIDMM_MDL_RANGE::Unlock((PMDL *)v8);
                v60 = v8;
                if ( v8 == (struct VIDMM_MDL_RANGE *)NextRange )
                  v59 = 1;
                else
                  v8 = VIDMM_MDL_RANGE::GetNextRange(v8);
                v61 = (_QWORD *)((char *)v60 + 24);
                v62 = *((_QWORD *)v60 + 3);
                v63 = (_QWORD *)*((_QWORD *)v60 + 4);
                if ( *(struct VIDMM_MDL_RANGE **)(v62 + 8) != (struct VIDMM_MDL_RANGE *)((char *)v60 + 24)
                  || (_QWORD *)*v63 != v61 )
                {
                  __fastfail(3u);
                }
                *v63 = v62;
                *(_QWORD *)(v62 + 8) = v63;
                *v61 = 0LL;
                *((_QWORD *)v60 + 4) = 0LL;
                _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v60);
              }
              while ( !v59 );
              VIDMM_MDL_RANGE::InsertBetween(v45, v58, v49);
              VIDMM_MDL_RANGE::InsertBetween(v49, v45, v76);
              goto LABEL_82;
            }
            _InterlockedIncrement(&dword_1C00275A0);
            v56 = WdLogNewEntry5_WdLowResource(v55);
            *(_QWORD *)(v56 + 24) = 5625LL;
            WdLogEvent5_WdLowResource(v56);
            VIDMM_MDL_RANGE::Unlock((PMDL *)v45);
          }
          else
          {
            _InterlockedIncrement(&dword_1C00275A0);
            v54 = WdLogNewEntry5_WdLowResource(v52);
            *(_QWORD *)(v54 + 24) = 5605LL;
            WdLogEvent5_WdLowResource(v54);
          }
          _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v45);
          v51 = v49;
        }
        else
        {
          _InterlockedIncrement(&dword_1C00275A0);
          v50 = WdLogNewEntry5_WdLowResource(0LL);
          *(_QWORD *)(v50 + 24) = 5587LL;
          WdLogEvent5_WdLowResource(v50);
          v51 = v45;
        }
        _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v51);
      }
      else
      {
        _InterlockedIncrement(&dword_1C00275A0);
        v46 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v46 + 24) = 5577LL;
        WdLogEvent5_WdLowResource(v46);
      }
      LODWORD(v6) = -1073741801;
LABEL_82:
      v64 = **(_DWORD **)(*(_QWORD *)v74 + 32LL);
      if ( (unsigned int)(v64 - 3) <= 3 && (unsigned int)(v64 - 5) > 1 )
      {
        v65 = dword_1C0027314;
        if ( (unsigned __int64)qword_1C00270F8 > 0x53333333 )
          v65 = dword_1C0027304;
        v66 = (unsigned int)(v65 << 20);
        if ( v73 <= v66 )
        {
          CurrentProcess = PsGetCurrentProcess(v66, v27, v29, v30);
          MmUnmapViewOfSection(CurrentProcess, MappedBase);
        }
        else
        {
          v67 = *(void **)(*(_QWORD *)v74 + 56LL);
          v68 = (void *)PsGetCurrentProcess(v66, v27, v29, v30);
          VidMmUnmapViewAsync(v68, v67, MappedBase);
        }
      }
      return (unsigned int)v6;
    }
  }
  v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, 0xFFFFFFFFLL);
  v70[3] = 270LL;
  v70[4] = 52LL;
  v70[5] = 9LL;
  v70[6] = 0LL;
  v70[7] = 0LL;
  WdLogEvent5_WdCriticalError(v70);
  return 3221225473LL;
}
