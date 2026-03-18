/*
 * XREFs of ?GetTotalSegmentSize@VIDMM_GLOBAL@@QEAAXPEA_K00@Z @ 0x1C004FA90
 * Callers:
 *     VidMmGetTotalSegmentSize @ 0x1C00144F0 (VidMmGetTotalSegmentSize.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::GetTotalSegmentSize(
        VIDMM_GLOBAL *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned int v4; // r10d
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rax

  v4 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  for ( *a4 = 0LL; v4 < *((_DWORD *)this + 926); ++v4 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v4);
    v8 = *(_QWORD *)(v7 + 40);
    if ( *(_QWORD *)(v7 + 200) < v8 )
      v8 = *(_QWORD *)(v7 + 200);
    v9 = *(_DWORD *)(v7 + 56);
    if ( (v9 & 0x1001) != 0 )
    {
      *a4 += v8;
    }
    else if ( (v9 & 0x40) != 0 )
    {
      *a3 += v8;
    }
    else
    {
      *a2 += v8;
    }
  }
  v10 = *a4;
  if ( *a4 > *((_QWORD *)this + 807) )
    v10 = *((_QWORD *)this + 807);
  *a4 = v10;
}
