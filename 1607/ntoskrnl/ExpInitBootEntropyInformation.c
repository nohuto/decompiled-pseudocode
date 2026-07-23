/*
 * XREFs of ExpInitBootEntropyInformation @ 0x14057B460
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall ExpInitBootEntropyInformation(PRTL_RUN_ONCE a1, _DWORD **a2, PVOID *a3)
{
  _DWORD *v4; // rbx
  char *v5; // rdi
  _DWORD *v6; // rcx
  signed __int64 v7; // rdx
  __int64 v8; // r8
  __int128 v9; // xmm0

  v4 = *a2;
  v5 = (char *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 240LL);
  if ( *a2 )
  {
    memset(v4, 0, 0x378uLL);
    v6 = v4 + 4;
    v7 = v5 - (char *)v4;
    v8 = 8LL;
    do
    {
      *(v6 - 2) = *(_DWORD *)((char *)v6 + v7 - 8);
      *(_QWORD *)v6 = *(_QWORD *)((char *)v6 + v7);
      v6[2] = *(_DWORD *)((char *)v6 + v7 + 8);
      v6[3] = *(_DWORD *)((char *)v6 + v7 + 12);
      *((_QWORD *)v6 + 2) = *(_QWORD *)((char *)v6 + v7 + 16);
      v6[6] = *(_DWORD *)((char *)v6 + v7 + 24);
      v9 = *(_OWORD *)((char *)v6 + v7 + 28);
      v6 += 26;
      *(_OWORD *)(v6 - 19) = v9;
      *(_OWORD *)(v6 - 15) = *(_OWORD *)((char *)v6 + v7 - 60);
      *(_OWORD *)(v6 - 11) = *(_OWORD *)((char *)v6 + v7 - 44);
      *(_OWORD *)(v6 - 7) = *(_OWORD *)((char *)v6 + v7 - 28);
      --v8;
    }
    while ( v8 );
    *v4 = *(_DWORD *)v5;
    *(_OWORD *)(v4 + 210) = *(_OWORD *)(v5 + 840);
    *(_OWORD *)(v4 + 214) = *(_OWORD *)(v5 + 856);
    *(_OWORD *)(v4 + 218) = *(_OWORD *)(v5 + 872);
  }
  memset(v5, 0, 0x378uLL);
  *a2 = (_DWORD *)-1LL;
  return 1LL;
}
