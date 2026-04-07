/*
 * XREFs of ?GetCompressedBytes@CCompressedSourceBitmap@@UEAAJPEAPEAXPEAK@Z @ 0x18009DA00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompressedSourceBitmap::GetCompressedBytes(
        CCompressedSourceBitmap *this,
        void **a2,
        unsigned int *a3)
{
  void *v3; // rax
  unsigned int v4; // ebx

  v3 = (void *)*((_QWORD *)this + 4);
  v4 = 0;
  if ( v3 )
  {
    *a2 = v3;
    *a3 = *((_DWORD *)this + 10);
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003292412, 0xD7u);
  }
  return v4;
}
