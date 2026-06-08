/*
 * XREFs of AcpiEval_PSD_TSD @ 0x1C000FBB8
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C0018D54 (InitAcpiProcessorDomains.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     memset @ 0x1C00062C0 (memset.c)
 *     AcpiEvaluateMethod @ 0x1C000F4D8 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0011050 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_PSD_TSD(__int64 a1, int a2, _QWORD *a3)
{
  int v3; // r12d
  _DWORD *v6; // r15
  int v7; // edi
  _WORD *v8; // rbx
  int v9; // eax
  SIZE_T v10; // r14
  _DWORD *PoolWithTag; // rax
  _WORD *v12; // r14
  __int64 v13; // rax
  PVOID P; // [rsp+40h] [rbp-89h] BYREF
  int v16; // [rsp+48h] [rbp-81h] BYREF
  _QWORD *v17; // [rsp+50h] [rbp-79h]
  char v18; // [rsp+60h] [rbp-69h] BYREF
  int v19; // [rsp+62h] [rbp-67h]
  const char *v20; // [rsp+68h] [rbp-61h]
  __int64 (__fastcall *v21)(); // [rsp+70h] [rbp-59h]
  char v22; // [rsp+78h] [rbp-51h]
  int v23; // [rsp+7Ah] [rbp-4Fh]
  const char *v24; // [rsp+80h] [rbp-49h]
  __int64 (__fastcall *v25)(); // [rsp+88h] [rbp-41h]
  char v26; // [rsp+90h] [rbp-39h]
  int v27; // [rsp+92h] [rbp-37h]
  const char *v28; // [rsp+98h] [rbp-31h]
  __int64 (__fastcall *v29)(); // [rsp+A0h] [rbp-29h]
  char v30; // [rsp+A8h] [rbp-21h]
  int v31; // [rsp+AAh] [rbp-1Fh]
  const char *v32; // [rsp+B0h] [rbp-19h]
  __int64 (__fastcall *v33)(); // [rsp+B8h] [rbp-11h]
  char v34; // [rsp+C0h] [rbp-9h]
  int v35; // [rsp+C2h] [rbp-7h]
  const char *v36; // [rsp+C8h] [rbp-1h]
  __int64 (__fastcall *v37)(); // [rsp+D0h] [rbp+7h]

  v3 = 0;
  v17 = a3;
  v18 = 0;
  v20 = "NumberOfEntries";
  v19 = 0;
  v24 = "Revision";
  v28 = "DomainNumber";
  v32 = "CoordinationType";
  v22 = 1;
  v21 = AcpiParseULong;
  v36 = "MemberCount";
  v23 = 0x40000;
  v6 = 0LL;
  v25 = AcpiParseULong;
  v26 = 2;
  v27 = 0x80000;
  v29 = AcpiParseULong;
  v30 = 3;
  v31 = 786432;
  v33 = AcpiParseULong;
  v34 = 4;
  v35 = 0x100000;
  v37 = AcpiParseULong;
  P = 0LL;
  if ( a2 == 1146310751 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1044), 0x200u);
  else
    _InterlockedOr((volatile signed __int32 *)(a1 + 1044), 0x2000u);
  v7 = AcpiEvaluateMethod(a1, a2, 0LL, (unsigned int **)&P, &v16);
  if ( v7 >= 0 )
  {
    if ( v16 && (v8 = P, (v9 = *((_DWORD *)P + 2)) != 0) )
    {
      v10 = (unsigned int)(20 * (v9 - 1) + 24);
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
            *v17 = v6;
            goto LABEL_26;
          }
          if ( *v12 != 3 )
            break;
          v7 = AcpiParseCore(
                 (unsigned int)&v18,
                 5,
                 (int)v12 + 4,
                 (unsigned __int16)v12[1],
                 (__int64)&v6[4 * v3 + 1 + v3],
                 20);
          if ( v7 < 0 )
            goto LABEL_7;
          LOWORD(v13) = v12[1];
          if ( (unsigned __int16)v13 >= 4u )
            v13 = (unsigned __int16)v13;
          else
            v13 = 4LL;
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
LABEL_7:
  if ( a2 == 1146310751 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 0x200u);
  else
    _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 0x2000u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v8 = P;
LABEL_26:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v7;
}
