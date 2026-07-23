/*
 * XREFs of VfIrpDatabaseEntryInsertAndLock @ 0x140716AB4
 * Callers:
 *     VfPacketCreateAndLock @ 0x1407179C0 (VfPacketCreateAndLock.c)
 * Callees:
 *     ViIrpDatabaseAcquireLockExclusive @ 0x140223AAC (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x140223AEC (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeAdd @ 0x140702B88 (VfUtilAddressRangeAdd.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140716A10 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfIrpDatabaseEntryInsertAndLock(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
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
  ViIrpDatabaseAcquireLockExclusive((KIRQL *)&v11);
  v7 = 16LL * v6;
  v8 = (_QWORD *)(v7 + ViIrpDatabase);
  v9 = *(_QWORD *)(v7 + ViIrpDatabase);
  if ( *(_QWORD *)(v9 + 8) != v7 + ViIrpDatabase )
    __fastfail(3u);
  v3[1] = v8;
  *v3 = v9;
  *(_QWORD *)(v9 + 8) = v3;
  *v8 = v3;
  VfUtilAddressRangeAdd((unsigned __int64 *)(v7 + ViIrpDatabaseAddressRanges), a1, 208LL);
  ViIrpDatabaseReleaseLockExclusive(v11);
  result = VfIrpDatabaseEntryFindAndLock(a1);
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 20));
  --*(_DWORD *)(a3 + 24);
  return result;
}
