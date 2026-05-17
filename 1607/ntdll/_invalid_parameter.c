/*
 * XREFs of _invalid_parameter @ 0x180096B68
 * Callers:
 *     _lfind @ 0x180097750 (_lfind.c)
 *     _snprintf @ 0x1800978F0 (_snprintf.c)
 *     _snwprintf @ 0x1800979A0 (_snwprintf.c)
 *     _splitpath_helper @ 0x180097B10 (_splitpath_helper.c)
 *     _strlwr_s @ 0x180097E10 (_strlwr_s.c)
 *     _strupr @ 0x180097EE0 (_strupr.c)
 *     _strupr_s @ 0x180097F30 (_strupr_s.c)
 *     swprintf @ 0x180097FA0 (swprintf.c)
 *     _vscwprintf_helper @ 0x18009807C (_vscwprintf_helper.c)
 *     _vswprintf_l @ 0x1800980E4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x1800981AC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18009827C (_vsnwprintf_l.c)
 *     _wcslwr @ 0x1800983B0 (_wcslwr.c)
 *     _wcslwr_s @ 0x180098400 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x1800984E0 (_wcsnset_s.c)
 *     _wcsset_s @ 0x180098570 (_wcsset_s.c)
 *     wcstoxq @ 0x180098634 (wcstoxq.c)
 *     _wcsupr_s @ 0x1800988E0 (_wcsupr_s.c)
 *     bsearch @ 0x180099410 (bsearch.c)
 *     qsort @ 0x18009A780 (qsort.c)
 *     qsort_s @ 0x18009AB70 (qsort_s.c)
 *     sprintf @ 0x18009AFA0 (sprintf.c)
 *     vscan_fn @ 0x18009B18C (vscan_fn.c)
 *     strtoxlX @ 0x18009BC00 (strtoxlX.c)
 *     _vsprintf_l @ 0x18009C47C (_vsprintf_l.c)
 *     wcstoxlX @ 0x18009C8CC (wcstoxlX.c)
 *     bsearch_s @ 0x18009CC8C (bsearch_s.c)
 *     strtoxq @ 0x18009CE80 (strtoxq.c)
 *     _output_l @ 0x18009D0F0 (_output_l.c)
 *     _woutput_l @ 0x18009DA70 (_woutput_l.c)
 *     _input_l @ 0x1800A0000 (_input_l.c)
 *     _wctomb_s_l @ 0x1800A092C (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x1800A0A00 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x1800A0AD4 (_ungetc_nolock.c)
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
 *     _fgetwc_nolock @ 0x1800A5A84 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x1800A5ADC (_ungetwc_nolock.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180035FA0 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x180036EF0 (RtlVirtualUnwind.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1800AA150 (RtlCaptureContext.c)
 */

__int64 invalid_parameter()
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
