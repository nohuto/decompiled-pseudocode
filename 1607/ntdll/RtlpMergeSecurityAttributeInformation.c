/*
 * XREFs of RtlpMergeSecurityAttributeInformation @ 0x180088700
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800E244C (RtlpIsAttributeAceInSacl.c)
 */

__int64 __fastcall RtlpMergeSecurityAttributeInformation(unsigned __int16 *a1, __int64 a2, _QWORD *a3, char a4)
{
  char v5; // si
  char *Heap; // rdi
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // r13d
  _BYTE *v12; // r12
  unsigned __int16 *v13; // rsi
  unsigned int v14; // r14d
  _BYTE *v15; // rsi
  unsigned int i; // r14d
  _WORD *v17; // r14
  unsigned int v18; // r13d
  _BYTE *j; // rsi
  unsigned int v20; // esi
  _WORD *v21; // rsi
  unsigned int k; // r14d
  __int64 v24; // r8
  char v25; // al
  char IsAttributeAceInSacl; // al
  _BYTE v27[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+24h] [rbp-44h]

  v5 = a4;
  v27[0] = 0;
  Heap = 0LL;
  v8 = 0;
  if ( !a3 )
  {
    v8 = -1073741811;
    goto LABEL_76;
  }
  if ( a1 )
  {
    v9 = a1[1];
  }
  else
  {
    if ( !a2 )
    {
LABEL_27:
      *a3 = Heap;
      return v8;
    }
    v9 = 0;
  }
  if ( a2 )
    v10 = *(unsigned __int16 *)(a2 + 2);
  else
    v10 = 0;
  v11 = v10 + v9;
  v28 = v10 + v9;
  if ( (unsigned int)(v10 + v9) < 8 )
  {
    v8 = -1073741705;
    goto LABEL_76;
  }
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v11);
  if ( !Heap )
  {
    v8 = -1073741801;
    goto LABEL_76;
  }
  v12 = Heap + 8;
  *(_QWORD *)Heap = 0LL;
  *(_DWORD *)(Heap + 2) = 8;
  *Heap = 2;
  if ( !a1 )
  {
LABEL_11:
    if ( a2 )
    {
      if ( v5 )
      {
        v15 = (_BYTE *)(a2 + 8);
        for ( i = 0; i < *(unsigned __int16 *)(a2 + 4); v15 += *((unsigned __int16 *)v15 + 1) )
        {
          if ( *v15 == 18 && (v15[1] & 0x10) == 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(v15, Heap, 0LL, v27) )
          {
            *((_WORD *)Heap + 1) += *((_WORD *)v15 + 1);
            if ( *((unsigned __int16 *)Heap + 1) > v11 )
              goto LABEL_75;
            memmove(v12, v15, *((unsigned __int16 *)v15 + 1));
            ++*((_WORD *)Heap + 2);
            v12 += *((unsigned __int16 *)v15 + 1);
          }
          ++i;
        }
      }
    }
    if ( a1 )
    {
      v17 = a1 + 4;
      v18 = 0;
      for ( j = a1 + 4; v18 < a1[2]; j += *((unsigned __int16 *)j + 1) )
      {
        if ( *j == 18 && (j[1] & 0x10) != 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(j, Heap, 0LL, v27) )
        {
          if ( a2 )
            IsAttributeAceInSacl = RtlpIsAttributeAceInSacl(j, a2, 1LL, v27);
          else
            IsAttributeAceInSacl = 0;
          if ( IsAttributeAceInSacl && v27[0] )
          {
            *((_WORD *)Heap + 1) += *((_WORD *)j + 1);
            if ( *((unsigned __int16 *)Heap + 1) > v28 )
              goto LABEL_75;
            memmove(v12, j, *((unsigned __int16 *)j + 1));
            ++*((_WORD *)Heap + 2);
            v12[1] |= 0x10u;
          }
          else
          {
            *((_WORD *)Heap + 1) += *((_WORD *)j + 1);
            if ( *((unsigned __int16 *)Heap + 1) > v28 )
              goto LABEL_75;
            memmove(v12, j, *((unsigned __int16 *)j + 1));
            ++*((_WORD *)Heap + 2);
            v12[1] &= ~0x10u;
          }
          v12 += *((unsigned __int16 *)j + 1);
        }
        ++v18;
      }
      v20 = 0;
      if ( a1[2] )
      {
        do
        {
          v11 = v28;
          if ( *(_BYTE *)v17 != 18 )
          {
            *((_WORD *)Heap + 1) += v17[1];
            if ( *((unsigned __int16 *)Heap + 1) > v11 )
              goto LABEL_75;
            memmove(v12, v17, (unsigned __int16)v17[1]);
            ++*((_WORD *)Heap + 2);
            v12 += (unsigned __int16)v17[1];
          }
          ++v20;
          v17 = (_WORD *)((char *)v17 + (unsigned __int16)v17[1]);
        }
        while ( v20 < a1[2] );
      }
      else
      {
        v11 = v28;
      }
    }
    if ( a2 )
    {
      if ( a4 )
      {
        v21 = (_WORD *)(a2 + 8);
        for ( k = 0; k < *(unsigned __int16 *)(a2 + 4); v21 = (_WORD *)((char *)v21 + (unsigned __int16)v21[1]) )
        {
          if ( *(_BYTE *)v21 != 18 )
          {
            *((_WORD *)Heap + 1) += v21[1];
            if ( *((unsigned __int16 *)Heap + 1) > v11 )
              goto LABEL_75;
            memmove(v12, v21, (unsigned __int16)v21[1]);
            ++*((_WORD *)Heap + 2);
            v12 += (unsigned __int16)v21[1];
          }
          ++k;
        }
      }
    }
    goto LABEL_27;
  }
  v13 = a1 + 4;
  v14 = 0;
  if ( !a1[2] )
  {
LABEL_10:
    v5 = a4;
    goto LABEL_11;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)v13 != 18
      || (*((_BYTE *)v13 + 1) & 0x10) != 0
      || (unsigned __int8)RtlpIsAttributeAceInSacl(v13, Heap, 0LL, v27) )
    {
      goto LABEL_49;
    }
    if ( !a2 || a4 )
    {
      v25 = 0;
    }
    else
    {
      LOBYTE(v24) = 1;
      v25 = RtlpIsAttributeAceInSacl(v13, a2, v24, v27);
    }
    if ( v25 && v27[0] )
    {
      *((_WORD *)Heap + 1) += v13[1];
      if ( *((unsigned __int16 *)Heap + 1) > v11 )
        break;
      memmove(v12, v13, v13[1]);
      ++*((_WORD *)Heap + 2);
      v12[1] |= 0x10u;
      goto LABEL_48;
    }
    *((_WORD *)Heap + 1) += v13[1];
    if ( *((unsigned __int16 *)Heap + 1) > v11 )
      break;
    memmove(v12, v13, v13[1]);
    ++*((_WORD *)Heap + 2);
LABEL_48:
    v12 += v13[1];
LABEL_49:
    ++v14;
    v13 = (unsigned __int16 *)((char *)v13 + v13[1]);
    if ( v14 >= a1[2] )
      goto LABEL_10;
  }
LABEL_75:
  v8 = -1073741705;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_76:
  *a3 = 0LL;
  return v8;
}
