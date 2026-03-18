/*
 * XREFs of GreDeleteServerMetaFile @ 0x1C02B2C5C
 * Callers:
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C0121384 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     vCleanupMetaType @ 0x1C0132020 (vCleanupMetaType.c)
 *     FreeDdeXact @ 0x1C01EBA90 (FreeDdeXact.c)
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0019EF0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C02B2BF4 (--0-$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x1C02B2C40 (--1-$HmgLockResult@VMETA@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDeleteServerMetaFile(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  int v7; // eax
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  LOBYTE(a2) = 21;
  v2 = HmgLock(a1, a2);
  HmgLockResult<META>::HmgLockResult<META>(v9, v2);
  v6 = 0;
  if ( RFONTOBJ::bValid((RFONTOBJ *)v9) )
  {
    v7 = *(_DWORD *)(v9[0] + 24LL);
    if ( v7 == 1599096397 || v7 == 1480934989 )
    {
      HmgFree(*(_QWORD *)v9[0]);
      v9[0] = 0LL;
      v6 = 1;
    }
  }
  HmgLockResult<META>::~HmgLockResult<META>((__int64)v9, v3, v4, v5);
  return v6;
}
