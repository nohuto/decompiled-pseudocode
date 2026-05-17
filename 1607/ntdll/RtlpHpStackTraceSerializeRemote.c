/*
 * XREFs of RtlpHpStackTraceSerializeRemote @ 0x1800F8900
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x1800F885C (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA33C (RtlpHeapPerformCrossProcessQuery.c)
 */

__int64 __fastcall RtlpHpStackTraceSerializeRemote(__int64 a1)
{
  int i; // eax
  __int64 v3; // rcx
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  signed __int64 v8; // [rsp+50h] [rbp-29h]
  _QWORD v9[14]; // [rsp+60h] [rbp-19h] BYREF
  signed __int64 v10; // [rsp+E8h] [rbp+6Fh]

  v10 = 0x10000LL;
  for ( i = NtCreateSection(); ; i = NtCreateSection() )
  {
    v5 = i;
    if ( i < 0 )
      break;
    memset(v9, 0, 0x50uLL);
    v3 = *(_QWORD *)(a1 + 8);
    v9[0] = 0LL;
    v9[1] = v10;
    LODWORD(v9[3]) = 0x20000000;
    v4 = RtlpHeapPerformCrossProcessQuery(v3, (__int64)v9);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v8 = 0LL;
      if ( v10 <= 0 )
      {
        return 0;
      }
      else
      {
        while ( 1 )
        {
          v5 = ZwMapViewOfSection();
          if ( v5 < 0 )
            break;
          v6 = (unsigned __int64)(v8 + 0x10000) <= v9[4] ? 0x10000LL : v9[4] - v8;
          v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(0LL, v6, *(_QWORD *)(a1 + 24));
          if ( v5 < 0 )
            break;
          NtUnmapViewOfSection();
          v8 += 0x10000LL;
          if ( v8 >= v10 )
            return 0;
        }
      }
      return (unsigned int)v5;
    }
    if ( v4 != -1073741789 )
      return (unsigned int)v5;
    NtClose(0LL);
    v10 = (v9[4] + 0xFFFFLL) & 0xFFFFFFFFFFFF0000uLL;
  }
  return (unsigned int)v5;
}
