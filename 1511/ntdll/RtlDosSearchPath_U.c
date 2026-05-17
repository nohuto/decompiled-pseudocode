/*
 * XREFs of RtlDosSearchPath_U @ 0x1800443C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlDoesFileExists_UEx @ 0x18003FE78 (RtlDoesFileExists_UEx.c)
 *     RtlGetFullPathName_U @ 0x180041B80 (RtlGetFullPathName_U.c)
 *     RtlDetermineDosPathNameType_U @ 0x1800445D0 (RtlDetermineDosPathNameType_U.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_U(__int16 *a1, _WORD *a2, const void *a3, unsigned int a4, _WORD *a5, _QWORD *a6)
{
  int v10; // eax
  _WORD *v11; // rcx
  __int16 v12; // ax
  unsigned int FullPathName_U; // ebx
  unsigned int v14; // r15d
  int v15; // ebp
  unsigned int v16; // edi
  __int64 Heap; // rbp
  size_t v18; // r12
  __int16 v19; // ax
  _WORD *v20; // rdi
  _WORD v22[28]; // [rsp+20h] [rbp-38h] BYREF

  v10 = RtlDetermineDosPathNameType_U(a2);
  v11 = a2;
  if ( v10 != 5 )
  {
    if ( RtlDoesFileExists_UEx((__int64)a2, 1) )
      return RtlGetFullPathName_U((__int64)a2, a4, a5, a6);
    return 0LL;
  }
  v12 = *a2;
  FullPathName_U = 0;
  while ( v12 )
  {
    if ( v12 == 46 )
      goto LABEL_6;
    v12 = *++v11;
  }
  if ( !a3 )
  {
LABEL_6:
    v14 = 0;
    goto LABEL_7;
  }
  if ( (int)RtlInitUnicodeStringEx((__int64)v22, (__int64)a3) < 0 )
    return 0LL;
  v14 = v22[0];
LABEL_7:
  if ( (int)RtlInitUnicodeStringEx((__int64)v22, (__int64)a1) < 0 )
    return 0LL;
  v15 = v22[0];
  if ( (int)RtlInitUnicodeStringEx((__int64)v22, (__int64)a2) < 0 )
    return 0LL;
  v16 = v22[0];
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15 + v22[0] + v14 + 6LL);
  if ( !Heap )
    return 0LL;
  v18 = v16;
  while ( 1 )
  {
    v19 = *a1;
    v20 = (_WORD *)Heap;
    if ( !*a1 )
      goto LABEL_18;
    do
    {
      ++a1;
      if ( v19 == 59 )
        break;
      *v20++ = v19;
      v19 = *a1;
    }
    while ( *a1 );
    if ( v20 != (_WORD *)Heap && *(v20 - 1) != 92 )
      *v20++ = 92;
    if ( !*a1 )
LABEL_18:
      a1 = 0LL;
    memmove(v20, a2, v18);
    if ( v14 )
      memmove((char *)v20 + v18, a3, v14 + 2LL);
    else
      *(_WORD *)((char *)v20 + v18) = 0;
    if ( RtlDoesFileExists_UEx(Heap, 0) )
      break;
    if ( !a1 )
      goto LABEL_23;
  }
  FullPathName_U = RtlGetFullPathName_U(Heap, a4, a5, a6);
LABEL_23:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return FullPathName_U;
}
