/*
 * XREFs of RIMCmActiveContactsBeginNoButton @ 0x1C00E1120
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C00D0C3C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00D1040 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00D13A8 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C00D9F1C (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C00DA2AC (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C00DBA60 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C000D35C (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     ListTableIteratorNext @ 0x1C007B5B4 (ListTableIteratorNext.c)
 */

__int64 __fastcall RIMCmActiveContactsBeginNoButton(__int64 a1, __int64 a2)
{
  __int64 **v3; // rax
  __int64 v4; // r11
  __int128 v5; // xmm0
  __int64 *v6; // xmm1_8
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 **v9; // rax
  __int64 *v10; // xmm1_8
  __int128 v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h]
  __int128 v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h]

  DWORD2(v12) = 0;
  v13 = *(_QWORD *)(a2 + 1552);
  *(_QWORD *)&v12 = a2 + 1552;
  v3 = ListTableIteratorNext((__int64 **)&v14, (__int64)&v12);
  *(_QWORD *)&v12 = v4;
  v5 = *(_OWORD *)v3;
  v6 = v3[2];
  DWORD2(v12) = *(_DWORD *)(v4 + 8);
  v7 = DWORD2(v12);
  *(_OWORD *)a1 = v5;
  v8 = v12;
  v13 = *(_QWORD *)v4 + 16 * v7;
  *(_QWORD *)(a1 + 16) = v6;
  v15 = v13;
  v14 = v8;
  if ( tagLIST_TABLE_ITERATOR::operator!=(a1, (__int64)&v14) && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) & 4) != 0 )
  {
    v9 = ListTableIteratorNext((__int64 **)&v14, a1);
    v10 = v9[2];
    *(_OWORD *)a1 = *(_OWORD *)v9;
    *(_QWORD *)(a1 + 16) = v10;
  }
  return a1;
}
