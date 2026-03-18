/*
 * XREFs of ?SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@Z @ 0x1800DE920
 * Callers:
 *     ?SetFilterAndWrapModes@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@W4D3D11_TEXTURE_ADDRESS_MODE@@1PEBUD2DVector2@@@Z @ 0x180138FE4 (-SetFilterAndWrapModes@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@W4D3D11_T.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTexturedColorSource::SetFilterMode(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( a2 == 4 )
    {
      *(_DWORD *)(a1 + 24) = 3;
    }
    else if ( a2 == 5 )
    {
      result = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(result + 680);
    }
    else
    {
      *(_DWORD *)(a1 + 24) = 2;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 1;
  }
  if ( a3 )
  {
    *(_QWORD *)(a1 + 36) = *a3;
  }
  else
  {
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  return result;
}
