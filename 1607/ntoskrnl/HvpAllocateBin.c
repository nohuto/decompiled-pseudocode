/*
 * XREFs of HvpAllocateBin @ 0x1404F7238
 * Callers:
 *     HvpMapHiveImageFromSystemCache @ 0x1401B71BC (HvpMapHiveImageFromSystemCache.c)
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 *     HvpMapHiveImage @ 0x1404F7004 (HvpMapHiveImage.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1404F7584 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x14054E0E8 (HvpDropPagedBins.c)
 *     HvpReviveDiscardedBin @ 0x140610950 (HvpReviveDiscardedBin.c)
 *     HvpAddDummyBinToHive @ 0x140612454 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x1406125E4 (HvpAddLoadedBinToHive.c)
 * Callees:
 *     HvViewMapAddressForFileOffset @ 0x14060FB1C (HvViewMapAddressForFileOffset.c)
 */

__int64 __fastcall HvpAllocateBin(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5, __int64 *a6, __int64 *a7)
{
  unsigned int v7; // ebx
  bool v8; // zf
  unsigned int v9; // r11d
  __int64 v10; // rdi
  __int64 v11; // rsi
  char v12; // al
  __int64 v13; // rax
  __int64 v15; // rdx

  v7 = 0;
  v8 = (*(_BYTE *)(a1 + 124) & 4) == 0;
  v9 = a2;
  v10 = 0LL;
  v11 = 0LL;
  *a6 = 0LL;
  *a7 = 0LL;
  if ( v8 )
  {
    v12 = 1;
    if ( !a3 )
    {
LABEL_3:
      LOBYTE(a2) = v12;
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 24))(v9, a2, a5);
      v10 = v13;
      goto LABEL_4;
    }
LABEL_7:
    v12 = 0;
    goto LABEL_3;
  }
  if ( a3 )
    goto LABEL_7;
  v15 = (unsigned int)(a4 + 4096);
  if ( (((unsigned int)v15 ^ (v9 + a4 + 4095)) & 0xFFFC0000) == 0 )
  {
    v10 = HvViewMapAddressForFileOffset(a1 + 200, v15);
    goto LABEL_5;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 24))(v9, 1LL, a5);
  v11 = v13;
LABEL_4:
  if ( !v13 )
    return (unsigned int)-1073741670;
LABEL_5:
  *a6 = v10;
  *a7 = v11;
  return v7;
}
