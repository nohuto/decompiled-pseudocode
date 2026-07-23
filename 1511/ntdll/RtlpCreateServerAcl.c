/*
 * XREFs of RtlpCreateServerAcl @ 0x1800D83C4
 * Callers:
 *     RtlpSetSecurityObject @ 0x18005D220 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x18005E688 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x180060370 (RtlCreateAcl.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlpCreateServerAcl(__int64 a1, char a2, unsigned __int8 *a3, ACL **a4, _BYTE *a5)
{
  unsigned __int16 v8; // di
  unsigned __int16 *v9; // rbx
  unsigned int v10; // eax
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  __int64 i; // r9
  __int16 v14; // ax
  __int16 v15; // r8
  unsigned __int16 v16; // ax
  __int64 v17; // rax
  ACL *Heap; // rax
  unsigned int v20; // ebp
  ACL *v21; // r15
  ACL *v22; // rdi
  char v23; // al
  ACL *v24; // r13
  unsigned __int8 *v25; // r14
  char *p_AceCount; // rdi
  char *v27; // rdi
  int v28; // edx
  __int16 v29; // ax
  ACL *v30; // [rsp+60h] [rbp+8h]

  v8 = 8;
  if ( !a1 )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  v9 = (unsigned __int16 *)(a1 + 8);
  v10 = *(unsigned __int16 *)(a1 + 4);
  v11 = 4 * (a3[1] + 2);
  v12 = a1 + 8;
  if ( *(_WORD *)(a1 + 4) )
  {
    for ( i = v10; i; --i )
    {
      if ( *(_BYTE *)v12 )
      {
        if ( !a2 || *(_BYTE *)v12 != 4 )
          goto LABEL_13;
        v15 = *(unsigned __int8 *)(v12 + 13);
        v16 = 4 * (v15 + 2);
        if ( v16 <= v11 )
          v14 = v11 - 4 * v15 - 8;
        else
          v14 = v16 - v11;
      }
      else
      {
        v14 = v11 + 4;
      }
      v8 += v14;
LABEL_13:
      v17 = *(unsigned __int16 *)(v12 + 2);
      v8 += v17;
      v12 += v17;
    }
  }
  Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v8);
  *a4 = Heap;
  if ( !Heap )
    return 3221225626LL;
  *a5 = 1;
  RtlCreateAcl(Heap, v8, 3u);
  v20 = 0;
  v21 = *a4;
  v30 = *a4;
  v22 = *a4 + 1;
  if ( *(_WORD *)(a1 + 4) )
  {
    do
    {
      v23 = *(_BYTE *)v9;
      if ( !*(_BYTE *)v9 || a2 && v23 == 4 )
      {
        v24 = v22;
        if ( v23 )
          v25 = (unsigned __int8 *)&v9[2 * *((unsigned __int8 *)v9 + 13) + 10];
        else
          v25 = (unsigned __int8 *)(v9 + 4);
        *v22 = *(ACL *)v9;
        p_AceCount = (char *)&v22[1].AceCount;
        memmove(p_AceCount, a3, 4 * a3[1] + 8);
        v27 = &p_AceCount[(unsigned __int8)(4 * (a3[1] + 2))];
        memmove(v27, v25, 4 * v25[1] + 8);
        v28 = v25[1];
        v22 = (ACL *)&v27[4 * v28 + 8];
        v29 = a3[1] + 7;
        v24->AclRevision = 4;
        v24->AclSize = 4 * (v28 + v29);
        *(_WORD *)&v24[1].AclRevision = 1;
      }
      else
      {
        memmove(v22, v9, v9[1]);
        v22 = (ACL *)((char *)v22 + v9[1]);
      }
      ++v20;
      v9 = (unsigned __int16 *)((char *)v9 + v9[1]);
    }
    while ( v20 < *(unsigned __int16 *)(a1 + 4) );
    v21 = v30;
  }
  v21->AceCount = *(_WORD *)(a1 + 4);
  return 0LL;
}
