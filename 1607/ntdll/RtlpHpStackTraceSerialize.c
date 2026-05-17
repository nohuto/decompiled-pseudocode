/*
 * XREFs of RtlpHpStackTraceSerialize @ 0x1800F885C
 * Callers:
 *     RtlQueryHeapInformation @ 0x180081940 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002A760 (RtlRunOnceExecuteOnce.c)
 *     RtlpEnumProcessHeaps @ 0x18004E4CC (RtlpEnumProcessHeaps.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlStackDbContextSerialize @ 0x180101518 (RtlStackDbContextSerialize.c)
 */

__int64 __fastcall RtlpHpStackTraceSerialize(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  if ( a2 != 32 || *(_DWORD *)a1 != 1 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 8) != -1LL )
    return RtlpHpStackTraceSerializeRemote();
  if ( (RtlpHpHeapFeatures & 4) == 0 )
    return 3221225485LL;
  result = RtlRunOnceExecuteOnce(
             &RtlpHpStackDbInitVar,
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpStackDbInitialize,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    result = RtlStackDbContextSerialize(v4, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
    if ( (int)result >= 0 )
    {
      result = RtlpEnumProcessHeaps((__int64)RtlpHpStackTraceHeapSerialize, a1, 3);
      if ( (int)result >= 0 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 16))(0LL, 0LL, *(_QWORD *)(a1 + 24));
        if ( (int)result >= 0 )
          return 0LL;
      }
    }
  }
  return result;
}
