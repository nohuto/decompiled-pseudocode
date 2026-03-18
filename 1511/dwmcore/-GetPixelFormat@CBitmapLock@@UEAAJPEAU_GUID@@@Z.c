/*
 * XREFs of ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1801535D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800A2498 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x1800B2D3C (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 */

__int64 __fastcall CBitmapLock::GetPixelFormat(CBitmapLock *this, struct _GUID *a2)
{
  unsigned int v2; // edi
  char *v5; // rcx
  int v6; // eax
  GUID v7; // xmm0
  char *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( this == (CBitmapLock *)80 )
    v5 = 0LL;
  else
    v5 = (char *)this - 64;
  v9 = v5;
  if ( v5[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  v6 = DXGIFormatToPixelFormat(*((_DWORD *)this + 10), *((_DWORD *)this + 11) == 1);
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
        v2 = -2147467259;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xC8u);
        goto LABEL_46;
    }
    *a2 = v7;
  }
  else
  {
    *a2 = GUID_WICPixelFormatDontCare;
    a2->Data4[7] = v6;
  }
LABEL_46:
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v9);
  return v2;
}
