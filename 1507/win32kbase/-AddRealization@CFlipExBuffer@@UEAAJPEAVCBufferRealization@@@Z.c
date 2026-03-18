/*
 * XREFs of ?AddRealization@CFlipExBuffer@@UEAAJPEAVCBufferRealization@@@Z @ 0x1C00494F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipExBuffer::AddRealization(CFlipExBuffer *this, struct CBufferRealization *a2)
{
  __int64 result; // rax
  CFlipExBuffer *v3; // rdx
  CFlipExBuffer **v4; // r9

  result = 0LL;
  if ( *((_DWORD *)a2 + 6) != 2 )
    return 3221225485LL;
  v3 = (struct CBufferRealization *)((char *)a2 + 8);
  v4 = (CFlipExBuffer **)*((_QWORD *)this + 34);
  *(_QWORD *)v3 = (char *)this + 264;
  *((_QWORD *)v3 + 1) = v4;
  if ( *v4 != (CFlipExBuffer *)((char *)this + 264) )
    __fastfail(3u);
  *v4 = v3;
  *((_QWORD *)this + 34) = v3;
  ++*((_DWORD *)this + 70);
  return result;
}
