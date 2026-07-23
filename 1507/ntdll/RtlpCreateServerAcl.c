/*
 * XREFs of RtlpCreateServerAcl @ 0x1800CFDE8
 * Callers:
 *     RtlpSetSecurityObject @ 0x180047EB8 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x18004CBD0 (RtlCreateAcl.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     RtlUShortAdd @ 0x1800CEE84 (RtlUShortAdd.c)
 */

__int64 __fastcall RtlpCreateServerAcl(__int64 a1, char a2, unsigned __int8 *a3, ACL **a4, _BYTE *a5)
{
  unsigned __int16 v6; // cx
  _BYTE *v9; // rax
  unsigned __int16 *v10; // rbx
  unsigned int v11; // ebp
  unsigned __int16 v12; // r9
  __int64 v13; // r10
  __int64 result; // rax
  __int16 v15; // dx
  __int16 v16; // ax
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // dx
  __int64 v19; // r10
  int v20; // r11d
  ACL *Heap; // rax
  ULONG v22; // edx
  unsigned int v23; // ebp
  ACL *v24; // r15
  char *v25; // rdi
  unsigned __int8 *v26; // r15
  char v27; // al
  char *v28; // r12
  unsigned __int8 *v29; // r14
  char *v30; // rdi
  char *v31; // rdi
  int v32; // edx
  __int16 v33; // ax
  ACL *v34; // [rsp+60h] [rbp+8h] BYREF
  void *Src; // [rsp+70h] [rbp+18h]

  Src = a3;
  v6 = 8;
  LOWORD(v34) = 8;
  if ( !a1 )
  {
    v9 = a5;
    *a4 = 0LL;
    *v9 = 0;
    return 0LL;
  }
  v10 = (unsigned __int16 *)(a1 + 8);
  v11 = *(unsigned __int16 *)(a1 + 4);
  v12 = 4 * (a3[1] + 2);
  v13 = a1 + 8;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( *(_BYTE *)v13 )
    {
      if ( a2 && *(_BYTE *)v13 == 4 )
      {
        v16 = *(unsigned __int8 *)(v13 + 13);
        v17 = 4 * (v16 + 2);
        if ( v17 <= v12 )
          v15 = v12 - 4 * v16 - 8;
        else
          v15 = v17 - v12;
LABEL_12:
        result = RtlUShortAdd(v6, v15, &v34);
        if ( (int)result < 0 )
          return result;
        v6 = (unsigned __int16)v34;
      }
      result = RtlUShortAdd(v6, *(_WORD *)(v13 + 2), &v34);
      if ( (int)result < 0 )
        return result;
      v6 = (unsigned __int16)v34;
      v13 = v18 + v19;
      if ( v20 + 1 >= v11 )
        goto LABEL_16;
    }
    result = RtlUShortAdd(v6, v12, &v34);
    if ( (int)result < 0 )
      return result;
    v6 = (unsigned __int16)v34;
    v15 = 4;
    goto LABEL_12;
  }
LABEL_16:
  Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v6);
  *a4 = Heap;
  if ( !Heap )
    return 3221225626LL;
  v22 = (unsigned __int16)v34;
  *a5 = 1;
  RtlCreateAcl(Heap, v22, 3u);
  v23 = 0;
  v24 = *a4;
  v34 = v24;
  v25 = (char *)&v24[1];
  if ( *(_WORD *)(a1 + 4) )
  {
    v26 = (unsigned __int8 *)Src;
    do
    {
      v27 = *(_BYTE *)v10;
      if ( !*(_BYTE *)v10 || a2 && v27 == 4 )
      {
        v28 = v25;
        if ( v27 )
          v29 = (unsigned __int8 *)&v10[2 * *((unsigned __int8 *)v10 + 13) + 10];
        else
          v29 = (unsigned __int8 *)(v10 + 4);
        *(_QWORD *)v25 = *(_QWORD *)v10;
        v30 = v25 + 12;
        memmove(v30, v26, 4 * v26[1] + 8);
        v31 = &v30[(unsigned __int8)(4 * (v26[1] + 2))];
        memmove(v31, v29, 4 * v29[1] + 8);
        v32 = v29[1];
        v25 = &v31[4 * v32 + 8];
        v33 = v26[1] + 7;
        *v28 = 4;
        *((_WORD *)v28 + 1) = 4 * (v32 + v33);
        *((_WORD *)v28 + 4) = 1;
      }
      else
      {
        memmove(v25, v10, v10[1]);
        v25 += v10[1];
      }
      ++v23;
      v10 = (unsigned __int16 *)((char *)v10 + v10[1]);
    }
    while ( v23 < *(unsigned __int16 *)(a1 + 4) );
    v24 = v34;
  }
  v24->AceCount = *(_WORD *)(a1 + 4);
  return 0LL;
}
