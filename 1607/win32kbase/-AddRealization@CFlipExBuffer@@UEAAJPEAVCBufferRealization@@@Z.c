/*
 * XREFs of ?AddRealization@CFlipExBuffer@@UEAAJPEAVCBufferRealization@@@Z @ 0x1C001D990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipExBuffer::AddRealization(CFlipExBuffer *this, struct CBufferRealization *a2)
{
  unsigned int v2; // r8d
  CFlipExBuffer **v3; // r10
  CFlipExBuffer *v4; // r9
  __int64 v5; // rax

  v2 = 0;
  if ( (unsigned int)(*((_DWORD *)a2 + 6) - 2) > 2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v3 = (CFlipExBuffer **)*((_QWORD *)this + 30);
    v4 = (struct CBufferRealization *)((char *)a2 + 8);
    if ( *v3 != (CFlipExBuffer *)((char *)this + 232) )
      __fastfail(3u);
    *(_QWORD *)v4 = (char *)this + 232;
    *((_QWORD *)a2 + 2) = v3;
    *v3 = v4;
    *((_QWORD *)this + 30) = v4;
    if ( ++*((_DWORD *)this + 62) == 1 )
    {
      if ( (unsigned int)(*((_DWORD *)a2 + 6) - 2) > 2 )
        v5 = 0LL;
      else
        v5 = *((_QWORD *)a2 + 5);
      *((_QWORD *)this + 42) = v5;
    }
  }
  return v2;
}
