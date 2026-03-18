/*
 * XREFs of ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0132F4C
 * Callers:
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C013A010 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C013B664 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C00017FC (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0004660 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ?VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0018E14 (-VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C0069020 (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C0069BA8 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C0075F98 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C013AC1C (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyCoreAllocations(DXGDEVICE *this, struct DXGRESOURCE *a2, struct DXGALLOCATION *a3)
{
  struct DXGALLOCATION *v3; // rsi
  DXGDEVICE *v5; // r13
  HANDLE *v6; // r15
  struct DXGALLOCATION *v7; // rdi
  __int64 v8; // rax
  struct DXGALLOCATION *v9; // r12
  unsigned int v10; // r14d
  PERESOURCE **v11; // rcx
  int v12; // r8d
  struct COREDEVICEACCESS *v13; // r9
  void *v14; // rdx
  ADAPTER_RENDER *v15; // rcx
  void *v16; // r14
  int v17; // edi
  __int64 v18; // rcx
  __int64 v20; // rax
  unsigned int v21; // r8d
  __int64 v22; // rax
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  struct _DXGKARG_CLOSEALLOCATION v26; // [rsp+30h] [rbp-A9h] BYREF
  struct DXGALLOCATION *v27; // [rsp+40h] [rbp-99h] BYREF
  char v28; // [rsp+48h] [rbp-91h]
  struct _DXGKARG_DESTROYALLOCATION v29; // [rsp+50h] [rbp-89h] BYREF
  char v30; // [rsp+70h] [rbp-69h] BYREF

  v26.NumAllocations = 0;
  v3 = a3;
  v5 = this;
  if ( !a2 || (v6 = (HANDLE *)*((_QWORD *)a2 + 8)) == 0LL )
    v6 = (HANDLE *)&v30;
  v7 = a3;
  if ( a3 )
  {
    do
    {
      v8 = *((_QWORD *)v7 + 6);
      v9 = (struct DXGALLOCATION *)*((_QWORD *)v7 + 8);
      if ( v8 )
      {
        v10 = *(_DWORD *)(v8 + 4);
        if ( (v10 & 0x2000) != 0 && *((_QWORD *)v7 + 3) && DXGDEVICE::IsDirectFlipAllocationPinned(v5, v7) )
          DXGDEVICE::UnpinAllDirectFlipAllocations(v11, (v10 >> 6) & 0xF, v12, v13);
      }
      a3 = (struct DXGALLOCATION *)*((_QWORD *)v7 + 3);
      if ( a3 )
      {
        VIDMM_EXPORT::VidMmCloseAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)v5 + 2) + 424LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v5 + 2) + 432LL),
          a3,
          (struct _VIDMM_LOCAL_ALLOC **)v7 + 10,
          0);
        *((_DWORD *)v7 + 18) |= 1u;
        *((_QWORD *)v7 + 3) = 0LL;
      }
      this = (DXGDEVICE *)*((_QWORD *)v7 + 4);
      if ( this )
      {
        v6[v26.NumAllocations++] = this;
        *((_QWORD *)v7 + 4) = 0LL;
      }
      v7 = v9;
    }
    while ( v9 );
    if ( v26.NumAllocations )
    {
      v14 = (void *)*((_QWORD *)v5 + 45);
      v15 = (ADAPTER_RENDER *)*((_QWORD *)v5 + 2);
      v26.pOpenHandleList = v6;
      ADAPTER_RENDER::DdiCloseAllocation(v15, v14, &v26);
    }
  }
  v16 = 0LL;
  v17 = 1;
  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
    {
      v18 = *(_QWORD *)(*((_QWORD *)a2 + 7) + 136LL);
      if ( v18 )
      {
        if ( *(DXGDEVICE **)(v18 + 96) == v5 && (*(_DWORD *)(v18 + 88))-- == 1 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)&v27,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 136LL) + 8LL));
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v27);
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 136LL) + 96LL) = 0LL;
          if ( v28 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v27);
        }
      }
      v20 = *((_QWORD *)a2 + 3);
      v21 = 0;
      while ( v20 )
      {
        v20 = *(_QWORD *)(v20 + 64);
        ++v21;
      }
      DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)a2 + 7), v6, v21);
      *((_QWORD *)a2 + 7) = 0LL;
      v17 = 0;
    }
    else
    {
      v16 = (void *)*((_QWORD *)a2 + 7);
    }
  }
  v29.NumAllocations = 0;
  if ( v3 )
  {
    do
    {
      v27 = (struct DXGALLOCATION *)*((_QWORD *)v3 + 8);
      v22 = *((_QWORD *)v3 + 6);
      if ( v22 )
      {
        if ( !v17 )
          goto LABEL_37;
        v23 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v22 + 8);
        if ( v23 )
        {
          VIDMM_EXPORT::VidMmDestroyAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)v5 + 2) + 424LL),
            *((struct VIDMM_DEVICE **)v5 + 67),
            0LL,
            v23);
          *(_QWORD *)(*((_QWORD *)v3 + 6) + 8LL) = 0LL;
        }
        this = *(DXGDEVICE **)(*((_QWORD *)v3 + 6) + 16LL);
        if ( this )
        {
          v6[v29.NumAllocations++] = this;
          *(_QWORD *)(*((_QWORD *)v3 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v17 )
      {
LABEL_37:
        if ( !a2 )
        {
          v24 = WdLogNewEntry5_WdAssertion(this);
          *(_QWORD *)(v24 + 24) = 614LL;
          WdLogEvent5_WdAssertion(v24);
        }
        if ( (*((_DWORD *)a2 + 1) & 1) == 0 )
        {
          v25 = WdLogNewEntry5_WdAssertion(this);
          *(_QWORD *)(v25 + 24) = 615LL;
          WdLogEvent5_WdAssertion(v25);
        }
      }
      v3 = v27;
    }
    while ( v27 );
  }
  if ( v17 )
  {
    v29.hResource = v16;
    v29.Flags.Value = a2 != 0LL;
    if ( v29.NumAllocations )
    {
      v29.pAllocationList = v6;
LABEL_47:
      ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)v5 + 2), &v29, (__int64)a3);
      return;
    }
    v29.pAllocationList = 0LL;
    if ( v16 )
      goto LABEL_47;
  }
}
