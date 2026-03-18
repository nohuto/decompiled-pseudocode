/*
 * XREFs of ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C015D370
 * Callers:
 *     DxgkDestroyDevice @ 0x1C00786C0 (DxgkDestroyDevice.c)
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0001788 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004584 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0004664 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015D66C (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllPagingQueues(PERESOURCE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v4; // rax
  struct DXGPROCESS *Current; // r15
  volatile signed __int64 **v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  volatile signed __int64 *i; // rbx
  __int64 *v10; // rax
  __int64 *v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // edx
  __int64 v14; // r9
  int v15; // r8d
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r9
  _BYTE v23[16]; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v24[24]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v25[24]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v26[96]; // [rsp+78h] [rbp-29h] BYREF

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 2115LL;
    WdLogEvent5_WdAssertion(v4);
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v6 = (volatile signed __int64 **)(this + 43);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 2127LL;
    WdLogEvent5_WdAssertion(v8);
  }
  for ( i = *v6; ; i = (volatile signed __int64 *)*i )
  {
    v10 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v6 )
      v10 = 0LL;
    if ( !v10 )
      break;
    v11 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v6 )
      v11 = 0LL;
    v12 = *((_DWORD *)v11 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24, Current);
    v13 = (v12 >> 6) & 0xFFFFFF;
    if ( v13 < *((_DWORD *)Current + 56) )
    {
      v14 = *((_QWORD *)Current + 26);
      v15 = *(_DWORD *)(v14 + 16LL * v13 + 8);
      if ( ((v12 >> 26) & 0x30) == (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x30)
        && (v15 & 0x1000) == 0
        && (v15 & 0xF) != 0
        && (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0xF) == 0xA
        && *(_QWORD *)(v14 + 16LL * v13) )
      {
        if ( i == (volatile signed __int64 *)v6 )
          i = 0LL;
        v16 = (v12 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v16 < *((_DWORD *)Current + 56) )
        {
          v17 = *(_DWORD *)(v14 + 16 * v16 + 8);
          if ( ((v12 >> 26) & 0x30) == (*(_BYTE *)(v14 + 16 * v16 + 8) & 0x30)
            && (v17 & 0x1000) == 0
            && (v17 & 0xF) != 0 )
          {
            *(_DWORD *)(v14 + 16 * (((unsigned __int64)v12 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
          }
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
        if ( i )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
          v19 = _InterlockedDecrement64(i + 6);
          if ( v19 < 0 )
          {
            v20 = WdLogNewEntry5_WdAssertion(v18);
            *(_QWORD *)(v20 + 24) = 67LL;
            WdLogEvent5_WdAssertion(v20);
          }
          if ( !v19 )
          {
            v21 = *((_QWORD *)i + 2);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
              (DXGDEVICEACCESSLOCKEXCLUSIVE *)v23,
              (struct DXGDEVICE *)v21);
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)v25,
              *(struct DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL),
              1);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, v21, 2, v22, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v26);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 176LL) != 4 )
              DXGDEVICE::DestroyPagingQueue(
                (DXGDEVICE *)v21,
                (struct DXGPAGINGQUEUE *)i,
                (struct COREDEVICEACCESS *)v26);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v21 + 16), (struct DXGDEVICE *)v21);
          }
          DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
          goto LABEL_5;
        }
        return;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  }
}
