/*
 * XREFs of ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C009656C
 * Callers:
 *     DxgkLock @ 0x1C006E7C0 (DxgkLock.c)
 *     DxgkUnlock @ 0x1C006E9D0 (DxgkUnlock.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0071020 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C0072980 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00F8030 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0184580 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3D.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C00070E4 (-VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REG.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0008680 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00086BC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0009738 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000EC48 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C016A770 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock(DXGDEVICE *this, const struct _D3DKMT_UNLOCK *a2, __int64 a3, __int64 a4)
{
  char v4; // al
  int v7; // r15d
  __int64 v8; // rsi
  unsigned int *v9; // rdx
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  struct DXGALLOCATION *v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r12
  __int64 v22; // rax
  unsigned int v23; // r12d
  unsigned int v24; // r12d
  struct DXGALLOCATION *DisplayedPrimary; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  int v28; // [rsp+30h] [rbp-68h]
  struct DXGALLOCATION *v29; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v30[88]; // [rsp+40h] [rbp-58h] BYREF
  char v31; // [rsp+B0h] [rbp+18h]
  unsigned int v32; // [rsp+B8h] [rbp+20h]

  v31 = a3;
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
        v32 = *v9;
      }
      else
      {
        v10 = a2->phAllocations[v8];
        v32 = v10;
      }
      v28 = v10 & 0x3F;
      DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v29, v10);
      v14 = v29;
      if ( v29 )
      {
        if ( !*((_DWORD *)this + 76) )
        {
          v23 = *(_DWORD *)(*((_QWORD *)v29 + 6) + 4LL);
          if ( (v23 & 4) != 0 )
          {
            if ( v31 )
            {
              v24 = (v23 >> 6) & 0xF;
              COREACCESS::COREACCESS((COREACCESS *)v30, *((struct DXGADAPTER *const *)this + 357));
              COREACCESS::AcquireShared((COREACCESS *)v30);
              if ( *((_DWORD *)this + 94) == 1
                && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 357) + 2128LL), this, v24) )
              {
                DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v24);
                if ( DisplayedPrimary == v29 )
                  DXGDEVICE::UpdateDodFrontBuffer(this, v29);
              }
              COREACCESS::~COREACCESS((COREACCESS *)v30);
              v10 = v32;
              v14 = v29;
            }
          }
        }
        v15 = VIDMM_EXPORT::VidMmEndCPUAccess(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                *((struct _VIDMM_MULTI_ALLOC **)v14 + 3),
                v28);
        v20 = v15;
        if ( v15 < 0 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
          v26[3] = this;
          v26[4] = v10;
          v26[5] = v29;
          v26[6] = v20;
          WdLogEvent5_WdWarning(v26);
          if ( v7 >= 0 )
            v7 = v20;
        }
      }
      else
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, 0LL, v13);
        v27[3] = this;
        v27[4] = v10;
        v27[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v27);
        if ( v7 >= 0 )
          v7 = -1073741811;
      }
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v29);
      v8 = (unsigned int)(v8 + 1);
      v4 = v31;
    }
    return (unsigned int)v7;
  }
  else
  {
    v22 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v22 + 24) = this;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v22);
    return 3221225485LL;
  }
}
