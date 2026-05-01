/*
 * XREFs of ?get_AppMemoryUsage@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x180001D30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 */

signed int __fastcall Windows::System::CMemoryManager::get_AppMemoryUsage(
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a2)
{
  HANDLE CurrentProcess; // rax
  signed int result; // eax
  _BYTE v5[24]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-20h]

  if ( !a2 )
    return -2147024809;
  *a2 = 0LL;
  CurrentProcess = GetCurrentProcess();
  if ( (unsigned int)GetProcessInformation(CurrentProcess, 2LL, v5) )
  {
    *a2 = v6;
    return 0;
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
