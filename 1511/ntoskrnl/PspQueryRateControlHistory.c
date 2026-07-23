/*
 * XREFs of PspQueryRateControlHistory @ 0x1403EBB78
 * Callers:
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPreCallback @ 0x1403EBA78 (PspEnforceLimitsJobPreCallback.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140021E20 (RtlNumberOfSetBits.c)
 *     KeQuerySchedulingGroupHistory @ 0x140022014 (KeQuerySchedulingGroupHistory.c)
 *     RtlCopyBitMap @ 0x1400220C8 (RtlCopyBitMap.c)
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IoQueryFlowHistory @ 0x1401BD758 (IoQueryFlowHistory.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PspGetRateControlHeaderPtr @ 0x1403EBDB4 (PspGetRateControlHeaderPtr.c)
 *     PspNetRateControlDispatch @ 0x140642198 (PspNetRateControlDispatch.c)
 */

__int64 __fastcall PspQueryRateControlHistory(__int64 a1, int a2, char a3, _DWORD *a4, unsigned int a5)
{
  __int64 result; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // ecx
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // eax
  void *v16; // rcx
  unsigned int v17; // r15d
  unsigned int v18; // ebx
  void *v19; // rcx
  ULONG v20; // ecx
  _QWORD *v21; // r8
  __int64 v22; // rcx
  ULONG TargetBit; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-4Ch] BYREF
  __int64 v25; // [rsp+28h] [rbp-48h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-40h] BYREF
  __int64 v27; // [rsp+40h] [rbp-30h] BYREF
  int v28; // [rsp+48h] [rbp-28h]
  __int64 v29; // [rsp+50h] [rbp-20h]
  unsigned int v30; // [rsp+58h] [rbp-18h]
  ULONG v31; // [rsp+5Ch] [rbp-14h]

  *a4 = 0;
  result = PspGetRateControlHeaderPtr(a1, a5);
  v11 = *(_QWORD *)result;
  if ( *(_QWORD *)result )
  {
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        result = IoQueryFlowHistory(v10 + 1232, (__int64)&v25, (__int64)&v24, (__int64)&TargetBit);
        if ( (int)result < 0 )
          return result;
      }
      else
      {
        KeQuerySchedulingGroupHistory(v11 + 128, &v25, &v24, &TargetBit);
      }
      v12 = v24;
    }
    else
    {
      v28 = 1;
      v27 = *(_QWORD *)(v11 + 56);
      result = PspNetRateControlDispatch(&v27);
      if ( (int)result < 0 )
        return result;
      v12 = v30;
      v25 = v29;
      TargetBit = v31;
      v24 = v30;
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
    v15 = (v12 + v14 - 1) / v12;
    v16 = *(void **)(v11 + 24);
    v17 = v15;
    v18 = (v15 + 7) >> 3;
    if ( v18 < 8 )
      v18 = 8;
    if ( v16 && *(_QWORD *)(v11 + 32) < (unsigned __int64)v18 )
    {
      ExFreePoolWithTag(v16, 0x624A7350u);
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_QWORD *)(v11 + 32) = 0LL;
    }
    v19 = *(void **)(v11 + 24);
    if ( v19 )
    {
      if ( TargetBit >= 8 * v18 )
      {
        memset(v19, 0, v18);
      }
      else if ( TargetBit )
      {
        RtlCopyBitMap((PRTL_BITMAP)(v11 + 8), (PRTL_BITMAP)(v11 + 8), TargetBit);
        RtlClearBits((PRTL_BITMAP)(v11 + 8), 0, TargetBit);
      }
    }
    else
    {
      result = (__int64)ExAllocatePoolWithTag(PagedPool, v18, 0x624A7350u);
      *(_QWORD *)(v11 + 24) = result;
      if ( !result )
        return result;
      memset((void *)result, 0, v18);
      v22 = *(_QWORD *)(v11 + 24);
      *(_DWORD *)(v11 + 8) = 8 * v18;
      *(_QWORD *)(v11 + 16) = v22;
      *(_QWORD *)(v11 + 32) = v18;
    }
    v20 = TargetBit;
    BitMapHeader.SizeOfBitMap = v17;
    if ( TargetBit > 0x40 )
      v20 = 64;
    TargetBit = v20;
    v21 = *(_QWORD **)(v11 + 24);
    *v21 &= ~((1LL << v20) - 1);
    *v21 |= v25 & ((1LL << TargetBit) - 1);
    BitMapHeader.Buffer = *(unsigned int **)(v11 + 24);
    result = 100 * RtlNumberOfSetBits(&BitMapHeader) / v17;
    if ( (unsigned int)result >= 0x3C )
    {
      *a4 = 3;
    }
    else if ( (unsigned int)result >= 0x28 )
    {
      *a4 = 2;
    }
    else if ( (unsigned int)result >= 0x14 )
    {
      *a4 = 1;
    }
    if ( a3 )
      return (__int64)memset(*(void **)(v11 + 24), 0, *(_QWORD *)(v11 + 32));
  }
  return result;
}
