/*
 * XREFs of AcpiEval_XPSS @ 0x1C00100A0
 * Callers:
 *     InitAcpiPerfStates @ 0x1C001B4C0 (InitAcpiPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     memset @ 0x1C00062C0 (memset.c)
 *     AcpiEvaluateMethod @ 0x1C000F4D8 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0011050 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_XPSS(__int64 a1, _QWORD *a2)
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
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  char v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+52h] [rbp-AEh]
  const char *v18; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall *v19)(); // [rsp+60h] [rbp-A0h]
  char v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+6Ah] [rbp-96h]
  const char *v22; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v23)(); // [rsp+78h] [rbp-88h]
  char v24; // [rsp+80h] [rbp-80h]
  int v25; // [rsp+82h] [rbp-7Eh]
  const char *v26; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v27)(); // [rsp+90h] [rbp-70h]
  char v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+9Ah] [rbp-66h]
  const char *v30; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall *v31)(); // [rsp+A8h] [rbp-58h]
  char v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B2h] [rbp-4Eh]
  const char *v34; // [rsp+B8h] [rbp-48h]
  void *v35; // [rsp+C0h] [rbp-40h]
  char v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+CAh] [rbp-36h]
  const char *v38; // [rsp+D0h] [rbp-30h]
  void *v39; // [rsp+D8h] [rbp-28h]
  char v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E2h] [rbp-1Eh]
  const char *v42; // [rsp+E8h] [rbp-18h]
  void *v43; // [rsp+F0h] [rbp-10h]
  char v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+FAh] [rbp-6h]
  const char *v46; // [rsp+100h] [rbp+0h]
  void *v47; // [rsp+108h] [rbp+8h]

  v2 = 0;
  v20 = 1;
  v16 = 0;
  v18 = "CoreFrequency";
  v17 = 0;
  v19 = AcpiParseULong;
  v22 = "Power";
  v23 = AcpiParseULong;
  v26 = "Latency";
  v27 = AcpiParseULong;
  v30 = "BmLatency";
  v31 = AcpiParseULong;
  v34 = "Control";
  v21 = 0x40000;
  v38 = "Status";
  v5 = 0LL;
  v24 = 2;
  v42 = "ControlMask";
  v46 = "StatusMask";
  v25 = 0x80000;
  v28 = 3;
  v29 = 786432;
  v32 = 4;
  v33 = 1048578;
  v35 = &AcpiParseULong64;
  v36 = 5;
  v37 = 1572866;
  v39 = &AcpiParseULong64;
  v40 = 6;
  v41 = 2097154;
  v43 = &AcpiParseULong64;
  v44 = 7;
  v45 = 2621442;
  v47 = &AcpiParseULong64;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1044), 0x80u);
  v6 = AcpiEvaluateMethod(a1, 1397968984, 0LL, (unsigned int **)&P, &v15);
  if ( v6 >= 0 )
  {
    v7 = (unsigned __int8 *)P;
    *(_QWORD *)(a1 + 240) |= *(_DWORD *)(a1 + 248) & 0x40000000;
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
                   8,
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
  _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 0x80u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  v7 = (unsigned __int8 *)P;
LABEL_7:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  return (unsigned int)v6;
}
