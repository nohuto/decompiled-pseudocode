/*
 * XREFs of AcpiEval_PSS @ 0x1C000FE28
 * Callers:
 *     InitAcpiPerfStates @ 0x1C001B4C0 (InitAcpiPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     memset @ 0x1C00062C0 (memset.c)
 *     AcpiEvaluateMethod @ 0x1C000F4D8 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0011050 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_PSS(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r12d
  _DWORD *v5; // rsi
  int v6; // edi
  unsigned __int8 *v7; // rbx
  int v9; // eax
  SIZE_T v10; // r14
  _DWORD *PoolWithTag; // rax
  _WORD *v12; // r14
  __int64 v13; // rax
  PVOID P; // [rsp+40h] [rbp-89h] BYREF
  int v15; // [rsp+48h] [rbp-81h] BYREF
  char v16; // [rsp+50h] [rbp-79h] BYREF
  int v17; // [rsp+52h] [rbp-77h]
  const char *v18; // [rsp+58h] [rbp-71h]
  __int64 (__fastcall *v19)(); // [rsp+60h] [rbp-69h]
  char v20; // [rsp+68h] [rbp-61h]
  int v21; // [rsp+6Ah] [rbp-5Fh]
  const char *v22; // [rsp+70h] [rbp-59h]
  __int64 (__fastcall *v23)(); // [rsp+78h] [rbp-51h]
  char v24; // [rsp+80h] [rbp-49h]
  int v25; // [rsp+82h] [rbp-47h]
  const char *v26; // [rsp+88h] [rbp-41h]
  __int64 (__fastcall *v27)(); // [rsp+90h] [rbp-39h]
  char v28; // [rsp+98h] [rbp-31h]
  int v29; // [rsp+9Ah] [rbp-2Fh]
  const char *v30; // [rsp+A0h] [rbp-29h]
  __int64 (__fastcall *v31)(); // [rsp+A8h] [rbp-21h]
  char v32; // [rsp+B0h] [rbp-19h]
  int v33; // [rsp+B2h] [rbp-17h]
  const char *v34; // [rsp+B8h] [rbp-11h]
  __int64 (__fastcall *v35)(); // [rsp+C0h] [rbp-9h]
  char v36; // [rsp+C8h] [rbp-1h]
  int v37; // [rsp+CAh] [rbp+1h]
  const char *v38; // [rsp+D0h] [rbp+7h]
  __int64 (__fastcall *v39)(); // [rsp+D8h] [rbp+Fh]

  v2 = 0;
  v20 = 1;
  v16 = 0;
  v18 = "CoreFrequency";
  v17 = 0;
  v22 = "Power";
  v21 = 0x40000;
  v26 = "Latency";
  v24 = 2;
  v19 = AcpiParseULong;
  v30 = "BmLatency";
  v5 = 0LL;
  v23 = AcpiParseULong;
  v34 = "Control";
  v38 = "Status";
  v25 = 0x80000;
  v27 = AcpiParseULong;
  v28 = 3;
  v29 = 786432;
  v31 = AcpiParseULong;
  v32 = 4;
  v33 = 0x100000;
  v35 = AcpiParseULong;
  v36 = 5;
  v37 = 1572864;
  v39 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1044), 0x40u);
  v6 = AcpiEvaluateMethod(a1, 1397968991, 0LL, (unsigned int **)&P, &v15);
  if ( v6 >= 0 )
  {
    v7 = (unsigned __int8 *)P;
    *(_QWORD *)(a1 + 240) |= *(_DWORD *)(a1 + 248) & 0x30000000;
    if ( v7 )
    {
      if ( v15 && (v9 = *((_DWORD *)v7 + 2)) != 0 )
      {
        v10 = (unsigned int)(48 * (v9 - 1) + 56);
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
        v5 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v10);
          v12 = v7 + 12;
          *v5 = v7[8];
          if ( !*((_DWORD *)v7 + 2) )
          {
LABEL_22:
            *a2 = v5;
            goto LABEL_7;
          }
          while ( *v12 == 3 )
          {
            v6 = AcpiParseCore(
                   (unsigned int)&v16,
                   6,
                   (int)v12 + 4,
                   (unsigned __int16)v12[1],
                   (__int64)&v5[12 * v2 + 2],
                   48);
            if ( v6 < 0 )
              goto LABEL_4;
            LOWORD(v13) = v12[1];
            if ( (unsigned __int16)v13 >= 4u )
              v13 = (unsigned __int16)v13;
            else
              v13 = 4LL;
            ++v2;
            v12 = (_WORD *)((char *)v12 + v13 + 4);
            if ( v2 >= *((_DWORD *)v7 + 2) )
              goto LABEL_22;
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
    else
    {
      v6 = -1073741823;
    }
  }
LABEL_4:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 0x40u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  v7 = (unsigned __int8 *)P;
LABEL_7:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  return (unsigned int)v6;
}
