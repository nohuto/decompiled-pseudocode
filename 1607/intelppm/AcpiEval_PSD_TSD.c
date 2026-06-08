/*
 * XREFs of AcpiEval_PSD_TSD @ 0x1C0015D8C
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C0015764 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C001F350 (InitAcpiThrottleDomain.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 *     AcpiParseCore @ 0x1C00164D4 (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x1C0016F80 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PSD_TSD(__int64 a1, int a2, _QWORD *a3)
{
  int v3; // r12d
  _DWORD *v6; // r15
  int v7; // edi
  _WORD *v8; // rbx
  int v9; // eax
  unsigned int v10; // r14d
  _DWORD *PoolWithTag; // rax
  _WORD *v12; // r14
  __int64 v13; // rax
  int v15; // [rsp+30h] [rbp-99h]
  PVOID P; // [rsp+40h] [rbp-89h] BYREF
  int v17; // [rsp+48h] [rbp-81h] BYREF
  _QWORD *v18; // [rsp+50h] [rbp-79h]
  char v19; // [rsp+60h] [rbp-69h] BYREF
  int v20; // [rsp+62h] [rbp-67h]
  const char *v21; // [rsp+68h] [rbp-61h]
  __int64 (__fastcall *v22)(); // [rsp+70h] [rbp-59h]
  char v23; // [rsp+78h] [rbp-51h]
  int v24; // [rsp+7Ah] [rbp-4Fh]
  const char *v25; // [rsp+80h] [rbp-49h]
  __int64 (__fastcall *v26)(); // [rsp+88h] [rbp-41h]
  char v27; // [rsp+90h] [rbp-39h]
  int v28; // [rsp+92h] [rbp-37h]
  const char *v29; // [rsp+98h] [rbp-31h]
  __int64 (__fastcall *v30)(); // [rsp+A0h] [rbp-29h]
  char v31; // [rsp+A8h] [rbp-21h]
  int v32; // [rsp+AAh] [rbp-1Fh]
  const char *v33; // [rsp+B0h] [rbp-19h]
  __int64 (__fastcall *v34)(); // [rsp+B8h] [rbp-11h]
  char v35; // [rsp+C0h] [rbp-9h]
  int v36; // [rsp+C2h] [rbp-7h]
  const char *v37; // [rsp+C8h] [rbp-1h]
  __int64 (__fastcall *v38)(); // [rsp+D0h] [rbp+7h]

  v3 = 0;
  v18 = a3;
  v19 = 0;
  v21 = "NumberOfEntries";
  v20 = 0;
  v25 = "Revision";
  v29 = "DomainNumber";
  v33 = "CoordinationType";
  v23 = 1;
  v22 = AcpiParseULong;
  v37 = "MemberCount";
  v24 = 0x40000;
  v6 = 0LL;
  v26 = AcpiParseULong;
  v27 = 2;
  v28 = 0x80000;
  v30 = AcpiParseULong;
  v31 = 3;
  v32 = 786432;
  v34 = AcpiParseULong;
  v35 = 4;
  v36 = 0x100000;
  v38 = AcpiParseULong;
  P = 0LL;
  if ( a2 == 1146310751 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1052), 0x200u);
  else
    _InterlockedOr((volatile signed __int32 *)(a1 + 1052), 0x2000u);
  v7 = AcpiEvaluateMethod(a1, a2, 0, (unsigned int)&P, (__int64)&v17);
  if ( v7 >= 0 )
  {
    if ( v17 && (v8 = P, (v9 = *((_DWORD *)P + 2)) != 0) )
    {
      v10 = 20 * (v9 - 1) + 24;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v10);
        v12 = v8 + 6;
        *v6 = *((unsigned __int8 *)v8 + 8);
        while ( 1 )
        {
          if ( v12 >= (_WORD *)((char *)v8 + *((unsigned int *)v8 + 1)) )
          {
            *v18 = v6;
            goto LABEL_15;
          }
          if ( *v12 != 3 )
            break;
          v7 = AcpiParseCore(
                 (unsigned int)&v19,
                 5,
                 (int)v12 + 4,
                 (unsigned __int16)v12[1],
                 (__int64)&v6[4 * v3 + 1 + v3],
                 20,
                 v15,
                 0);
          if ( v7 < 0 )
            goto LABEL_23;
          LOWORD(v13) = v12[1];
          if ( (unsigned __int16)v13 < 4u )
            v13 = 4LL;
          else
            v13 = (unsigned __int16)v13;
          v12 = (_WORD *)((char *)v12 + v13 + 4);
          ++v3;
        }
        v7 = -1072431096;
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
      v7 = -1073741275;
    }
  }
LABEL_23:
  if ( a2 == 1146310751 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1056), 0x200u);
  else
    _InterlockedOr((volatile signed __int32 *)(a1 + 1056), 0x2000u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v8 = P;
LABEL_15:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v7;
}
