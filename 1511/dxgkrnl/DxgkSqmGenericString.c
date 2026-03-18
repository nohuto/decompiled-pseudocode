/*
 * XREFs of DxgkSqmGenericString @ 0x1C000E060
 * Callers:
 *     ?SqmAdapterInformation@DXGADAPTER@@QEAAXXZ @ 0x1C00D6CEC (-SqmAdapterInformation@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 */

int __fastcall DxgkSqmGenericString(PCEVENT_DESCRIPTOR EventDescriptor, int a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  __int64 v6; // rax
  int Id; // [rsp+38h] [rbp-19h] BYREF
  _QWORD UserData[8]; // [rsp+48h] [rbp-9h] BYREF
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  int v11; // [rsp+C0h] [rbp+6Fh] BYREF

  v3 = &retaddr;
  v11 = a2;
  if ( Microsoft_Windows_DxgKrnlHandle )
  {
    Id = EventDescriptor->Id;
    memset(&UserData[1], 0, 0x38uLL);
    UserData[3] = 16LL;
    UserData[0] = &Id;
    UserData[1] = 4LL;
    UserData[2] = &unk_1C002E680;
    UserData[4] = &v11;
    v6 = -1LL;
    UserData[5] = 4LL;
    UserData[6] = a3;
    do
      ++v6;
    while ( *(_WORD *)(a3 + 2 * v6) );
    UserData[7] = (unsigned int)(2 * v6 + 2);
    LODWORD(v3) = EtwWrite(Microsoft_Windows_DxgKrnlHandle, EventDescriptor, 0LL, 4u, (PEVENT_DATA_DESCRIPTOR)UserData);
  }
  return (int)v3;
}
