/*
 * XREFs of RegisterHvLegacyPcc @ 0x1C001D600
 * Callers:
 *     <none>
 * Callees:
 *     ResetEnumerationContext @ 0x1C00061FC (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0006210 (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 *     GetPerfDomain @ 0x1C0016434 (GetPerfDomain.c)
 */

__int64 __fastcall RegisterHvLegacyPcc(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  char v4; // r12
  __int64 v5; // r15
  __int64 v6; // r8
  unsigned int PerfDomain; // r11d
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // edi
  int Device; // eax
  __int64 (__fastcall *v14)(_QWORD *); // r10
  int v15; // eax
  void (__fastcall *v16)(_QWORD *); // r10
  _QWORD v18[2]; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v20[4]; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v21[10]; // [rsp+78h] [rbp-29h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  memset(v21, 0, 0x48uLL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00093A8,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v20, v18);
  if ( LODWORD(v18[0]) == 253 )
  {
    v8 = 1LL;
  }
  else
  {
    v8 = 0LL;
    if ( LODWORD(v18[0]) == 254 )
      v8 = 2LL;
  }
  v9 = 0LL;
  v10 = -1073741823;
  v18[0] = qword_1C0009808;
  if ( (unsigned __int8)qword_1C0009808 <= 1u )
  {
    v3 = qword_1C0009800;
    v5 = qword_1C00097F8;
    if ( (_BYTE)qword_1C0009808 == 1 )
    {
      v11 = v18[0];
      v6 = v18[0] >> 8;
      if ( BYTE1(v18[0]) )
      {
        v18[0] = 0x20000000000000LL;
        LOWORD(v18[0]) = WORD2(v11);
        switch ( BYTE3(v11) )
        {
          case 8:
            WORD1(v18[0]) = 0;
            break;
          case 0x10:
            WORD1(v18[0]) = 1;
            break;
          case 0x20:
            WORD1(v18[0]) = 2;
            break;
        }
        v4 = BYTE2(v11);
        v10 = 0;
        v2 = ((1LL << SBYTE3(v11)) - 1) & ~(((1LL << v6) - 1) << SBYTE2(v11));
        v9 = v18[0];
      }
    }
    else if ( !(_BYTE)qword_1C0009808 )
    {
      v10 = -1073741823;
    }
  }
  if ( v10 >= 0 )
  {
    v12 = dword_1C00097B8;
    v21[2] = qword_1C00097E8;
    LODWORD(v21[3]) = dword_1C00097F0;
    v21[6] = v5 << v4;
    v21[5] = v3 << v4;
    LODWORD(v21[0]) = 0;
    HIDWORD(v21[0]) = dword_1C00097B8;
    v21[1] = __PAIR64__(v8, PerfDomain);
    v21[4] = v9;
    v21[7] = v2;
    memset(v19, 0, sizeof(v19));
    LODWORD(v19[0]) = 44;
    ResetEnumerationContext(v20);
    Device = EnumerateNextDevice((__int64)v20, v18);
    v14 = (__int64 (__fastcall *)(_QWORD *))qword_1C0009600;
    if ( !Device )
    {
      do
      {
        v21[8] = **(_QWORD **)(v18[0] + 528LL);
        HIDWORD(v19[0]) = *(_DWORD *)(v18[0] + 48LL);
        v19[3] = v21;
        if ( v14 )
          v15 = v14(v19);
        else
          v15 = -1073741822;
        if ( v15 < 0 )
          v10 = v15;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v20, v18) );
      v12 = dword_1C00097B8;
    }
    dword_1C00097B8 = v12 + 1;
    if ( v10 < 0 )
    {
      LODWORD(v21[0]) = 1;
      v19[3] = v21;
      ResetEnumerationContext(v20);
      while ( !(unsigned int)EnumerateNextDevice((__int64)v20, v18) )
      {
        HIDWORD(v19[0]) = *(_DWORD *)(v18[0] + 48LL);
        if ( v16 )
          v16(v19);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    qword_1C00093A8,
    v6,
    v8);
  return (unsigned int)v10;
}
