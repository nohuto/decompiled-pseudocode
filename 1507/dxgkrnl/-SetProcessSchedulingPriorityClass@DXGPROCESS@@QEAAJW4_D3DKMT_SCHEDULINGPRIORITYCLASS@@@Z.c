/*
 * XREFs of ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@@Z @ 0x1C00DB488
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00DB1A0 (DxgkSetProcessSchedulingPriorityClass.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0009A4C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?VidSchSyncPriorityDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_D3DKMT_PROCESS_STATUS_TYPE@@@Z @ 0x1C001D4B0 (-VidSchSyncPriorityDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_D3DKMT_PROCESS_STATUS_TYPE@.c)
 *     VidSchSetPriorityClassProcessX @ 0x1C00C2EE8 (VidSchSetPriorityClassProcessX.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityClass(DXGPROCESS *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int64 result; // rax
  struct DXGADAPTER *v9; // rbx
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v11; // rsi
  char *v12; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *i; // [rsp+28h] [rbp-58h]
  _QWORD v14[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v15[64]; // [rsp+40h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 11) + 8LL) != CurrentThread )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, CurrentThread, a4);
    *(_QWORD *)(v7 + 24) = 1788LL;
    WdLogEvent5_WdAssertion(v7);
  }
  result = VidSchSetPriorityClassProcessX((__int64)this, v5, (__int64)CurrentThread, a4);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 60) = v5;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
    *((_QWORD *)this + 19) = KeGetCurrentThread();
    v12 = (char *)this + 248;
    for ( i = (_QWORD *)*((_QWORD *)this + 31); ; i = (_QWORD *)*i )
    {
      Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v12);
      v11 = Current;
      if ( !Current )
        break;
      v9 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v14, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, v9, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v15) >= 0 )
        VIDSCH_EXPORT::VidSchSyncPriorityDevice(
          *(_QWORD *)(*((_QWORD *)v11 + 2) + 376LL),
          *((_QWORD *)v11 + 68),
          *((_DWORD *)this + 79));
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v15);
      if ( v14[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v14);
    }
    *((_QWORD *)this + 19) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 144, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
