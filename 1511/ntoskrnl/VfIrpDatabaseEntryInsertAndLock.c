/*
 * XREFs of VfIrpDatabaseEntryInsertAndLock @ 0x1406C8110
 * Callers:
 *     VfPacketCreateAndLock @ 0x1406C8FF4 (VfPacketCreateAndLock.c)
 * Callees:
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14020BED8 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x14020BF28 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeAdd @ 0x1406B7368 (VfUtilAddressRangeAdd.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1406C806C (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfIrpDatabaseEntryInsertAndLock(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  unsigned __int64 *v10; // rcx
  __int64 result; // rax
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  *(_QWORD *)(a3 + 8) = 0LL;
  v3 = (_QWORD *)(a3 + 32);
  *(_DWORD *)(a3 + 28) = 0;
  *(_DWORD *)(a3 + 24) = 1;
  *(_QWORD *)a3 = a1;
  *(_DWORD *)(a3 + 20) = 1;
  *(_QWORD *)(a3 + 40) = a3 + 32;
  *(_QWORD *)(a3 + 32) = a3 + 32;
  *(_QWORD *)(a3 + 48) = ViPacketNotificationCallback;
  v6 = (unsigned __int8)(-125 * (a1 >> 12));
  ViIrpDatabaseAcquireLockExclusive((KIRQL *)&v12);
  v7 = 16LL * v6;
  v8 = (_QWORD *)(v7 + ViIrpDatabase);
  v9 = *(_QWORD *)(v7 + ViIrpDatabase);
  *v3 = v9;
  v3[1] = v8;
  if ( *(_QWORD **)(v9 + 8) != v8 )
    __fastfail(3u);
  v10 = (unsigned __int64 *)(ViIrpDatabaseAddressRanges + v7);
  *(_QWORD *)(v9 + 8) = v3;
  *v8 = v3;
  VfUtilAddressRangeAdd(v10, a1, 208LL);
  ViIrpDatabaseReleaseLockExclusive(v12);
  result = VfIrpDatabaseEntryFindAndLock(a1);
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 20));
  --*(_DWORD *)(a3 + 24);
  return result;
}
