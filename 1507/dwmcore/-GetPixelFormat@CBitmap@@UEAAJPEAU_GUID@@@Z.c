/*
 * XREFs of ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z @ 0x1800807F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x1800610BC (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBitmap::GetPixelFormat(CBitmap *this, struct _GUID *a2)
{
  __int64 result; // rax
  int v5; // eax
  GUID v6; // xmm0
  int v7; // [rsp+30h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(char *, int *))(*((_QWORD *)this - 3) + 24LL))((char *)this - 24, &v7);
  if ( (int)result >= 0 )
  {
    v5 = DXGIFormatToPixelFormat(v7, *((_DWORD *)this + 41) == 1);
    if ( v5 > 31 )
    {
      switch ( v5 )
      {
        case ',':
          v6 = GUID_WICPixelFormat40bppCMYKAlpha;
          break;
        case '-':
          v6 = GUID_WICPixelFormat80bppCMYKAlpha;
          break;
        case 'C':
          v6 = GUID_WICPixelFormat8bppAlpha;
          break;
        case 'D':
          v6 = GUID_WICPixelFormat32bppRGBA;
          break;
        case 'E':
          v6 = GUID_WICPixelFormat32bppPRGBA;
          break;
        case 'H':
          v6 = GUID_WICPixelFormat64bppBGRA;
          break;
        case 'I':
          v6 = GUID_WICPixelFormat64bppPBGRA;
          break;
        case 'G':
          v6 = GUID_WICPixelFormat48bppBGR;
          break;
        case 'F':
          v6 = GUID_WICPixelFormat16bppBGRA5551;
          break;
        case 'J':
          v6 = GUID_WICPixelFormat48bppBGRFixedPoint;
          break;
        case 'K':
          v6 = GUID_WICPixelFormat64bppBGRAFixedPoint;
          break;
        case 'L':
          v6 = GUID_WICPixelFormat96bppRGBFloat;
          break;
        case 'M':
          v6 = GUID_WICPixelFormat32bppRGB;
          break;
        case 'N':
          v6 = GUID_WICPixelFormat64bppRGB;
          break;
        case 'O':
          v6 = GUID_WICPixelFormat8bppY;
          break;
        case 'P':
          v6 = GUID_WICPixelFormat8bppCb;
          break;
        case 'Q':
          v6 = GUID_WICPixelFormat8bppCr;
          break;
        case 'R':
          v6 = GUID_WICPixelFormat16bppCbCr;
          break;
        default:
          return 2147500037LL;
      }
      *a2 = v6;
    }
    else
    {
      *a2 = GUID_WICPixelFormatDontCare;
      a2->Data4[7] = v5;
    }
    return 0LL;
  }
  return result;
}
