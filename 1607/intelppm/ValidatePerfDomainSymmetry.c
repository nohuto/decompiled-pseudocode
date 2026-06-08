/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x1C001328C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001403C (ProcLibDeviceStart.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001724 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001760 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     ValidatePssSymmetry @ 0x1C0013BE8 (ValidatePssSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C0013C2C (ValidatePctPtcSymmetry.c)
 *     ValidateRegisterSymmetry @ 0x1C0013C88 (ValidateRegisterSymmetry.c)
 *     GetPerfDomain @ 0x1C0013CD0 (GetPerfDomain.c)
 *     ValidatePepPerformanceSymmetry @ 0x1C001CE18 (ValidatePepPerformanceSymmetry.c)
 */

__int64 __fastcall ValidatePerfDomainSymmetry(_QWORD *a1)
{
  _QWORD *v1; // rsi
  unsigned int v2; // ebx
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  _QWORD *v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // rcx
  __int64 v11; // r10
  int v12; // r11d
  __int64 v13; // rdi
  _DWORD *v15; // rax
  _DWORD *v16; // rdx
  __int64 v17; // r15
  unsigned int *v18; // r12
  __int64 v19; // rsi
  int v20; // r14d
  __int64 v21; // r13
  char v22; // al
  __int64 v23[6]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+50h] BYREF
  _QWORD *v26; // [rsp+C0h] [rbp+58h] BYREF

  v1 = a1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000ECF8,
    0LL);
  v2 = 0;
  if ( (unsigned int)GetPerfDomain(v1, v23, &v25) != 1 )
  {
    v25 = 0LL;
    v3 = 0LL;
    ResetEnumerationContext(v23);
    v4 = EnumerateNextDevice((__int64)v23, &v26);
    v7 = 0x10FF300000LL;
    if ( !v4 )
    {
      while ( 1 )
      {
        v8 = v26;
        if ( v26 != v1 )
          break;
LABEL_16:
        if ( (unsigned int)EnumerateNextDevice((__int64)v23, &v26) )
          goto LABEL_17;
      }
      v9 = v1[31];
      v10 = v26[31];
      if ( ((v10 ^ v9) & v7) != 0 )
      {
        v3 |= v7 & (v10 ^ v9);
        v25 = v3;
      }
      if ( (v9 & 0x70000000) != 0 )
      {
        if ( (int)ValidatePctPtcSymmetry(v10, v1 + 47, v5, v1 + 47) < 0 )
        {
          v3 |= 0x70000000uLL;
          v25 = v3;
        }
        v9 = v1[31];
        if ( (v9 & 0x40000000) != 0 && (int)ValidatePssSymmetry(v10, v1[51], v5, v8[51]) < 0 )
        {
          v3 |= 0x40000000uLL;
          v25 = v3;
        }
        if ( (v9 & 0x30000000) != 0 && (int)ValidatePssSymmetry(v10, v1[50], v5, v8[50]) < 0 )
        {
          v3 |= 0x30000000uLL;
          v25 = v3;
        }
      }
      if ( (v9 & 0x3300000) == 0 )
      {
LABEL_14:
        if ( (v1[31] & 0x8000000) != 0 )
        {
          v17 = v8[67];
          v18 = (unsigned int *)&CpcRegisterTable;
          v19 = v1[67];
          v20 = 0;
          v21 = 15LL;
          do
          {
            v22 = ValidateRegisterSymmetry(*v18 + v19, *v18 + v17, v5, v6);
            v18 += 6;
            if ( !v22 )
              v20 = -1073741823;
            --v21;
          }
          while ( v21 );
          v3 = v25;
          v1 = a1;
          v8 = v26;
          if ( v20 < 0 )
          {
            v3 = v25 | 0x8000000;
            v25 |= 0x8000000uLL;
          }
        }
        if ( (v1[31] & 0x1000000000LL) != 0 && (int)ValidatePepPerformanceSymmetry(v10, v1[142], v5, v8[142]) < 0 )
        {
          v3 |= 0x1000000000uLL;
          v25 = v3;
        }
        goto LABEL_16;
      }
      if ( (int)ValidatePctPtcSymmetry(v10, v1 + 54, v5, v1 + 54) < 0 )
      {
        v3 |= 0x3300000uLL;
        v25 = v3;
      }
      v10 = v1[57];
      v15 = (_DWORD *)v8[57];
      if ( v10 )
      {
        if ( v15 )
        {
          v5 = *(unsigned int *)v10;
          if ( (_DWORD)v5 == *v15 )
          {
            v6 = 0LL;
            if ( !(_DWORD)v5 )
              goto LABEL_14;
            v16 = v15 + 1;
            v10 -= (unsigned __int64)v15;
            while ( *(_DWORD *)((char *)v16 + v10) == *v16 )
            {
              v6 = (unsigned int)(v6 + 1);
              v16 += 5;
              if ( (unsigned int)v6 >= (unsigned int)v5 )
                goto LABEL_14;
            }
          }
        }
      }
      v3 |= 0x3300000uLL;
      v25 = v3;
      goto LABEL_14;
    }
LABEL_17:
    ResetEnumerationContext(v23);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v23, &v26) )
    {
      v13 = ~v3;
      do
        v26[31] &= v13;
      while ( !(unsigned int)EnumerateNextDevice((__int64)v23, &v26) );
    }
    v2 = (v11 & v1[31]) == 0 ? v12 : 0;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000ECF8);
  return v2;
}
