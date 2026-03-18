/*
 * XREFs of ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0050D60
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053B6C (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00061D0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0039BC8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004D130 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0050FD8 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0058AF4 (-FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
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
  __int64 v10; // rdx
  __int64 v11; // rbp
  struct VIDMM_ALLOC *v12; // rbx
  VIDMM_DEVICE *v13; // rcx
  int v14; // eax
  int v15; // eax
  _QWORD *v16; // r14
  __int64 v17; // r13
  __int64 v18; // rcx
  _QWORD *v19; // r14
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
    v10 = *((_QWORD *)a2 + 4);
    if ( !v10 || !*(_BYTE *)(v10 + 172) && !_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 168), 0, 0) )
    {
      v11 = *((_QWORD *)a2 + 3);
      if ( v11 )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 552));
        a4 = v23;
        a3 = v22;
      }
      v12 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 27);
      if ( !v12 )
      {
LABEL_15:
        v15 = 0;
        v24 = 0;
        while ( 1 )
        {
          v16 = *v6;
          v17 = v15;
          if ( *v6 != v6 )
          {
            while ( 1 )
            {
              v12 = (struct VIDMM_ALLOC *)(v16 - 7);
              v16 = (_QWORD *)*v16;
              if ( v17 )
              {
                if ( v17 != 1 || *(_DWORD *)(**(_QWORD **)v12 + 376LL) >= 0xA0000000 )
                {
LABEL_22:
                  v18 = **(_QWORD **)v12;
                  if ( *(_DWORD *)(v18 + 120) == 1 )
                  {
                    v9 = VIDMM_GLOBAL::PageInFaultedAllocation(this, v12, v22, v23, a5);
                    if ( v9 < 0 )
                    {
LABEL_37:
                      v8 = this;
                      goto LABEL_38;
                    }
                  }
                }
              }
              else if ( (*(_DWORD *)(**(_QWORD **)v12 + 76LL) & 0x40) == 0 )
              {
                goto LABEL_22;
              }
              if ( v16 == v6 )
              {
                v15 = v24;
                break;
              }
            }
          }
          v19 = *v6;
          if ( *v6 == v6 )
            goto LABEL_35;
          do
          {
            v12 = (struct VIDMM_ALLOC *)(v19 - 7);
            v19 = (_QWORD *)*v19;
            if ( v17 )
            {
              if ( v17 == 1 && *(_DWORD *)(**(_QWORD **)v12 + 376LL) < 0xA0000000 )
                continue;
            }
            else if ( (*(_DWORD *)(**(_QWORD **)v12 + 76LL) & 0x40) != 0 )
            {
              continue;
            }
            v9 = VIDMM_GLOBAL::PageInFaultedAllocation(this, v12, v22, v23, a5);
            if ( v9 < 0 )
              goto LABEL_37;
          }
          while ( v19 != v6 );
          v15 = v24;
LABEL_35:
          v24 = ++v15;
          if ( v15 >= 3 )
          {
LABEL_42:
            if ( v11 )
            {
              ExReleasePushLockSharedEx(v11 + 552, 0LL);
              KeLeaveCriticalRegion();
            }
            return (unsigned int)v9;
          }
        }
      }
      v13 = **(VIDMM_DEVICE ***)v12;
      if ( (*((_DWORD *)v13 + 19) & 0x100) != 0 )
      {
        v14 = VIDMM_GLOBAL::PageInOneAllocation((__int64)v8, v12, 0, a3, (char *)a4, a5);
      }
      else
      {
        if ( (*((_DWORD *)v12 + 7) & 3) == 0 )
        {
LABEL_13:
          if ( v9 < 0 )
          {
LABEL_38:
            if ( (*((_DWORD *)v12 + 7) & 3) == 2 )
              VIDMM_GLOBAL::FaultOneAllocation(v8, (VIDMM_DEVICE **)v12);
            else
              VIDMM_DEVICE::FaultCommitment(v13, v12);
            *((_QWORD *)a2 + 27) = *a5;
            goto LABEL_42;
          }
          *((_QWORD *)a2 + 27) = 0LL;
          goto LABEL_15;
        }
        v14 = VIDMM_GLOBAL::PageInFaultedAllocation(v8, *((struct VIDMM_ALLOC **)a2 + 27), a3, a4, a5);
      }
      v9 = v14;
      goto LABEL_13;
    }
  }
  if ( *((_QWORD *)a2 + 27) )
    *((_QWORD *)a2 + 27) = 0LL;
  return (unsigned int)v9;
}
