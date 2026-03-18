/*
 * XREFs of ?UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z @ 0x1C0180518
 * Callers:
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0077A64 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C017FD40 (-DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001388 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C00013C0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall CTTMDEVICE::UnRegisterTtmDevice(CTTMDEVICE *this, char a2)
{
  struct DXGGLOBAL *Global; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  CTTMDEVICE **v17; // r8
  CTTMDEVICE **v18; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-50h] BYREF
  char v21; // [rsp+78h] [rbp-20h]

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)Global + 69) + 160LL) != CurrentThread )
  {
    v6 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v6 + 24) = 4046LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_BYTE *)this + 905) )
  {
    if ( a2 )
    {
      v7 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v7 + 24) = 4053LL;
      WdLogEvent5_WdAssertion(v7);
    }
    if ( *((_BYTE *)this + 905) && *(CTTMDEVICE **)this != this )
    {
      v8 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v8 + 24) = 4059LL;
      WdLogEvent5_WdAssertion(v8);
    }
  }
  if ( !*((_QWORD *)this + 8) )
  {
    v9 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v9 + 24) = 4068LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 8));
  v11 = WdLogNewEntry5_WdAssertion(v10);
  *(_QWORD *)(v11 + 24) = 4070LL;
  WdLogEvent5_WdAssertion(v11);
  v12 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u);
  v13 = (unsigned int)(v12 >> 31);
  LODWORD(v13) = v12 % 32;
  *((_DWORD *)this + 2 * v13 + 157) = 1073741825;
  *((_DWORD *)this + 2 * (unsigned int)(v12 % 32) + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)this + 6);
  if ( *((_QWORD *)this + 7) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v15 + 24) = 4088LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( a2 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *((_QWORD *)this + 7) = &Event;
  }
  else
  {
    *((_QWORD *)this + 7) = 0LL;
  }
  v16 = *((_QWORD *)this + 4);
  v21 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v16 + 18584));
  *((_QWORD *)this + 4) = 0LL;
  v17 = (CTTMDEVICE **)*((_QWORD *)this + 2);
  v18 = (CTTMDEVICE **)*((_QWORD *)this + 3);
  if ( v17[1] != (CTTMDEVICE *)((char *)this + 16) || *v18 != (CTTMDEVICE *)((char *)this + 16) )
    __fastfail(3u);
  *v18 = (CTTMDEVICE *)v17;
  v17[1] = (CTTMDEVICE *)v18;
  TtmNotifyDeviceDeparture(1LL, this);
  CPROCESSATTACHHELPER::Detach(&ApcState);
  if ( a2 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  CPROCESSATTACHHELPER::Detach(&ApcState);
}
