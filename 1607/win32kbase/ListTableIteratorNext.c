/*
 * XREFs of ListTableIteratorNext @ 0x1C007B5B4
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C000D10C (RIMEndAllActiveContacts.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C00D0C3C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00D1040 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00D13A8 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C00D16F4 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C00D9F1C (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C00DA2AC (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C00DB798 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C00DBA60 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C00DC620 (rimEndPointerDeviceStaleContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C00E1120 (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall ListTableIteratorNext(__int64 **a1, __int64 a2)
{
  __int64 **v2; // rax
  __int64 *v4; // r9
  __int64 *v5; // rdx
  __int64 v6; // r10
  __int64 *v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // eax
  __int64 *v10; // rcx
  __int64 *v11; // rax
  __int128 v13; // [rsp+0h] [rbp-28h]

  v2 = *(__int64 ***)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v4 = *a1;
  v5 = *v2;
  v6 = **a1;
  v7 = (__int64 *)(v6 + 16LL * *((unsigned int *)a1 + 2));
  a1[2] = v5;
  if ( v5 == v7 )
  {
    v8 = *((_DWORD *)v4 + 2);
    while ( 1 )
    {
      v9 = ++*((_DWORD *)a1 + 2);
      if ( v9 >= v8 )
        break;
      v10 = (__int64 *)(v6 + 16LL * v9);
      v11 = (__int64 *)*v10;
      a1[2] = (__int64 *)*v10;
      if ( v11 != v10 )
        return a1;
    }
    DWORD2(v13) = *((_DWORD *)v4 + 2);
    *(_QWORD *)&v13 = v4;
    *(_OWORD *)a1 = v13;
    a1[2] = (__int64 *)(v6 + 16LL * DWORD2(v13));
  }
  return a1;
}
