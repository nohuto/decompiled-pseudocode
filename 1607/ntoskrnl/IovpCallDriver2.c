/*
 * XREFs of IovpCallDriver2 @ 0x14070ADD0
 * Callers:
 *     VfAfterCallDriver @ 0x14070B910 (VfAfterCallDriver.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViErrorReport1 @ 0x14022348C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140223508 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140223594 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140223630 (ViErrorReport6.c)
 *     IovUtilGetLowerDeviceObject @ 0x14070E044 (IovUtilGetLowerDeviceObject.c)
 *     IovUtilIsDeviceObjectMarked @ 0x14070E0DC (IovUtilIsDeviceObjectMarked.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140716B8C (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpSessionDataDereference @ 0x140717948 (IovpSessionDataDereference.c)
 */

_UNKNOWN **__fastcall IovpCallDriver2(__int64 a1, int *a2)
{
  _UNKNOWN **result; // rax
  _DWORD *v3; // rbp
  __int64 v6; // rsi
  KIRQL v7; // al
  bool v8; // zf
  int v9; // eax
  _QWORD *v10; // rdi
  __int64 LowerDeviceObject; // rax
  void *v12; // r15
  _QWORD *v13; // rdx
  __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // rcx
  unsigned int v17; // ecx
  int v18; // ecx
  int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rdx
  _QWORD *v24; // rax
  int v25; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_DWORD **)a1;
  if ( !*(_QWORD *)a1 )
    return result;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 8));
  v8 = *(_QWORD *)(v6 + 216) == 0LL;
  *(_BYTE *)(v6 + 16) = v7;
  if ( !v8 && (*(_DWORD *)(a1 + 24) & 0x2000000) != 0 )
    *a2 = 259;
  v9 = *(_DWORD *)(a1 + 24);
  v10 = *(_QWORD **)(a1 + 160);
  if ( (v9 & 0x20000000) != 0 && *a2 != 259 && (v9 & 0x1000000) == 0 )
  {
    LowerDeviceObject = IovUtilGetLowerDeviceObject(*(_QWORD *)(a1 + 160));
    v12 = (void *)LowerDeviceObject;
    if ( (*(_DWORD *)(a1 + 24) & 0x10000000) != 0 )
    {
LABEL_12:
      if ( !LowerDeviceObject )
        goto LABEL_19;
      v16 = *(_QWORD *)(v10[1] + 80LL);
      if ( v16 && *(_QWORD *)(v16 + 104) )
        goto LABEL_17;
      v17 = 541;
      goto LABEL_16;
    }
    v13 = *(_QWORD **)(a1 + 64);
    v14 = *(_QWORD *)(v13[39] + 40LL);
    if ( !v14 )
      goto LABEL_17;
    v15 = *(_DWORD *)(v14 + 396);
    if ( (v15 & 0x10) == 0 )
    {
      if ( (v15 & 0x10000) == 0 )
        goto LABEL_17;
      goto LABEL_12;
    }
    if ( v10 == v13 )
    {
      if ( (unsigned int)IovUtilIsDeviceObjectMarked(v10, 0LL) )
      {
        v17 = 545;
LABEL_16:
        ViErrorReport10(v17, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v10);
      }
    }
    else if ( !(unsigned int)IovUtilIsDeviceObjectMarked(v10, 0LL)
           && (unsigned int)IovUtilIsDeviceObjectMarked(v10, 0LL) )
    {
      v17 = 547;
      goto LABEL_16;
    }
LABEL_17:
    if ( v12 )
      ObfDereferenceObject(v12);
  }
LABEL_19:
  v18 = *(_DWORD *)(a1 + 24);
  if ( (v18 & 0x40000000) == 0 || (v3[8] & 2) != 0 )
    goto LABEL_35;
  v19 = *a2;
  if ( (v18 & 0x2000000) != 0 )
  {
    if ( v19 == 259 || (v18 & 0x1000000) != 0 )
      goto LABEL_35;
    v20 = 574LL;
  }
  else
  {
    if ( v19 != 259 && (v18 & 0x1000000) == 0 )
      goto LABEL_35;
    v20 = 588LL;
  }
  ViErrorReport6(v20, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v19);
  v3[8] |= 2u;
LABEL_35:
  if ( (*(_DWORD *)(a1 + 24) & 0x40000000) != 0 )
  {
    v21 = (unsigned int)*a2;
    v22 = *(_DWORD *)(a1 + 56);
    if ( (_DWORD)v21 == v22 || (_DWORD)v21 == 259 )
    {
      if ( (_DWORD)v21 == -1 )
        ViErrorReport6(549LL, *(const void **)(a1 + 48), *(const void **)(a1 + 72), -1);
    }
    else
    {
      if ( (v3[8] & 1) == 0 )
        ViErrorReport4(v21, *(const void **)(a1 + 48), (const void **)(a1 + 72), v22, *a2);
      v3[8] |= 1u;
    }
  }
  else
  {
    if ( *a2 != 259 )
    {
      if ( (*(_DWORD *)(v6 + 56) & 0x400000) == 0 )
        ViErrorReport1(0x226u, *(const void **)(a1 + 48), *(const void **)(a1 + 72));
      *(_DWORD *)(v6 + 56) |= 0x400000u;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) |= 0x4000000u;
    v23 = *(_QWORD *)(a1 + 32);
    v24 = *(_QWORD **)(a1 + 40);
    if ( *(_QWORD *)(v23 + 8) != a1 + 32 || *v24 != a1 + 32 )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
  }
  v25 = *(_DWORD *)(a1 + 24);
  if ( (v25 & 0x8000000) != 0 && *a2 != 259 && (v25 & 0x1000000) == 0 )
    *a2 = *(_DWORD *)(a1 + 60);
  IovpSessionDataDereference(v3);
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 20));
  return (_UNKNOWN **)VfIrpDatabaseEntryReleaseLock(v6);
}
