/*
 * XREFs of AcpiEval_TSS @ 0x1C0013EA4
 * Callers:
 *     InitAcpi3ThrottleStates @ 0x1C0013470 (InitAcpi3ThrottleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 *     memset @ 0x1C00025C0 (memset.c)
 *     AcpiParseCore @ 0x1C0013D8C (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x1C00147C8 (AcpiEvaluateMethod.c)
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
  int v14; // [rsp+30h] [rbp-89h]
  PVOID P; // [rsp+40h] [rbp-79h] BYREF
  int v16; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int8 v17[2]; // [rsp+50h] [rbp-69h] BYREF
  int v18; // [rsp+52h] [rbp-67h]
  const char *v19; // [rsp+58h] [rbp-61h]
  __int64 (__fastcall *v20)(); // [rsp+60h] [rbp-59h]
  char v21; // [rsp+68h] [rbp-51h]
  int v22; // [rsp+6Ah] [rbp-4Fh]
  const char *v23; // [rsp+70h] [rbp-49h]
  __int64 (__fastcall *v24)(); // [rsp+78h] [rbp-41h]
  char v25; // [rsp+80h] [rbp-39h]
  int v26; // [rsp+82h] [rbp-37h]
  const char *v27; // [rsp+88h] [rbp-31h]
  __int64 (__fastcall *v28)(); // [rsp+90h] [rbp-29h]
  char v29; // [rsp+98h] [rbp-21h]
  int v30; // [rsp+9Ah] [rbp-1Fh]
  const char *v31; // [rsp+A0h] [rbp-19h]
  __int64 (__fastcall *v32)(); // [rsp+A8h] [rbp-11h]
  char v33; // [rsp+B0h] [rbp-9h]
  int v34; // [rsp+B2h] [rbp-7h]
  const char *v35; // [rsp+B8h] [rbp-1h]
  __int64 (__fastcall *v36)(); // [rsp+C0h] [rbp+7h]

  v2 = 0;
  v21 = 1;
  v17[0] = 0;
  v19 = "Percentage";
  v18 = 0;
  v23 = "Power";
  v22 = 0x40000;
  v27 = "Latency";
  v25 = 2;
  v20 = AcpiParseULong;
  v31 = "Control";
  v5 = 0LL;
  v24 = AcpiParseULong;
  v35 = "Status";
  v26 = 0x80000;
  v28 = AcpiParseULong;
  v29 = 3;
  v30 = 786432;
  v32 = AcpiParseULong;
  v33 = 4;
  v34 = 0x100000;
  v36 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1044), 0x800u);
  v6 = AcpiEvaluateMethod(a1, 1397970015, 0, (unsigned int)&P, (__int64)&v16);
  if ( v6 >= 0 )
  {
    *(_QWORD *)(a1 + 240) |= *(_DWORD *)(a1 + 248) & 0x3000000;
    if ( v16 && (v7 = (unsigned int *)P, (v9 = *((_DWORD *)P + 2)) != 0) )
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
            goto LABEL_3;
          }
          if ( *v12 != 3 )
            break;
          v6 = AcpiParseCore(v17, 5u, v12 + 2, (unsigned __int16)v12[1], (__int64)&v5[4 * v2 + 1 + v2], 20, v14, 0);
          if ( v6 < 0 )
            goto LABEL_2;
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
LABEL_2:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 0x800u);
  v7 = (unsigned int *)P;
LABEL_3:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v6;
}
