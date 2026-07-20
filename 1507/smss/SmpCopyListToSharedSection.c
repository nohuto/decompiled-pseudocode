/*
 * XREFs of SmpCopyListToSharedSection @ 0x140008C00
 * Callers:
 *     SmpConfigureSharedSessionData @ 0x140008740 (SmpConfigureSharedSessionData.c)
 * Callees:
 *     memcpy_0 @ 0x14000C6BC (memcpy_0.c)
 */

PVOID __fastcall SmpCopyListToSharedSection(unsigned __int16 **a1, int a2, int a3, int a4, __int64 *a5, void **a6)
{
  int v6; // eax
  unsigned __int16 *v7; // r14
  unsigned int v9; // esi
  __int64 v10; // rbp
  _BYTE *v11; // rdi
  unsigned __int16 *v12; // rbx
  __int64 v13; // rcx
  _WORD *v14; // rdi
  __int64 v15; // rcx
  _WORD *v16; // rdi
  __int64 v17; // r8
  PVOID result; // rax
  _QWORD *v19; // rcx
  void **v20; // rax

  v6 = a4;
  v7 = *a1;
  v9 = 0;
  v10 = *a5;
  v11 = *a6;
  if ( *a1 != (unsigned __int16 *)a1 )
  {
    do
    {
      v12 = v7;
      v7 = *(unsigned __int16 **)v7;
      v13 = 2LL * v9;
      *(_QWORD *)(v10 + 8 * v13) = v11 - (_BYTE *)SmpMappedView;
      *(_WORD *)(v10 + 8 * v13 + 8) = v12[8];
      memcpy_0(v11, *((const void **)v12 + 3), v12[8]);
      v14 = &v11[v12[8]];
      ++v9;
      *v14 = 0;
      v11 = v14 + 1;
      if ( a2 )
      {
        v15 = 2LL * v9;
        *(_QWORD *)(v10 + 8 * v15) = v11 - (_BYTE *)SmpMappedView;
        *(_WORD *)(v10 + 8 * v15 + 8) = v12[16];
        memcpy_0(v11, *((const void **)v12 + 5), v12[16]);
        v16 = &v11[v12[16]];
        *v16 = 0;
        v11 = v16 + 1;
        ++v9;
      }
      if ( a3 )
      {
        v19 = *(_QWORD **)v12;
        v20 = (void **)*((_QWORD *)v12 + 1);
        if ( *(unsigned __int16 **)(*(_QWORD *)v12 + 8LL) != v12 || *v20 != v12 )
          __fastfail(3u);
        *v20 = v19;
        v19[1] = v20;
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v12);
      }
    }
    while ( v7 != (unsigned __int16 *)a1 );
    v6 = a4;
  }
  v17 = 2LL * v6;
  *((_QWORD *)SmpMappedView + v17 + 7) = v10 - (_QWORD)SmpMappedView;
  *((_DWORD *)SmpMappedView + 4 * v6 + 16) = v9;
  result = SmpMappedView;
  *((_DWORD *)SmpMappedView + 2 * v17 + 17) = a2;
  if ( v9 )
  {
    result = (PVOID)(v10 + 16LL * v9);
    *a6 = v11;
    *a5 = (__int64)result;
  }
  return result;
}
