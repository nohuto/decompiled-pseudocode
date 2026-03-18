/*
 * XREFs of ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0023768
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C008C470 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetNumHistoryLayersUsed(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  __int64 i; // r15
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r14
  int v9; // ecx

  v2 = 0;
  v3 = 0LL;
  for ( i = *((_QWORD *)a1 + a2 + 324); (unsigned int)v3 < *((_DWORD *)a1 + 31); v3 = (unsigned int)(v3 + 1) )
  {
    v6 = *(_QWORD *)(i + 8 * v3 + 24);
    if ( v6 )
    {
      v7 = v6 + 1100;
      v8 = 64LL;
      do
      {
        if ( *(_DWORD *)v7 > 0xCu || (v9 = 4673, !_bittest(&v9, *(_DWORD *)v7)) )
          v2 += RtlNumberOfSetBitsUlongPtr((unsigned __int8)**(_DWORD **)(v7 + 108));
        v7 += 1160LL;
        --v8;
      }
      while ( v8 );
    }
  }
  return v2;
}
