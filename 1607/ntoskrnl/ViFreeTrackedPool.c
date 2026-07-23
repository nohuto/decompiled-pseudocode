/*
 * XREFs of ViFreeTrackedPool @ 0x140702470
 * Callers:
 *     VerifierFreeTrackedPool @ 0x1401EEC54 (VerifierFreeTrackedPool.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ViFreeTrackedPool(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v5; // rbx
  unsigned __int64 v7; // rdi
  __int64 *v8; // rdi
  ULONG_PTR v9; // r14
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 result; // rax

  v5 = a2;
  if ( a4 == 1 )
  {
    v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
    if ( (a1 & 0xFFF) != 0 )
      v8 = (__int64 *)(v7 + 16);
    else
      v8 = (__int64 *)(v7 + 4072);
  }
  else if ( (a1 & 0xFFF) != 0 )
  {
    v5 = a2 - 16;
    v8 = (__int64 *)(a2 - 16 + a1 - 8);
  }
  else
  {
    v8 = (__int64 *)(a1 + a2 - 8);
  }
  v9 = *v8;
  if ( (*v8 & 3) != 0 || !MiIsAddressValid(*v8) )
    VerifierBugCheckIfAppropriate(196, 314, a1, v9, (ULONG_PTR)v8);
  if ( *(_QWORD *)((v9 & 0xFFFFFFFFFFFFF000uLL) + 0x10) != 556929861LL )
    VerifierBugCheckIfAppropriate(196, 315, a1, (v9 & 0xFFFFF000) + 16, (ULONG_PTR)v8);
  v10 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFF000uLL) + 8);
  if ( (v10 & 3) != 0 || !MiIsAddressValid(v10 + 40) )
    VerifierBugCheckIfAppropriate(196, 316, a1, v10, (v9 & 0xFFFFFFFFFFFFF000uLL) + 8);
  if ( *(_QWORD *)(v10 + 40) != 2557876544LL )
    VerifierBugCheckIfAppropriate(196, 317, a1, v10 + 40, 0x98761940uLL);
  if ( *(_QWORD *)v9 != a1 )
    VerifierBugCheckIfAppropriate(196, 318, a1, *(_QWORD *)v9, v9);
  if ( *(_QWORD *)(v9 + 16) != v5 )
    VerifierBugCheckIfAppropriate(196, 319, a1, v5, v9 + 16);
  *(_QWORD *)(v9 + 16) |= 1uLL;
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v10 + 64), (PSLIST_ENTRY)v9);
  v11 = -v5;
  if ( (a3 & 1) != 0 )
  {
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 96), v11);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 80));
    _InterlockedExchangeAdd64(&qword_140307290, v11);
    _InterlockedDecrement(&dword_140307280);
  }
  else
  {
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 104), v11);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 84));
    _InterlockedExchangeAdd64(&qword_140307298, v11);
    _InterlockedDecrement(&dword_140307284);
  }
  return result;
}
