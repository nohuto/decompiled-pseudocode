/*
 * XREFs of MiNonPagedPoolToNode @ 0x140103D60
 * Callers:
 *     MiReturnSystemVa @ 0x1400C08D0 (MiReturnSystemVa.c)
 *     MiReturnNonPagedPoolVa @ 0x140103670 (MiReturnNonPagedPoolVa.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

__int64 __fastcall MiNonPagedPoolToNode(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // edx
  PSLIST_HEADER v2; // rax

  v1 = 0;
  if ( !KeNumberNodes )
LABEL_7:
    KeBugCheckEx(0x1Au, 0x5201uLL, BugCheckParameter2, 0LL, 0LL);
  v2 = qword_1403269B0 + 21;
  while ( BugCheckParameter2 < v2[-1].Region || BugCheckParameter2 >= v2->Alignment )
  {
    ++v1;
    v2 += 26;
    if ( v1 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_7;
  }
  return v1;
}
