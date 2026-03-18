/*
 * XREFs of ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00855BC
 * Callers:
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C0018858 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0075CEC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z @ 0x1C00048AC (--3-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0075D88 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0094580 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ??1DXGPRESENT@@QEAA@XZ @ 0x1C00B3BC0 (--1DXGPRESENT@@QEAA@XZ.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0132ED0 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGCONTEXT::~DXGCONTEXT(DXGCONTEXT *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdi
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // ebp
  _QWORD *v14; // rbx
  DXGDEVICE *v15; // rbp
  void *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v23; // rax
  unsigned int v24; // r9d
  unsigned int v25; // edx
  __int64 v26; // r10
  int v27; // r8d
  struct DXGRESOURCE *v28; // rbx
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  struct _KTHREAD **v35; // rax
  __int64 v36; // rax
  _BYTE v37[32]; // [rsp+30h] [rbp-38h] BYREF
  char v38; // [rsp+70h] [rbp+8h] BYREF

  v5 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2, a3, a4);
  v5[3] = this;
  v5[4] = *((unsigned int *)this + 6);
  v5[5] = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  WdLogEvent5_WdEvent(v5);
  v6 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v6 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v6 + 80)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v17 + 24) = 494LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v18 + 24) = 495LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !*((_BYTE *)this + 348) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v19 + 24) = 501LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v9 = *((_QWORD *)this + 17);
  if ( v9 )
  {
    v15 = (DXGDEVICE *)*((_QWORD *)this + 2);
    if ( !v15 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v20 + 24) = 6926LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( *(_DWORD *)(v9 + 420) )
    {
      Current = DXGPROCESS::GetCurrent();
      if ( !Current )
      {
        v23 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v23 + 24) = 6936LL;
        WdLogEvent5_WdAssertion(v23);
      }
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v37, Current);
      v24 = *(_DWORD *)(v9 + 420);
      v25 = (v24 >> 6) & 0xFFFFFF;
      if ( v25 < *((_DWORD *)Current + 58)
        && (v26 = *((_QWORD *)Current + 27),
            v27 = *(_DWORD *)(v26 + 16LL * v25 + 8),
            ((v24 >> 26) & 0x30) == (*(_BYTE *)(v26 + 16LL * v25 + 8) & 0x30))
        && (v27 & 0x1000) == 0
        && (v27 & 0xF) != 0
        && (*(_BYTE *)(v26 + 16LL * v25 + 8) & 0xF) == 4 )
      {
        v28 = *(struct DXGRESOURCE **)(v26 + 16LL * v25);
        if ( v28 )
        {
          v29 = (v24 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v29 < *((_DWORD *)Current + 58) )
          {
            v30 = *(_DWORD *)(v26 + 16 * v29 + 8);
            if ( ((v24 >> 26) & 0x30) == (*(_BYTE *)(v26 + 16 * v29 + 8) & 0x30)
              && (v30 & 0x1000) == 0
              && (v30 & 0xF) != 0 )
            {
              *(_DWORD *)(v26 + 16LL * ((v24 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
          }
        }
      }
      else
      {
        v28 = 0LL;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
      if ( v28 )
      {
        if ( *((_DWORD *)v15 + 88) == 4 )
          DXGDEVICE::DestroyClientResource(v15, v28);
        else
          DXGDEVICE::DestroyAllocationInternal(v15, 0, 0LL, v28, 0LL, DXGDEVICE::DestroyFlagsDefault);
      }
      else
      {
        v32 = WdLogNewEntry5_WdError(v31);
        *(_QWORD *)(v32 + 24) = v15;
        *(_QWORD *)(v32 + 32) = *(unsigned int *)(v9 + 420);
        WdLogEvent5_WdError(v32);
      }
      *(_QWORD *)(v9 + 416) = 0LL;
    }
    v16 = (void *)*((_QWORD *)this + 17);
    if ( v16 )
    {
      DXGPRESENT::~DXGPRESENT(*((DXGPRESENT **)this + 17));
      DXGQUOTAALLOCATOR<1,1265072196>::operator delete(v16);
    }
    *((_QWORD *)this + 17) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 15);
  if ( v10 )
  {
    MmUnsecureVirtualMemory(v10);
    *((_QWORD *)this + 15) = 0LL;
  }
  if ( *((_QWORD *)this + 14) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 14, (PSIZE_T)this + 13, 0x8000u);
    *((_QWORD *)this + 14) = 0LL;
    *((_DWORD *)this + 24) = 0;
    *((_QWORD *)this + 13) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 11);
  if ( v11 )
  {
    MmUnsecureVirtualMemory(v11);
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
    v33 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v33 + 24) = 570LL;
    WdLogEvent5_WdAssertion(v33);
  }
  v12 = *((_QWORD *)this + 39);
  if ( v12 )
  {
    v34 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL);
    v35 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v38, v35);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v34 + 8) + 600LL))(v12);
    DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v38);
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
    v36 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v36 + 24) = 586LL;
    WdLogEvent5_WdAssertion(v36);
  }
  v13 = *((_DWORD *)this + 6);
  if ( v13 )
  {
    v14 = *(_QWORD **)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v14 + 24));
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v14 + 27), v13);
    v14[25] = 0LL;
    ExReleasePushLockExclusiveEx(v14 + 24, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)this + 6) = 0;
  }
  *((_QWORD *)this + 2) = 0LL;
}
