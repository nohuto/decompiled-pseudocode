/*
 * XREFs of PnpiUpdateForceActiveBothInterrupts @ 0x1C007DFE8
 * Callers:
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C007DE44 (PnpiBiosExtendedIrqToIoDescriptor.c)
 * Callees:
 *     AMLIGetNSObjectNameSegment @ 0x1C00044F4 (AMLIGetNSObjectNameSegment.c)
 *     AMLIFreeDataBuffs @ 0x1C0004D14 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     PnpiCleanupForceActiveBothInterrupts @ 0x1C0040770 (PnpiCleanupForceActiveBothInterrupts.c)
 *     ACPIRegLocalCopyString @ 0x1C00658B0 (ACPIRegLocalCopyString.c)
 *     OSCreateHandle @ 0x1C00669C8 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C0066A88 (OSWriteRegValue.c)
 *     ACPIAmliEvaluateDsm @ 0x1C006DFF0 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall PnpiUpdateForceActiveBothInterrupts(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  PVOID v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rcx
  int v7; // eax
  unsigned int *v8; // rsi
  __int64 v9; // rax
  PVOID PoolWithTag; // rax
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int Data; // [rsp+38h] [rbp-39h] BYREF
  PVOID P; // [rsp+40h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-29h] BYREF
  __int128 v17; // [rsp+58h] [rbp-19h] BYREF
  char v18[48]; // [rsp+68h] [rbp-9h] BYREF
  char SourceString[8]; // [rsp+98h] [rbp+27h] BYREF

  P = 0LL;
  if ( *(_DWORD *)(a1 + 648) != -1 )
    return 0LL;
  if ( !gAcpiHonorBiosPolarities )
  {
    *(_DWORD *)(a1 + 648) = 0;
    return 0LL;
  }
  memset(v18, 0, sizeof(v18));
  v3 = *(_QWORD *)(a1 + 704);
  v17 = INTERRUPT_DSM_GUID;
  result = ACPIAmliEvaluateDsm(v3, (__int64)&v17, 0, 0, (__int64)v18, &P);
  v4 = P;
  Data = result;
  if ( (int)result >= 0 )
  {
    if ( *((_WORD *)P + 1) == 3 && *((_DWORD *)P + 6) )
    {
      v5 = 2;
      if ( (**((_BYTE **)P + 4) & 2) == 0 )
      {
        *(_DWORD *)(a1 + 648) = 0;
LABEL_13:
        Data = 0;
LABEL_14:
        AMLIFreeDataBuffs((__int64)v4);
        result = Data;
        goto LABEL_15;
      }
      memset(v18, 0, sizeof(v18));
      AMLIFreeDataBuffs((__int64)P);
      ExFreePoolWithTag(v4, 0x52706341u);
      v6 = *(_QWORD *)(a1 + 704);
      P = 0LL;
      v17 = INTERRUPT_DSM_GUID;
      v7 = ACPIAmliEvaluateDsm(v6, (__int64)&v17, 0, 1u, (__int64)v18, &P);
      v4 = P;
      Data = v7;
      if ( v7 < 0 )
        goto LABEL_14;
      if ( *((_WORD *)P + 1) == 4 )
      {
        v8 = (unsigned int *)*((_QWORD *)P + 4);
        v9 = *v8;
        if ( (unsigned int)v9 <= 0x3FFFFFFF )
        {
          *(_DWORD *)(a1 + 648) = v9;
          if ( (_DWORD)v9 )
          {
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v9, 0x44706341u);
            *(_QWORD *)(a1 + 640) = PoolWithTag;
            if ( !PoolWithTag )
            {
              Data = -1073741823;
              goto LABEL_14;
            }
          }
          v11 = 0;
          if ( !*(_DWORD *)(a1 + 648) )
            goto LABEL_13;
          while ( 1 )
          {
            v12 = v11;
            v13 = 5LL * v11;
            if ( HIWORD(v8[10 * v11 + 2]) != 1 || *(_QWORD *)&v8[10 * v11 + 6] > 0xFFFFFFFFuLL )
              break;
            ++v11;
            *(_DWORD *)(*(_QWORD *)(a1 + 640) + 4 * v12) = v8[2 * v13 + 6];
            if ( v11 >= *(_DWORD *)(a1 + 648) )
              goto LABEL_13;
          }
          v5 = 4;
        }
        else
        {
          v5 = 3;
        }
      }
    }
    else
    {
      v5 = 1;
    }
    Data = -1073741823;
LABEL_43:
    KeBugCheckEx(0xA5u, 0x1000CuLL, 0LL, 1uLL, v5);
  }
  if ( (_DWORD)result == -1073741772 )
  {
    result = 0LL;
    *(_DWORD *)(a1 + 648) = 0;
    Data = 0;
  }
LABEL_15:
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x52706341u);
    result = Data;
  }
  if ( (int)result < 0 )
  {
    PnpiCleanupForceActiveBothInterrupts(a1);
    if ( (AcpiOverrideAttributes & 0x10000) != 0 )
    {
      if ( OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\DSMFailures", 0LL, &Handle) < 0 )
      {
        v5 = 10;
        goto LABEL_43;
      }
      LODWORD(P) = AMLIGetNSObjectNameSegment(*(_QWORD *)(a1 + 704));
      ACPIRegLocalCopyString((__int64)SourceString, (char *)&P, 4u);
      if ( !SourceString[0] )
      {
        v5 = 11;
        goto LABEL_43;
      }
      if ( OSWriteRegValue(SourceString, Handle, &Data, 4u) < 0 )
      {
        v5 = 12;
        goto LABEL_43;
      }
      ZwClose(Handle);
    }
    *(_DWORD *)(a1 + 648) = 0;
    return 0LL;
  }
  return result;
}
