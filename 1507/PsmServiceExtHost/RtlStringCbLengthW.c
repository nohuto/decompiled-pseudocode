/*
 * XREFs of RtlStringCbLengthW @ 0x18000451C
 * Callers:
 *     GetNormalizedObjectPath @ 0x180003E10 (GetNormalizedObjectPath.c)
 *     QuerySecurityDescriptorValue @ 0x180004004 (QuerySecurityDescriptorValue.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x180004258 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x18000457C (RtlStringLengthWorkerW.c)
 */

__int64 __fastcall RtlStringCbLengthW(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  _QWORD *v5; // r11
  int v6; // r8d
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a2 >> 1;
  v8 = 0LL;
  v5 = a3;
  if ( a1 && v4 <= 0x7FFFFFFF )
  {
    v6 = RtlStringLengthWorkerW(a1, v4, &v8);
    v3 = v8;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v5 )
  {
    if ( v6 < 0 )
      *v5 = 0LL;
    else
      *v5 = 2 * v3;
  }
  return (unsigned int)v6;
}
