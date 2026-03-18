/*
 * XREFs of MiBitmapsCachedEntryLengthChanged @ 0x1400BA9EC
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x1400B8500 (MiCoalescePageFileBitmapsCache.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400F5258 (MiInvalidatePageFileBitmapsCache.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 */

void __fastcall MiBitmapsCachedEntryLengthChanged(__int64 a1, unsigned __int64 a2, int a3)
{
  bool v3; // bl
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r9
  __int64 j; // r9
  unsigned int v8; // eax
  _QWORD *i; // rax
  unsigned __int64 k; // rax
  unsigned __int64 *v11; // rsi
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 m; // r9

  v3 = 0;
  v5 = a2;
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
        if ( !v6 || *(_QWORD *)v6 == v5 )
          break;
        v5 = v6;
      }
    }
  }
  else
  {
    v6 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 )
    {
      for ( k = *(_QWORD *)(v6 + 8); k; k = *(_QWORD *)(k + 8) )
        v6 = k;
    }
    else
    {
      for ( m = *(_QWORD *)(a2 + 16); ; m = *(_QWORD *)(v6 + 16) )
      {
        v6 = m & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)(v6 + 8) == v5 )
          break;
        v5 = v6;
      }
    }
    if ( !v6 )
      return;
  }
  v8 = *(_DWORD *)(a2 + 52);
  if ( a3 )
  {
    if ( *(_DWORD *)(v6 + 52) > v8 )
      return;
  }
  else if ( *(_DWORD *)(v6 + 52) < v8 )
  {
    return;
  }
  v11 = (unsigned __int64 *)(a1 + 144);
  RtlRbRemoveNode((unsigned __int64 *)(a1 + 144), (unsigned __int64 *)a2);
  v12 = (_QWORD *)*v11;
  if ( !*v11 )
    goto LABEL_27;
  while ( *(_QWORD *)(a2 + 48) < v12[6] )
  {
    v13 = (_QWORD *)*v12;
    if ( !*v12 )
      goto LABEL_27;
LABEL_22:
    v12 = v13;
  }
  v13 = (_QWORD *)v12[1];
  if ( v13 )
    goto LABEL_22;
  v3 = 1;
LABEL_27:
  RtlRbInsertNodeEx(v11, (unsigned __int64)v12, v3, a2);
}
