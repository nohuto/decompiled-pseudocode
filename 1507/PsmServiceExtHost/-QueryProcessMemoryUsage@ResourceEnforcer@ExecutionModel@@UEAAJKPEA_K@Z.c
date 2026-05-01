/*
 * XREFs of ?QueryProcessMemoryUsage@ResourceEnforcer@ExecutionModel@@UEAAJKPEA_K@Z @ 0x180039C70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180005394 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceEnforcer::QueryProcessMemoryUsage(
        ExecutionModel::ResourceEnforcer *this,
        DWORD a2,
        unsigned __int64 *a3)
{
  signed int v3; // edi
  HANDLE v6; // rax
  signed int LastError; // eax
  void *v9; // [rsp+20h] [rbp-78h] BYREF
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+30h] [rbp-68h] BYREF

  v3 = 0;
  ppsmemCounters.cb = 0;
  memset_0(&ppsmemCounters.PageFaultCount, 0, 0x44uLL);
  v6 = OpenProcess(0x400u, 0, a2);
  v9 = v6;
  if ( v6 )
  {
    if ( K32GetProcessMemoryInfo(v6, &ppsmemCounters, 0x48u) )
      goto LABEL_7;
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    if ( v3 >= 0 )
LABEL_7:
      *a3 = ppsmemCounters.PagefileUsage;
  }
  else
  {
    v3 = -2147467259;
  }
  tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v9);
  return (unsigned int)v3;
}
