/*
 * XREFs of ?GetPixelFormat@CBitmapColorKey@@UEAAJPEAU_GUID@@@Z @ 0x180180D80
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x1800B6860 (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 */

__int64 __fastcall CBitmapColorKey::GetPixelFormat(CBitmapColorKey *this, struct _GUID *a2)
{
  int v2; // eax
  struct _GUID *v3; // r8
  int v4; // eax
  GUID v5; // xmm0

  v2 = *((_DWORD *)this + 4);
  v3 = a2;
  if ( v2 == 88 )
  {
    LOBYTE(v4) = 16;
LABEL_4:
    *v3 = GUID_WICPixelFormatDontCare;
    v3->Data4[7] = v4;
    return 0LL;
  }
  v4 = DXGIFormatToPixelFormat(v2, *((_DWORD *)this + 5) == 1);
  if ( v4 <= 31 )
    goto LABEL_4;
  switch ( v4 )
  {
    case ',':
      v5 = GUID_WICPixelFormat40bppCMYKAlpha;
LABEL_41:
      *v3 = v5;
      return 0LL;
    case '-':
      v5 = GUID_WICPixelFormat80bppCMYKAlpha;
      goto LABEL_41;
    case 'C':
      v5 = GUID_WICPixelFormat8bppAlpha;
      goto LABEL_41;
    case 'D':
      v5 = GUID_WICPixelFormat32bppRGBA;
      goto LABEL_41;
    case 'E':
      v5 = GUID_WICPixelFormat32bppPRGBA;
      goto LABEL_41;
    case 'H':
      v5 = GUID_WICPixelFormat64bppBGRA;
      goto LABEL_41;
    case 'I':
      v5 = GUID_WICPixelFormat64bppPBGRA;
      goto LABEL_41;
    case 'G':
      v5 = GUID_WICPixelFormat48bppBGR;
      goto LABEL_41;
    case 'F':
      v5 = GUID_WICPixelFormat16bppBGRA5551;
      goto LABEL_41;
    case 'J':
      v5 = GUID_WICPixelFormat48bppBGRFixedPoint;
      goto LABEL_41;
    case 'K':
      v5 = GUID_WICPixelFormat64bppBGRAFixedPoint;
      goto LABEL_41;
    case 'L':
      v5 = GUID_WICPixelFormat96bppRGBFloat;
      goto LABEL_41;
    case 'M':
      v5 = GUID_WICPixelFormat32bppRGB;
      goto LABEL_41;
    case 'N':
      v5 = GUID_WICPixelFormat64bppRGB;
      goto LABEL_41;
    case 'O':
      v5 = GUID_WICPixelFormat8bppY;
      goto LABEL_41;
    case 'P':
      v5 = GUID_WICPixelFormat8bppCb;
      goto LABEL_41;
    case 'Q':
      v5 = GUID_WICPixelFormat8bppCr;
      goto LABEL_41;
    case 'R':
      v5 = GUID_WICPixelFormat16bppCbCr;
      goto LABEL_41;
  }
  return 2147500037LL;
}
