/*
 * XREFs of RtlStringCbCatW @ 0x18001EAE4
 * Callers:
 *     QuerySecurityDescriptorValue @ 0x18001E64C (QuerySecurityDescriptorValue.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x18001E8A0 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x18001EBC0 (RtlStringLengthWorkerW.c)
 *     RtlStringCopyWorkerW @ 0x18001EC10 (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCbCatW(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned __int64 v4; // r10
  __int64 v5; // r11
  __int64 v7; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v4 = a2 >> 1;
  v5 = a1;
  if ( (a2 >> 1) - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    v3 = RtlStringLengthWorkerW(a1, a2 >> 1, &v9);
    v7 = v9;
  }
  if ( v3 >= 0 )
    return (unsigned int)RtlStringCopyWorkerW(v5 + 2 * v7, v4 - v7, 0LL, a3);
  return (unsigned int)v3;
}
