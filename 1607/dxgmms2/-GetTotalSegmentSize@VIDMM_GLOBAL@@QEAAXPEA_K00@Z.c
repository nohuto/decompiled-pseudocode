/*
 * XREFs of ?GetTotalSegmentSize@VIDMM_GLOBAL@@QEAAXPEA_K00@Z @ 0x1C00573C8
 * Callers:
 *     VidMmGetTotalSegmentSize @ 0x1C0011B40 (VidMmGetTotalSegmentSize.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::GetTotalSegmentSize(
        VIDMM_GLOBAL *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // r10
  unsigned int v8; // ecx
  unsigned __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  int v14; // eax

  v4 = 0LL;
  *a2 = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  if ( *((_DWORD *)this + 1604) > 1u )
    v8 = *(_DWORD *)(*((_QWORD *)this + 5017) + 8LL);
  else
    v8 = *((_DWORD *)this + 926);
  v9 = 0LL;
  if ( !v8 )
    goto LABEL_12;
  v10 = 0LL;
  v11 = v8;
  do
  {
    v12 = *(_QWORD *)(v10 + *((_QWORD *)this + 464));
    v13 = *(_QWORD *)(v12 + 40);
    if ( *(_QWORD *)(v12 + 200) < v13 )
      v13 = *(_QWORD *)(v12 + 200);
    v14 = *(_DWORD *)(v12 + 56);
    if ( (v14 & 0x1001) != 0 )
    {
      if ( (v14 & 1) != 0 )
        v4 += v13;
      else
        v9 += v13;
    }
    else if ( (v14 & 0x40) != 0 )
    {
      *a3 += v13;
    }
    else
    {
      *a2 += v13;
    }
    v10 += 8LL;
    --v11;
  }
  while ( v11 );
  if ( v4 <= v9 )
LABEL_12:
    v4 = v9;
  *a4 = v4;
  if ( v4 > *((_QWORD *)this + 807) )
    v4 = *((_QWORD *)this + 807);
  *a4 = v4;
  if ( v4 > 1LL << *((_DWORD *)this + 10216) )
  {
    if ( (*((_BYTE *)this + 40872) & 1) != 0 )
      v4 = 1LL << *((_DWORD *)this + 10216);
    *a4 = v4;
  }
}
