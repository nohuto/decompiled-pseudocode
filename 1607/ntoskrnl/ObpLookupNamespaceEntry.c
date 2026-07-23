/*
 * XREFs of ObpLookupNamespaceEntry @ 0x1404775CC
 * Callers:
 *     ObpRegisterPrivateNamespace @ 0x140476998 (ObpRegisterPrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x1404773A8 (NtOpenPrivateNamespace.c)
 * Callees:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140477F64 (RtlEnumerateBoundaryDescriptorEntries.c)
 */

__int64 *__fastcall ObpLookupNamespaceEntry(__int64 a1, __int64 a2)
{
  __int64 **v3; // rdi
  __int64 *i; // rbx
  _QWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]
  int v9; // [rsp+40h] [rbp-18h]

  v3 = (__int64 **)(a1 + 16LL * *(unsigned __int8 *)(a2 + 40));
  for ( i = *v3; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v3 )
      return 0LL;
    if ( i[3] == *(_QWORD *)(a2 + 24) && *((_DWORD *)i + 13) == *(_DWORD *)(a2 + 52) )
    {
      v9 = 0;
      v8 = 0;
      v7 = 0;
      v6[0] = i;
      v6[1] = a2;
      if ( (int)RtlEnumerateBoundaryDescriptorEntries(i + 6, ObpCompareEntryLevel1, v6) >= 0 && v9 >= 0 && v8 == v7 )
        break;
    }
  }
  return i;
}
