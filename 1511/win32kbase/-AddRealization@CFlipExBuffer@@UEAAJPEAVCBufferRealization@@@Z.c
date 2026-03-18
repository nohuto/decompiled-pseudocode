/*
 * XREFs of ?AddRealization@CFlipExBuffer@@UEAAJPEAVCBufferRealization@@@Z @ 0x1C003DB50
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
  if ( *((_DWORD *)a2 + 6) == 2 )
  {
    v3 = (CFlipExBuffer **)*((_QWORD *)this + 35);
    v4 = (struct CBufferRealization *)((char *)a2 + 8);
    *((_QWORD *)a2 + 1) = (char *)this + 272;
    *((_QWORD *)a2 + 2) = v3;
    if ( *v3 != (CFlipExBuffer *)((char *)this + 272) )
      __fastfail(3u);
    *v3 = v4;
    *((_QWORD *)this + 35) = v4;
    if ( ++*((_DWORD *)this + 72) == 1 )
    {
      if ( *((_DWORD *)a2 + 6) == 2 )
        v5 = *((_QWORD *)a2 + 5);
      else
        v5 = 0LL;
      *((_QWORD *)this + 47) = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
