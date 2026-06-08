/*
 * XREFs of AcpiEval_PCCP @ 0x1C0010970
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C001D9F8 (InitAcpiLegacyPcc.c)
 * Callees:
 *     AcpiEvaluateMethod @ 0x1C000F4D8 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0011050 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_PCCP(__int64 a1, _QWORD *a2)
{
  _QWORD *PoolWithTag; // rdi
  int v5; // r14d
  _DWORD *v6; // rbx
  char v8; // [rsp+40h] [rbp-30h] BYREF
  int v9; // [rsp+42h] [rbp-2Eh]
  const char *v10; // [rsp+48h] [rbp-28h]
  __int64 (__fastcall *v11)(); // [rsp+50h] [rbp-20h]
  char v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ah] [rbp-16h]
  const char *v14; // [rsp+60h] [rbp-10h]
  __int64 (__fastcall *v15)(); // [rsp+68h] [rbp-8h]
  int v16; // [rsp+A0h] [rbp+30h] BYREF
  PVOID P; // [rsp+B0h] [rbp+40h] BYREF

  v12 = 1;
  v8 = 0;
  v10 = "InputBufferOffset";
  v9 = 0;
  v11 = AcpiParseULong;
  v14 = "OutputBufferOffset";
  v13 = 0x40000;
  PoolWithTag = 0LL;
  v15 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1036), 0x8000u);
  v5 = AcpiEvaluateMethod(a1, 1346585424, 0LL, (unsigned int **)&P, &v16);
  if ( v5 >= 0 )
  {
    *(_QWORD *)(a1 + 240) |= *(_DWORD *)(a1 + 248) & 0x80000000;
    if ( v16 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x72637250u);
      if ( PoolWithTag )
      {
        v6 = P;
        *PoolWithTag = 0LL;
        v5 = AcpiParseCore((unsigned int)&v8, 2, (int)v6 + 12, v6[1] - 12, (__int64)PoolWithTag, 8);
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
