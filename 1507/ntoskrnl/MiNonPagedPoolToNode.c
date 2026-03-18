/*
 * XREFs of MiNonPagedPoolToNode @ 0x140064E04
 * Callers:
 *     MiReturnNonPagedPoolVa @ 0x1400645C0 (MiReturnNonPagedPoolVa.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall MiNonPagedPoolToNode(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // edx
  PSLIST_HEADER v2; // rax

  v1 = 0;
  if ( !KeNumberNodes )
LABEL_7:
    KeBugCheckEx(0x1Au, 0x5201uLL, BugCheckParameter2, 0LL, 0LL);
  v2 = qword_14034EB70 + 21;
  while ( BugCheckParameter2 < v2[-1].Region || BugCheckParameter2 >= v2->Alignment )
  {
    ++v1;
    v2 += 26;
    if ( v1 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_7;
  }
  return v1;
}
