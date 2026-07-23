/*
 * XREFs of MiReleaseDriverPtes @ 0x140521ACC
 * Callers:
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiReturnSystemImageAddress @ 0x140521A7C (MiReturnSystemImageAddress.c)
 *     MiReserveDriverPtes @ 0x140579058 (MiReserveDriverPtes.c)
 *     MmUnmapLockedRestartPages @ 0x1406A0550 (MmUnmapLockedRestartPages.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 *     MiUnlockDriverMappings @ 0x140107D04 (MiUnlockDriverMappings.c)
 *     RtlAreBitsSet @ 0x140107D64 (RtlAreBitsSet.c)
 *     MiLockDriverMappings @ 0x140107DF8 (MiLockDriverMappings.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     MiInitializeTbFlushList @ 0x1401088BC (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeReservePrivilegedPages @ 0x1401FF280 (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseDriverPtes(unsigned int a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  ULONG v8; // r12d
  _RTL_BITMAP *v9; // r14
  _RTL_BITMAP *v10; // rbx
  unsigned int *Buffer; // rdx
  ULONG v12; // r15d
  unsigned __int64 v13; // r10
  int v14; // r9d
  _BYTE *v15; // rdi
  int v16; // r11d
  __int64 v17; // rax
  _BYTE v19[192]; // [rsp+40h] [rbp-108h] BYREF

  v4 = a3;
  v5 = a1;
  if ( (MiFlags & 0x10000) != 0 )
    KeReservePrivilegedPages((__int64)(a2 << 25) >> 16, a3, 0);
  CurrentThread = KeGetCurrentThread();
  v8 = (unsigned int)(v4 + 15) >> 4;
  v9 = 0LL;
  MiLockDriverMappings((__int64)CurrentThread, a2, a3, a4);
  v10 = (_RTL_BITMAP *)qword_14034EA40[v5];
  if ( !v10 )
    goto LABEL_20;
  do
  {
    Buffer = v10->Buffer;
    if ( a2 >= (unsigned __int64)Buffer
      && a2 < (unsigned __int64)&Buffer[2 * ((unsigned __int64)(v10[1].SizeOfBitMap << 16) >> 12)] )
    {
      break;
    }
    v9 = v10;
    v10 = *(_RTL_BITMAP **)&v10->SizeOfBitMap;
  }
  while ( v10 );
  if ( !v10 )
LABEL_20:
    KeBugCheckEx(0x1Au, 0x2102uLL, (__int64)(a2 << 25) >> 16, (unsigned int)(v4 << 12), 0LL);
  v12 = (unsigned int)((__int64)(a2 - (unsigned __int64)v10->Buffer) >> 3) >> 4;
  if ( !RtlAreBitsSet(v10 + 1, v12, v8) )
    KeBugCheckEx(0x1Au, 0x2103uLL, (__int64)(a2 << 25) >> 16, (unsigned int)(v4 << 12), 0LL);
  RtlClearBits(v10 + 1, v12, v8);
  if ( RtlNumberOfSetBits(v10 + 1) )
  {
    MiUnlockDriverMappings((__int64)CurrentThread);
  }
  else
  {
    v13 = (__int64)v10->Buffer << 25 >> 16;
    v14 = 16 * v10[1].SizeOfBitMap;
    if ( a1 )
    {
      v15 = 0LL;
      v16 = 11;
    }
    else
    {
      v15 = v19;
      MiInitializeTbFlushList((__int64)v19, 0, 20);
    }
    MiReturnSystemVa(v13, v13 + (unsigned int)(v14 << 12), v16, (__int64)v15);
    v17 = *(_QWORD *)&v10->SizeOfBitMap;
    if ( v9 )
      *(_QWORD *)&v9->SizeOfBitMap = v17;
    else
      qword_14034EA40[a1] = v17;
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(v10, 0);
  }
}
