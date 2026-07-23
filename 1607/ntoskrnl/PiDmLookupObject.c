/*
 * XREFs of PiDmLookupObject @ 0x1404E9190
 * Callers:
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E9110 (PiDmRemoveCacheReferenceForObject.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400C19B0 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PiDmInitializeComparisonObject @ 0x1404E20C8 (PiDmInitializeComparisonObject.c)
 */

__int64 __fastcall PiDmLookupObject(__int64 a1, wchar_t *a2)
{
  __int64 v3; // rbx
  PVOID v4; // rax
  _BYTE *Buffer; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v7[112]; // [rsp+30h] [rbp-88h] BYREF

  v3 = 0LL;
  Buffer = v7;
  if ( a2 )
  {
    if ( PiDmInitializeComparisonObject(a2, *(_DWORD *)(a1 + 208), (__int64)v7) >= 0 )
    {
      v4 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), &Buffer);
      if ( v4 )
        return *(_QWORD *)v4;
    }
  }
  return v3;
}
