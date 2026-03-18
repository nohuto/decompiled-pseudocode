/*
 * XREFs of ?AddRealization@CCompositionBuffer@@MEAAJPEAVCBufferRealization@@@Z @ 0x1C00DF530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionBuffer::AddRealization(CCompositionBuffer *this, struct CBufferRealization *a2)
{
  int v2; // r8d
  __int64 result; // rax
  char *v4; // rax
  __int64 v5; // r8
  CCompositionBuffer *v6; // rax
  CCompositionBuffer **v7; // r8

  v2 = *((_DWORD *)a2 + 6);
  result = 3221225473LL;
  if ( !v2 || v2 >= 4 )
    return 3221225485LL;
  if ( v2 == 3 )
  {
    if ( *((_DWORD *)this + 70) != 1 )
      return result;
    v6 = (struct CBufferRealization *)((char *)a2 + 8);
    v7 = (CCompositionBuffer **)*((_QWORD *)this + 34);
    *((_QWORD *)a2 + 1) = (char *)this + 264;
    *((_QWORD *)a2 + 2) = v7;
    if ( *v7 != (CCompositionBuffer *)((char *)this + 264) )
      __fastfail(3u);
    *v7 = v6;
    *((_QWORD *)this + 34) = v6;
  }
  else
  {
    if ( *((_DWORD *)this + 70) )
      return result;
    v4 = (char *)a2 + 8;
    v5 = *((_QWORD *)this + 33);
    *((_QWORD *)a2 + 1) = v5;
    *((_QWORD *)a2 + 2) = (char *)this + 264;
    if ( *(CCompositionBuffer **)(v5 + 8) != (CCompositionBuffer *)((char *)this + 264) )
      __fastfail(3u);
    *(_QWORD *)(v5 + 8) = v4;
    *((_QWORD *)this + 33) = v4;
  }
  ++*((_DWORD *)this + 70);
  return 0LL;
}
