/*
 * XREFs of AcpiEval_TSS @ 0x1C0010690
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C001AA7C (InitAcpiThrottleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 *     memset @ 0x1C0006B40 (memset.c)
 *     AcpiEvaluateMethod @ 0x1C000F740 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C00112BC (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_TSS(__int64 a1, _QWORD *a2)
{
  int v2; // r12d
  _DWORD *v5; // rsi
  int v6; // edi
  unsigned int *v7; // rbx
  int v9; // eax
  SIZE_T v10; // r14
  _DWORD *PoolWithTag; // rax
  _WORD *v12; // r14
  __int64 v13; // rax
  int v14; // [rsp+40h] [rbp-79h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  char v16; // [rsp+50h] [rbp-69h] BYREF
  int v17; // [rsp+52h] [rbp-67h]
  const char *v18; // [rsp+58h] [rbp-61h]
  __int64 (__fastcall *v19)(); // [rsp+60h] [rbp-59h]
  char v20; // [rsp+68h] [rbp-51h]
  int v21; // [rsp+6Ah] [rbp-4Fh]
  const char *v22; // [rsp+70h] [rbp-49h]
  __int64 (__fastcall *v23)(); // [rsp+78h] [rbp-41h]
  char v24; // [rsp+80h] [rbp-39h]
  int v25; // [rsp+82h] [rbp-37h]
  const char *v26; // [rsp+88h] [rbp-31h]
  __int64 (__fastcall *v27)(); // [rsp+90h] [rbp-29h]
  char v28; // [rsp+98h] [rbp-21h]
  int v29; // [rsp+9Ah] [rbp-1Fh]
  const char *v30; // [rsp+A0h] [rbp-19h]
  __int64 (__fastcall *v31)(); // [rsp+A8h] [rbp-11h]
  char v32; // [rsp+B0h] [rbp-9h]
  int v33; // [rsp+B2h] [rbp-7h]
  const char *v34; // [rsp+B8h] [rbp-1h]
  __int64 (__fastcall *v35)(); // [rsp+C0h] [rbp+7h]

  v2 = 0;
  v20 = 1;
  v16 = 0;
  v18 = "Percentage";
  v17 = 0;
  v22 = "Power";
  v21 = 0x40000;
  v26 = "Latency";
  v24 = 2;
  v19 = AcpiParseULong;
  v30 = "Control";
  v5 = 0LL;
  v23 = AcpiParseULong;
  v34 = "Status";
  v25 = 0x80000;
  v27 = AcpiParseULong;
  v28 = 3;
  v29 = 786432;
  v31 = AcpiParseULong;
  v32 = 4;
  v33 = 0x100000;
  v35 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1052), 0x800u);
  v6 = AcpiEvaluateMethod(a1, 1397970015, 0LL, (unsigned int **)&P, &v14);
  if ( v6 >= 0 )
  {
    *(_QWORD *)(a1 + 240) |= *(_DWORD *)(a1 + 248) & 0x3000000;
    if ( v14 && (v7 = (unsigned int *)P, (v9 = *((_DWORD *)P + 2)) != 0) )
    {
      v10 = (unsigned int)(20 * (v9 - 1) + 24);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v10);
        v12 = v7 + 3;
        *v5 = v7[2];
        while ( 1 )
        {
          if ( v12 >= (_WORD *)((char *)v7 + v7[1]) )
          {
            *a2 = v5;
            v5 = 0LL;
            goto LABEL_5;
          }
          if ( *v12 != 3 )
            break;
          v6 = AcpiParseCore(
                 (unsigned int)&v16,
                 5,
                 (int)v12 + 4,
                 (unsigned __int16)v12[1],
                 (__int64)&v5[4 * v2 + 1 + v2],
                 20);
          if ( v6 < 0 )
            goto LABEL_4;
          LOWORD(v13) = v12[1];
          if ( (unsigned __int16)v13 >= 4u )
            v13 = (unsigned __int16)v13;
          else
            v13 = 4LL;
          v12 = (_WORD *)((char *)v12 + v13 + 4);
          ++v2;
        }
        v6 = -1072431096;
      }
      else
      {
        v6 = -1073741670;
      }
    }
    else
    {
      v6 = -1073741275;
    }
  }
LABEL_4:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1056), 0x800u);
  v7 = (unsigned int *)P;
LABEL_5:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v6;
}
