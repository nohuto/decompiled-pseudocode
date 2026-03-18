/*
 * XREFs of ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEAH@Z @ 0x1C00E1890
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJ_NIIPEAH@Z @ 0x1C00E1920 (-UpdateDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJ_NIIPEAH@Z.c)
 */

__int64 __fastcall CFlipExBuffer::SetIndependentFlip(
        CFlipExBuffer *this,
        bool a2,
        char a3,
        unsigned int a4,
        unsigned int a5,
        int *a6)
{
  __int64 result; // rax

  result = 0LL;
  *a6 = 0;
  if ( a2 )
  {
    if ( !*((_DWORD *)this + 97) )
    {
      if ( *((_BYTE *)this + 40) )
      {
        result = CFlipExBuffer::UpdateDxgkrnlIndependentFlipMode(this, a2, a4, a5, a6);
        if ( (int)result >= 0 )
          *((_DWORD *)this + 97) = 1;
      }
      else
      {
        result = 3221225473LL;
      }
    }
    *((_BYTE *)this + 396) = a3;
  }
  else if ( *((_DWORD *)this + 97) )
  {
    *((_DWORD *)this + 97) = 0;
    return CFlipExBuffer::UpdateDxgkrnlIndependentFlipMode(this, 0, a4, a5, a6);
  }
  return result;
}
