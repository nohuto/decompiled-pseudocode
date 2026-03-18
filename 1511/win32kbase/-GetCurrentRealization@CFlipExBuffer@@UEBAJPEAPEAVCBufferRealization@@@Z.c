/*
 * XREFs of ?GetCurrentRealization@CFlipExBuffer@@UEBAJPEAPEAVCBufferRealization@@@Z @ 0x1C003DBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipExBuffer::GetCurrentRealization(CFlipExBuffer *this, struct CBufferRealization **a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  char *v4; // r10
  struct CBufferRealization *v5; // r9
  char *v6; // rcx

  v2 = *((_DWORD *)this + 96);
  result = 0LL;
  if ( v2 >= *((_DWORD *)this + 72) )
  {
    *a2 = 0LL;
    return 3221226021LL;
  }
  else
  {
    v4 = (char *)this + 272;
    v5 = 0LL;
    v6 = (char *)*((_QWORD *)this + 34);
    while ( v6 != v4 )
    {
      if ( !v2 )
      {
        v5 = (struct CBufferRealization *)(v6 - 8);
        break;
      }
      v6 = *(char **)v6;
      --v2;
    }
    *a2 = v5;
  }
  return result;
}
