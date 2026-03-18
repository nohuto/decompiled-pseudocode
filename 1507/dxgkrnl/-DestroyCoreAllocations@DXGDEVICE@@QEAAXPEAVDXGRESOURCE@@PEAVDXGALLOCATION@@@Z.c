/*
 * XREFs of ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C012CA28
 * Callers:
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C01358F0 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0136F50 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0005128 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C00053F8 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00173E4 (-VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C001C498 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x1C009265C (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z @ 0x1C00932EC (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B7DBC (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyCoreAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        struct DXGALLOCATION *a3,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a4)
{
  struct DXGALLOCATION *v4; // rsi
  DXGDEVICE *v6; // r15
  HANDLE *v7; // r14
  struct DXGALLOCATION *v8; // rdi
  __int64 v9; // rax
  struct DXGALLOCATION *v10; // r12
  unsigned __int64 v11; // rax
  void *v12; // rdx
  ADAPTER_RENDER *v13; // rcx
  void *v14; // r12
  int v15; // edi
  __int64 v16; // rcx
  __int64 v18; // rax
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  struct _DXGKARG_CLOSEALLOCATION v23; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGALLOCATION *v24; // [rsp+40h] [rbp-C0h] BYREF
  char v25; // [rsp+48h] [rbp-B8h]
  struct _DXGKARG_DESTROYALLOCATION v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h] BYREF
  char v28; // [rsp+78h] [rbp-88h]
  char v29; // [rsp+80h] [rbp-80h] BYREF

  v4 = a3;
  v23.NumAllocations = 0;
  v27 = 0LL;
  v6 = this;
  v28 = 0;
  if ( !a2
    || (DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v27, (struct DXGRESOURCE *)((char *)a2 + 80), 1),
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v27),
        (v7 = (HANDLE *)*((_QWORD *)a2 + 8)) == 0LL) )
  {
    v7 = (HANDLE *)&v29;
  }
  v8 = v4;
  if ( v4 )
  {
    do
    {
      v9 = *((_QWORD *)v8 + 6);
      v10 = (struct DXGALLOCATION *)*((_QWORD *)v8 + 8);
      if ( v9 )
      {
        v11 = *(unsigned int *)(v9 + 4);
        if ( (v11 & 0x2000) != 0
          && *((_QWORD *)v8 + 3)
          && *((struct DXGALLOCATION **)v6 + 96 * ((v11 >> 6) & 0xF) + ((*((_DWORD *)v8 + 18) >> 1) & 0x7F) + 602) == v8 )
        {
          DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)v6, ((unsigned int)v11 >> 6) & 0xF, 1LL, 0LL);
        }
      }
      a3 = (struct DXGALLOCATION *)*((_QWORD *)v8 + 3);
      if ( a3 )
      {
        VIDMM_EXPORT::VidMmCloseAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)v6 + 2) + 400LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v6 + 2) + 408LL),
          a3,
          (struct _VIDMM_LOCAL_ALLOC **)v8 + 10,
          0);
        *((_DWORD *)v8 + 18) |= 1u;
        *((_QWORD *)v8 + 3) = 0LL;
      }
      this = (DXGDEVICE *)*((_QWORD *)v8 + 4);
      if ( this )
      {
        v7[v23.NumAllocations++] = this;
        *((_QWORD *)v8 + 4) = 0LL;
      }
      v8 = v10;
    }
    while ( v10 );
  }
  if ( v23.NumAllocations )
  {
    v12 = (void *)*((_QWORD *)v6 + 45);
    v13 = (ADAPTER_RENDER *)*((_QWORD *)v6 + 2);
    v23.pOpenHandleList = v7;
    ADAPTER_RENDER::DdiCloseAllocation(v13, v12, &v23);
  }
  v14 = 0LL;
  v15 = 1;
  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
    {
      v16 = *(_QWORD *)(*((_QWORD *)a2 + 7) + 136LL);
      if ( v16 )
      {
        if ( *(DXGDEVICE **)(v16 + 72) == v6 && (*(_DWORD *)(v16 + 64))-- == 1 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)&v24,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 136LL) + 8LL));
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v24);
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 7) + 136LL) + 72LL) = 0LL;
          if ( v25 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v24);
        }
      }
      v18 = *((_QWORD *)a2 + 3);
      v19 = 0;
      while ( v18 )
      {
        v18 = *(_QWORD *)(v18 + 64);
        ++v19;
      }
      DXGSHAREDRESOURCE::ReleaseReference(*((DXGSHAREDRESOURCE **)a2 + 7), v7, v19);
      *((_QWORD *)a2 + 7) = 0LL;
      v15 = 0;
    }
    else
    {
      v14 = (void *)*((_QWORD *)a2 + 7);
    }
  }
  v26.NumAllocations = 0;
  if ( v4 )
  {
    do
    {
      v24 = (struct DXGALLOCATION *)*((_QWORD *)v4 + 8);
      v20 = *((_QWORD *)v4 + 6);
      if ( v20 )
      {
        if ( !v15 )
          goto LABEL_37;
        a4 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v20 + 8);
        if ( a4 )
        {
          VIDMM_EXPORT::VidMmDestroyAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)v6 + 2) + 400LL),
            *((struct VIDMM_DEVICE **)v6 + 67),
            0LL,
            a4);
          *(_QWORD *)(*((_QWORD *)v4 + 6) + 8LL) = 0LL;
        }
        this = *(DXGDEVICE **)(*((_QWORD *)v4 + 6) + 16LL);
        if ( this )
        {
          v7[v26.NumAllocations++] = this;
          *(_QWORD *)(*((_QWORD *)v4 + 6) + 16LL) = 0LL;
        }
      }
      else if ( !v15 )
      {
LABEL_37:
        if ( !a2 )
        {
          v21 = WdLogNewEntry5_WdAssertion(this, 1LL, a3, a4);
          *(_QWORD *)(v21 + 24) = 624LL;
          WdLogEvent5_WdAssertion(v21);
        }
        if ( (*((_DWORD *)a2 + 1) & 1) == 0 )
        {
          v22 = WdLogNewEntry5_WdAssertion(this, 1LL, a3, a4);
          *(_QWORD *)(v22 + 24) = 625LL;
          WdLogEvent5_WdAssertion(v22);
        }
      }
      v4 = v24;
    }
    while ( v24 );
  }
  if ( v15 )
  {
    v26.hResource = v14;
    v26.Flags.Value = a2 != 0LL;
    if ( v26.NumAllocations )
    {
      v26.pAllocationList = v7;
LABEL_47:
      ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)v6 + 2), &v26, (__int64)a3);
      goto LABEL_48;
    }
    v26.pAllocationList = 0LL;
    if ( v14 )
      goto LABEL_47;
  }
LABEL_48:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v27);
}
