/*
 * XREFs of PopCloneRange @ 0x1403F2280
 * Callers:
 *     PopSetRange @ 0x14014D568 (PopSetRange.c)
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PopDiscardRange @ 0x1403F267C (PopDiscardRange.c)
 */

int __fastcall PopCloneRange(__int64 a1, char *a2, __int64 a3, unsigned int a4)
{
  char *v7; // rsi
  _QWORD *i; // rbx
  unsigned __int64 v9; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rcx
  unsigned int v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = a4;
  if ( (PoDebug & 0x80u) != 0 )
    DbgPrint("PopCloneRange - cloning page %p - %p, Tag %.4s\n", a2, &a2[a3], (const char *)&v13);
  PopDiscardRange(a1, a2, a3, v13);
  v7 = &a2[a3];
  for ( i = *(_QWORD **)(a1 + 64); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a1 + 64) )
    {
LABEL_13:
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x70616D48u);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        *((_DWORD *)PoolWithTag + 4) = v13;
        PoolWithTag[3] = a2;
        PoolWithTag[4] = v7;
        PoolWithTag = (_QWORD *)i[1];
        *v11 = i;
        v11[1] = PoolWithTag;
        if ( (_QWORD *)*PoolWithTag != i )
          __fastfail(3u);
        *PoolWithTag = v11;
        i[1] = v11;
        ++*(_DWORD *)(a1 + 80);
      }
      else if ( *(int *)(a1 + 188) >= 0 )
      {
        *(_DWORD *)(a1 + 188) = -1073741670;
      }
      return (int)PoolWithTag;
    }
    v9 = i[3];
    if ( (unsigned __int64)a2 >= v9 && (unsigned __int64)a2 <= i[4] )
      break;
    if ( (unsigned __int64)v7 >= v9 && (unsigned __int64)v7 <= i[4] )
      break;
    if ( v9 >= (unsigned __int64)a2 )
    {
      if ( (unsigned __int64)v7 >= i[4] )
        break;
      if ( v9 >= (unsigned __int64)a2 )
        goto LABEL_13;
    }
  }
  LODWORD(PoolWithTag) = PoDebug;
  if ( (PoDebug & 0x80u) != 0 )
    LODWORD(PoolWithTag) = DbgPrint(
                             "PopCloneRange - coalescing range %p - %p (%.4s) with range %p - %p\n",
                             a2,
                             v7,
                             (const char *)&v13,
                             (const void *)i[3],
                             (const void *)i[4]);
  if ( (unsigned __int64)a2 < i[3] )
    i[3] = a2;
  if ( (unsigned __int64)v7 > i[4] )
    i[4] = v7;
  return (int)PoolWithTag;
}
