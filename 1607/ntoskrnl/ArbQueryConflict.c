/*
 * XREFs of ArbQueryConflict @ 0x1406E5088
 * Callers:
 *     IopMemQueryConflict @ 0x14062E914 (IopMemQueryConflict.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IoGetDeviceProperty @ 0x1404DC2F8 (IoGetDeviceProperty.c)
 *     ArbpBuildAlternative @ 0x140559F84 (ArbpBuildAlternative.c)
 *     RtlCopyRangeList @ 0x14055AA1C (RtlCopyRangeList.c)
 *     RtlDeleteOwnersRanges @ 0x14055AD44 (RtlDeleteOwnersRanges.c)
 *     RtlFreeRangeList @ 0x14055AE14 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbQueryConflict(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  PVOID PoolWithTag; // rsi
  __int64 v6; // r13
  __int64 v7; // r12
  struct _RTL_RANGE_LIST *v8; // rdx
  struct _RTL_RANGE_LIST *v9; // rcx
  int v10; // edi
  NTSTATUS DeviceProperty; // eax
  int v12; // ecx
  NTSTATUS v13; // eax
  int v14; // ecx
  void *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-D0h]
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h]
  _QWORD v24[10]; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT v25[12]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+100h] [rbp+0h] BYREF
  __int64 v27; // [rsp+108h] [rbp+8h]

  v4 = 0;
  PoolWithTag = 0LL;
  LODWORD(v6) = 10;
  memset(v24, 0, sizeof(v24));
  v7 = *(_QWORD *)(a1 + 328);
  v8 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  v20 = *(_QWORD *)(a1 + 320);
  *(_QWORD *)(a1 + 328) = ArbpQueryConflictCallback;
  v9 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  *(_QWORD *)(a1 + 320) = &v21;
  v23 = v7;
  v10 = RtlCopyRangeList(v9, v8);
  if ( v10 < 0 )
    goto LABEL_18;
  v10 = ArbpBuildAlternative(a1, *(_QWORD *)(a2 + 8), &v26);
  if ( v10 < 0 )
    goto LABEL_18;
  memset(v24, 0, sizeof(v24));
  v24[1] = v27;
  v24[3] = v27;
  v24[0] = v26;
  v24[5] = &v26;
  v24[7] = &v26;
  v24[2] = v26;
  v24[4] = v25;
  LODWORD(v24[6]) = 1;
  LOWORD(v24[8]) = 4;
  memset(v25, 0, sizeof(v25));
  v25[4] = *(PDEVICE_OBJECT *)a2;
  LODWORD(v25[5]) = 4;
  DeviceProperty = IoGetDeviceProperty(v25[4], DevicePropertyLegacyBusType, 4u, &v25[7], &ResultLength);
  v12 = (int)v25[7];
  if ( DeviceProperty < 0 )
    v12 = 1;
  LODWORD(v25[7]) = v12;
  v13 = IoGetDeviceProperty(*(PDEVICE_OBJECT *)a2, DevicePropertyBusNumber, 4u, &v25[8], &ResultLength);
  v14 = (int)v25[8];
  if ( v13 < 0 )
    v14 = 0;
  LODWORD(v25[8]) = v14;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x43627241u);
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
LABEL_18:
    v17 = v20;
    goto LABEL_19;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 224))(a1, v24);
  if ( v10 < 0 )
    goto LABEL_18;
  RtlDeleteOwnersRanges(*(PRTL_RANGE_LIST *)(a1 + 48), *(PVOID *)(v24[4] + 32LL));
  while ( 1 )
  {
    v24[2] = v24[0];
    v10 = 0;
    v24[3] = v24[1];
    v21 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(a1 + 248))(a1, v24) )
      break;
    if ( v4 == (_DWORD)v6 )
    {
      v6 = (unsigned int)(v6 + 5);
      v15 = PoolWithTag;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24 * v6, 0x43627241u);
      if ( !PoolWithTag )
      {
        v10 = -1073741670;
        PoolWithTag = v15;
LABEL_17:
        v7 = v23;
        goto LABEL_18;
      }
      memmove(PoolWithTag, v15, 24LL * v4);
      ExFreePoolWithTag(v15, 0);
    }
    if ( !v21 )
    {
      v19 = 3LL * v4;
      *((_QWORD *)PoolWithTag + v19 + 2) = -1LL;
      ++v4;
      *((_QWORD *)PoolWithTag + v19) = 0LL;
      *((_QWORD *)PoolWithTag + v19 + 1) = 0LL;
      break;
    }
    v16 = 3LL * v4++;
    *((_QWORD *)PoolWithTag + v16) = *(_QWORD *)(v21 + 24);
    *((_QWORD *)PoolWithTag + v16 + 1) = *(_QWORD *)v21;
    *((_QWORD *)PoolWithTag + v16 + 2) = *(_QWORD *)(v21 + 8);
    v10 = RtlDeleteOwnersRanges(*(PRTL_RANGE_LIST *)(a1 + 48), *(PVOID *)(v21 + 24));
    if ( v10 < 0 )
      goto LABEL_17;
  }
  RtlFreeRangeList(*(PRTL_RANGE_LIST *)(a1 + 48));
  v7 = v23;
  v17 = v20;
  *(_QWORD *)(a1 + 328) = v23;
  *(_QWORD *)(a1 + 320) = v20;
  **(_QWORD **)(a2 + 24) = PoolWithTag;
  **(_DWORD **)(a2 + 16) = v4;
LABEL_19:
  if ( (v24[8] & 0x10) != 0 )
  {
    ExFreePoolWithTag((PVOID)v24[9], 0);
    LOWORD(v24[8]) &= ~0x10u;
  }
  if ( v10 < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    RtlFreeRangeList(*(PRTL_RANGE_LIST *)(a1 + 48));
    *(_QWORD *)(a1 + 328) = v7;
    *(_QWORD *)(a1 + 320) = v17;
    **(_QWORD **)(a2 + 24) = 0LL;
  }
  return (unsigned int)v10;
}
