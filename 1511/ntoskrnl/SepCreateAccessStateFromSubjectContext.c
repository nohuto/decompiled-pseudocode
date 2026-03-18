/*
 * XREFs of SepCreateAccessStateFromSubjectContext @ 0x140043450
 * Callers:
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     SeSubProcessToken @ 0x14044C430 (SeSubProcessToken.c)
 *     SeCreateAccessStateEx @ 0x14046E4F4 (SeCreateAccessStateEx.c)
 *     SeCreateAccessState @ 0x1404704A0 (SeCreateAccessState.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x140476F10 (NtOpenProcessTokenEx.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlMapGenericMask @ 0x140472860 (RtlMapGenericMask.c)
 */

__int64 __fastcall SepCreateAccessStateFromSubjectContext(
        _OWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        ACCESS_MASK a4,
        PGENERIC_MAPPING GenericMapping)
{
  PGENERIC_MAPPING v5; // rbp
  ACCESS_MASK v6; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  ACCESS_MASK AccessMask; // [rsp+58h] [rbp+20h] BYREF

  v5 = GenericMapping;
  v6 = a4;
  AccessMask = a4;
  if ( (a4 & 0xF0000000) != 0 && GenericMapping )
  {
    RtlMapGenericMask(&AccessMask, GenericMapping);
    v6 = AccessMask;
  }
  memset(a2, 0, 0xA0uLL);
  memset(a3, 0, 0xE0uLL);
  a2[9] = a3;
  *((_OWORD *)a2 + 2) = *a1;
  *((_OWORD *)a2 + 3) = a1[1];
  v10 = a2[4];
  if ( v10 )
    v11 = a2[4];
  else
    v11 = a2[6];
  if ( (*(_DWORD *)(v11 + 72) & 0x800000) != 0 )
    *((_DWORD *)a2 + 3) = 1;
  if ( !v10 )
    v10 = a2[6];
  *((_DWORD *)a2 + 3) |= *(_DWORD *)(v10 + 200) & 0x810;
  *((_DWORD *)a2 + 4) = v6;
  *((_DWORD *)a2 + 6) = v6;
  *a3 = a2 + 10;
  *a2 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  result = 0LL;
  if ( v5 )
    *(GENERIC_MAPPING *)(a3 + 1) = *v5;
  return result;
}
