/*
 * XREFs of ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0151348
 * Callers:
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C015D7E8 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C015EEB0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C0006F28 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0007318 (-VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00073A0 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C0021530 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C0091A8C (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00925B8 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C009EB18 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C015E2E8 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyCoreAllocations(DXGDEVICE *this, struct DXGRESOURCE *a2, struct DXGALLOCATION *a3)
{
  struct DXGALLOCATION *v3; // rsi
  DXGDEVICE *v5; // r15
  HANDLE *v6; // r12
  struct DXGALLOCATION *v7; // rdi
  __int64 v8; // rax
  struct DXGALLOCATION *v9; // r13
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
  struct _DXGKARG_CLOSEALLOCATION v26; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGALLOCATION *v27; // [rsp+40h] [rbp-C0h] BYREF
  char v28; // [rsp+48h] [rbp-B8h]
  struct _DXGKARG_DESTROYALLOCATION v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  char v31; // [rsp+78h] [rbp-88h]
  char v32; // [rsp+80h] [rbp-80h] BYREF

  v26.NumAllocations = 0;
  v3 = a3;
  v30 = 0LL;
  v31 = 0;
  v5 = this;
  if ( !a2
    || (DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v30, (struct DXGRESOURCE *)((char *)a2 + 80), 1),
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v30),
        (v6 = (HANDLE *)*((_QWORD *)a2 + 8)) == 0LL) )
  {
    v6 = (HANDLE *)&v32;
  }
  v7 = v3;
  if ( v3 )
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
          *(VIDMM_EXPORT **)(*((_QWORD *)v5 + 2) + 400LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v5 + 2) + 408LL),
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
  }
  if ( v26.NumAllocations )
  {
    v14 = (void *)*((_QWORD *)v5 + 48);
    v15 = (ADAPTER_RENDER *)*((_QWORD *)v5 + 2);
    v26.pOpenHandleList = v6;
    ADAPTER_RENDER::DdiCloseAllocation(v15, v14, &v26);
  }
  v16 = 0LL;
  v17 = 1;
  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
    {
      v18 = *(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL);
      if ( v18 )
      {
        if ( *(DXGDEVICE **)(v18 + 72) == v5 && (*(_DWORD *)(v18 + 64))-- == 1 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)&v27,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL) + 8LL));
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v27);
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 144LL) + 72LL) = 0LL;
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
            *(VIDMM_EXPORT **)(*((_QWORD *)v5 + 2) + 400LL),
            *((struct VIDMM_DEVICE **)v5 + 70),
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
          *(_QWORD *)(v24 + 24) = 628LL;
          WdLogEvent5_WdAssertion(v24);
        }
        if ( (*((_DWORD *)a2 + 1) & 1) == 0 )
        {
          v25 = WdLogNewEntry5_WdAssertion(this);
          *(_QWORD *)(v25 + 24) = 629LL;
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
      goto LABEL_48;
    }
    v29.pAllocationList = 0LL;
    if ( v16 )
      goto LABEL_47;
  }
LABEL_48:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v30);
}
