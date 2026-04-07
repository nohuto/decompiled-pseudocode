/*
 * XREFs of ?ReleaseCopyBuffers@CCompressedSourceBitmap@@UEAAJXZ @ 0x180042080
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CCompressedSourceBitmap::ReleaseCopyBuffers(CCompressedSourceBitmap *this)
{
  __int64 v1; // r14
  unsigned int v2; // edi
  __int64 v4; // r14

  v1 = *((_QWORD *)this + 1);
  v2 = 0;
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  else
  {
    return 1;
  }
  return v2;
}
