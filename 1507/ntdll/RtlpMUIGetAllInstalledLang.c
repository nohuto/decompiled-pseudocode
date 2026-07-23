/*
 * XREFs of RtlpMUIGetAllInstalledLang @ 0x1800D6550
 * Callers:
 *     RtlGetFileMUIPath @ 0x180054700 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800D5014 (RtlpAddLanguagesToMultiSZ.c)
 */

char __fastcall RtlpMUIGetAllInstalledLang(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  char v3; // bl
  _WORD *v7; // r8
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // edi
  _WORD *v11; // r9
  unsigned int v13; // [rsp+40h] [rbp-20h] BYREF
  _WORD *Heap; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+38h] BYREF

  v3 = 0;
  Heap = 0LL;
  v16 = 0;
  v13 = 520;
  v15 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
  v7 = Heap;
  if ( Heap )
  {
    v8 = *(_QWORD *)(a1 + 24);
    v9 = 0;
    v16 = 0;
    v10 = 0;
    v15 = 0LL;
    if ( *(_WORD *)(v8 + 6) )
    {
      do
      {
        v11 = (_WORD *)(*(_QWORD *)(v8 + 16) + 28LL * v10);
        if ( (*v11 & 0x1000) == 0 )
          RtlpAddLanguagesToMultiSZ((const void **)&Heap, &v16, &v13, v11, a1, &v15, 0);
        v8 = *(_QWORD *)(a1 + 24);
        ++v10;
      }
      while ( v10 < *(unsigned __int16 *)(v8 + 6) );
      v7 = Heap;
      v9 = v16;
    }
    v7[v9] = 0;
    v3 = 1;
    *a2 = Heap;
    *a3 = v15;
  }
  return v3;
}
