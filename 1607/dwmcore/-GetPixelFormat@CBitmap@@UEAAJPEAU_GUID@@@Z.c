/*
 * XREFs of ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z @ 0x180084D00
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x1800B6860 (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::GetPixelFormat(CBitmap *this, struct _GUID *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  int v6; // eax
  GUID v7; // xmm0
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(char *, unsigned int *))(*((_QWORD *)this - 3) + 24LL))((char *)this - 24, &v8);
  if ( (int)result >= 0 )
  {
    LOBYTE(v5) = *((_DWORD *)this + 41) == 1;
    v6 = DXGIFormatToPixelFormat(v8, v5);
    if ( v6 > 31 )
    {
      switch ( v6 )
      {
        case ',':
          v7 = GUID_WICPixelFormat40bppCMYKAlpha;
          break;
        case '-':
          v7 = GUID_WICPixelFormat80bppCMYKAlpha;
          break;
        case 'C':
          v7 = GUID_WICPixelFormat8bppAlpha;
          break;
        case 'D':
          v7 = GUID_WICPixelFormat32bppRGBA;
          break;
        case 'E':
          v7 = GUID_WICPixelFormat32bppPRGBA;
          break;
        case 'H':
          v7 = GUID_WICPixelFormat64bppBGRA;
          break;
        case 'I':
          v7 = GUID_WICPixelFormat64bppPBGRA;
          break;
        case 'G':
          v7 = GUID_WICPixelFormat48bppBGR;
          break;
        case 'F':
          v7 = GUID_WICPixelFormat16bppBGRA5551;
          break;
        case 'J':
          v7 = GUID_WICPixelFormat48bppBGRFixedPoint;
          break;
        case 'K':
          v7 = GUID_WICPixelFormat64bppBGRAFixedPoint;
          break;
        case 'L':
          v7 = GUID_WICPixelFormat96bppRGBFloat;
          break;
        case 'M':
          v7 = GUID_WICPixelFormat32bppRGB;
          break;
        case 'N':
          v7 = GUID_WICPixelFormat64bppRGB;
          break;
        case 'O':
          v7 = GUID_WICPixelFormat8bppY;
          break;
        case 'P':
          v7 = GUID_WICPixelFormat8bppCb;
          break;
        case 'Q':
          v7 = GUID_WICPixelFormat8bppCr;
          break;
        case 'R':
          v7 = GUID_WICPixelFormat16bppCbCr;
          break;
        default:
          return 2147500037LL;
      }
      *a2 = v7;
    }
    else
    {
      *a2 = GUID_WICPixelFormatDontCare;
      a2->Data4[7] = v6;
    }
    return 0LL;
  }
  return result;
}
