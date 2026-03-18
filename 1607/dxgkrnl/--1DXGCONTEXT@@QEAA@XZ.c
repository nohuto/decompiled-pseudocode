/*
 * XREFs of ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00B0C30
 * Callers:
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C001CA4C (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0096C5C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0007554 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000757C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z @ 0x1C0007AF8 (--3-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00A3220 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGPRESENT@@QEAA@XZ @ 0x1C00CA6A4 (--1DXGPRESENT@@QEAA@XZ.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C015128C (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGCONTEXT::~DXGCONTEXT(DXGCONTEXT *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdi
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rdi
  unsigned int v10; // ebp
  _QWORD *v11; // rbx
  DXGDEVICE *v12; // rbp
  void *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 ProcessDxgProcess; // r14
  __int64 v22; // rax
  unsigned int v23; // r9d
  unsigned int v24; // edx
  __int64 v25; // r10
  int v26; // r8d
  struct DXGRESOURCE *v27; // rbx
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v35; // rax
  _BYTE v36[32]; // [rsp+30h] [rbp-38h] BYREF
  char v37; // [rsp+70h] [rbp+8h] BYREF

  v2 = (_QWORD *)WdLogNewEntry5_WdEvent(this);
  v2[3] = this;
  v2[4] = *((unsigned int *)this + 6);
  v2[5] = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  WdLogEvent5_WdEvent(v2);
  v3 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v3 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 80)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v14 + 24) = 494LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v15 + 24) = 495LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !*((_BYTE *)this + 348) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v16 + 24) = 501LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v6 = *((_QWORD *)this + 17);
  if ( v6 )
  {
    v12 = (DXGDEVICE *)*((_QWORD *)this + 2);
    if ( !v12 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v17 + 24) = 7509LL;
      WdLogEvent5_WdAssertion(v17);
    }
    if ( *(_DWORD *)(v6 + 420) )
    {
      CurrentProcess = PsGetCurrentProcess(v5);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v19);
      if ( !ProcessDxgProcess )
      {
        v22 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v22 + 24) = 7519LL;
        WdLogEvent5_WdAssertion(v22);
      }
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
        (DXGHANDLETABLELOCKEXCLUSIVE *)v36,
        (struct DXGPROCESS *)ProcessDxgProcess);
      v23 = *(_DWORD *)(v6 + 420);
      v24 = (v23 >> 6) & 0xFFFFFF;
      if ( v24 < *(_DWORD *)(ProcessDxgProcess + 224)
        && (v25 = *(_QWORD *)(ProcessDxgProcess + 208),
            v26 = *(_DWORD *)(v25 + 16LL * v24 + 8),
            ((v23 >> 26) & 0x30) == (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x30))
        && (v26 & 0x1000) == 0
        && (v26 & 0xF) != 0
        && (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0xF) == 4 )
      {
        v27 = *(struct DXGRESOURCE **)(v25 + 16LL * v24);
        if ( v27 )
        {
          v28 = (v23 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v28 < *(_DWORD *)(ProcessDxgProcess + 224) )
          {
            v29 = *(_DWORD *)(v25 + 16 * v28 + 8);
            if ( ((v23 >> 26) & 0x30) == (*(_BYTE *)(v25 + 16 * v28 + 8) & 0x30)
              && (v29 & 0x1000) == 0
              && (v29 & 0xF) != 0 )
            {
              *(_DWORD *)(v25 + 16LL * ((v23 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
          }
        }
      }
      else
      {
        v27 = 0LL;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
      if ( v27 )
      {
        if ( *((_DWORD *)v12 + 94) == 4 )
          DXGDEVICE::DestroyClientResource(v12, v27);
        else
          DXGDEVICE::DestroyAllocationInternal(
            v12,
            0,
            0LL,
            (struct DXGALLOCATION **)v27,
            0LL,
            DXGDEVICE::DestroyFlagsDefault);
      }
      else
      {
        v31 = WdLogNewEntry5_WdError(v30);
        *(_QWORD *)(v31 + 24) = v12;
        *(_QWORD *)(v31 + 32) = *(unsigned int *)(v6 + 420);
        WdLogEvent5_WdError(v31);
      }
      *(_QWORD *)(v6 + 416) = 0LL;
    }
    v13 = (void *)*((_QWORD *)this + 17);
    if ( v13 )
    {
      DXGPRESENT::~DXGPRESENT(*((DXGPRESENT **)this + 17));
      DXGQUOTAALLOCATOR<1,1265072196>::operator delete(v13);
    }
    *((_QWORD *)this + 17) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 15);
  if ( v7 )
  {
    MmUnsecureVirtualMemory(v7);
    *((_QWORD *)this + 15) = 0LL;
  }
  if ( *((_QWORD *)this + 14) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 14, (PSIZE_T)this + 13, 0x8000u);
    *((_QWORD *)this + 14) = 0LL;
    *((_DWORD *)this + 24) = 0;
    *((_QWORD *)this + 13) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 11);
  if ( v8 )
  {
    MmUnsecureVirtualMemory(v8);
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
    v32 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v32 + 24) = 570LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v9 = *((_QWORD *)this + 39);
  if ( v9 )
  {
    v33 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL);
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v8);
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v37, Current);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v33 + 8) + 616LL))(v9);
    DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v37);
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
    v35 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v35 + 24) = 586LL;
    WdLogEvent5_WdAssertion(v35);
  }
  v10 = *((_DWORD *)this + 6);
  if ( v10 )
  {
    v11 = *(_QWORD **)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v11 + 23));
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v11 + 26), v10);
    v11[24] = 0LL;
    ExReleasePushLockExclusiveEx(v11 + 23, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)this + 6) = 0;
  }
  *((_QWORD *)this + 2) = 0LL;
}
