/*
 * XREFs of _invalid_parameter @ 0x180095768
 * Callers:
 *     _lfind @ 0x180096340 (_lfind.c)
 *     _snprintf @ 0x1800964E0 (_snprintf.c)
 *     _snwprintf @ 0x180096590 (_snwprintf.c)
 *     _splitpath_helper @ 0x180096700 (_splitpath_helper.c)
 *     _strlwr_s @ 0x180096A00 (_strlwr_s.c)
 *     _strupr @ 0x180096AD0 (_strupr.c)
 *     _strupr_s @ 0x180096B20 (_strupr_s.c)
 *     swprintf @ 0x180096B90 (swprintf.c)
 *     _vscwprintf_helper @ 0x180096C6C (_vscwprintf_helper.c)
 *     _vswprintf_l @ 0x180096D14 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x180096DDC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x180096EAC (_vsnwprintf_l.c)
 *     _wcslwr @ 0x180096FE0 (_wcslwr.c)
 *     _wcslwr_s @ 0x180097030 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x180097110 (_wcsnset_s.c)
 *     _wcsset_s @ 0x1800971A0 (_wcsset_s.c)
 *     wcstoxq @ 0x180097264 (wcstoxq.c)
 *     _wcsupr_s @ 0x180097510 (_wcsupr_s.c)
 *     bsearch @ 0x180098050 (bsearch.c)
 *     qsort @ 0x1800993B0 (qsort.c)
 *     qsort_s @ 0x1800997B0 (qsort_s.c)
 *     sprintf @ 0x180099BE0 (sprintf.c)
 *     vscan_fn @ 0x180099DCC (vscan_fn.c)
 *     strtoxlX @ 0x18009A860 (strtoxlX.c)
 *     _vsprintf_l @ 0x18009B0DC (_vsprintf_l.c)
 *     wcstoxlX @ 0x18009B52C (wcstoxlX.c)
 *     bsearch_s @ 0x18009B8F4 (bsearch_s.c)
 *     strtoxq @ 0x18009BA68 (strtoxq.c)
 *     _output_l @ 0x18009BCD8 (_output_l.c)
 *     _woutput_l @ 0x18009C660 (_woutput_l.c)
 *     _input_l @ 0x18009EBE0 (_input_l.c)
 *     _wctomb_s_l @ 0x18009F50C (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x18009F5E0 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x18009F6B4 (_ungetc_nolock.c)
 *     x64toa_s @ 0x18009F85C (x64toa_s.c)
 *     xtoa_s @ 0x18009F970 (xtoa_s.c)
 *     x64tow_s @ 0x18009FB4C (x64tow_s.c)
 *     xtow_s @ 0x18009FC78 (xtow_s.c)
 *     _makepath_s @ 0x18009FDA0 (_makepath_s.c)
 *     _vsnprintf_s @ 0x18009FF10 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x18009FFB0 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x1800A0020 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x1800A00D0 (_snwscanf_s.c)
 *     _splitpath_s @ 0x1800A0110 (_splitpath_s.c)
 *     _strnset_s @ 0x1800A03B0 (_strnset_s.c)
 *     _strset_s @ 0x1800A0440 (_strset_s.c)
 *     _wmakepath_s @ 0x1800A04A0 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x1800A0610 (_wsplitpath_s.c)
 *     memcpy_s @ 0x1800A08D0 (memcpy_s.c)
 *     memmove_s @ 0x1800A0980 (memmove_s.c)
 *     vsprintf_s @ 0x1800A0A30 (vsprintf_s.c)
 *     sscanf_s @ 0x1800A0A80 (sscanf_s.c)
 *     strcat_s @ 0x1800A0AE0 (strcat_s.c)
 *     strcpy_s @ 0x1800A0B80 (strcpy_s.c)
 *     strncat_s @ 0x1800A0C10 (strncat_s.c)
 *     strncpy_s @ 0x1800A0D10 (strncpy_s.c)
 *     strtok_s @ 0x1800A0E00 (strtok_s.c)
 *     vswprintf_s @ 0x1800A0F50 (vswprintf_s.c)
 *     swscanf_s @ 0x1800A0FB0 (swscanf_s.c)
 *     wcscat_s @ 0x1800A1010 (wcscat_s.c)
 *     wcscpy_s @ 0x1800A10C0 (wcscpy_s.c)
 *     wcsncat_s @ 0x1800A1150 (wcsncat_s.c)
 *     wcsncpy_s @ 0x1800A1260 (wcsncpy_s.c)
 *     wcstok_s @ 0x1800A1370 (wcstok_s.c)
 *     _output_s @ 0x1800A1454 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x1800A1D34 (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x1800A1E0C (_soutput_s.c)
 *     _input_s @ 0x1800A2348 (_input_s.c)
 *     _sinput_s @ 0x1800A2C28 (_sinput_s.c)
 *     _swoutput_s @ 0x1800A2C8C (_swoutput_s.c)
 *     _woutput_s @ 0x1800A2DA4 (_woutput_s.c)
 *     _swinput_s @ 0x1800A3C0C (_swinput_s.c)
 *     _winput_s @ 0x1800A3CD0 (_winput_s.c)
 *     _fgetwc_nolock @ 0x1800A46C0 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x1800A4718 (_ungetwc_nolock.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1800361F0 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x1800370C0 (RtlVirtualUnwind.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1800A8D10 (RtlCaptureContext.c)
 */

ULONG invalid_parameter()
{
  ULONG64 Rip; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v1; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-508h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-500h] BYREF
  PVOID HandlerData; // [rsp+50h] [rbp-4F8h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+60h] [rbp-4E8h] BYREF
  DWORD64 retaddr; // [rsp+548h] [rbp+0h] BYREF

  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  v1 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( v1 )
  {
    RtlVirtualUnwind(0, ImageBase, Rip, v1, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&retaddr;
  }
  return DbgPrint("Invalid parameter passed to C runtime function.\n");
}
