/*
 * XREFs of IrqLibAllocateMessageTarget @ 0x1C007FDB0
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibReleaseArbiterLock @ 0x1C0019894 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C00198A8 (IrqLibAcquireArbiterLock.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C0019B44 (ProcessorDeleteDeviceIdtAssignment.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall IrqLibAllocateMessageTarget(
        PVOID Owner,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        unsigned int *a6,
        _BYTE *a7,
        _DWORD *a8)
{
  int v11; // r14d
  NTSTATUS Range; // edi
  __int16 v13; // di
  char *PoolWithTag; // rax
  char *UserData; // rbx
  unsigned int v16; // eax
  ULONGLONG End; // [rsp+60h] [rbp-79h] BYREF
  _QWORD v20[4]; // [rsp+68h] [rbp-71h] BYREF
  __int128 v21; // [rsp+88h] [rbp-51h] BYREF
  unsigned int v22; // [rsp+9Ch] [rbp-3Dh]
  _BYTE v23[40]; // [rsp+A8h] [rbp-31h] BYREF

  if ( KeGetCurrentIrql() )
    return 3221225659LL;
  v22 = 0;
  if ( (unsigned int)(IrqLibRealInterruptModel - 1) > 2 )
    return 3221225659LL;
  v11 = 1;
  IrqLibAcquireArbiterLock(1);
  Range = RtlFindRange(RangeList, 0xFFF00000uLL, 0xFFFFFFFEuLL, 1u, 1u, 0, 0, 0LL, 0LL, &End);
  if ( Range < 0 )
    goto LABEL_14;
  if ( a4 == 1 )
  {
    v13 = 1;
  }
  else
  {
    v13 = 0;
    v11 = 0;
  }
  memset(v20, 0, sizeof(v20));
  BYTE1(v20[0]) = 2;
  LOWORD(v20[2]) = 4;
  BYTE2(v20[0]) = a5 != 0 ? 3 : 1;
  WORD2(v20[0]) = v13 | 4;
  HIDWORD(v20[2]) = 2;
  WORD1(v20[2]) = *(_WORD *)(a2 + 8);
  v20[3] = *(_QWORD *)a2;
  memset(v23, 0, sizeof(v23));
  Range = ((__int64 (__fastcall *)(PVOID, _QWORD *, _QWORD, _BYTE *, int, int, _DWORD, _DWORD, __int128 *))ProcessorReserveIdtEntries)(
            Owner,
            v20,
            (unsigned int)End,
            v23,
            a3,
            v13 & 1,
            0,
            0,
            &v21);
  if ( Range < 0 )
    goto LABEL_14;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x49706341u);
  UserData = PoolWithTag;
  if ( !PoolWithTag )
  {
    Range = -1073741670;
    goto LABEL_14;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  UserData[38] = a3;
  *(_DWORD *)UserData = 1;
  *((_DWORD *)UserData + 1) = 2;
  *((_DWORD *)UserData + 2) = 3;
  *((_DWORD *)UserData + 8) = 1;
  *((_DWORD *)UserData + 15) = 0;
  *((_DWORD *)UserData + 16) = v11;
  *(_OWORD *)(UserData + 72) = v21;
  Range = RtlAddRange(RangeList, End, End, 0, 0x10u, UserData, Owner);
  if ( Range < 0 )
  {
    ExFreePoolWithTag(UserData, 0);
LABEL_14:
    if ( v22 )
      ProcessorDeleteDeviceIdtAssignment(Owner, End, v22, 0);
    goto LABEL_16;
  }
  *a7 = HalConvertDeviceIdtToIrql(v22);
  Range = 0;
  v16 = v22;
  *a8 = v22;
  *a6 = v16;
LABEL_16:
  IrqLibReleaseArbiterLock();
  return (unsigned int)Range;
}
