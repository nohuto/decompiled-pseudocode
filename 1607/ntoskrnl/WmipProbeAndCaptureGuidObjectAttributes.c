/*
 * XREFs of WmipProbeAndCaptureGuidObjectAttributes @ 0x140473C84
 * Callers:
 *     WmipProbeWmiOpenGuidBlock @ 0x140473BD0 (WmipProbeWmiOpenGuidBlock.c)
 * Callees:
 *     IoIs32bitProcess @ 0x1400C1690 (IoIs32bitProcess.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall WmipProbeAndCaptureGuidObjectAttributes(
        __int64 a1,
        unsigned __int16 *a2,
        _WORD *a3,
        unsigned __int64 a4)
{
  unsigned int v8; // ebx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int128 v13; // [rsp+38h] [rbp-20h]

  v8 = 0;
  if ( IoIs32bitProcess(0LL) )
  {
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a4 + 24 > 0x7FFFFFFF0000LL || a4 + 24 < a4 )
      MEMORY[0x7FFFFFFF0000] = 0;
    *(_DWORD *)a1 = 48;
    *(_QWORD *)(a1 + 8) = *(unsigned int *)(a4 + 4);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a4 + 12);
    *(_QWORD *)(a1 + 32) = *(unsigned int *)(a4 + 16);
    *(_QWORD *)(a1 + 40) = *(unsigned int *)(a4 + 20);
    v11 = *(unsigned int *)(a4 + 8);
    if ( !*(_DWORD *)(a4 + 8) )
      return (unsigned int)-1073741811;
    if ( (v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v11 + 8 > 0x7FFFFFFF0000LL || v11 + 8 < v11 )
      MEMORY[0x7FFFFFFF0000] = 0;
    *a2 = *(_WORD *)v11;
    a2[1] = *(_WORD *)(v11 + 2);
    *((_QWORD *)a2 + 1) = *(unsigned int *)(v11 + 4);
  }
  else
  {
    if ( a4 >= 0x7FFFFFFF0000LL )
      a4 = 0x7FFFFFFF0000LL;
    *(_OWORD *)a1 = *(_OWORD *)a4;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a4 + 32);
    v9 = *(_QWORD *)(a1 + 16);
    if ( !v9 )
      return (unsigned int)-1073741811;
    if ( v9 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    LODWORD(v13) = *(_DWORD *)v9;
    *((_QWORD *)&v13 + 1) = *(_QWORD *)(v9 + 8);
    *(_OWORD *)a2 = v13;
  }
  if ( *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 40) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( *a2 == 90 )
  {
    v10 = *((_QWORD *)a2 + 1);
    if ( v10 + 90 > 0x7FFFFFFF0000LL || v10 + 90 < v10 )
      MEMORY[0x7FFFFFFF0000] = 0;
    memmove(a3, *((const void **)a2 + 1), *a2);
    a3[45] = 0;
    *((_QWORD *)a2 + 1) = a3;
    *(_QWORD *)(a1 + 16) = a2;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
