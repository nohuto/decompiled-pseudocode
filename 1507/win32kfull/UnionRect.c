/*
 * XREFs of UnionRect @ 0x1C0091308
 * Callers:
 *     GetInheritedMonitor @ 0x1C005C590 (GetInheritedMonitor.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     CalcWindowFullScreen @ 0x1C006601C (CalcWindowFullScreen.c)
 *     _ScrollDC @ 0x1C008D9BC (_ScrollDC.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C008DAB0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00EC108 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     xxxScrollWindowEx @ 0x1C0112924 (xxxScrollWindowEx.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01E7690 (FlushWEFCOMPOSITEDDCEBounds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnionRect(_DWORD *a1, int *a2, int *a3)
{
  BOOL v4; // ecx
  int v5; // r10d
  BOOL v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 result; // rax
  __int128 v11; // xmm0

  v4 = *a2 >= a2[2] || a2[1] >= a2[3];
  v5 = *a3;
  v6 = *a3 >= a3[2] || a3[1] >= a3[3];
  if ( !v4 )
  {
    if ( !v6 )
    {
      if ( *a2 < v5 )
        v5 = *a2;
      *a1 = v5;
      v7 = a3[1];
      if ( a2[1] < v7 )
        v7 = a2[1];
      a1[1] = v7;
      v8 = a3[2];
      if ( a2[2] > v8 )
        v8 = a2[2];
      a1[2] = v8;
      v9 = a3[3];
      if ( a2[3] > v9 )
        v9 = a2[3];
      a1[3] = v9;
      return 1LL;
    }
    v11 = *(_OWORD *)a2;
LABEL_22:
    *(_OWORD *)a1 = v11;
    return 1LL;
  }
  if ( !v6 )
  {
    v11 = *(_OWORD *)a3;
    goto LABEL_22;
  }
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  return result;
}
