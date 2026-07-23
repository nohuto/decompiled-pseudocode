/*
 * XREFs of PnpPrepareDriverLoading @ 0x140515AD8
 * Callers:
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x14079BB9C (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PpCheckInDriverDatabase @ 0x140515BB0 (PpCheckInDriverDatabase.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PnpSetBlockedDriverEvent @ 0x140642DB4 (PnpSetBlockedDriverEvent.c)
 */

__int64 __fastcall PnpPrepareDriverLoading(int a1, void *a2, void *a3, int a4, _DWORD *a5)
{
  int v7; // ebx
  PIMAGE_NT_HEADERS v9; // rax
  unsigned int v10; // ebx
  _DWORD *P; // [rsp+30h] [rbp-48h]
  _QWORD v13[2]; // [rsp+38h] [rbp-40h] BYREF

  v7 = (int)a3;
  *a5 = 0;
  v9 = RtlImageNtHeader(a3);
  if ( !v9 )
    return 3221225473LL;
  v13[0] = 0LL;
  v13[1] = 0LL;
  v10 = PpCheckInDriverDatabase(a1, (_DWORD)a2, v7, v9->OptionalHeader.SizeOfImage, a4, (__int64)v13);
  if ( v10 + 1073740949 <= 1 )
    PnpSetBlockedDriverEvent(v13);
  if ( (int)IopGetRegistryValue(a2) >= 0 )
  {
    if ( P[1] == 4 && P[3] == 4 )
      *a5 = *(_DWORD *)((char *)P + (unsigned int)P[2]);
    ExFreePoolWithTag(P, 0);
  }
  return v10;
}
