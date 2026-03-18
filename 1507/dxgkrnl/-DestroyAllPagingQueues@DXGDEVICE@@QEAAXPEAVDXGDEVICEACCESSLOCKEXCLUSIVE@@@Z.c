/*
 * XREFs of ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0135474
 * Callers:
 *     DxgkDestroyDevice @ 0x1C0094C60 (DxgkDestroyDevice.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001E0C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002BEC (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0002CCC (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000FAF4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0135774 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllPagingQueues(PERESOURCE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  struct DXGPROCESS *Current; // r15
  volatile signed __int64 **v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  volatile signed __int64 *i; // rbx
  __int64 *v16; // rax
  __int64 *v17; // rax
  unsigned int v18; // edi
  unsigned int v19; // edx
  __int64 v20; // r9
  int v21; // r8d
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // [rsp+38h] [rbp-59h] BYREF
  char v34; // [rsp+40h] [rbp-51h]
  _BYTE v35[16]; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v36[32]; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v37[80]; // [rsp+78h] [rbp-19h] BYREF

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, v4, v5, v6);
    *(_QWORD *)(v7 + 24) = 1995LL;
    WdLogEvent5_WdAssertion(v7);
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v9 = (volatile signed __int64 **)(this + 40);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = 2007LL;
    WdLogEvent5_WdAssertion(v14);
  }
  for ( i = *v9; ; i = (volatile signed __int64 *)*i )
  {
    v16 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v9 )
      v16 = 0LL;
    if ( !v16 )
      break;
    v17 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v9 )
      v17 = 0LL;
    v18 = *((_DWORD *)v17 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v36, Current);
    v19 = (v18 >> 6) & 0xFFFFFF;
    if ( v19 < *((_DWORD *)Current + 58) )
    {
      v20 = *((_QWORD *)Current + 27);
      v21 = *(_DWORD *)(v20 + 16LL * v19 + 8);
      if ( ((v18 >> 26) & 0x30) == (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x30)
        && (v21 & 0x1000) == 0
        && (v21 & 0xF) != 0
        && (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0xF) == 0xA
        && *(_QWORD *)(v20 + 16LL * v19) )
      {
        if ( i == (volatile signed __int64 *)v9 )
          i = 0LL;
        v22 = (v18 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v22 < *((_DWORD *)Current + 58) )
        {
          v23 = *(_DWORD *)(v20 + 16 * v22 + 8);
          if ( ((v18 >> 26) & 0x30) == (*(_BYTE *)(v20 + 16 * v22 + 8) & 0x30)
            && (v23 & 0x1000) == 0
            && (v23 & 0xF) != 0 )
          {
            *(_DWORD *)(v20 + 16 * (((unsigned __int64)v18 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
          }
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
        if ( i )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
          v28 = _InterlockedDecrement64(i + 6);
          if ( v28 < 0 )
          {
            v29 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
            *(_QWORD *)(v29 + 24) = 67LL;
            WdLogEvent5_WdAssertion(v29);
          }
          if ( !v28 )
          {
            v30 = *((_QWORD *)i + 2);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
              (DXGDEVICEACCESSLOCKEXCLUSIVE *)v35,
              (struct DXGDEVICE *)v30);
            v31 = *(_QWORD *)(v30 + 16);
            v34 = 0;
            v33 = *(_QWORD *)(v31 + 16);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v33);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, v30, 2, v32, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v37);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 160LL) != 4 )
              DXGDEVICE::DestroyPagingQueue(
                (DXGDEVICE *)v30,
                (struct DXGPAGINGQUEUE *)i,
                (struct COREDEVICEACCESS *)v37);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v33);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v30 + 16), (struct DXGDEVICE *)v30);
          }
          DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
          goto LABEL_5;
        }
        return;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
  }
}
