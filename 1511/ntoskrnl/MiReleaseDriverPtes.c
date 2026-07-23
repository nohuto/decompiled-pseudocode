/*
 * XREFs of MiReleaseDriverPtes @ 0x1404A6BE4
 * Callers:
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     MiReturnSystemImageAddress @ 0x1404A6B98 (MiReturnSystemImageAddress.c)
 *     MiReserveDriverPtes @ 0x1404A6DA8 (MiReserveDriverPtes.c)
 *     MmUnmapLockedRestartPages @ 0x140620ED4 (MmUnmapLockedRestartPages.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     RtlNumberOfSetBits @ 0x140021E20 (RtlNumberOfSetBits.c)
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     MiUnlockDriverMappings @ 0x1400E27CC (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x1400E2808 (MiLockDriverMappings.c)
 *     RtlAreBitsSet @ 0x1400E29B8 (RtlAreBitsSet.c)
 *     MiInitializeTbFlushList @ 0x1400E2A4C (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeReservePrivilegedPages @ 0x1401C3328 (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseDriverPtes(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  ULONG v7; // r12d
  _RTL_BITMAP *v8; // r14
  _RTL_BITMAP *v9; // rbx
  unsigned int *Buffer; // rdx
  ULONG v11; // r15d
  unsigned __int64 v12; // r10
  int v13; // r9d
  _BYTE *v14; // rdi
  int v15; // r11d
  __int64 v16; // rax
  _BYTE v18[192]; // [rsp+40h] [rbp-108h] BYREF

  v4 = a1;
  if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x80000) != 0 )
    KeReservePrivilegedPages((__int64)(a2 << 25) >> 16, a3, 0);
  CurrentThread = KeGetCurrentThread();
  v7 = (a3 + 15) >> 4;
  v8 = 0LL;
  MiLockDriverMappings((__int64)CurrentThread);
  v9 = (_RTL_BITMAP *)qword_1402FE580[v4];
  if ( !v9 )
    goto LABEL_21;
  do
  {
    Buffer = v9->Buffer;
    if ( a2 >= (unsigned __int64)Buffer
      && a2 < (unsigned __int64)&Buffer[2 * ((unsigned __int64)(v9[1].SizeOfBitMap << 16) >> 12)] )
    {
      break;
    }
    v8 = v9;
    v9 = *(_RTL_BITMAP **)&v9->SizeOfBitMap;
  }
  while ( v9 );
  if ( !v9 )
LABEL_21:
    KeBugCheckEx(0x1Au, 0x2102uLL, (__int64)(a2 << 25) >> 16, a3 << 12, 0LL);
  v11 = (unsigned int)((__int64)(a2 - (unsigned __int64)v9->Buffer) >> 3) >> 4;
  if ( !RtlAreBitsSet(v9 + 1, v11, v7) )
    KeBugCheckEx(0x1Au, 0x2103uLL, (__int64)(a2 << 25) >> 16, a3 << 12, 0LL);
  RtlClearBits(v9 + 1, v11, v7);
  if ( RtlNumberOfSetBits(v9 + 1) )
  {
    MiUnlockDriverMappings((__int64)CurrentThread);
  }
  else
  {
    v12 = (__int64)v9->Buffer << 25 >> 16;
    v13 = 16 * v9[1].SizeOfBitMap;
    if ( a1 )
    {
      v14 = 0LL;
      v15 = 11;
    }
    else
    {
      v14 = v18;
      MiInitializeTbFlushList((__int64)v18, 0, 20);
    }
    MiReturnSystemVa(v12, v12 + (unsigned int)(v13 << 12), v15, (__int64)v14);
    v16 = *(_QWORD *)&v9->SizeOfBitMap;
    if ( v8 )
      *(_QWORD *)&v8->SizeOfBitMap = v16;
    else
      qword_1402FE580[a1] = v16;
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(v9, 0);
  }
}
