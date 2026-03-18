/*
 * XREFs of ??0CFormatConverter@@QEAA@XZ @ 0x180145C28
 * Callers:
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180146848 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CMTALock@@QEAA@XZ @ 0x18005268C (--0CMTALock@@QEAA@XZ.c)
 */

CFormatConverter *__fastcall CFormatConverter::CFormatConverter(CFormatConverter *this)
{
  CFormatConverter *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  CMTALock::CMTALock((CFormatConverter *)((char *)this + 16));
  *(_QWORD *)this = &CFormatConverter::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CFormatConverter::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 9) = &CFormatConverter::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 19) = &CScanPipeline::`vftable';
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 20) = (char *)this + 192;
  *((_QWORD *)this + 21) = (char *)this + 192;
  *((_DWORD *)this + 44) = 10;
  *((_DWORD *)this + 45) = 10;
  *((_DWORD *)this + 178) = 0;
  *((_QWORD *)this + 86) = (char *)this + 720;
  *((_QWORD *)this + 87) = (char *)this + 720;
  *((_DWORD *)this + 176) = 3;
  *((_DWORD *)this + 177) = 3;
  *((_DWORD *)this + 192) = 0;
  *((_QWORD *)this + 93) = (char *)this + 776;
  *((_QWORD *)this + 94) = (char *)this + 776;
  *((_DWORD *)this + 190) = 2;
  *((_DWORD *)this + 191) = 2;
  result = this;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  return result;
}
