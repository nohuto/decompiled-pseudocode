/*
 * XREFs of ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEAH@Z @ 0x1C00F4010
 * Callers:
 *     <none>
 * Callees:
 *     GreDxgkSetIndependentFlipMode @ 0x1C00C3C50 (GreDxgkSetIndependentFlipMode.c)
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C00F3D90 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEAH@Z @ 0x1C00F3E30 (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEAH@Z.c)
 */

__int64 __fastcall CFlipExBuffer::SetIndependentFlip(
        CFlipExBuffer *this,
        char a2,
        char a3,
        int a4,
        unsigned int a5,
        int *a6)
{
  __int64 result; // rax
  int *v8; // rcx
  int v10; // edx
  __int64 v11; // r8

  result = 0LL;
  v8 = a6;
  *a6 = 0;
  if ( a2 )
  {
    v10 = *((_DWORD *)this + 89);
    if ( v10 )
    {
      if ( *((_DWORD *)this + 95) == a5 )
        goto LABEL_12;
      if ( v10 >= 1 && *((_BYTE *)this + 40) )
      {
        v11 = *((_QWORD *)this + 2);
        a6 = (int *)*((_QWORD *)this + 1);
        result = GreDxgkSetIndependentFlipMode(*((_QWORD *)this + 46), (__int64)&a6, v11, 1LL);
        *((_DWORD *)this + 95) = a5;
        goto LABEL_12;
      }
    }
    else if ( *((_BYTE *)this + 40) )
    {
      result = CFlipExBuffer::EnableDxgkrnlIndependentFlipMode(this, a4, a5, v8);
LABEL_12:
      *((_BYTE *)this + 385) = a3;
      return result;
    }
    result = 3221225473LL;
    goto LABEL_12;
  }
  if ( *((_DWORD *)this + 89) )
    return CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(this, v8);
  return result;
}
