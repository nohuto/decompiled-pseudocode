/*
 * XREFs of ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C007AEE0
 * Callers:
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C005DDD0 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkUnlock @ 0x1C0077510 (DxgkUnlock.c)
 *     DxgkLock @ 0x1C0077AF0 (DxgkLock.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D0120 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A904 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3D.c)
 * Callees:
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0001E30 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001E60 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000682C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000B57C (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000F754 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C000FA7C (-VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REG.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0140A40 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock(DXGDEVICE *this, const struct _D3DKMT_UNLOCK *a2, __int64 a3, __int64 a4)
{
  char v4; // al
  int v7; // r13d
  __int64 v8; // rdi
  unsigned int *v9; // rdx
  unsigned int v10; // r14d
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  struct DXGALLOCATION *v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  struct DXGALLOCATION *v22; // rcx
  struct DXGGLOBAL *v23; // rax
  struct _KTHREAD *CurrentThread; // r14
  int CurrentProcessSessionId; // esi
  __int64 v26; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  struct _KTHREAD *v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // esi
  __int64 v37; // r8
  __int64 v38; // rsi
  __int64 *v39; // rax
  __int64 v40; // rsi
  unsigned int v42; // r12d
  __int64 v43; // rax
  unsigned int v44; // r12d
  struct DXGALLOCATION *DisplayedPrimary; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  struct DXGALLOCATION *v52; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v53[88]; // [rsp+40h] [rbp-58h] BYREF
  char v54; // [rsp+B0h] [rbp+18h]
  unsigned int v55; // [rsp+B8h] [rbp+20h]

  v54 = a3;
  v4 = a3;
  if ( a2->NumAllocations && a2->phAllocations )
  {
    v7 = 0;
    v8 = 0LL;
    while ( (unsigned int)v8 < a2->NumAllocations )
    {
      if ( v4 )
      {
        v9 = (unsigned int *)&a2->phAllocations[v8];
        if ( (unsigned __int64)v9 >= MmUserProbeAddress )
          v9 = (unsigned int *)MmUserProbeAddress;
        v10 = *v9;
        v55 = *v9;
      }
      else
      {
        v10 = a2->phAllocations[v8];
        v55 = v10;
      }
      v11 = v10 & 0x3F;
      DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v52, v10);
      v15 = v52;
      if ( v52 )
      {
        if ( !*((_DWORD *)this + 70) )
        {
          v42 = *(_DWORD *)(*((_QWORD *)v52 + 6) + 4LL);
          if ( (v42 & 4) != 0 )
          {
            if ( v54 )
            {
              v44 = (v42 >> 6) & 0xF;
              COREACCESS::COREACCESS((COREACCESS *)v53, *((struct DXGADAPTER *const *)this + 2338));
              COREACCESS::AcquireShared((COREACCESS *)v53);
              if ( *((_DWORD *)this + 88) == 1
                && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 2338) + 1976LL), this, v44) )
              {
                DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v44);
                if ( DisplayedPrimary == v52 )
                  DXGDEVICE::UpdateDodFrontBuffer(this, v52);
              }
              COREACCESS::~COREACCESS((COREACCESS *)v53);
              v10 = v55;
              v15 = v52;
            }
          }
        }
        v16 = VIDMM_EXPORT::VidMmEndCPUAccess(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                *((struct _VIDMM_MULTI_ALLOC **)v15 + 3),
                v11);
        v21 = v16;
        if ( v16 < 0 )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
          v46[3] = this;
          v46[4] = v10;
          v46[5] = v52;
          v46[6] = v21;
          WdLogEvent5_WdWarning(v46);
          if ( v7 >= 0 )
            v7 = v21;
        }
      }
      else
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, 0LL, v14);
        v47[3] = this;
        v47[4] = v10;
        v47[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v47);
        if ( v7 >= 0 )
          v7 = -1073741811;
      }
      v22 = v52;
      if ( v52 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v52 + 11);
      v23 = DXGGLOBAL::m_pGlobal;
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v48 = WdLogNewEntry5_WdAssertion(v22, v17, v19, v20);
        *(_QWORD *)(v48 + 24) = 1038LL;
        WdLogEvent5_WdAssertion(v48);
        v23 = DXGGLOBAL::m_pGlobal;
      }
      if ( *((_DWORD *)v23 + 195) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !CurrentThread )
        {
          v49 = WdLogNewEntry5_WdAssertion(v22, v17, v19, v20);
          *(_QWORD *)(v49 + 24) = 92LL;
          WdLogEvent5_WdAssertion(v49);
        }
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v22, v17, v19, v20);
        if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
        {
          v26 = 0LL;
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v26 = *ThreadWin32Thread;
          if ( v26 )
            v32 = *(_QWORD *)(v26 + 80);
          else
            v32 = 0LL;
          if ( v32 )
          {
            v33 = KeGetCurrentThread();
            if ( !v33 )
            {
              v50 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
              *(_QWORD *)(v50 + 24) = 92LL;
              WdLogEvent5_WdAssertion(v50);
            }
            v36 = PsGetCurrentProcessSessionId(v29, v28, v30, v31);
            if ( !v36 || (unsigned int)PsGetThreadSessionId(v33) != v36 )
              goto LABEL_42;
            v38 = 0LL;
            v39 = (__int64 *)PsGetThreadWin32Thread(v33);
            if ( v39 )
              v38 = *v39;
            if ( v38 )
              v40 = *(_QWORD *)(v38 + 80);
            else
LABEL_42:
              v40 = 0LL;
            if ( *(_DWORD *)(v40 + 136) )
            {
              v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34, v37);
              v51[3] = 275LL;
              v51[4] = 25LL;
              v51[5] = *(int *)(v40 + 136);
              v51[6] = 0LL;
              v51[7] = 0LL;
              WdLogEvent5_WdCriticalError(v51);
            }
          }
        }
      }
      v8 = (unsigned int)(v8 + 1);
      v4 = v54;
    }
    return (unsigned int)v7;
  }
  else
  {
    v43 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v43 + 24) = this;
    *(_QWORD *)(v43 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v43);
    return 3221225485LL;
  }
}
