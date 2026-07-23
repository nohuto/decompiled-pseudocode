/*
 * XREFs of RtlpHpStackTraceSerialize @ 0x1800F885C
 * Callers:
 *     RtlQueryHeapInformation @ 0x180081930 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002A750 (RtlRunOnceExecuteOnce.c)
 *     RtlpEnumProcessHeaps @ 0x18004E4BC (RtlpEnumProcessHeaps.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlStackDbContextSerialize @ 0x180101458 (RtlStackDbContextSerialize.c)
 */

int __fastcall RtlpHpStackTraceSerialize(__int64 a1, __int64 a2)
{
  int result; // eax
  __int64 v4; // rcx

  if ( a2 != 32 || *(_DWORD *)a1 != 1 )
    return -1073741811;
  if ( *(_QWORD *)(a1 + 8) != -1LL )
    return RtlpHpStackTraceSerializeRemote();
  if ( (RtlpHpHeapFeatures & 4) == 0 )
    return -1073741811;
  result = RtlRunOnceExecuteOnce(&RtlpHpStackDbInitVar, (PRTL_RUN_ONCE_INIT_FN)RtlpHpStackDbInitialize, 0LL, 0LL);
  if ( result >= 0 )
  {
    result = RtlStackDbContextSerialize(v4, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
    if ( result >= 0 )
    {
      result = RtlpEnumProcessHeaps((__int64)RtlpHpStackTraceHeapSerialize, a1, 3);
      if ( result >= 0 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 16))(0LL, 0LL, *(_QWORD *)(a1 + 24));
        if ( result >= 0 )
          return 0;
      }
    }
  }
  return result;
}
