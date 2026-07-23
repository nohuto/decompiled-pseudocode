/*
 * XREFs of EtwpSysModuleRunDown @ 0x140499864
 * Callers:
 *     EtwpProcessEnumCallback @ 0x140499444 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     HvlQueryConnection @ 0x14008868C (HvlQueryConnection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MmEnumerateSystemImages @ 0x140499990 (MmEnumerateSystemImages.c)
 */

__int64 __fastcall EtwpSysModuleRunDown(unsigned int a1, char a2)
{
  __int16 v4; // ax
  __int64 v6; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v8; // [rsp+50h] [rbp-31h]
  __int16 v9; // [rsp+54h] [rbp-2Dh]
  _BYTE v10[16]; // [rsp+58h] [rbp-29h] BYREF
  int v11; // [rsp+68h] [rbp-19h]
  int v12; // [rsp+70h] [rbp-11h]
  __int16 v13; // [rsp+76h] [rbp-Bh]
  __int64 v14; // [rsp+78h] [rbp-9h]
  __int64 v15; // [rsp+80h] [rbp-1h]
  __int64 v16; // [rsp+88h] [rbp+7h]
  PVOID *v17; // [rsp+98h] [rbp+17h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+1Fh]
  void *v19; // [rsp+B8h] [rbp+37h]
  __int64 v20; // [rsp+C0h] [rbp+3Fh]

  if ( !a2 )
  {
    v17 = &PsNtosImageBase;
    v18 = 8LL;
    EtwpLogKernelEvent((__int64)&v17, EtwpHostSiloState, a1, 1u, 0x1421u, 0x401802u);
    if ( !(unsigned int)HvlQueryConnection(&v6) )
    {
      v17 = (PVOID *)&v6;
      v18 = 8LL;
      EtwpLogKernelEvent((__int64)&v17, EtwpHostSiloState, a1, 1u, 0x1422u, 0x401802u);
    }
  }
  v8 = a1;
  v7[1] = &v17;
  v7[0] = v10;
  v4 = 5123;
  if ( !a2 )
    v4 = 5124;
  v9 = v4;
  v11 = 0;
  v17 = (PVOID *)v10;
  v14 = 0LL;
  v19 = &EtwpNull;
  v12 = 0;
  v13 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v18 = 56LL;
  v20 = 2LL;
  return MmEnumerateSystemImages(EtwpSystemImageEnumCallback, v7);
}
