/*
 * XREFs of ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C015E3D8
 * Callers:
 *     DxgkPinDirectFlipResources @ 0x1C01615E0 (DxgkPinDirectFlipResources.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00072BC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0007484 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0093988 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C015DF14 (-InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C015E2E8 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C015E928 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C015F6F4 (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinDirectFlipResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        char a4)
{
  const struct DXGRESOURCEREFERENCE *v4; // r15
  __int64 v7; // rsi
  __int64 v8; // r13
  ADAPTER_RENDER *v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r12d
  BOOL v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  bool v28; // r14
  __int64 v29; // rsi
  struct DXGRESOURCE **v30; // r14
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  const struct DXGALLOCATION *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // r12d
  __int64 v44; // r14
  unsigned int v45; // esi
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 i; // rsi
  __int64 v49; // rcx
  __int64 v50; // rax
  UINT Height; // [rsp+40h] [rbp-29h]
  UINT Width; // [rsp+44h] [rbp-25h]
  _BYTE v54[16]; // [rsp+48h] [rbp-21h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v55; // [rsp+58h] [rbp-11h] BYREF
  bool v56; // [rsp+D0h] [rbp+67h]
  union _LARGE_INTEGER Interval; // [rsp+E0h] [rbp+77h] BYREF

  v4 = a3;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 56LL) + 128LL) - 48LL;
  v8 = (*(_DWORD *)(v7 + 4) >> 6) & 0xF;
  memset(&v55, 0, sizeof(v55));
  v9 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v55.hAllocation = *(HANDLE *)(v7 + 16);
  v11 = ADAPTER_RENDER::DdiDescribeAllocation(v9, &v55, v10);
  v16 = v11;
  if ( v11 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v17[3] = v16;
    v17[4] = this;
    v17[5] = *(_QWORD *)(v7 + 16);
    v17[6] = v7;
    WdLogEvent5_WdError(v17);
    return (unsigned int)v16;
  }
  Width = v55.Width;
  Height = v55.Height;
  Interval.LowPart = v55.Format;
  if ( (unsigned int)v8 >= *((_DWORD *)this + 716) )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    v16 = -1073741811LL;
    v18[3] = *(_QWORD *)v4;
LABEL_5:
    v18[4] = v16;
LABEL_6:
    WdLogEvent5_WdWarning(v18);
    return (unsigned int)v16;
  }
  if ( a4 && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 357) + 2128LL), this, v8) )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    LODWORD(v16) = -1073741790;
    v18[3] = -1073741790LL;
    goto LABEL_6;
  }
  v23 = 0;
  v24 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails);
  v27 = a2;
  v28 = v24;
  v29 = 0LL;
  v56 = v24;
  if ( a2 )
  {
    v30 = (struct DXGRESOURCE **)v4;
    while ( 2 )
    {
      v31 = DXGDEVICE::ValidateDirectFlipResource(
              this,
              *v30,
              v8,
              Width,
              Height,
              (enum _D3DDDIFORMAT)Interval.LowPart,
              *(_DWORD *)(*((_QWORD *)*v30 + 7) + 124LL));
      v16 = v31;
      if ( v31 < 0 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
        v18[3] = *((_QWORD *)v4 + v29);
        goto LABEL_5;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v54, (struct DXGRESOURCE *)((char *)*v30 + 80));
      if ( v56 )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v54);
      v36 = (const struct DXGALLOCATION *)*((_QWORD *)*v30 + 3);
      while ( v36 )
      {
        if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, v36) )
        {
          v42 = WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
          LODWORD(v16) = -1073741811;
          *(_QWORD *)(v42 + 24) = *((_QWORD *)v4 + v29);
          *(_QWORD *)(v42 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v42);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v54);
          return (unsigned int)v16;
        }
        v36 = *(const struct DXGALLOCATION **)(v37 + 64);
        ++v23;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v54);
      v27 = a2;
      v29 = (unsigned int)(v29 + 1);
      ++v30;
      if ( (unsigned int)v29 < a2 )
        continue;
      break;
    }
    v28 = v56;
  }
  v41 = v23 + *((_DWORD *)this + v8 + 314);
  if ( (unsigned int)v41 > 0x300 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v27, v25, v26);
    LODWORD(v16) = -1073741811;
    v18[3] = *((unsigned int *)this + v8 + 314);
    v18[4] = v23;
    v18[5] = 768LL;
    v18[6] = -1073741811LL;
    goto LABEL_6;
  }
  v43 = 0;
  if ( (_DWORD)v27 )
  {
    do
    {
      if ( (int)v16 < 0 )
        break;
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v54, (struct DXGFASTMUTEX *const)(*(_QWORD *)v4 + 80LL));
      if ( v28 )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v54);
      v44 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
LABEL_38:
      while ( v44 )
      {
        if ( (int)v16 < 0 )
          goto LABEL_40;
        v45 = 0;
        while ( 1 )
        {
          LODWORD(v16) = VIDMM_EXPORT::VidMmPinAllocation(
                           *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                           *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                           *(struct _VIDMM_MULTI_ALLOC **)(v44 + 24),
                           0LL,
                           0LL);
          if ( (int)v16 >= 0 )
            break;
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
          ++v45;
          LODWORD(v16) = -1071775488;
          if ( v45 >= 4 )
            goto LABEL_38;
        }
        if ( !DXGDEVICE::InsertDirectFlipAllocationToList((struct _KTHREAD **)this, v8, (struct DXGALLOCATION *)v44) )
        {
          v47 = WdLogNewEntry5_WdAssertion(v46);
          *(_QWORD *)(v47 + 24) = 5679LL;
          WdLogEvent5_WdAssertion(v47);
        }
        v44 = *(_QWORD *)(v44 + 64);
      }
      if ( (int)v16 >= 0 )
        goto LABEL_46;
LABEL_40:
      for ( i = *(_QWORD *)(*(_QWORD *)v4 + 24LL); i && i != v44; i = *(_QWORD *)(i + 64) )
      {
        if ( !DXGDEVICE::RemoveDirectFlipAllocationFromList(this, v8, (struct DXGALLOCATION *)i) )
        {
          v50 = WdLogNewEntry5_WdAssertion(v49);
          *(_QWORD *)(v50 + 24) = 5694LL;
          WdLogEvent5_WdAssertion(v50);
        }
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
          *(struct _VIDMM_MULTI_ALLOC **)(i + 24));
      }
LABEL_46:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v54);
      v28 = v56;
      ++v43;
      v4 = (const struct DXGRESOURCEREFERENCE *)((char *)v4 + 8);
    }
    while ( v43 < a2 );
  }
  return (unsigned int)v16;
}
