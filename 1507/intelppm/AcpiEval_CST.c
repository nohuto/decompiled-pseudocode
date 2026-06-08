/*
 * XREFs of AcpiEval_CST @ 0x1C001386C
 * Callers:
 *     InitAcpi2CStates @ 0x1C001354C (InitAcpi2CStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 *     memset @ 0x1C00025C0 (memset.c)
 *     AcpiParseCore @ 0x1C0013D8C (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C0014768 (AcpiTranslateAccessSize.c)
 *     AcpiEvaluateMethod @ 0x1C00147C8 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_CST(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  _DWORD *v4; // rsi
  int v5; // ebx
  int v6; // r12d
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  _WORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v16; // [rsp+30h] [rbp-79h]
  int v17; // [rsp+40h] [rbp-69h] BYREF
  int v18; // [rsp+44h] [rbp-65h]
  PVOID P; // [rsp+48h] [rbp-61h] BYREF
  _QWORD *v20; // [rsp+50h] [rbp-59h]
  char v21; // [rsp+60h] [rbp-49h] BYREF
  int v22; // [rsp+62h] [rbp-47h]
  const char *v23; // [rsp+68h] [rbp-41h]
  __int64 (__fastcall *v24)(); // [rsp+70h] [rbp-39h]
  char v25; // [rsp+78h] [rbp-31h]
  int v26; // [rsp+7Ah] [rbp-2Fh]
  const char *v27; // [rsp+80h] [rbp-29h]
  __int64 (__fastcall *v28)(); // [rsp+88h] [rbp-21h]
  char v29; // [rsp+90h] [rbp-19h]
  int v30; // [rsp+92h] [rbp-17h]
  const char *v31; // [rsp+98h] [rbp-11h]
  __int64 (__fastcall *v32)(); // [rsp+A0h] [rbp-9h]
  char v33; // [rsp+A8h] [rbp-1h]
  int v34; // [rsp+AAh] [rbp+1h]
  const char *v35; // [rsp+B0h] [rbp+7h]
  __int64 (__fastcall *v36)(); // [rsp+B8h] [rbp+Fh]

  v20 = a2;
  v21 = 0;
  v23 = "Register";
  v25 = 1;
  v26 = 786432;
  v22 = 2;
  v24 = AcpiParseRegister;
  v27 = "StateType";
  v31 = "Latency";
  v33 = 3;
  v35 = "PowerConsumption";
  v28 = AcpiParseULong;
  v29 = 2;
  v30 = 917504;
  v32 = AcpiParseULong;
  v34 = 0x100000;
  v36 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1044), 8u);
  v3 = AcpiEvaluateMethod(a1, 1414742879, 0, (unsigned int)&P, (__int64)&v17);
  v4 = P;
  v5 = v3;
  if ( v3 >= 0 )
  {
    *(_QWORD *)(a1 + 240) |= *(_DWORD *)(a1 + 248) & 0x7F070;
    if ( v17 && v4[2] )
    {
      if ( *((_WORD *)v4 + 6) )
      {
        v5 = -1072431096;
      }
      else
      {
        v6 = v4[4];
        v18 = v6;
        if ( v6 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(20 * v6 + 4), 0x72637250u);
          v8 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, (unsigned int)(20 * v6 + 4));
            LOWORD(v9) = *((_WORD *)v4 + 7);
            if ( (unsigned __int16)v9 < 4u )
              v9 = 4LL;
            else
              v9 = (unsigned __int16)v9;
            v10 = 0LL;
            v11 = (_WORD *)((char *)v4 + v9 + 16);
            if ( v11 >= (_WORD *)((char *)v4 + (unsigned int)v4[1]) )
            {
LABEL_30:
              v5 = -1073741823;
            }
            else
            {
              do
              {
                if ( (_DWORD)v10 == v6 || *v11 != 3 )
                {
                  v5 = -1072431096;
                  goto LABEL_23;
                }
                v5 = AcpiParseCore(
                       (unsigned int)&v21,
                       4,
                       (int)v11 + 4,
                       (unsigned __int16)v11[1],
                       (__int64)&v8[5 * v10 + 1],
                       20,
                       v16,
                       0);
                if ( v5 < 0 )
                {
                  v5 = -1072431089;
                  goto LABEL_23;
                }
                if ( LOBYTE(v8[5 * v10 + 1]) != 127 )
                  AcpiTranslateAccessSize();
                LOWORD(v12) = v11[1];
                if ( (unsigned __int16)v12 < 4u )
                  v12 = 4LL;
                else
                  v12 = (unsigned __int16)v12;
                v13 = *(_QWORD *)(a1 + 248);
                v11 = (_WORD *)((char *)v11 + v12 + 4);
                v14 = LOBYTE(v8[5 * v10 + 4]);
                if ( (v13 & 0x1010) == 0 && v14 == 1
                  || (v13 & 0x2020) == 0 && v14 == 2
                  || (v13 & 0x4040) == 0 && v14 >= 3 )
                {
                  LODWORD(v10) = v10 - 1;
                }
                v10 = (unsigned int)(v10 + 1);
                v6 = v18;
              }
              while ( v11 < (_WORD *)((char *)v4 + (unsigned int)v4[1]) );
              if ( !(_DWORD)v10 )
                goto LABEL_30;
              *v8 = (unsigned __int8)v10;
              *v20 = v8;
              v8 = 0LL;
            }
LABEL_23:
            if ( v8 )
              ExFreePoolWithTag(v8, 0);
          }
          else
          {
            v5 = -1073741670;
          }
        }
        else
        {
          v5 = -1073741823;
        }
      }
    }
    else
    {
      v5 = -1073741275;
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v5 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 8u);
  return (unsigned int)v5;
}
