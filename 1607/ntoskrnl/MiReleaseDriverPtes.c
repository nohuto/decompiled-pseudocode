/*
 * XREFs of MiReleaseDriverPtes @ 0x140544E78
 * Callers:
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MiReserveDriverPtes @ 0x1404B2B08 (MiReserveDriverPtes.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 *     MiReturnSystemImageAddress @ 0x140544E30 (MiReturnSystemImageAddress.c)
 *     MmUnmapLockedRestartPages @ 0x14065756C (MmUnmapLockedRestartPages.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x140076850 (RtlNumberOfSetBits.c)
 *     RtlAreBitsSet @ 0x14009E28C (RtlAreBitsSet.c)
 *     MiUnlockDriverMappings @ 0x1400A1214 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x1400A1250 (MiLockDriverMappings.c)
 *     MiInitializeTbFlushList @ 0x1400B3858 (MiInitializeTbFlushList.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeReservePrivilegedPages @ 0x1401D1EDC (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseDriverPtes(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  ULONG v7; // r12d
  _RTL_BITMAP *v8; // r14
  _RTL_BITMAP *v9; // rdi
  unsigned int *Buffer; // rdx
  ULONG v11; // r15d
  int v12; // r9d
  unsigned __int64 v13; // r10
  _BYTE *v14; // rbx
  int v15; // r11d
  __int64 v16; // rax
  _BYTE v18[192]; // [rsp+40h] [rbp-108h] BYREF

  v4 = a1;
  if ( (MiFlags & 0x4000) != 0 && (MiFlags & 0x20000) != 0 )
    KeReservePrivilegedPages((__int64)(a2 << 25) >> 16, a3, 1u);
  CurrentThread = KeGetCurrentThread();
  v7 = (a3 + 15) >> 4;
  v8 = 0LL;
  MiLockDriverMappings((__int64)CurrentThread);
  v9 = (_RTL_BITMAP *)qword_140326890[v4];
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
    v12 = 16 * v9[1].SizeOfBitMap;
    v13 = (__int64)v9->Buffer << 25 >> 16;
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
    MiReturnSystemVa(v13, v13 + (unsigned int)(v12 << 12), v15, (__int64)v14);
    v16 = *(_QWORD *)&v9->SizeOfBitMap;
    if ( v8 )
      *(_QWORD *)&v8->SizeOfBitMap = v16;
    else
      qword_140326890[a1] = v16;
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(v9, 0);
  }
}
