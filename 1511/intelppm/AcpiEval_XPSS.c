/*
 * XREFs of AcpiEval_XPSS @ 0x1C001D7D0
 * Callers:
 *     InitAcpiPerfStates @ 0x1C00130A4 (InitAcpiPerfStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     memset @ 0x1C0002D00 (memset.c)
 *     AcpiParseCore @ 0x1C0013D8C (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x1C00147C8 (AcpiEvaluateMethod.c)
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
  int v14; // [rsp+30h] [rbp-D0h]
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 v17[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+52h] [rbp-AEh]
  const char *v19; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall *v20)(__int64, _DWORD *, unsigned int); // [rsp+60h] [rbp-A0h]
  char v21; // [rsp+68h] [rbp-98h]
  int v22; // [rsp+6Ah] [rbp-96h]
  const char *v23; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v24)(__int64, _DWORD *, unsigned int); // [rsp+78h] [rbp-88h]
  char v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+82h] [rbp-7Eh]
  const char *v27; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v28)(__int64, _DWORD *, unsigned int); // [rsp+90h] [rbp-70h]
  char v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ah] [rbp-66h]
  const char *v31; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall *v32)(__int64, _DWORD *, unsigned int); // [rsp+A8h] [rbp-58h]
  char v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B2h] [rbp-4Eh]
  const char *v35; // [rsp+B8h] [rbp-48h]
  void *v36; // [rsp+C0h] [rbp-40h]
  char v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+CAh] [rbp-36h]
  const char *v39; // [rsp+D0h] [rbp-30h]
  void *v40; // [rsp+D8h] [rbp-28h]
  char v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E2h] [rbp-1Eh]
  const char *v43; // [rsp+E8h] [rbp-18h]
  void *v44; // [rsp+F0h] [rbp-10h]
  char v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FAh] [rbp-6h]
  const char *v47; // [rsp+100h] [rbp+0h]
  void *v48; // [rsp+108h] [rbp+8h]

  v2 = 0;
  v21 = 1;
  v17[0] = 0;
  v19 = "CoreFrequency";
  v18 = 0;
  v20 = AcpiParseULong;
  v23 = "Power";
  v24 = AcpiParseULong;
  v27 = "Latency";
  v28 = AcpiParseULong;
  v31 = "BmLatency";
  v32 = AcpiParseULong;
  v35 = "Control";
  v22 = 0x40000;
  v39 = "Status";
  v5 = 0LL;
  v25 = 2;
  v43 = "ControlMask";
  v47 = "StatusMask";
  v26 = 0x80000;
  v29 = 3;
  v30 = 786432;
  v33 = 4;
  v34 = 1048578;
  v36 = &AcpiParseULong64;
  v37 = 5;
  v38 = 1572866;
  v40 = &AcpiParseULong64;
  v41 = 6;
  v42 = 2097154;
  v44 = &AcpiParseULong64;
  v45 = 7;
  v46 = 2621442;
  v48 = &AcpiParseULong64;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1036), 0x80u);
  v6 = AcpiEvaluateMethod(a1, 1397968984, 0LL, (unsigned int **)&P, &v16);
  if ( v6 >= 0 )
  {
    v7 = (unsigned __int8 *)P;
    *(_QWORD *)(a1 + 240) |= *(_DWORD *)(a1 + 248) & 0x40000000;
    if ( v7 )
    {
      if ( v16 && (v9 = *((_DWORD *)v7 + 2)) != 0 )
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
            v6 = AcpiParseCore(v17, 8u, v12 + 2, (unsigned __int16)v12[1], (__int64)&v5[12 * v2 + 2], 48, v14, 0);
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
  _InterlockedOr((volatile signed __int32 *)(a1 + 1040), 0x80u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  v7 = (unsigned __int8 *)P;
LABEL_7:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  return (unsigned int)v6;
}
