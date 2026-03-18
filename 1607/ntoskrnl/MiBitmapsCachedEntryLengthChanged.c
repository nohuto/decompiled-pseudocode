/*
 * XREFs of MiBitmapsCachedEntryLengthChanged @ 0x14001BDE8
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x14001A460 (MiCoalescePageFileBitmapsCache.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400B6934 (MiInvalidatePageFileBitmapsCache.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140031320 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall MiBitmapsCachedEntryLengthChanged(__int64 a1, __int64 a2, int a3)
{
  char v3; // bl
  __int64 result; // rax
  unsigned __int64 v6; // r9
  __int64 j; // r9
  _QWORD *i; // rax
  _QWORD **v9; // rsi
  __int64 v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 k; // r9

  v3 = 0;
  result = a2;
  if ( a3 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    if ( v6 )
    {
      for ( i = *(_QWORD **)v6; i; i = (_QWORD *)*i )
        v6 = (unsigned __int64)i;
    }
    else
    {
      for ( j = *(_QWORD *)(a2 + 16); ; j = *(_QWORD *)(v6 + 16) )
      {
        v6 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)v6 == result )
          break;
        result = v6;
      }
    }
  }
  else
  {
    v6 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      for ( result = *(_QWORD *)(v6 + 8); result; result = *(_QWORD *)(result + 8) )
        v6 = result;
    }
    else
    {
      for ( k = *(_QWORD *)(a2 + 16); ; k = *(_QWORD *)(v6 + 16) )
      {
        v6 = k & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)(v6 + 8) == result )
          break;
        result = v6;
      }
    }
    if ( !v6 )
      return result;
  }
  result = *(unsigned int *)(a2 + 52);
  if ( a3 )
  {
    if ( *(_DWORD *)(v6 + 52) > (unsigned int)result )
      return result;
  }
  else if ( *(_DWORD *)(v6 + 52) < (unsigned int)result )
  {
    return result;
  }
  v9 = (_QWORD **)(a1 + 144);
  RtlRbRemoveNode(a1 + 144, a2);
  v11 = *v9;
  if ( !*v9 )
    goto LABEL_28;
  v10 = *(unsigned int *)(a2 + 52);
  while ( *(_QWORD *)(a2 + 48) < v11[6] )
  {
    v12 = (_QWORD *)*v11;
    if ( !*v11 )
      goto LABEL_28;
LABEL_19:
    v11 = v12;
  }
  v12 = (_QWORD *)v11[1];
  if ( v12 )
    goto LABEL_19;
  v3 = 1;
LABEL_28:
  LOBYTE(v10) = v3;
  return RtlRbInsertNodeEx(v9, v11, v10, a2);
}
