/*
 * XREFs of RtlDosSearchPath_U @ 0x1800675C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDetermineDosPathNameType_U @ 0x1800095E0 (RtlDetermineDosPathNameType_U.c)
 *     RtlInitUnicodeStringEx @ 0x180011910 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlDoesFileExists_UEx @ 0x18006A6C8 (RtlDoesFileExists_UEx.c)
 *     RtlGetFullPathName_U @ 0x18006A930 (RtlGetFullPathName_U.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_U(__int16 *a1, _WORD *a2, const void *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  int v10; // eax
  __int64 v11; // rdx
  _WORD *v12; // rcx
  __int16 v13; // ax
  unsigned int FullPathName_U; // ebx
  unsigned int v15; // r15d
  int v16; // ebp
  unsigned int v17; // edi
  unsigned __int64 Heap; // rbp
  size_t v19; // r12
  __int16 v20; // ax
  _WORD *v21; // rdi
  _WORD v23[28]; // [rsp+20h] [rbp-38h] BYREF

  v10 = RtlDetermineDosPathNameType_U(a2);
  v12 = a2;
  if ( v10 != 5 )
  {
    LOBYTE(v11) = 1;
    if ( (unsigned __int8)RtlDoesFileExists_UEx(a2, v11) )
      return RtlGetFullPathName_U(a2, a4, a5, a6);
    return 0LL;
  }
  v13 = *a2;
  FullPathName_U = 0;
  while ( v13 )
  {
    if ( v13 == 46 )
      goto LABEL_6;
    v13 = *++v12;
  }
  if ( !a3 )
  {
LABEL_6:
    v15 = 0;
    goto LABEL_7;
  }
  if ( (int)RtlInitUnicodeStringEx((__int64)v23, (__int64)a3) < 0 )
    return 0LL;
  v15 = v23[0];
LABEL_7:
  if ( (int)RtlInitUnicodeStringEx((__int64)v23, (__int64)a1) < 0 )
    return 0LL;
  v16 = v23[0];
  if ( (int)RtlInitUnicodeStringEx((__int64)v23, (__int64)a2) < 0 )
    return 0LL;
  v17 = v23[0];
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16 + v23[0] + v15 + 6LL);
  if ( !Heap )
    return 0LL;
  v19 = v17;
  while ( 1 )
  {
    v20 = *a1;
    v21 = (_WORD *)Heap;
    if ( !*a1 )
      goto LABEL_18;
    do
    {
      ++a1;
      if ( v20 == 59 )
        break;
      *v21++ = v20;
      v20 = *a1;
    }
    while ( *a1 );
    if ( v21 != (_WORD *)Heap && *(v21 - 1) != 92 )
      *v21++ = 92;
    if ( !*a1 )
LABEL_18:
      a1 = 0LL;
    memmove(v21, a2, v19);
    if ( v15 )
      memmove((char *)v21 + v19, a3, v15 + 2LL);
    else
      *(_WORD *)((char *)v21 + v19) = 0;
    if ( (unsigned __int8)RtlDoesFileExists_UEx(Heap, 0LL) )
      break;
    if ( !a1 )
      goto LABEL_23;
  }
  FullPathName_U = RtlGetFullPathName_U(Heap, a4, a5, a6);
LABEL_23:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return FullPathName_U;
}
