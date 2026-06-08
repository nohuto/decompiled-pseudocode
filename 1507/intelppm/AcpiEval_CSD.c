/*
 * XREFs of AcpiEval_CSD @ 0x1C0013FE8
 * Callers:
 *     InitAcpiIdleDomain @ 0x1C0012FD0 (InitAcpiIdleDomain.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 *     memset @ 0x1C00025C0 (memset.c)
 *     AcpiParseCore @ 0x1C0013D8C (AcpiParseCore.c)
 *     AcpiEvaluateMethod @ 0x1C00147C8 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_CSD(__int64 a1, _QWORD *a2)
{
  int v2; // r15d
  _DWORD *v5; // r14
  int v6; // edi
  _WORD *v7; // rbx
  int v9; // eax
  SIZE_T v10; // rsi
  _DWORD *PoolWithTag; // rax
  _WORD *v12; // rsi
  __int64 v13; // rax
  int v14; // [rsp+30h] [rbp-99h]
  PVOID P; // [rsp+40h] [rbp-89h] BYREF
  int v16; // [rsp+48h] [rbp-81h] BYREF
  unsigned __int8 v17[2]; // [rsp+50h] [rbp-79h] BYREF
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
  v17[0] = 0;
  v19 = "NumberOfEntries";
  v18 = 0;
  v23 = "Revision";
  v33 = 4;
  v27 = "DomainNumber";
  v22 = 0x40000;
  v31 = "CoordinationType";
  v25 = 2;
  v20 = AcpiParseULong;
  v35 = "MemberCount";
  v5 = 0LL;
  v24 = AcpiParseULong;
  v39 = "Index";
  v26 = 0x80000;
  v28 = AcpiParseULong;
  v29 = 3;
  v30 = 786432;
  v32 = AcpiParseULong;
  v34 = 0x100000;
  v36 = AcpiParseULong;
  v37 = 5;
  v38 = 1310720;
  v40 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1044), 0x10u);
  v6 = AcpiEvaluateMethod(a1, 1146307423, 0, (unsigned int)&P, (__int64)&v16);
  if ( v6 >= 0 )
  {
    if ( v16 && (v7 = P, (v9 = *((_DWORD *)P + 2)) != 0) )
    {
      v10 = (unsigned int)(24 * (v9 - 1) + 28);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v10);
        v12 = v7 + 6;
        *v5 = *((unsigned __int8 *)v7 + 8);
        while ( 1 )
        {
          if ( v12 >= (_WORD *)((char *)v7 + *((unsigned int *)v7 + 1)) )
          {
            *a2 = v5;
            goto LABEL_5;
          }
          if ( *v12 != 3 )
            break;
          v6 = AcpiParseCore(v17, 6u, v12 + 2, (unsigned __int16)v12[1], (__int64)&v5[6 * v2 + 1], 24, v14, 0);
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
  _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 0x10u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v7 = P;
LABEL_5:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v6;
}
