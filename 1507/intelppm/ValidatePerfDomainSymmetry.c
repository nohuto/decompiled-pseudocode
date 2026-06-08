/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x1C00150EC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C00016FC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001738 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     ValidatePssSymmetry @ 0x1C001589C (ValidatePssSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C00158E0 (ValidatePctPtcSymmetry.c)
 *     ValidateRegisterSymmetry @ 0x1C001593C (ValidateRegisterSymmetry.c)
 *     GetPerfDomain @ 0x1C001596C (GetPerfDomain.c)
 *     ValidatePepPerformanceSymmetry @ 0x1C001B6C4 (ValidatePepPerformanceSymmetry.c)
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
  const char *v17; // r12
  __int64 v18; // r15
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
    qword_1C000D9C8,
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
        if ( (int)ValidatePctPtcSymmetry(v10, v1 + 46, v5, v1 + 46) < 0 )
        {
          v3 |= 0x70000000uLL;
          v25 = v3;
        }
        v9 = v1[31];
        if ( (v9 & 0x40000000) != 0 && (int)ValidatePssSymmetry(v10, v1[50], v5, v8[50]) < 0 )
        {
          v3 |= 0x40000000uLL;
          v25 = v3;
        }
        if ( (v9 & 0x30000000) != 0 && (int)ValidatePssSymmetry(v10, v1[49], v5, v8[49]) < 0 )
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
          v17 = "\b";
          v18 = v8[66];
          v19 = v1[66];
          v20 = 0;
          v21 = 15LL;
          do
          {
            v22 = ValidateRegisterSymmetry(*(unsigned int *)v17 + v19, *(unsigned int *)v17 + v18, v5, v6);
            v17 += 24;
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
        if ( (v1[31] & 0x1000000000LL) != 0 && (int)ValidatePepPerformanceSymmetry(v10, v1[140], v5, v8[140]) < 0 )
        {
          v3 |= 0x1000000000uLL;
          v25 = v3;
        }
        goto LABEL_16;
      }
      if ( (int)ValidatePctPtcSymmetry(v10, v1 + 53, v5, v1 + 53) < 0 )
      {
        v3 |= 0x3300000uLL;
        v25 = v3;
      }
      v10 = v1[56];
      v15 = (_DWORD *)v8[56];
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
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000D9C8);
  return v2;
}
