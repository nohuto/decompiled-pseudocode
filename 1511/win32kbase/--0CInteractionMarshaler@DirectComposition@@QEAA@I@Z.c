/*
 * XREFs of ??0CInteractionMarshaler@DirectComposition@@QEAA@I@Z @ 0x1C004EDA4
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B9E4 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00E00EC (-Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@.c)
 * Callees:
 *     <none>
 */

DirectComposition::CInteractionMarshaler *__fastcall DirectComposition::CInteractionMarshaler::CInteractionMarshaler(
        DirectComposition::CInteractionMarshaler *this,
        int a2)
{
  *(_QWORD *)this = &DirectComposition::CInteractionMarshaler::`vftable';
  *((_DWORD *)this + 5) = 1;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 5) = this;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 14) = this;
  *((_DWORD *)this + 30) = 1;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 48) = a2;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  return this;
}
