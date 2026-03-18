/*
 * XREFs of ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0095C18
 * Callers:
 *     DxgkDestroyDevice @ 0x1C00786C0 (DxgkDestroyDevice.c)
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004584 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0096C5C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllContexts(PERESOURCE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // r15
  volatile signed __int64 **v7; // r14
  __int64 v8; // rcx
  volatile signed __int64 *i; // rbx
  __int64 *v10; // rax
  __int64 *v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // edx
  __int64 v14; // r9
  int v15; // r8d
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rdi
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD v22[2]; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v23[24]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v24[24]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v25[96]; // [rsp+78h] [rbp-29h] BYREF

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v20 + 24) = 2048LL;
    WdLogEvent5_WdAssertion(v20);
  }
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v7 = (volatile signed __int64 **)(this + 39);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v21 + 24) = 2060LL;
    WdLogEvent5_WdAssertion(v21);
  }
  for ( i = *v7; ; i = (volatile signed __int64 *)*i )
  {
    v10 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v7 )
      v10 = 0LL;
    if ( !v10 )
      break;
    v11 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v7 )
      v11 = 0LL;
    v12 = *((_DWORD *)v11 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v23,
      (struct DXGPROCESS *)ProcessDxgProcess);
    v13 = (v12 >> 6) & 0xFFFFFF;
    if ( v13 < *(_DWORD *)(ProcessDxgProcess + 224) )
    {
      v14 = *(_QWORD *)(ProcessDxgProcess + 208);
      v15 = *(_DWORD *)(v14 + 16LL * v13 + 8);
      if ( ((v12 >> 26) & 0x30) == (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x30)
        && (v15 & 0x1000) == 0
        && (v15 & 0xF) != 0
        && (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0xF) == 7
        && *(_QWORD *)(v14 + 16LL * v13) )
      {
        if ( i == (volatile signed __int64 *)v7 )
          i = 0LL;
        v16 = (v12 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v16 < *(_DWORD *)(ProcessDxgProcess + 224) )
        {
          v17 = *(_DWORD *)(v14 + 16 * v16 + 8);
          if ( ((v12 >> 26) & 0x30) == (*(_BYTE *)(v14 + 16 * v16 + 8) & 0x30)
            && (v17 & 0x1000) == 0
            && (v17 & 0xF) != 0 )
          {
            *(_DWORD *)(v14 + 16 * (((unsigned __int64)v12 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
          }
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
        if ( i )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
          if ( _InterlockedExchangeAdd64(i + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          {
            v18 = *((_QWORD *)i + 2);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
              (DXGDEVICEACCESSLOCKEXCLUSIVE *)v22,
              (struct DXGDEVICE *)v18);
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)v24,
              *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)i + 2) + 16LL) + 16LL),
              1);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v25, v18, 2, v19, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v25);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 176LL) != 4 )
              DXGDEVICE::DestroyContext((DXGDEVICE *)v18, (struct DXGCONTEXT *)i, (struct COREDEVICEACCESS *)v25);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v25);
            if ( v24[16] )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
            if ( v22[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v18 + 16), (struct DXGDEVICE *)v18);
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
