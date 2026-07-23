/*
 * XREFs of PspQueryRateControlHistory @ 0x14046804C
 * Callers:
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPreCallback @ 0x140467F4C (PspEnforceLimitsJobPreCallback.c)
 * Callees:
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x140076850 (RtlNumberOfSetBits.c)
 *     KeQuerySchedulingGroupHistory @ 0x140076A28 (KeQuerySchedulingGroupHistory.c)
 *     RtlCopyBitMap @ 0x140076AF8 (RtlCopyBitMap.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PspJobIoRateQueryHistory @ 0x14020F6EC (PspJobIoRateQueryHistory.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PspGetRateControlHeaderPtr @ 0x140468298 (PspGetRateControlHeaderPtr.c)
 *     PspNetRateControlDispatch @ 0x1406806BC (PspNetRateControlDispatch.c)
 */

void __fastcall PspQueryRateControlHistory(__int64 a1, int a2, char a3, _DWORD *a4, int a5)
{
  int v6; // edx
  char v8; // r15
  __int64 v9; // rdi
  unsigned int v10; // esi
  unsigned int v11; // ecx
  __int64 v12; // r12
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // eax
  void *v16; // rcx
  unsigned int v17; // r13d
  unsigned int v18; // ebx
  void *v19; // rcx
  PVOID PoolWithTag; // rax
  __int64 v21; // rcx
  __int64 *v22; // rdx
  ULONG v23; // eax
  ULONG TargetBit; // [rsp+24h] [rbp-4Ch] BYREF
  unsigned int v26; // [rsp+28h] [rbp-48h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-40h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h] BYREF
  int v29; // [rsp+48h] [rbp-28h]
  __int64 v30; // [rsp+50h] [rbp-20h]
  unsigned int v31; // [rsp+58h] [rbp-18h]
  unsigned int v32; // [rsp+5Ch] [rbp-14h]

  *a4 = 0;
  v6 = a5;
  v8 = a3;
  if ( a5 == 1 )
    v9 = a1 + 1352;
  else
    v9 = *(_QWORD *)PspGetRateControlHeaderPtr();
  if ( v9 )
  {
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( (int)PspJobIoRateQueryHistory(a1, &BitMapHeader, &v26, &TargetBit) < 0 )
          return;
      }
      else
      {
        KeQuerySchedulingGroupHistory(v9 + 128, &BitMapHeader, &v26, &TargetBit);
      }
      v10 = TargetBit;
      v11 = v26;
      v12 = *(_QWORD *)&BitMapHeader.SizeOfBitMap;
    }
    else
    {
      v29 = 1;
      v28 = *(_QWORD *)(v9 + 56);
      if ( (int)PspNetRateControlDispatch(&v28) < 0 )
        return;
      v12 = v30;
      v11 = v31;
      v10 = v32;
    }
    v13 = a2 - 2;
    if ( v13 )
    {
      if ( v13 == 1 )
        v14 = 600000;
      else
        v14 = 10000;
    }
    else
    {
      v14 = 60000;
    }
    v15 = (v11 + v14 - 1) / v11;
    v16 = *(void **)(v9 + 24);
    v17 = v15;
    v18 = (v15 + 7) >> 3;
    if ( v18 < 8 )
      v18 = 8;
    if ( v16 && *(_QWORD *)(v9 + 32) < (unsigned __int64)v18 )
    {
      ExFreePoolWithTag(v16, 0x624A7350u);
      *(_QWORD *)(v9 + 24) = 0LL;
      *(_QWORD *)(v9 + 32) = 0LL;
    }
    v19 = *(void **)(v9 + 24);
    if ( v19 )
    {
      if ( v10 < 8 * v18 )
      {
        if ( v10 )
        {
          RtlCopyBitMap((PRTL_BITMAP)(v9 + 8), (PRTL_BITMAP)(v9 + 8), v10);
          RtlClearBits((PRTL_BITMAP)(v9 + 8), 0, v10);
        }
      }
      else
      {
        memset(v19, 0, v18);
      }
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18, 0x624A7350u);
      *(_QWORD *)(v9 + 24) = PoolWithTag;
      if ( !PoolWithTag )
        return;
      memset(PoolWithTag, 0, v18);
      v21 = *(_QWORD *)(v9 + 24);
      *(_DWORD *)(v9 + 8) = 8 * v18;
      *(_QWORD *)(v9 + 16) = v21;
      *(_QWORD *)(v9 + 32) = v18;
      v8 = a3;
    }
    v22 = *(__int64 **)(v9 + 24);
    BitMapHeader.SizeOfBitMap = v17;
    if ( v10 > 0x40 )
      LOBYTE(v10) = 64;
    *v22 = v12 & ((1LL << v10) - 1) | *v22 & ~((1LL << v10) - 1);
    BitMapHeader.Buffer = *(unsigned int **)(v9 + 24);
    v23 = 100 * RtlNumberOfSetBits(&BitMapHeader) / v17;
    if ( v23 < 0x3C )
    {
      if ( v23 < 0x28 )
      {
        if ( v23 >= 0x14 )
          *a4 = 1;
      }
      else
      {
        *a4 = 2;
      }
    }
    else
    {
      *a4 = 3;
    }
    if ( v8 )
      memset(*(void **)(v9 + 24), 0, *(_QWORD *)(v9 + 32));
  }
}
