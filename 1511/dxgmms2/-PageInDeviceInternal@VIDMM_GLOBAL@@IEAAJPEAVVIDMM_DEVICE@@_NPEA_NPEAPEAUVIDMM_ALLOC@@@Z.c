/*
 * XREFs of ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0060F0C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00610F4 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C007BAEC (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00113D4 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00469F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0060E78 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0061690 (-FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0062C40 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInDeviceInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        bool a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  _QWORD **v6; // r15
  VIDMM_GLOBAL *v8; // r14
  int v9; // esi
  __int64 v11; // rdx
  __int64 v12; // rbp
  struct VIDMM_ALLOC *v13; // rbx
  int v14; // eax
  _QWORD *v15; // r14
  __int64 v16; // r13
  __int64 v17; // rcx
  _QWORD *v18; // r14
  VIDMM_DEVICE *v19; // rcx
  int v20; // eax
  bool v22; // [rsp+80h] [rbp+18h]
  bool *v23; // [rsp+88h] [rbp+20h]
  int v24; // [rsp+90h] [rbp+28h]

  v23 = a4;
  v22 = a3;
  v6 = (_QWORD **)((char *)a2 + 120);
  *a4 = 0;
  v8 = this;
  v9 = 0;
  *a5 = 0LL;
  if ( *v6 != v6 )
  {
    v11 = *((_QWORD *)a2 + 4);
    if ( !v11 || !*(_BYTE *)(v11 + 172) && !_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 168), 0, 0) )
    {
      v12 = *((_QWORD *)a2 + 3);
      if ( v12 )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 552));
        a4 = v23;
        a3 = v22;
      }
      v13 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 27);
      if ( !v13 )
      {
LABEL_11:
        v14 = 0;
        v24 = 0;
        while ( 1 )
        {
          v15 = *v6;
          v16 = v14;
          if ( *v6 != v6 )
          {
            while ( 1 )
            {
              v13 = (struct VIDMM_ALLOC *)(v15 - 7);
              v15 = (_QWORD *)*v15;
              if ( v16 )
              {
                if ( v16 != 1 || *(_DWORD *)(**(_QWORD **)v13 + 376LL) >= 0xA0000000 )
                {
LABEL_16:
                  v17 = **(_QWORD **)v13;
                  if ( *(_DWORD *)(v17 + 120) == 1 )
                  {
                    v9 = VIDMM_GLOBAL::PageInFaultedAllocation(this, v13, v22, v23, a5);
                    if ( v9 < 0 )
                    {
LABEL_33:
                      v8 = this;
LABEL_43:
                      if ( (*((_DWORD *)v13 + 7) & 3) == 2 )
                        VIDMM_GLOBAL::FaultOneAllocation(v8, (VIDMM_DEVICE **)v13);
                      else
                        VIDMM_DEVICE::FaultCommitment(v19, v13);
                      *((_QWORD *)a2 + 27) = *a5;
                      goto LABEL_27;
                    }
                  }
                }
              }
              else if ( (*(_DWORD *)(**(_QWORD **)v13 + 76LL) & 0x40) == 0 )
              {
                goto LABEL_16;
              }
              if ( v15 == v6 )
              {
                v14 = v24;
                break;
              }
            }
          }
          v18 = *v6;
          if ( *v6 == v6 )
            goto LABEL_26;
          do
          {
            v13 = (struct VIDMM_ALLOC *)(v18 - 7);
            v18 = (_QWORD *)*v18;
            if ( v16 )
            {
              if ( v16 == 1 && *(_DWORD *)(**(_QWORD **)v13 + 376LL) < 0xA0000000 )
                continue;
            }
            else if ( (*(_DWORD *)(**(_QWORD **)v13 + 76LL) & 0x40) != 0 )
            {
              continue;
            }
            v9 = VIDMM_GLOBAL::PageInFaultedAllocation(this, v13, v22, v23, a5);
            if ( v9 < 0 )
              goto LABEL_33;
          }
          while ( v18 != v6 );
          v14 = v24;
LABEL_26:
          v24 = ++v14;
          if ( v14 >= 3 )
          {
LABEL_27:
            if ( v12 )
            {
              ExReleasePushLockSharedEx(v12 + 552, 0LL);
              KeLeaveCriticalRegion();
            }
            return (unsigned int)v9;
          }
        }
      }
      v19 = **(VIDMM_DEVICE ***)v13;
      if ( (*((_DWORD *)v19 + 19) & 0x100) != 0 )
      {
        v20 = VIDMM_GLOBAL::PageInOneAllocation((__int64)v8, v13, 0, a3, a4, a5);
      }
      else
      {
        if ( (*((_DWORD *)v13 + 7) & 3) == 0 )
        {
LABEL_39:
          if ( v9 < 0 )
            goto LABEL_43;
          *((_QWORD *)a2 + 27) = 0LL;
          goto LABEL_11;
        }
        v20 = VIDMM_GLOBAL::PageInFaultedAllocation(v8, *((struct VIDMM_ALLOC **)a2 + 27), a3, a4, a5);
      }
      v9 = v20;
      goto LABEL_39;
    }
  }
  if ( *((_QWORD *)a2 + 27) )
    *((_QWORD *)a2 + 27) = 0LL;
  return (unsigned int)v9;
}
