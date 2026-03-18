/*
 * XREFs of FxLibraryGlobalsQueryRegistrySettings @ 0x1C0030840
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C0030248 (FxLibraryGlobalsCommission.c)
 * Callees:
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x1C0030998 (--1FxAutoRegKey@@QEAA@XZ.c)
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00309B0 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 */

void FxLibraryGlobalsQueryRegistrySettings()
{
  unsigned int ifrDisabled; // [rsp+20h] [rbp-E0h] BYREF
  FxAutoRegKey hWdf; // [rsp+28h] [rbp-D8h] BYREF
  _UNICODE_STRING ifrDisabledName; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING path; // [rsp+40h] [rbp-C0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t ifrDisabledName_buffer[24]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t path_buffer[56]; // [rsp+B0h] [rbp-50h] BYREF

  hWdf.m_Key = 0LL;
  ifrDisabled = 0;
  ObjectAttributes.RootDirectory = 0LL;
  wcscpy(path_buffer, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Wdf");
  path.Buffer = path_buffer;
  wcscpy(ifrDisabledName_buffer, L"WdfGlobalLogsDisabled");
  ifrDisabledName.Buffer = ifrDisabledName_buffer;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_DWORD *)&path.Length = 7209068;
  *(_DWORD *)&ifrDisabledName.Length = 2883626;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &path;
  if ( ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes) >= 0
    && FxRegKey::_QueryULong(hWdf.m_Key, &ifrDisabledName, &ifrDisabled) >= 0
    && ifrDisabled == 1 )
  {
    FxLibraryGlobals.IfrDisabled = 1;
  }
  FxAutoRegKey::~FxAutoRegKey(&hWdf);
}
