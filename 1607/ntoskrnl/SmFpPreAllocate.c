/*
 * XREFs of SmFpPreAllocate @ 0x140148E48
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140004B28 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140148DBC (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmFirstTimeInit @ 0x1403E4E40 (SmFirstTimeInit.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140003E04 (SmAcquireReleaseCharges.c)
 *     SmFpCleanup @ 0x140003F2C (SmFpCleanup.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     SmKmAllocateMdlForLock @ 0x14012F67C (SmKmAllocateMdlForLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MmAllocateMappingAddress @ 0x14052C83C (MmAllocateMappingAddress.c)
 */

__int64 __fastcall SmFpPreAllocate(PEX_SPIN_LOCK SpinLock, unsigned int *a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int *v6; // r12
  unsigned int v7; // ecx
  unsigned int v8; // r15d
  __int64 v9; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  void *MdlForLock; // rax
  unsigned int v15; // eax
  KIRQL v16; // al
  int v17; // edx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  unsigned int v20; // ebx
  _OWORD v22[7]; // [rsp+20h] [rbp-49h] BYREF

  v4 = a3;
  memset(v22, 0, sizeof(v22));
  HIDWORD(v22[0]) = 0;
  *((_QWORD *)&v22[1] + 1) = &v22[1];
  v6 = &a2[v4];
  WORD4(v22[0]) = 1;
  *(_QWORD *)&v22[1] = &v22[1];
  BYTE10(v22[0]) = 6;
  while ( 1 )
  {
    if ( a2 >= v6 )
    {
      v16 = ExAcquireSpinLockExclusive(SpinLock);
      v17 = v22[6];
      v18 = v22[3];
      *((_QWORD *)SpinLock + 11) = *((_QWORD *)&v22[5] + 1);
      *((_OWORD *)SpinLock + 2) = v22[2];
      *((_DWORD *)SpinLock + 24) = v17;
      v19 = v22[4];
      *((_OWORD *)SpinLock + 3) = v18;
      *((_OWORD *)SpinLock + 4) = v19;
      ExReleaseSpinLockExclusive(SpinLock, v16);
      return 0;
    }
    v7 = *a2;
    v8 = 0;
    v9 = *a2 & 0xF;
    *((_WORD *)&v22[5] + v9 + 4) = *a2 >> 4;
    if ( (v7 & 0xFF00000) != 0 )
      break;
LABEL_11:
    ++a2;
  }
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x70466D73u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    v12 = *a2;
    v13 = *a2 & 0xF;
    if ( v13 == 2 )
    {
      MdlForLock = SmKmAllocateMdlForLock((unsigned __int64)(unsigned __int16)(v12 >> 4) << 12);
      goto LABEL_9;
    }
    if ( v13 != 3 )
    {
      if ( v13 >= 5 )
        MdlForLock = MmAllocateMappingAddress((unsigned __int16)((unsigned int)v12 >> 4) << 12, 0x6D526D73u);
      else
        MdlForLock = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(v12 >> 4), 0x70466D73u);
LABEL_9:
      if ( !MdlForLock )
        break;
      goto LABEL_10;
    }
    if ( !(unsigned int)SmAcquireReleaseCharges((unsigned __int64)(unsigned __int16)(v12 >> 4) << 12, 1, 0) )
      break;
    MdlForLock = (void *)(8LL * (v8 + 1));
LABEL_10:
    v11[1] = MdlForLock;
    ++v8;
    *v11 = *((_QWORD *)&v22[2] + v9);
    v15 = (unsigned __int8)(*a2 >> 20);
    *((_QWORD *)&v22[2] + v9) = v11;
    if ( v8 >= v15 )
      goto LABEL_11;
  }
  v20 = -1073741670;
  SmFpCleanup((__int64)v22);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return v20;
}
