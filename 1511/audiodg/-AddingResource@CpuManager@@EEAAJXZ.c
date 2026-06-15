/*
 * XREFs of ?AddingResource@CpuManager@@EEAAJXZ @ 0x140028080
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     memset_0 @ 0x140019034 (memset_0.c)
 *     ?IdentifyCpuSets@@YAJPEAUCpuSet@@PEAUCpuGroupMask@@@Z @ 0x140028628 (-IdentifyCpuSets@@YAJPEAUCpuSet@@PEAUCpuGroupMask@@@Z.c)
 */

__int64 __fastcall CpuManager::AddingResource(CpuManager *this)
{
  unsigned int v1; // edi
  NTSTATUS v3; // ebx
  __int64 v4; // rdx
  int v5; // ebx
  HANDLE CurrentProcess; // rax
  _QWORD ProcessInformation[21]; // [rsp+28h] [rbp-D0h] BYREF

  v1 = 0;
  v3 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)this + 68) != 1 )
  {
LABEL_8:
    _InterlockedIncrement((volatile signed __int32 *)this + 68);
    goto LABEL_9;
  }
  memset_0(ProcessInformation, 0, 0xA0uLL);
  v3 = IdentifyCpuSets((CpuManager *)((char *)this + 280), (CpuManager *)((char *)this + 448));
  if ( v3 >= 0 )
  {
    v3 = NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, (char *)this + 288, 8 * *((_DWORD *)this + 70));
    if ( v3 >= 0 )
    {
      v4 = *((unsigned __int16 *)this + 224);
      ProcessInformation[v4] |= *((_QWORD *)this + 57);
      v5 = v4 + 1;
      CurrentProcess = GetCurrentProcess();
      v3 = NtSetInformationProcess(CurrentProcess, ProcessVmCounters|0x40, ProcessInformation, 8 * v5);
      if ( v3 < 0 )
      {
        NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
        goto LABEL_9;
      }
      goto LABEL_8;
    }
  }
LABEL_9:
  _InterlockedDecrement((volatile signed __int32 *)this + 68);
  if ( v3 < 0 )
    return v3 | 0x10000000u;
  return v1;
}
