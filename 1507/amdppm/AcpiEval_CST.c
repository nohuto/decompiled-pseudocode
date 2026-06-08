/*
 * XREFs of AcpiEval_CST @ 0x1C000F75C
 * Callers:
 *     InitAcpi2CStates @ 0x1C0015300 (InitAcpi2CStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     memset @ 0x1C00062C0 (memset.c)
 *     AcpiEvaluateMethod @ 0x1C000F4D8 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0011050 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C0011884 (AcpiTranslateAccessSize.c)
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
  int v12; // r9d
  _BYTE *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v19; // [rsp+30h] [rbp-79h]
  int v20; // [rsp+40h] [rbp-69h] BYREF
  int v21; // [rsp+44h] [rbp-65h]
  PVOID P; // [rsp+48h] [rbp-61h] BYREF
  __int64 v23; // [rsp+50h] [rbp-59h]
  _QWORD *v24; // [rsp+58h] [rbp-51h]
  char v25; // [rsp+60h] [rbp-49h] BYREF
  int v26; // [rsp+62h] [rbp-47h]
  const char *v27; // [rsp+68h] [rbp-41h]
  __int64 (__fastcall *v28)(); // [rsp+70h] [rbp-39h]
  char v29; // [rsp+78h] [rbp-31h]
  int v30; // [rsp+7Ah] [rbp-2Fh]
  const char *v31; // [rsp+80h] [rbp-29h]
  __int64 (__fastcall *v32)(); // [rsp+88h] [rbp-21h]
  char v33; // [rsp+90h] [rbp-19h]
  int v34; // [rsp+92h] [rbp-17h]
  const char *v35; // [rsp+98h] [rbp-11h]
  __int64 (__fastcall *v36)(); // [rsp+A0h] [rbp-9h]
  char v37; // [rsp+A8h] [rbp-1h]
  int v38; // [rsp+AAh] [rbp+1h]
  const char *v39; // [rsp+B0h] [rbp+7h]
  __int64 (__fastcall *v40)(); // [rsp+B8h] [rbp+Fh]

  v24 = a2;
  v25 = 0;
  v27 = "Register";
  v29 = 1;
  v30 = 786432;
  v26 = 2;
  v28 = AcpiParseRegister;
  v31 = "StateType";
  v35 = "Latency";
  v37 = 3;
  v39 = "PowerConsumption";
  v32 = AcpiParseULong;
  v33 = 2;
  v34 = 917504;
  v36 = AcpiParseULong;
  v38 = 0x100000;
  v40 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1044), 8u);
  v3 = AcpiEvaluateMethod(a1, 1414742879, 0LL, (unsigned int **)&P, &v20);
  v4 = P;
  v5 = v3;
  if ( v3 >= 0 )
  {
    *(_QWORD *)(a1 + 240) |= *(_DWORD *)(a1 + 248) & 0x7F070;
    if ( v20 && v4[2] )
    {
      if ( *((_WORD *)v4 + 6) )
      {
        v5 = -1072431096;
      }
      else
      {
        v6 = v4[4];
        v21 = v6;
        if ( v6 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(20 * v6 + 4), 0x72637250u);
          v8 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, (unsigned int)(20 * v6 + 4));
            LOWORD(v9) = *((_WORD *)v4 + 7);
            if ( (unsigned __int16)v9 >= 4u )
              v9 = (unsigned __int16)v9;
            else
              v9 = 4LL;
            v10 = 0LL;
            v11 = (_WORD *)((char *)v4 + v9 + 16);
            if ( v11 >= (_WORD *)((char *)v4 + (unsigned int)v4[1]) )
            {
LABEL_36:
              v5 = -1073741823;
            }
            else
            {
              do
              {
                if ( (_DWORD)v10 == v6 || *v11 != 3 )
                {
                  v5 = -1072431096;
                  goto LABEL_37;
                }
                v12 = (unsigned __int16)v11[1];
                v23 = 5 * v10;
                v13 = &v8[5 * v10 + 1];
                v5 = AcpiParseCore((unsigned int)&v25, 4, (int)v11 + 4, v12, (__int64)v13, 20, v19, 0);
                if ( v5 < 0 )
                {
                  v5 = -1072431089;
                  goto LABEL_37;
                }
                v14 = v23;
                if ( *v13 != 127 && *v13 != 10 )
                {
                  AcpiTranslateAccessSize(&v8[5 * v10 + 1]);
                  v14 = v23;
                }
                LOWORD(v15) = v11[1];
                if ( (unsigned __int16)v15 >= 4u )
                  v15 = (unsigned __int16)v15;
                else
                  v15 = 4LL;
                v16 = LOBYTE(v8[v14 + 4]);
                v11 = (_WORD *)((char *)v11 + v15 + 4);
                v17 = *(_QWORD *)(a1 + 248);
                if ( (v17 & 0x1010) == 0 && v16 == 1
                  || (v17 & 0x2020) == 0 && v16 == 2
                  || (v17 & 0x4040) == 0 && v16 >= 3 )
                {
                  LODWORD(v10) = v10 - 1;
                }
                v10 = (unsigned int)(v10 + 1);
                v6 = v21;
              }
              while ( v11 < (_WORD *)((char *)v4 + (unsigned int)v4[1]) );
              if ( !(_DWORD)v10 )
                goto LABEL_36;
              *v8 = (unsigned __int8)v10;
              *v24 = v8;
              v8 = 0LL;
            }
LABEL_37:
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
