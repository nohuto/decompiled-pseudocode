/*
 * XREFs of ?GetTotalSegmentSize@VIDMM_GLOBAL@@QEAAXPEA_K00@Z @ 0x1C0033070
 * Callers:
 *     VidMmGetTotalSegmentSize @ 0x1C0005D20 (VidMmGetTotalSegmentSize.c)
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
  unsigned __int64 v8; // rax
  int v9; // ecx
  unsigned __int64 v10; // rax

  v4 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  for ( *a4 = 0LL; v4 < *((_DWORD *)this + 926); ++v4 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v4);
    v8 = *(_QWORD *)(v7 + 200);
    if ( v8 >= *(_QWORD *)(v7 + 40) )
      v8 = *(_QWORD *)(v7 + 40);
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
  v10 = *((_QWORD *)this + 807);
  if ( *a4 > v10 )
    *a4 = v10;
}
