/*
 * XREFs of ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C005B400
 * Callers:
 *     ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00BC6A0 (-DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0003040 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DXGDEVICE::NotifyProcessThaw(int **this)
{
  __int64 v2; // rbp
  int *i; // rbx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v4,
    (struct DXGDEVICE *)this);
  v2 = *((_QWORD *)this[2] + 2);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2 + 104, 0LL);
  if ( *((_DWORD *)this + 88) == 1 )
  {
    for ( i = this[36]; i != (int *)(this + 36) && i; i = *(int **)i )
    {
      DXGADAPTER::NotifyContextCreation(*((DXGADAPTER **)this[2] + 2), (struct DXGCONTEXT *)i, 1, i[80]);
      *((_BYTE *)i + 349) = 0;
    }
  }
  ExReleasePushLockSharedEx(v2 + 104, 0LL);
  KeLeaveCriticalRegion();
  if ( v4[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v4);
}
