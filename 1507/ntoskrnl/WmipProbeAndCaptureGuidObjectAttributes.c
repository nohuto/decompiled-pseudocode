/*
 * XREFs of WmipProbeAndCaptureGuidObjectAttributes @ 0x1404AB2C4
 * Callers:
 *     WmipProbeWmiOpenGuidBlock @ 0x1404AB210 (WmipProbeWmiOpenGuidBlock.c)
 * Callees:
 *     IoIs32bitProcess @ 0x140019F50 (IoIs32bitProcess.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall WmipProbeAndCaptureGuidObjectAttributes(__int64 a1, unsigned __int16 *a2, _WORD *a3, ULONG64 a4)
{
  unsigned int v8; // ebx
  ULONG64 v9; // rcx
  unsigned __int64 v10; // rcx
  _BYTE *v11; // rdx
  unsigned __int64 v12; // rcx
  __int128 v14; // [rsp+38h] [rbp-20h]

  v8 = 0;
  if ( IoIs32bitProcess(0LL) )
  {
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (_BYTE *)MmUserProbeAddress;
    if ( a4 + 24 > MmUserProbeAddress || a4 + 24 < a4 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v11 = (_BYTE *)MmUserProbeAddress;
    }
    *(_DWORD *)a1 = 48;
    *(_QWORD *)(a1 + 8) = *(unsigned int *)(a4 + 4);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a4 + 12);
    *(_QWORD *)(a1 + 32) = *(unsigned int *)(a4 + 16);
    *(_QWORD *)(a1 + 40) = *(unsigned int *)(a4 + 20);
    v12 = *(unsigned int *)(a4 + 8);
    if ( !*(_DWORD *)(a4 + 8) )
      return (unsigned int)-1073741811;
    if ( (v12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v12 + 8 > (unsigned __int64)v11 || v12 + 8 < v12 )
      *v11 = 0;
    *a2 = *(_WORD *)v12;
    a2[1] = *(_WORD *)(v12 + 2);
    *((_QWORD *)a2 + 1) = *(unsigned int *)(v12 + 4);
  }
  else
  {
    if ( a4 >= MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    *(_OWORD *)a1 = *(_OWORD *)a4;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a4 + 32);
    v9 = *(_QWORD *)(a1 + 16);
    if ( !v9 )
      return (unsigned int)-1073741811;
    if ( v9 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    LODWORD(v14) = *(_DWORD *)v9;
    *((_QWORD *)&v14 + 1) = *(_QWORD *)(v9 + 8);
    *(_OWORD *)a2 = v14;
  }
  if ( *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 40) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( *a2 == 90 )
  {
    v10 = *((_QWORD *)a2 + 1);
    if ( v10 + 90 > MmUserProbeAddress || v10 + 90 < v10 )
      *(_BYTE *)MmUserProbeAddress = 0;
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
