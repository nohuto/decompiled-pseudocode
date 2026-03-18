/*
 * XREFs of ??1DXGCONTEXT@@QEAA@XZ @ 0x1C0073AE8
 * Callers:
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C0017214 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0081AC0 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0005358 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z @ 0x1C000975C (--3-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0081B5C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00848F0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ??1DXGPRESENT@@QEAA@XZ @ 0x1C00BB800 (--1DXGPRESENT@@QEAA@XZ.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C012C9AC (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGCONTEXT::~DXGCONTEXT(DXGCONTEXT *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  void *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rdi
  unsigned int v19; // ebp
  _QWORD *v20; // rbx
  DXGDEVICE *v21; // rbp
  void *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  struct DXGPROCESS *Current; // r14
  __int64 v32; // rax
  unsigned int v33; // r9d
  unsigned int v34; // edx
  __int64 v35; // r10
  int v36; // r8d
  struct DXGRESOURCE *v37; // rbx
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  struct _KTHREAD **v44; // rax
  __int64 v45; // rax
  _BYTE v46[32]; // [rsp+30h] [rbp-38h] BYREF
  char v47; // [rsp+70h] [rbp+8h] BYREF

  v5 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2, a3, a4);
  v5[3] = this;
  v5[4] = *((unsigned int *)this + 6);
  v5[5] = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  WdLogEvent5_WdEvent(v5);
  v6 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v6 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v6 + 80)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v23 + 24) = 491LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v24 + 24) = 492LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !*((_BYTE *)this + 348) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v25 + 24) = 498LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v15 = *((_QWORD *)this + 17);
  if ( v15 )
  {
    v21 = (DXGDEVICE *)*((_QWORD *)this + 2);
    if ( !v21 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v26 + 24) = 6980LL;
      WdLogEvent5_WdAssertion(v26);
    }
    if ( *(_DWORD *)(v15 + 420) )
    {
      Current = DXGPROCESS::GetCurrent();
      if ( !Current )
      {
        v32 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
        *(_QWORD *)(v32 + 24) = 6990LL;
        WdLogEvent5_WdAssertion(v32);
      }
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v46, Current);
      v33 = *(_DWORD *)(v15 + 420);
      v34 = (v33 >> 6) & 0xFFFFFF;
      if ( v34 < *((_DWORD *)Current + 58)
        && (v35 = *((_QWORD *)Current + 27),
            v36 = *(_DWORD *)(v35 + 16LL * v34 + 8),
            ((v33 >> 26) & 0x30) == (*(_BYTE *)(v35 + 16LL * v34 + 8) & 0x30))
        && (v36 & 0x1000) == 0
        && (v36 & 0xF) != 0
        && (*(_BYTE *)(v35 + 16LL * v34 + 8) & 0xF) == 4 )
      {
        v37 = *(struct DXGRESOURCE **)(v35 + 16LL * v34);
        if ( v37 )
        {
          v38 = (v33 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v38 < *((_DWORD *)Current + 58) )
          {
            v39 = *(_DWORD *)(v35 + 16 * v38 + 8);
            if ( ((v33 >> 26) & 0x30) == (*(_BYTE *)(v35 + 16 * v38 + 8) & 0x30)
              && (v39 & 0x1000) == 0
              && (v39 & 0xF) != 0 )
            {
              *(_DWORD *)(v35 + 16LL * ((v33 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
          }
        }
      }
      else
      {
        v37 = 0LL;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
      if ( v37 )
      {
        if ( *((_DWORD *)v21 + 88) == 4 )
          DXGDEVICE::DestroyClientResource(v21, v37);
        else
          DXGDEVICE::DestroyAllocationInternal(v21, 0, 0LL, v37, 0LL, DXGDEVICE::DestroyFlagsDefault);
      }
      else
      {
        v41 = WdLogNewEntry5_WdError(v40);
        *(_QWORD *)(v41 + 24) = v21;
        *(_QWORD *)(v41 + 32) = *(unsigned int *)(v15 + 420);
        WdLogEvent5_WdError(v41);
      }
      *(_QWORD *)(v15 + 416) = 0LL;
    }
    v22 = (void *)*((_QWORD *)this + 17);
    if ( v22 )
    {
      DXGPRESENT::~DXGPRESENT(*((DXGPRESENT **)this + 17));
      DXGQUOTAALLOCATOR<1,1265072196>::operator delete(v22);
    }
    *((_QWORD *)this + 17) = 0LL;
  }
  v16 = (void *)*((_QWORD *)this + 15);
  if ( v16 )
  {
    MmUnsecureVirtualMemory(v16);
    *((_QWORD *)this + 15) = 0LL;
  }
  if ( *((_QWORD *)this + 14) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 14, (PSIZE_T)this + 13, 0x8000u);
    *((_QWORD *)this + 14) = 0LL;
    *((_DWORD *)this + 24) = 0;
    *((_QWORD *)this + 13) = 0LL;
  }
  v17 = (void *)*((_QWORD *)this + 11);
  if ( v17 )
  {
    MmUnsecureVirtualMemory(v17);
    *((_QWORD *)this + 11) = 0LL;
  }
  if ( *((_QWORD *)this + 10) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 10, (PSIZE_T)this + 9, 0x8000u);
    *((_QWORD *)this + 10) = 0LL;
    *((_DWORD *)this + 16) = 0;
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( *((_QWORD *)this + 35) )
  {
    v42 = WdLogNewEntry5_WdAssertion(v17, v11, v13, v14);
    *(_QWORD *)(v42 + 24) = 567LL;
    WdLogEvent5_WdAssertion(v42);
  }
  v18 = *((_QWORD *)this + 39);
  if ( v18 )
  {
    v43 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL);
    v44 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v47, v44);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v43 + 8) + 600LL))(v18);
    DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v47);
    *((_QWORD *)this + 39) = 0LL;
  }
  else if ( *((_QWORD *)this + 7) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 7, (PSIZE_T)this + 6, 0x8000u);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( *((DXGCONTEXT **)this + 33) != (DXGCONTEXT *)((char *)this + 264) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v17, v11, v13, v14);
    *(_QWORD *)(v45 + 24) = 583LL;
    WdLogEvent5_WdAssertion(v45);
  }
  v19 = *((_DWORD *)this + 6);
  if ( v19 )
  {
    v20 = *(_QWORD **)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v20 + 24));
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v20 + 27), v19);
    v20[25] = 0LL;
    ExReleasePushLockExclusiveEx(v20 + 24, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)this + 6) = 0;
  }
  *((_QWORD *)this + 2) = 0LL;
}
