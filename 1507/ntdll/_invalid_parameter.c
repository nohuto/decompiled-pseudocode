/*
 * XREFs of _invalid_parameter @ 0x180083FB8
 * Callers:
 *     _lfind @ 0x180084B90 (_lfind.c)
 *     _snprintf @ 0x180084D30 (_snprintf.c)
 *     _snwprintf @ 0x180084DE0 (_snwprintf.c)
 *     _splitpath_helper @ 0x180084F50 (_splitpath_helper.c)
 *     _strlwr_s @ 0x180085250 (_strlwr_s.c)
 *     _strupr @ 0x180085320 (_strupr.c)
 *     _strupr_s @ 0x180085370 (_strupr_s.c)
 *     swprintf @ 0x1800853E0 (swprintf.c)
 *     _vscwprintf_helper @ 0x1800854BC (_vscwprintf_helper.c)
 *     _vswprintf_l @ 0x180085564 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18008562C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1800856FC (_vsnwprintf_l.c)
 *     _wcslwr @ 0x180085830 (_wcslwr.c)
 *     _wcslwr_s @ 0x180085880 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x180085960 (_wcsnset_s.c)
 *     _wcsset_s @ 0x1800859F0 (_wcsset_s.c)
 *     wcstoxq @ 0x180085AB4 (wcstoxq.c)
 *     _wcsupr_s @ 0x180085D60 (_wcsupr_s.c)
 *     bsearch @ 0x180086890 (bsearch.c)
 *     qsort @ 0x180087C00 (qsort.c)
 *     qsort_s @ 0x180088000 (qsort_s.c)
 *     sprintf @ 0x180088430 (sprintf.c)
 *     vscan_fn @ 0x18008861C (vscan_fn.c)
 *     strtoxlX @ 0x1800890B0 (strtoxlX.c)
 *     _vsprintf_l @ 0x18008992C (_vsprintf_l.c)
 *     wcstoxlX @ 0x180089D7C (wcstoxlX.c)
 *     bsearch_s @ 0x18008A144 (bsearch_s.c)
 *     strtoxq @ 0x18008A2B8 (strtoxq.c)
 *     _output_l @ 0x18008A538 (_output_l.c)
 *     _woutput_l @ 0x18008AEC0 (_woutput_l.c)
 *     _input_l @ 0x18008D440 (_input_l.c)
 *     _wctomb_s_l @ 0x18008DD6C (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x18008DE40 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x18008DF14 (_ungetc_nolock.c)
 *     x64toa_s @ 0x18008E0BC (x64toa_s.c)
 *     xtoa_s @ 0x18008E1D0 (xtoa_s.c)
 *     x64tow_s @ 0x18008E3AC (x64tow_s.c)
 *     xtow_s @ 0x18008E4D8 (xtow_s.c)
 *     _makepath_s @ 0x18008E600 (_makepath_s.c)
 *     _vsnprintf_s @ 0x18008E770 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x18008E810 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x18008E880 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x18008E930 (_snwscanf_s.c)
 *     _splitpath_s @ 0x18008E970 (_splitpath_s.c)
 *     _strnset_s @ 0x18008EC10 (_strnset_s.c)
 *     _strset_s @ 0x18008ECA0 (_strset_s.c)
 *     _wmakepath_s @ 0x18008ED00 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x18008EE70 (_wsplitpath_s.c)
 *     memcpy_s @ 0x18008F130 (memcpy_s.c)
 *     memmove_s @ 0x18008F1E0 (memmove_s.c)
 *     vsprintf_s @ 0x18008F290 (vsprintf_s.c)
 *     sscanf_s @ 0x18008F2E0 (sscanf_s.c)
 *     strcat_s @ 0x18008F340 (strcat_s.c)
 *     strcpy_s @ 0x18008F3E0 (strcpy_s.c)
 *     strncat_s @ 0x18008F470 (strncat_s.c)
 *     strncpy_s @ 0x18008F570 (strncpy_s.c)
 *     strtok_s @ 0x18008F660 (strtok_s.c)
 *     vswprintf_s @ 0x18008F7B0 (vswprintf_s.c)
 *     swscanf_s @ 0x18008F810 (swscanf_s.c)
 *     wcscat_s @ 0x18008F870 (wcscat_s.c)
 *     wcscpy_s @ 0x18008F920 (wcscpy_s.c)
 *     wcsncat_s @ 0x18008F9B0 (wcsncat_s.c)
 *     wcsncpy_s @ 0x18008FAC0 (wcsncpy_s.c)
 *     wcstok_s @ 0x18008FBD0 (wcstok_s.c)
 *     _output_s @ 0x18008FCB4 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x180090594 (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x18009066C (_soutput_s.c)
 *     _input_s @ 0x180090BA8 (_input_s.c)
 *     _sinput_s @ 0x180091488 (_sinput_s.c)
 *     _swoutput_s @ 0x1800914EC (_swoutput_s.c)
 *     _woutput_s @ 0x180091604 (_woutput_s.c)
 *     _swinput_s @ 0x18009246C (_swinput_s.c)
 *     _winput_s @ 0x180092530 (_winput_s.c)
 *     _fgetwc_nolock @ 0x180092F10 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x180092F68 (_ungetwc_nolock.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlVirtualUnwind @ 0x180011740 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x180014E40 (RtlLookupFunctionEntry.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x180095980 (RtlCaptureContext.c)
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
