/*
 * XREFs of RegisterHvLegacyPcc @ 0x1C001C5C0
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001AAC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001AE8 (ResetEnumerationContext.c)
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D00 (memset.c)
 *     GetPerfDomain @ 0x1C001596C (GetPerfDomain.c)
 *     DecodeDoorbellAddressIo @ 0x1C001CFF0 (DecodeDoorbellAddressIo.c)
 */

__int64 __fastcall RegisterHvLegacyPcc(_QWORD *a1)
{
  __int64 v1; // r12
  char v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned int PerfDomain; // edx
  int v7; // esi
  __int64 v8; // rax
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  __int64 (__fastcall *v13)(_QWORD *); // r10
  int v14; // eax
  void (__fastcall *v15)(_QWORD *); // r10
  __int64 v17; // [rsp+28h] [rbp-99h] BYREF
  __int64 v18; // [rsp+30h] [rbp-91h] BYREF
  __int64 v19; // [rsp+38h] [rbp-89h] BYREF
  __int64 v20; // [rsp+40h] [rbp-81h] BYREF
  __int64 v21; // [rsp+48h] [rbp-79h] BYREF
  int v22; // [rsp+50h] [rbp-71h]
  _QWORD v23[4]; // [rsp+58h] [rbp-69h] BYREF
  __int64 v24[4]; // [rsp+78h] [rbp-49h] BYREF
  _QWORD v25[10]; // [rsp+98h] [rbp-29h] BYREF

  v1 = 0LL;
  v3 = 0;
  v20 = 0LL;
  LODWORD(v18) = 0;
  v4 = 0LL;
  v5 = 0LL;
  memset(v25, 0, 0x48uLL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000DD08,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v24, &v19);
  LODWORD(v17) = PerfDomain;
  if ( (_DWORD)v19 == 253 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    if ( (_DWORD)v19 == 254 )
      v7 = 2;
  }
  v8 = 0LL;
  v9 = -1073741823;
  v21 = qword_1C000E110;
  v22 = dword_1C000E118;
  if ( (unsigned __int8)qword_1C000E110 <= 1u )
  {
    v4 = qword_1C000E108;
    v5 = qword_1C000E100;
    v19 = 0LL;
    if ( (_BYTE)qword_1C000E110 == 1 )
    {
      v10 = DecodeDoorbellAddressIo(&v21, &v19, &v20, &v18);
      v1 = v20;
      v9 = v10;
      v8 = v19;
      v3 = v18;
      PerfDomain = v17;
    }
    else if ( !(_BYTE)qword_1C000E110 )
    {
      v9 = -1073741823;
    }
  }
  if ( v9 >= 0 )
  {
    v11 = dword_1C000E0C0;
    LODWORD(v25[0]) = 0;
    v25[2] = qword_1C000E0F0;
    LODWORD(v25[3]) = dword_1C000E0F8;
    v25[1] = __PAIR64__(v7, PerfDomain);
    v25[6] = v5 << v3;
    v25[5] = v4 << v3;
    HIDWORD(v25[0]) = dword_1C000E0C0;
    v25[4] = v8;
    v25[7] = v1;
    memset(v23, 0, sizeof(v23));
    LODWORD(v23[0]) = 42;
    ResetEnumerationContext(v24);
    v12 = EnumerateNextDevice((__int64)v24, &v17);
    v13 = (__int64 (__fastcall *)(_QWORD *))qword_1C000DF40;
    if ( !v12 )
    {
      do
      {
        v25[8] = **(_QWORD **)(v17 + 512);
        HIDWORD(v23[0]) = *(_DWORD *)(v17 + 48);
        v23[3] = v25;
        if ( v13 )
          v14 = v13(v23);
        else
          v14 = -1073741822;
        if ( v14 < 0 )
          v9 = v14;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v24, &v17) );
      v11 = dword_1C000E0C0;
    }
    dword_1C000E0C0 = v11 + 1;
    if ( v9 < 0 )
    {
      LODWORD(v25[0]) = 1;
      v23[3] = v25;
      ResetEnumerationContext(v24);
      while ( !(unsigned int)EnumerateNextDevice((__int64)v24, &v17) )
      {
        HIDWORD(v23[0]) = *(_DWORD *)(v17 + 48);
        if ( v15 )
          v15(v23);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000DD08);
  return (unsigned int)v9;
}
