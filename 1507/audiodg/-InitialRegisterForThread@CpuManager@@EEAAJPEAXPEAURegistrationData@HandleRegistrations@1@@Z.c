/*
 * XREFs of ?InitialRegisterForThread@CpuManager@@EEAAJPEAXPEAURegistrationData@HandleRegistrations@1@@Z @ 0x140028110
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 */

__int64 __fastcall CpuManager::InitialRegisterForThread(
        CpuManager *this,
        void *a2,
        struct CpuManager::HandleRegistrations::RegistrationData *a3)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  signed int LastError; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  HANDLE v11; // rcx
  unsigned int v12; // r9d
  unsigned int v13; // edx
  NTSTATUS v14; // ebx
  HANDLE v15; // rax
  HANDLE TargetHandle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-B0h]
  _QWORD ThreadInformation[21]; // [rsp+58h] [rbp-A8h] BYREF

  TargetHandle = 0LL;
  v18 = 0;
  memset_0(ThreadInformation, 0, 0xA0uLL);
  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  if ( DuplicateHandle(v7, a2, CurrentProcess, &TargetHandle, 0x400u, 0, 0) )
  {
    v10 = *((unsigned __int16 *)this + 224);
    v11 = TargetHandle;
    ThreadInformation[v10] |= *((_QWORD *)this + 57);
    v12 = v18;
    v13 = v10 + 1;
    if ( v18 <= v13 )
      v12 = v13;
    v18 = v12;
    v14 = NtSetInformationThread(v11, ThreadEnableAlignmentFaultFixup|0x20, ThreadInformation, 8 * v12);
    if ( v14 >= 0 )
    {
      v15 = TargetHandle;
      TargetHandle = 0LL;
      v9 = 0;
      *(_QWORD *)a3 = v15;
    }
    else
    {
      v9 = v14 | 0x10000000;
    }
  }
  else
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( TargetHandle )
    CloseHandle(TargetHandle);
  return v9;
}
