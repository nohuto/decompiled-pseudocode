/*
 * XREFs of AcpiEval_PCCP @ 0x1C001D4D4
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     AcpiParseCore @ 0x1C0013D8C (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x1C00147C8 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PCCP(__int64 a1, _QWORD *a2)
{
  _QWORD *PoolWithTag; // rdi
  int v5; // r14d
  _WORD *v6; // rbx
  int v8; // [rsp+30h] [rbp-40h]
  unsigned __int8 v9[2]; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+42h] [rbp-2Eh]
  const char *v11; // [rsp+48h] [rbp-28h]
  __int64 (__fastcall *v12)(__int64, _DWORD *, unsigned int); // [rsp+50h] [rbp-20h]
  char v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ah] [rbp-16h]
  const char *v15; // [rsp+60h] [rbp-10h]
  __int64 (__fastcall *v16)(__int64, _DWORD *, unsigned int); // [rsp+68h] [rbp-8h]
  int v17; // [rsp+A0h] [rbp+30h] BYREF
  PVOID P; // [rsp+B0h] [rbp+40h] BYREF

  v13 = 1;
  v9[0] = 0;
  v11 = "InputBufferOffset";
  v10 = 0;
  v12 = AcpiParseULong;
  v15 = "OutputBufferOffset";
  v14 = 0x40000;
  PoolWithTag = 0LL;
  v16 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1036), 0x8000u);
  v5 = AcpiEvaluateMethod(a1, 1346585424, 0LL, (unsigned int **)&P, &v17);
  if ( v5 >= 0 )
  {
    *(_QWORD *)(a1 + 240) |= *(_DWORD *)(a1 + 248) & 0x80000000;
    if ( v17 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x72637250u);
      if ( PoolWithTag )
      {
        v6 = P;
        *PoolWithTag = 0LL;
        v5 = AcpiParseCore(v9, 2u, v6 + 6, *((_DWORD *)v6 + 1) - 12, (__int64)PoolWithTag, 8, v8, 0);
        if ( v5 >= 0 )
        {
          *a2 = PoolWithTag;
          goto LABEL_7;
        }
      }
      else
      {
        v5 = -1073741670;
      }
    }
    else
    {
      v5 = -1073741275;
    }
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1040), 0x8000u);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  v6 = P;
LABEL_7:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v5;
}
