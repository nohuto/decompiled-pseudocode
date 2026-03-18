/*
 * XREFs of ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0096238
 * Callers:
 *     DxgkLock @ 0x1C006E7C0 (DxgkLock.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0071020 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C0072A80 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00F8030 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0184580 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3D.c)
 * Callees:
 *     ?VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C0007044 (-VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0007554 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000757C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?UpdateHandleInstance@DXGPROCESS@@QEAAIII@Z @ 0x1C0009580 (-UpdateHandleInstance@DXGPROCESS@@QEAAIII@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::Lock(DXGDEVICE *this, struct _D3DKMT_LOCK *a2, struct COREDEVICEACCESS *a3, __int64 a4)
{
  int v7; // r12d
  _BOOL8 v8; // rcx
  struct _D3DDDICB_LOCKFLAGS::$ED792A498079A6342A08F53AEABA2A3A::$E5338CF7B743D9B09B49C7CF5F2B6ABC Value; // ecx
  unsigned int v10; // ebx
  __int64 v11; // rsi
  D3DKMT_HANDLE hAllocation; // edi
  unsigned int v13; // ecx
  __int64 v14; // r8
  int v15; // edx
  struct DXGALLOCATION *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _VIDMM_MULTI_ALLOC *v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rdi
  struct _KTHREAD **Current; // rax
  int v30; // eax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 NumPages; // rcx
  struct _VIDMM_REGION *v34; // [rsp+30h] [rbp-48h]
  _QWORD *v35; // [rsp+80h] [rbp+8h] BYREF
  char v36; // [rsp+88h] [rbp+10h] BYREF

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  v7 = 1;
  while ( (a2->Flags.Value & 0xFFFFF800) == 0 )
  {
    v8 = a2->NumPages == 0;
    if ( v8 != (a2->pPages == 0LL) )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, a2, a3, a4);
      v32[3] = this;
      NumPages = a2->NumPages;
      goto LABEL_50;
    }
    Value = (struct _D3DDDICB_LOCKFLAGS::$ED792A498079A6342A08F53AEABA2A3A::$E5338CF7B743D9B09B49C7CF5F2B6ABC)a2->Flags.Value;
    v10 = ((unsigned __int8)~*(_BYTE *)&a2->Flags.0 >> 2) & 1;
    if ( (*(_BYTE *)&Value & 8) != 0 )
      v10 |= 2u;
    if ( (*(_BYTE *)&Value & 0x20) != 0 )
      v10 |= 4u;
    if ( (*(_BYTE *)&Value & 0x40) != 0 )
      v10 |= 8u;
    if ( *(_BYTE *)&Value < 0 )
      v10 |= 0x10u;
    if ( (*(_WORD *)&Value & 0x100) != 0 )
      v10 |= 0x20u;
    if ( (*(_WORD *)&Value & 0x200) != 0 )
      v10 |= 0x48u;
    if ( (*(_WORD *)&Value & 0x400) != 0 )
      v10 |= 0x80u;
    if ( (*(_BYTE *)&Value & 1) != 0 )
      v10 |= 0x200u;
    v11 = *((_QWORD *)this + 5);
    hAllocation = a2->hAllocation;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 184));
    v13 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v13 < *(_DWORD *)(v11 + 224)
      && (v14 = *(_QWORD *)(v11 + 208),
          v15 = *(_DWORD *)(v14 + 16LL * v13 + 8),
          ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x30))
      && (v15 & 0x1000) == 0
      && (v15 & 0xF) != 0
      && (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0xF) == 5 )
    {
      v16 = *(struct DXGALLOCATION **)(v14 + 16LL * v13);
    }
    else
    {
      v16 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35, v16);
    ExReleasePushLockSharedEx(v11 + 184, 0LL);
    KeLeaveCriticalRegion();
    if ( !v35 )
    {
LABEL_34:
      v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      LODWORD(v23) = -1073741811;
      v22[3] = this;
      v22[4] = a2->hAllocation;
      v22[5] = -1073741811LL;
LABEL_35:
      WdLogEvent5_WdWarning(v22);
LABEL_39:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35);
      return (unsigned int)v23;
    }
    v19 = (struct _VIDMM_MULTI_ALLOC *)v35[3];
    if ( !v19 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, 0LL, v20);
      LODWORD(v23) = -1073741811;
      v22[3] = this;
      v22[4] = a2->hAllocation;
      v22[5] = v35;
      v22[6] = -1073741811LL;
      goto LABEL_35;
    }
    v17 = *(unsigned int *)(v35[6] + 4LL);
    if ( (v17 & 2) == 0 )
    {
      v21 = v35[5];
      if ( v21 )
      {
        if ( (*(_DWORD *)(v21 + 4) & 3) == 1 )
        {
          v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          if ( (*(_DWORD *)(v18 + 300) & 0x10) == 0 )
            goto LABEL_34;
        }
      }
    }
    if ( v7 == 1 )
      v10 |= 0x100u;
    LODWORD(v23) = VIDMM_EXPORT::VidMmBeginCPUAccess(
                     *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                     *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                     v19,
                     a2->hAllocation & 0x3F,
                     v10,
                     a2->PrivateDriverData,
                     v34,
                     &a2->pData);
    v24 = *((_QWORD *)this + 2);
    v25 = *(_QWORD *)(v24 + 408);
    v26 = *(_QWORD *)(v24 + 400);
    v27 = v35[3];
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v36, Current);
    LODWORD(v26) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v26 + 8) + 272LL))(v25, v27);
    DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v36);
    a2->hAllocation = DXGPROCESS::UpdateHandleInstance(*((DXGPROCESS **)this + 5), a2->hAllocation, v26);
    if ( (_DWORD)v23 != -1071775484 )
      goto LABEL_39;
    COREDEVICEACCESS::Release(a3);
    LODWORD(v23) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL)
                                                                                          + 8LL)
                                                                              + 608LL))(
                     *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
                     v35[3],
                     a2->hAllocation & 0x3F,
                     2LL);
    if ( (int)v23 < 0 )
      goto LABEL_39;
    v30 = COREDEVICEACCESS::AcquireShared(a3);
    v23 = v30;
    if ( v30 < 0 )
    {
      v31 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v31 + 24) = v23;
      WdLogEvent5_WdEvent(v31);
      goto LABEL_39;
    }
    a2->Flags.Value &= ~0x80u;
    if ( v7 != 1 )
      goto LABEL_39;
    v7 = 2;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35);
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, a4);
  v32[3] = this;
  NumPages = a2->Flags.Value;
LABEL_50:
  v32[4] = NumPages;
  LODWORD(v23) = -1073741811;
  v32[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v32);
  return (unsigned int)v23;
}
