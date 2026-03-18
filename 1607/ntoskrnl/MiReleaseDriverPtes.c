/*
 * XREFs of MiReleaseDriverPtes @ 0x140544938
 * Callers:
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     MiReserveDriverPtes @ 0x1404CD0DC (MiReserveDriverPtes.c)
 *     MiRelocateImage @ 0x140524330 (MiRelocateImage.c)
 *     MiReturnSystemImageAddress @ 0x1405448F0 (MiReturnSystemImageAddress.c)
 *     MmUnmapLockedRestartPages @ 0x140657488 (MmUnmapLockedRestartPages.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlClearBits @ 0x14002D6E0 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x1400767D0 (RtlNumberOfSetBits.c)
 *     RtlAreBitsSet @ 0x14009F964 (RtlAreBitsSet.c)
 *     MiUnlockDriverMappings @ 0x1400A28EC (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x1400A2928 (MiLockDriverMappings.c)
 *     MiInitializeTbFlushList @ 0x1400B5A30 (MiInitializeTbFlushList.c)
 *     MiReturnSystemVa @ 0x1400C08D0 (MiReturnSystemVa.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     KeReservePrivilegedPages @ 0x1401D20B0 (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseDriverPtes(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  ULONG v7; // r12d
  struct _RTL_BITMAP *v8; // r14
  struct _RTL_BITMAP *v9; // rdi
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
  v9 = (struct _RTL_BITMAP *)qword_140326850[v4];
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
    v9 = *(struct _RTL_BITMAP **)&v9->SizeOfBitMap;
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
      qword_140326850[a1] = v16;
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(v9, 0);
  }
}
