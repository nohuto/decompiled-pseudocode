/*
 * XREFs of ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C00A20B8
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00CDED0 (DxgkSetProcessSchedulingPriorityClass.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C9E4 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     VidSchSetPriorityClassProcessX @ 0x1C00DB6E4 (VidSchSetPriorityClassProcessX.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityClass(DXGPROCESS *this, unsigned int a2, unsigned __int8 a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v9; // r14
  struct DXGADAPTER *v10; // rbx
  __int64 v11; // r8
  _QWORD v12[2]; // [rsp+28h] [rbp-29h] BYREF
  char *v13; // [rsp+38h] [rbp-19h] BYREF
  _QWORD *i; // [rsp+40h] [rbp-11h]
  _BYTE v15[80]; // [rsp+48h] [rbp-9h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 10) + 8LL) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 2134LL;
    WdLogEvent5_WdAssertion(v6);
  }
  result = VidSchSetPriorityClassProcessX(this, a2, a3);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 58) = a2;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 136, 0LL);
    *((_QWORD *)this + 18) = KeGetCurrentThread();
    v13 = (char *)this + 240;
    for ( i = (_QWORD *)*((_QWORD *)this + 30); ; i = (_QWORD *)*i )
    {
      Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v13);
      v9 = Current;
      if ( !Current )
        break;
      v10 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, v10, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v15) >= 0 )
      {
        LOBYTE(v11) = a3;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 376LL) + 8LL)
                                                        + 160LL))(
          *((_QWORD *)v9 + 71),
          *((unsigned int *)this + 73),
          v11);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v15);
      if ( v12[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12);
    }
    *((_QWORD *)this + 18) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
