/*
 * XREFs of AcpiEval_PSS @ 0x1C0013B44
 * Callers:
 *     InitAcpiPerfStates @ 0x1C00130A4 (InitAcpiPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 *     memset @ 0x1C00025C0 (memset.c)
 *     AcpiParseCore @ 0x1C0013D8C (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x1C00147C8 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PSS(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r12d
  _DWORD *v5; // rsi
  int v6; // edi
  unsigned __int8 *v7; // rbx
  int v8; // eax
  unsigned int v9; // r14d
  _DWORD *PoolWithTag; // rax
  _WORD *v11; // r14
  __int64 v12; // rax
  int v14; // [rsp+30h] [rbp-99h]
  PVOID P; // [rsp+40h] [rbp-89h] BYREF
  int v16; // [rsp+48h] [rbp-81h] BYREF
  char v17; // [rsp+50h] [rbp-79h] BYREF
  int v18; // [rsp+52h] [rbp-77h]
  const char *v19; // [rsp+58h] [rbp-71h]
  __int64 (__fastcall *v20)(); // [rsp+60h] [rbp-69h]
  char v21; // [rsp+68h] [rbp-61h]
  int v22; // [rsp+6Ah] [rbp-5Fh]
  const char *v23; // [rsp+70h] [rbp-59h]
  __int64 (__fastcall *v24)(); // [rsp+78h] [rbp-51h]
  char v25; // [rsp+80h] [rbp-49h]
  int v26; // [rsp+82h] [rbp-47h]
  const char *v27; // [rsp+88h] [rbp-41h]
  __int64 (__fastcall *v28)(); // [rsp+90h] [rbp-39h]
  char v29; // [rsp+98h] [rbp-31h]
  int v30; // [rsp+9Ah] [rbp-2Fh]
  const char *v31; // [rsp+A0h] [rbp-29h]
  __int64 (__fastcall *v32)(); // [rsp+A8h] [rbp-21h]
  char v33; // [rsp+B0h] [rbp-19h]
  int v34; // [rsp+B2h] [rbp-17h]
  const char *v35; // [rsp+B8h] [rbp-11h]
  __int64 (__fastcall *v36)(); // [rsp+C0h] [rbp-9h]
  char v37; // [rsp+C8h] [rbp-1h]
  int v38; // [rsp+CAh] [rbp+1h]
  const char *v39; // [rsp+D0h] [rbp+7h]
  __int64 (__fastcall *v40)(); // [rsp+D8h] [rbp+Fh]

  v2 = 0;
  v21 = 1;
  v17 = 0;
  v19 = "CoreFrequency";
  v18 = 0;
  v23 = "Power";
  v22 = 0x40000;
  v27 = "Latency";
  v25 = 2;
  v20 = AcpiParseULong;
  v31 = "BmLatency";
  v5 = 0LL;
  v24 = AcpiParseULong;
  v35 = "Control";
  v39 = "Status";
  v26 = 0x80000;
  v28 = AcpiParseULong;
  v29 = 3;
  v30 = 786432;
  v32 = AcpiParseULong;
  v33 = 4;
  v34 = 0x100000;
  v36 = AcpiParseULong;
  v37 = 5;
  v38 = 1572864;
  v40 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1044), 0x40u);
  v6 = AcpiEvaluateMethod(a1, 1397968991, 0, (unsigned int)&P, (__int64)&v16);
  if ( v6 >= 0 )
  {
    v7 = (unsigned __int8 *)P;
    *(_QWORD *)(a1 + 240) |= *(_DWORD *)(a1 + 248) & 0x30000000;
    if ( v7 )
    {
      if ( v16 && (v8 = *((_DWORD *)v7 + 2)) != 0 )
      {
        v9 = 48 * (v8 - 1) + 56;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72637250u);
        v5 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v9);
          v11 = v7 + 12;
          *v5 = v7[8];
          if ( !*((_DWORD *)v7 + 2) )
          {
LABEL_12:
            *a2 = v5;
            goto LABEL_13;
          }
          while ( *v11 == 3 )
          {
            v6 = AcpiParseCore(
                   (unsigned int)&v17,
                   6,
                   (int)v11 + 4,
                   (unsigned __int16)v11[1],
                   (__int64)&v5[12 * v2 + 2],
                   48,
                   v14,
                   0);
            if ( v6 < 0 )
              goto LABEL_21;
            LOWORD(v12) = v11[1];
            if ( (unsigned __int16)v12 < 4u )
              v12 = 4LL;
            else
              v12 = (unsigned __int16)v12;
            ++v2;
            v11 = (_WORD *)((char *)v11 + v12 + 4);
            if ( v2 >= *((_DWORD *)v7 + 2) )
              goto LABEL_12;
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
LABEL_21:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 0x40u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  v7 = (unsigned __int8 *)P;
LABEL_13:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  return (unsigned int)v6;
}
