/*
 * XREFs of VfUtilPrintCheckinString @ 0x140702EF0
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140716114 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 */

ULONG __fastcall VfUtilPrintCheckinString(unsigned __int16 *a1)
{
  unsigned int v1; // r13d
  unsigned int v3; // esi
  __int64 v4; // r12
  unsigned int v5; // edi
  unsigned int v6; // r14d
  unsigned int v7; // r9d
  int v8; // r10d
  _BYTE *v9; // r11
  __int64 v10; // r8
  __int64 v11; // rbx
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // rcx
  ULONG result; // eax
  _DWORD v16[2]; // [rsp+38h] [rbp-39h] BYREF
  _WORD *v17; // [rsp+40h] [rbp-31h]
  _WORD v18[40]; // [rsp+48h] [rbp-29h] BYREF

  v1 = MmVerifierData;
  v16[0] = -268421063;
  v16[1] = MmVerifierData;
  v3 = 0;
  LODWORD(v17) = 0;
  v4 = *((_QWORD *)a1 + 1);
  v5 = *a1 >> 1;
  v6 = v5;
  if ( v5 < 0x10 )
    v6 = 16;
  HIDWORD(v17) = 1749893549 * (MmVerifierData + 1);
  if ( v6 )
  {
    do
    {
      *((_BYTE *)v16 + (v3 & 0xF)) ^= RtlUpcaseUnicodeChar(*(_WORD *)(v4 + 2LL * (v3 % v5)));
      ++v3;
    }
    while ( v3 < v6 );
  }
  v7 = 0;
  while ( 1 )
  {
    v8 = 1;
    v9 = v16;
    LODWORD(v10) = 0;
    v11 = 16LL;
    do
    {
      v12 = (unsigned __int8)*v9 + ((_DWORD)v10 << 8);
      v13 = v12 / 0x3E;
      *v9 = v12 / 0x3E;
      v10 = v12 % 0x3E;
      if ( (_BYTE)v13 )
        v8 = 0;
      ++v9;
      --v11;
    }
    while ( v11 );
    v14 = v7;
    result = Printable[v10];
    ++v7;
    v18[v14] = result;
    if ( v7 >= 0x21 )
      break;
    if ( v8 )
    {
      if ( 2 * (unsigned __int64)v7 >= 0x42 )
        _report_rangecheckfailure();
      v18[v7] = 0;
      v17 = v18;
      HIWORD(v16[0]) = 2 * v7;
      LOWORD(v16[0]) = 2 * v7;
      return VfUtilDbgPrint("Driver Verifier: Enabled for %wZ, flags 0x%x, build %ld, key %wZ\n", a1, v1, 14393LL, v16);
    }
  }
  return result;
}
