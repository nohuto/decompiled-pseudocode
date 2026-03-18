/*
 * XREFs of ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0001AB8
 * Callers:
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI@Z @ 0x1C005C730 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C0084EB4 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0148274 (-Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0094450 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 */

__int64 __fastcall DXGPROCESS::AllocHandleSafe(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  int v7; // eax

  v3 = a1 + 192;
  v4 = a1;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 192));
  v7 = HMGRTABLE::AllocHandle(v4 + 216, a2, a3);
  *(_QWORD *)(v3 + 8) = 0LL;
  LODWORD(v4) = v7;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
