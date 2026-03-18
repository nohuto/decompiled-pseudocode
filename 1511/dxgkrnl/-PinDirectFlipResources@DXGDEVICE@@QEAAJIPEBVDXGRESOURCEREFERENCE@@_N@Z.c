/*
 * XREFs of ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C013AD0C
 * Callers:
 *     DxgkPinDirectFlipResources @ 0x1C013D310 (DxgkPinDirectFlipResources.c)
 * Callees:
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0004604 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C000472C (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007D6C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0069EE4 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C013A848 (-InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C013AC1C (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C013B158 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C013BDFC (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinDirectFlipResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        char a4)
{
  const struct DXGRESOURCEREFERENCE *v5; // r14
  __int64 v8; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // r12d
  ADAPTER_RENDER *v11; // rcx
  int v12; // eax
  const struct DXGALLOCATION *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 Width; // r8
  unsigned int *Height; // r9
  enum _D3DDDIFORMAT Format; // r10d
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // r15d
  __int64 v25; // rsi
  struct DXGRESOURCE **v26; // rbp
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned int i; // r15d
  __int64 v34; // rbp
  unsigned int v35; // esi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 j; // rsi
  __int64 v39; // rcx
  __int64 v40; // rax
  D3DDDIFORMAT v42; // [rsp+40h] [rbp-78h]
  struct _DXGKARG_DESCRIBEALLOCATION v43; // [rsp+48h] [rbp-70h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+C0h] [rbp+8h] BYREF
  UINT v45; // [rsp+D0h] [rbp+18h]

  v5 = a3;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 56LL) + 120LL) - 48LL;
  v9 = *(_DWORD *)(v8 + 4);
  memset(&v43, 0, sizeof(v43));
  v10 = (v9 >> 6) & 0xF;
  v11 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v43.hAllocation = *(HANDLE *)(v8 + 16);
  v12 = ADAPTER_RENDER::DdiDescribeAllocation(v11, &v43, (__int64)a3);
  v15 = v12;
  if ( v12 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v16[3] = v15;
    v16[4] = this;
    v16[5] = *(_QWORD *)(v8 + 16);
    v16[6] = v8;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v15;
  }
  Width = v43.Width;
  Height = (unsigned int *)v43.Height;
  Format = v43.Format;
  Interval.LowPart = v43.Width;
  v45 = v43.Height;
  v42 = v43.Format;
  if ( v10 >= *((_DWORD *)this + 710) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v43.Width, v43.Height);
    v20[3] = *(_QWORD *)v5;
LABEL_5:
    v15 = -1073741811LL;
LABEL_6:
    v20[4] = v15;
LABEL_7:
    WdLogEvent5_WdWarning(v20);
    return (unsigned int)v15;
  }
  if ( a4 )
  {
    if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 354) + 1984LL), this, v10) )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v13, v22, v23);
      LODWORD(v15) = -1073741790;
      v20[3] = -1073741790LL;
      goto LABEL_7;
    }
    Width = Interval.LowPart;
    Height = (unsigned int *)v45;
    Format = v42;
  }
  v24 = 0;
  v25 = 0LL;
  if ( a2 )
  {
    v26 = (struct DXGRESOURCE **)v5;
    while ( 1 )
    {
      v27 = DXGDEVICE::ValidateDirectFlipResource(
              this,
              *v26,
              v10,
              Width,
              (unsigned int)Height,
              Format,
              *(_DWORD *)(*((_QWORD *)*v26 + 7) + 116LL));
      v15 = v27;
      if ( v27 < 0 )
        break;
      v13 = (const struct DXGALLOCATION *)*((_QWORD *)*v26 + 3);
      while ( v13 )
      {
        if ( DXGDEVICE::IsDirectFlipAllocationPinned(this, v13) )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, Width, Height);
          v20[3] = *((_QWORD *)v5 + v25);
          goto LABEL_5;
        }
        v13 = *(const struct DXGALLOCATION **)(v30 + 64);
        ++v24;
      }
      v25 = (unsigned int)(v25 + 1);
      ++v26;
      if ( (unsigned int)v25 >= a2 )
        goto LABEL_23;
      LODWORD(Width) = Interval.LowPart;
      LODWORD(Height) = v45;
      Format = v42;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, Width, Height);
    v20[3] = *((_QWORD *)v5 + v25);
    goto LABEL_6;
  }
LABEL_23:
  v32 = v24 + *((_DWORD *)this + v10 + 308);
  if ( (unsigned int)v32 > 0x300 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v13, Width, Height);
    LODWORD(v15) = -1073741811;
    v20[3] = *((unsigned int *)this + v10 + 308);
    v20[4] = v24;
    v20[5] = 768LL;
    v20[6] = -1073741811LL;
    goto LABEL_7;
  }
  for ( i = 0; i < a2; v5 = (const struct DXGRESOURCEREFERENCE *)((char *)v5 + 8) )
  {
    if ( (int)v15 < 0 )
      break;
    v34 = *(_QWORD *)(*(_QWORD *)v5 + 24LL);
LABEL_36:
    while ( v34 )
    {
      if ( (int)v15 < 0 )
        goto LABEL_38;
      v35 = 0;
      while ( 1 )
      {
        LODWORD(v15) = VIDMM_EXPORT::VidMmPinAllocation(
                         *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
                         *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
                         *(struct _VIDMM_MULTI_ALLOC **)(v34 + 24),
                         Height);
        if ( (int)v15 >= 0 )
          break;
        Interval.QuadPart = -150LL;
        KeDelayExecutionThread(0, 0, &Interval);
        ++v35;
        LODWORD(v15) = -1071775488;
        if ( v35 >= 4 )
          goto LABEL_36;
      }
      if ( !DXGDEVICE::InsertDirectFlipAllocationToList((struct _KTHREAD **)this, v10, (struct DXGALLOCATION *)v34) )
      {
        v37 = WdLogNewEntry5_WdAssertion(v36);
        *(_QWORD *)(v37 + 24) = 5336LL;
        WdLogEvent5_WdAssertion(v37);
      }
      v34 = *(_QWORD *)(v34 + 64);
    }
    if ( (int)v15 >= 0 )
      goto LABEL_44;
LABEL_38:
    for ( j = *(_QWORD *)(*(_QWORD *)v5 + 24LL); j && j != v34; j = *(_QWORD *)(j + 64) )
    {
      if ( !DXGDEVICE::RemoveDirectFlipAllocationFromList(this, v10, (struct DXGALLOCATION *)j) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v39);
        *(_QWORD *)(v40 + 24) = 5351LL;
        WdLogEvent5_WdAssertion(v40);
      }
      VIDMM_EXPORT::VidMmUnpinAllocation(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
        *(struct _VIDMM_MULTI_ALLOC **)(j + 24));
    }
LABEL_44:
    ++i;
  }
  return (unsigned int)v15;
}
