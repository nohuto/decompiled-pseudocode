/*
 * XREFs of _invalid_parameter @ 0x180096B58
 * Callers:
 *     _lfind @ 0x180097740 (_lfind.c)
 *     _snprintf @ 0x1800978E0 (_snprintf.c)
 *     _snwprintf @ 0x180097990 (_snwprintf.c)
 *     _splitpath_helper @ 0x180097B00 (_splitpath_helper.c)
 *     _strlwr_s @ 0x180097E00 (_strlwr_s.c)
 *     _strupr @ 0x180097ED0 (_strupr.c)
 *     _strupr_s @ 0x180097F20 (_strupr_s.c)
 *     swprintf @ 0x180097F90 (swprintf.c)
 *     _vscwprintf_helper @ 0x18009806C (_vscwprintf_helper.c)
 *     _vswprintf_l @ 0x1800980D4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18009819C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18009826C (_vsnwprintf_l.c)
 *     _wcslwr @ 0x1800983A0 (_wcslwr.c)
 *     _wcslwr_s @ 0x1800983F0 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x1800984D0 (_wcsnset_s.c)
 *     _wcsset_s @ 0x180098560 (_wcsset_s.c)
 *     wcstoxq @ 0x180098624 (wcstoxq.c)
 *     _wcsupr_s @ 0x1800988D0 (_wcsupr_s.c)
 *     bsearch @ 0x180099410 (bsearch.c)
 *     qsort @ 0x18009A770 (qsort.c)
 *     qsort_s @ 0x18009AB60 (qsort_s.c)
 *     sprintf @ 0x18009AF90 (sprintf.c)
 *     vscan_fn @ 0x18009B17C (vscan_fn.c)
 *     strtoxlX @ 0x18009BBF0 (strtoxlX.c)
 *     _vsprintf_l @ 0x18009C46C (_vsprintf_l.c)
 *     wcstoxlX @ 0x18009C8BC (wcstoxlX.c)
 *     bsearch_s @ 0x18009CC7C (bsearch_s.c)
 *     strtoxq @ 0x18009CE70 (strtoxq.c)
 *     _output_l @ 0x18009D0E0 (_output_l.c)
 *     _woutput_l @ 0x18009DA60 (_woutput_l.c)
 *     _input_l @ 0x18009FFF0 (_input_l.c)
 *     _wctomb_s_l @ 0x1800A091C (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x1800A09F0 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x1800A0AD0 (_ungetc_nolock.c)
 *     x64toa_s @ 0x1800A0C7C (x64toa_s.c)
 *     xtoa_s @ 0x1800A0D90 (xtoa_s.c)
 *     x64tow_s @ 0x1800A0F6C (x64tow_s.c)
 *     xtow_s @ 0x1800A1098 (xtow_s.c)
 *     _makepath_s @ 0x1800A11C0 (_makepath_s.c)
 *     _vsnprintf_s @ 0x1800A1330 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x1800A13D0 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x1800A1440 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x1800A14F0 (_snwscanf_s.c)
 *     _splitpath_s @ 0x1800A1530 (_splitpath_s.c)
 *     _strnset_s @ 0x1800A17D0 (_strnset_s.c)
 *     _strset_s @ 0x1800A1860 (_strset_s.c)
 *     _wmakepath_s @ 0x1800A18C0 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x1800A1A30 (_wsplitpath_s.c)
 *     memcpy_s @ 0x1800A1CF0 (memcpy_s.c)
 *     memmove_s @ 0x1800A1DA0 (memmove_s.c)
 *     vsprintf_s @ 0x1800A1E50 (vsprintf_s.c)
 *     sscanf_s @ 0x1800A1EA0 (sscanf_s.c)
 *     strcat_s @ 0x1800A1F00 (strcat_s.c)
 *     strcpy_s @ 0x1800A1FA0 (strcpy_s.c)
 *     strncat_s @ 0x1800A2030 (strncat_s.c)
 *     strncpy_s @ 0x1800A2130 (strncpy_s.c)
 *     strtok_s @ 0x1800A2220 (strtok_s.c)
 *     vswprintf_s @ 0x1800A2370 (vswprintf_s.c)
 *     swscanf_s @ 0x1800A23D0 (swscanf_s.c)
 *     wcscat_s @ 0x1800A2430 (wcscat_s.c)
 *     wcscpy_s @ 0x1800A24E0 (wcscpy_s.c)
 *     wcsncat_s @ 0x1800A2570 (wcsncat_s.c)
 *     wcsncpy_s @ 0x1800A2680 (wcsncpy_s.c)
 *     wcstok_s @ 0x1800A2790 (wcstok_s.c)
 *     _output_s @ 0x1800A2874 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x1800A3140 (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x1800A3218 (_soutput_s.c)
 *     _input_s @ 0x1800A3754 (_input_s.c)
 *     _sinput_s @ 0x1800A4034 (_sinput_s.c)
 *     _swoutput_s @ 0x1800A4098 (_swoutput_s.c)
 *     _woutput_s @ 0x1800A41B0 (_woutput_s.c)
 *     _swinput_s @ 0x1800A4FD0 (_swinput_s.c)
 *     _winput_s @ 0x1800A5094 (_winput_s.c)
 *     _fgetwc_nolock @ 0x1800A5A78 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x1800A5AD0 (_ungetwc_nolock.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180035F90 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x180036EE0 (RtlVirtualUnwind.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1800AA150 (RtlCaptureContext.c)
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
