/*
 * XREFs of ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C015F314
 * Callers:
 *     DxgkUnpinDirectFlipResources @ 0x1C0161E80 (DxgkUnpinDirectFlipResources.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00A5A60 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01519D0 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C015E2E8 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015F104 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipResource(
        DXGDEVICE *this,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rbx
  __int64 v8; // r14
  unsigned int v9; // r10d
  __int64 v10; // r8
  int v11; // edx
  struct DXGRESOURCE *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _EX_RUNDOWN_REF *v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  DXGDEVICE *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DXGALLOCATION *i; // rbx
  unsigned int v27; // edi
  unsigned int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  struct DXGALLOCATION *v38; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v39[24]; // [rsp+38h] [rbp-18h] BYREF
  struct _EX_RUNDOWN_REF *v40; // [rsp+80h] [rbp+30h] BYREF

  v4 = *((_QWORD *)this + 5);
  v40 = 0LL;
  v8 = a2;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 184));
  v9 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v9 < *(_DWORD *)(v4 + 224)
    && (v10 = *(_QWORD *)(v4 + 208),
        v11 = *(_DWORD *)(v10 + 16LL * v9 + 8),
        (((unsigned int)v8 >> 26) & 0x30) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x30))
    && (v11 & 0x1000) == 0
    && (v11 & 0xF) != 0
    && (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0xF) == 4 )
  {
    v12 = *(struct DXGRESOURCE **)(v10 + 16LL * v9);
  }
  else
  {
    v12 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v38, v12);
  ExReleasePushLockSharedEx(v4 + 184, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign(&v40, (struct _EX_RUNDOWN_REF **)&v38);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v38);
  v17 = v40;
  if ( v40 )
  {
    v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(v40[1].Count + 16) + 16LL) == v20 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v39, (struct DXGFASTMUTEX *const)&v40[10]);
      if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v39);
      for ( i = (struct DXGALLOCATION *)v17[3].Count; ; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
      {
        v38 = i;
        if ( !i )
          break;
        v27 = *(_DWORD *)(*((_QWORD *)i + 6) + 4LL);
        if ( (v27 & 0x2000) == 0 )
        {
          v36 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
          *(_QWORD *)(v36 + 24) = v8;
          *(_QWORD *)(v36 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v36);
          LODWORD(v34) = -1073741811;
          goto LABEL_26;
        }
        v28 = (v27 >> 6) & 0xF;
        if ( a3 && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 357) + 2128LL), this, v28) )
        {
          v35 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
          LODWORD(v34) = -1073741790;
          *(_QWORD *)(v35 + 24) = -1073741790LL;
          goto LABEL_24;
        }
        if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, i) )
        {
          v33 = DXGDEVICE::UnpinDirectFlipAllocation(v23, v28, v24, &v38, a4);
          v34 = v33;
          if ( v33 < 0 )
          {
            v35 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
            *(_QWORD *)(v35 + 24) = i;
            *(_QWORD *)(v35 + 32) = v34;
LABEL_24:
            WdLogEvent5_WdWarning(v35);
LABEL_26:
            v19 = v34;
            goto LABEL_28;
          }
        }
      }
      v19 = 0;
LABEL_28:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v39);
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v21[4] = v17;
      v19 = -1073741811;
      v21[5] = -1073741811LL;
      v21[3] = this;
      WdLogEvent5_WdError(v21);
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    v19 = -1073741811;
    *(_QWORD *)(v18 + 24) = v8;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v40);
  return v19;
}
