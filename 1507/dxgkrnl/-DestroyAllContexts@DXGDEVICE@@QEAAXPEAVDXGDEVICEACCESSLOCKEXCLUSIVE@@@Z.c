/*
 * XREFs of ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C007A2FC
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
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0081AC0 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllContexts(PERESOURCE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct DXGPROCESS *Current; // r15
  volatile signed __int64 **v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  volatile signed __int64 *i; // rbx
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rax
  unsigned int v18; // edi
  unsigned int v19; // edx
  __int64 v20; // r9
  int v21; // r8d
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // [rsp+38h] [rbp-59h] BYREF
  char v28; // [rsp+40h] [rbp-51h]
  _QWORD v29[2]; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v30[32]; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v31[80]; // [rsp+78h] [rbp-19h] BYREF

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, v4, v5, v6);
    *(_QWORD *)(v15 + 24) = 1928LL;
    WdLogEvent5_WdAssertion(v15);
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v8 = (volatile signed __int64 **)(this + 36);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v16 + 24) = 1940LL;
    WdLogEvent5_WdAssertion(v16);
  }
  for ( i = *v8; ; i = (volatile signed __int64 *)*i )
  {
    v14 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v8 )
      v14 = 0LL;
    if ( !v14 )
      break;
    v17 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v8 )
      v17 = 0LL;
    v18 = *((_DWORD *)v17 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v30, Current);
    v19 = (v18 >> 6) & 0xFFFFFF;
    if ( v19 < *((_DWORD *)Current + 58) )
    {
      v20 = *((_QWORD *)Current + 27);
      v21 = *(_DWORD *)(v20 + 16LL * v19 + 8);
      if ( ((v18 >> 26) & 0x30) == (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x30)
        && (v21 & 0x1000) == 0
        && (v21 & 0xF) != 0
        && (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0xF) == 7
        && *(_QWORD *)(v20 + 16LL * v19) )
      {
        if ( i == (volatile signed __int64 *)v8 )
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
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
        if ( i )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
          if ( _InterlockedExchangeAdd64(i + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          {
            v24 = *((_QWORD *)i + 2);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
              (DXGDEVICEACCESSLOCKEXCLUSIVE *)v29,
              (struct DXGDEVICE *)v24);
            v25 = *((_QWORD *)i + 2);
            v28 = 0;
            v27 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v27);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, v24, 2, v26, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v31);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 160LL) != 4 )
              DXGDEVICE::DestroyContext((DXGDEVICE *)v24, (struct DXGCONTEXT *)i, (struct COREDEVICEACCESS *)v31);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
            if ( v28 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v27);
            if ( v29[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v24 + 16), (struct DXGDEVICE *)v24);
          }
          DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
          goto LABEL_5;
        }
        return;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  }
}
