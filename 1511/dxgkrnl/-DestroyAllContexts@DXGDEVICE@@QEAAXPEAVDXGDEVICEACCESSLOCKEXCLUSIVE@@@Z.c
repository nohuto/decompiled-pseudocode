/*
 * XREFs of ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C006D670
 * Callers:
 *     DxgkDestroyDevice @ 0x1C008B4D0 (DxgkDestroyDevice.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003914 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003FCC (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0075CEC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllContexts(DXGDEVICE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r15
  volatile signed __int64 **v6; // r14
  __int64 v7; // rcx
  volatile signed __int64 *i; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rax
  unsigned int v11; // edi
  unsigned int v12; // edx
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD v21[2]; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v22[16]; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v23[32]; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v24[80]; // [rsp+78h] [rbp-19h] BYREF

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v19 + 24) = 1953LL;
    WdLogEvent5_WdAssertion(v19);
  }
  Current = DXGPROCESS::GetCurrent();
  v6 = (volatile signed __int64 **)((char *)this + 288);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v20 + 24) = 1965LL;
    WdLogEvent5_WdAssertion(v20);
  }
  for ( i = *v6; ; i = (volatile signed __int64 *)*i )
  {
    v9 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v6 )
      v9 = 0LL;
    if ( !v9 )
      break;
    v10 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v6 )
      v10 = 0LL;
    v11 = *((_DWORD *)v10 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v23, Current);
    v12 = (v11 >> 6) & 0xFFFFFF;
    if ( v12 < *((_DWORD *)Current + 58) )
    {
      v13 = *((_QWORD *)Current + 27);
      v14 = *(_DWORD *)(v13 + 16LL * v12 + 8);
      if ( ((v11 >> 26) & 0x30) == (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x30)
        && (v14 & 0x1000) == 0
        && (v14 & 0xF) != 0
        && (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0xF) == 7
        && *(_QWORD *)(v13 + 16LL * v12) )
      {
        if ( i == (volatile signed __int64 *)v6 )
          i = 0LL;
        v15 = (v11 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v15 < *((_DWORD *)Current + 58) )
        {
          v16 = *(_DWORD *)(v13 + 16 * v15 + 8);
          if ( ((v11 >> 26) & 0x30) == (*(_BYTE *)(v13 + 16 * v15 + 8) & 0x30)
            && (v16 & 0x1000) == 0
            && (v16 & 0xF) != 0 )
          {
            *(_DWORD *)(v13 + 16 * (((unsigned __int64)v11 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
          }
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
        if ( i )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
          if ( _InterlockedExchangeAdd64(i + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          {
            v17 = *((_QWORD *)i + 2);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
              (DXGDEVICEACCESSLOCKEXCLUSIVE *)v21,
              (struct DXGDEVICE *)v17);
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)v22,
              *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)i + 2) + 16LL) + 16LL),
              1);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, v17, 2, v18, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v24);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 160LL) != 4 )
              DXGDEVICE::DestroyContext((DXGDEVICE *)v17, (struct DXGCONTEXT *)i, (struct COREDEVICEACCESS *)v24);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
            if ( v22[8] )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
            if ( v21[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v21);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v17 + 16), (struct DXGDEVICE *)v17);
          }
          DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
          goto LABEL_5;
        }
        return;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  }
}
