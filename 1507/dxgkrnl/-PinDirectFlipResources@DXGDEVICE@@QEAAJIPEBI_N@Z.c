/*
 * XREFs of ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBI_N@Z @ 0x1C013640C
 * Callers:
 *     DxgkPinDirectFlipResources @ 0x1C0138A10 (DxgkPinDirectFlipResources.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000682C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000B670 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C000B6CC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C000E60C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C0017BF4 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00773DC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0077400 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00B87DC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0136118 (-InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0136A8C (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C0137850 (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinDirectFlipResources(DXGDEVICE *this, unsigned int a2, const unsigned int *a3, char a4)
{
  unsigned int v4; // r12d
  char v5; // r15
  __int64 v8; // rdx
  __int64 Width; // r8
  unsigned __int64 Height; // r9
  __int64 v11; // rbx
  __int64 *v12; // r13
  const unsigned int *v13; // r12
  __int64 v14; // r15
  unsigned int v15; // esi
  unsigned int v16; // ecx
  __int64 v17; // r8
  int v18; // edx
  struct DXGRESOURCE *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned int v24; // r13d
  unsigned int v25; // r13d
  ADAPTER_RENDER *v26; // rcx
  int v27; // eax
  __int64 v28; // rbx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  enum _D3DDDIFORMAT Format; // r10d
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // r15d
  __int64 v37; // rsi
  struct DXGRESOURCE **v38; // r12
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rsi
  _QWORD *v45; // r12
  __int64 v46; // rdi
  unsigned int v47; // r15d
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // r12d
  struct DXGALLOCATION **v51; // rdi
  __int64 v52; // r15
  struct DXGALLOCATION *v53; // r13
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  D3DDDIFORMAT v61; // [rsp+44h] [rbp-BCh]
  unsigned int v62; // [rsp+44h] [rbp-BCh]
  struct _EX_RUNDOWN_REF *v64; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v65; // [rsp+58h] [rbp-A8h]
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v67; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v68[32]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v69[96]; // [rsp+1A0h] [rbp+A0h] BYREF

  v4 = a2;
  v5 = a4;
  `vector constructor iterator'(
    (char *)v68,
    8LL,
    31,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  v11 = 0LL;
  if ( v4 )
  {
    v12 = v68;
    v13 = a3;
    while ( 1 )
    {
      v14 = *((_QWORD *)this + 5);
      v15 = *v13;
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 192));
      v16 = (v15 >> 6) & 0xFFFFFF;
      if ( v16 < *(_DWORD *)(v14 + 232)
        && (v17 = *(_QWORD *)(v14 + 216),
            v18 = *(_DWORD *)(v17 + 16LL * v16 + 8),
            ((v15 >> 26) & 0x30) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x30))
        && (v18 & 0x1000) == 0
        && (v18 & 0xF) != 0
        && (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0xF) == 4 )
      {
        v19 = *(struct DXGRESOURCE **)(v17 + 16LL * v16);
      }
      else
      {
        v19 = 0LL;
      }
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v64, v19);
      ExReleasePushLockSharedEx(v14 + 192, 0LL);
      KeLeaveCriticalRegion();
      DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v68[v11], &v64);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v64);
      v8 = *v12;
      if ( !*v12 )
        break;
      v20 = 0LL;
      if ( (_DWORD)v11 )
      {
        while ( v68[v20] != v8 )
        {
          v20 = (unsigned int)(v20 + 1);
          if ( (unsigned int)v20 >= (unsigned int)v11 )
            goto LABEL_14;
        }
        break;
      }
LABEL_14:
      v11 = (unsigned int)(v11 + 1);
      ++v13;
      ++v12;
      if ( (unsigned int)v11 >= a2 )
      {
        v5 = a4;
        v4 = a2;
        goto LABEL_16;
      }
    }
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v8, Width, Height);
    v31 = a3[v11];
LABEL_21:
    v30[3] = v31;
    goto LABEL_65;
  }
LABEL_16:
  v21 = v68[0];
  if ( (*(_DWORD *)(v68[0] + 4LL) & 1) == 0 )
    goto LABEL_64;
  v22 = *(_QWORD *)(v68[0] + 56LL);
  if ( !v22 )
    goto LABEL_64;
  v23 = *(_QWORD *)(v22 + 120) - 48LL;
  v24 = *(_DWORD *)(v23 + 4);
  memset(&v67, 0, sizeof(v67));
  v25 = (v24 >> 6) & 0xF;
  LODWORD(v64) = v25;
  v26 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v67.hAllocation = *(HANDLE *)(v23 + 16);
  v27 = ADAPTER_RENDER::DdiDescribeAllocation(v26, &v67, Width);
  v28 = v27;
  if ( v27 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v29[3] = v28;
    v29[4] = this;
    v29[5] = *(_QWORD *)(v23 + 16);
    v29[6] = v23;
    WdLogEvent5_WdError(v29);
    goto LABEL_68;
  }
  Width = v67.Width;
  Height = v67.Height;
  Format = v67.Format;
  Interval.LowPart = v67.Width;
  LODWORD(v65) = v67.Height;
  v61 = v67.Format;
  if ( v25 >= *((_DWORD *)this + 4678) )
  {
LABEL_64:
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v8, Width, Height);
    v30[3] = *a3;
LABEL_65:
    v28 = -1073741811LL;
    goto LABEL_66;
  }
  if ( v5 )
  {
    if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 2338) + 1976LL), this, v25) )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v8, v34, v35);
      LODWORD(v28) = -1073741790;
      v30[3] = -1073741790LL;
LABEL_67:
      WdLogEvent5_WdWarning(v30);
      goto LABEL_68;
    }
    Width = Interval.LowPart;
    Height = (unsigned int)v65;
    Format = v61;
  }
  v36 = 0;
  v37 = 0LL;
  if ( v4 )
  {
    v38 = (struct DXGRESOURCE **)v68;
    while ( 2 )
    {
      v39 = DXGDEVICE::ValidateDirectFlipResource(
              this,
              *v38,
              v25,
              Width,
              Height,
              Format,
              *(_DWORD *)(*((_QWORD *)*v38 + 7) + 116LL));
      v28 = v39;
      if ( v39 < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v8, v41, Height);
        v30[3] = a3[v37];
LABEL_66:
        v30[4] = v28;
        goto LABEL_67;
      }
      Width = *((_QWORD *)*v38 + 3);
      while ( Width )
      {
        v42 = (*(_DWORD *)(*(_QWORD *)(Width + 48) + 4LL) >> 6) & 0xF;
        v8 = ((*(_DWORD *)(Width + 72) >> 1) & 0x7F) + 96 * v42;
        if ( *((_QWORD *)this + v8 + 602) == Width )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v8, Width, Height);
          v31 = a3[v37];
          goto LABEL_21;
        }
        Width = *(_QWORD *)(Width + 64);
        ++v36;
      }
      v37 = (unsigned int)(v37 + 1);
      ++v38;
      if ( (unsigned int)v37 < a2 )
      {
        LODWORD(Width) = Interval.LowPart;
        LODWORD(Height) = (_DWORD)v65;
        Format = v61;
        continue;
      }
      break;
    }
    v4 = a2;
  }
  v43 = v36 + *((_DWORD *)this + v25 + 4276);
  if ( (unsigned int)v43 > 0x60 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v8, Width, Height);
    LODWORD(v28) = -1073741811;
    v30[3] = *((unsigned int *)this + v25 + 4276);
    v30[4] = v36;
    v30[5] = 96LL;
    v30[6] = -1073741811LL;
    goto LABEL_67;
  }
  v44 = 0LL;
  v62 = 0;
  if ( v4 )
  {
    v45 = v68;
    v65 = v68;
    do
    {
      if ( (int)v28 < 0 )
        break;
      v46 = *(_QWORD *)(*v45 + 24LL);
LABEL_54:
      while ( v46 )
      {
        if ( (int)v28 < 0 )
          goto LABEL_56;
        v47 = 0;
        if ( (unsigned int)v44 >= 0x60 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v43, v8, Width, Height);
          *(_QWORD *)(v48 + 24) = 5263LL;
          WdLogEvent5_WdAssertion(v48);
        }
        while ( 1 )
        {
          LODWORD(v28) = VIDMM_EXPORT::VidMmPinAllocation(
                           *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                           *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                           *(struct _VIDMM_MULTI_ALLOC **)(v46 + 24),
                           (unsigned int *)Height);
          if ( (int)v28 >= 0 )
            break;
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
          ++v47;
          LODWORD(v28) = -1071775488;
          if ( v47 >= 4 )
            goto LABEL_54;
        }
        if ( !DXGDEVICE::InsertDirectFlipAllocationToList((struct _KTHREAD **)this, v25, (struct DXGALLOCATION *)v46) )
        {
          v49 = WdLogNewEntry5_WdAssertion(v43, v8, Width, Height);
          *(_QWORD *)(v49 + 24) = 5291LL;
          WdLogEvent5_WdAssertion(v49);
        }
        v69[v44] = v46;
        v44 = (unsigned int)(v44 + 1);
        v46 = *(_QWORD *)(v46 + 64);
      }
      if ( (int)v28 >= 0 )
        goto LABEL_62;
LABEL_56:
      if ( (_DWORD)v44 )
      {
        v50 = (unsigned int)v64;
        v51 = (struct DXGALLOCATION **)v69;
        v52 = (unsigned int)v44;
        do
        {
          v53 = *v51;
          if ( !DXGDEVICE::RemoveDirectFlipAllocationFromList(this, v50, *v51) )
          {
            v58 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
            *(_QWORD *)(v58 + 24) = 5306LL;
            WdLogEvent5_WdAssertion(v58);
          }
          VIDMM_EXPORT::VidMmUnpinAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
            *((struct _VIDMM_MULTI_ALLOC **)v53 + 3));
          ++v51;
          --v52;
        }
        while ( v52 );
        v45 = v65;
        v25 = (unsigned int)v64;
      }
LABEL_62:
      v65 = ++v45;
      ++v62;
    }
    while ( v62 < a2 );
  }
LABEL_68:
  `vector destructor iterator'(
    (char *)v68,
    8LL,
    31,
    (void (__fastcall *)(char *))DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE);
  return (unsigned int)v28;
}
