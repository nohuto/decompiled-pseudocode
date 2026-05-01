/*
 * XREFs of ?Handle_RM_SetKillableProcessEvent@ResourceManagerServerProxy@@QEAAJKPEAX@Z @ 0x1800399E8
 * Callers:
 *     RmtSrv_RM_SetKillableProcessEvent @ 0x1800386E0 (RmtSrv_RM_SetKillableProcessEvent.c)
 * Callees:
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180005574 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_SetKillableProcessEvent(
        ResourceManagerServerProxy *this,
        DWORD a2,
        void *a3)
{
  HANDLE v5; // rbx
  HANDLE CurrentProcess; // rax
  unsigned int v7; // ebx
  signed int LastError; // eax
  HANDLE TargetHandle; // [rsp+40h] [rbp-18h] BYREF
  void *v11; // [rsp+78h] [rbp+20h] BYREF

  TargetHandle = 0LL;
  v11 = 0LL;
  v5 = OpenProcess(0x40u, 0, a2);
  if ( v5
    && (tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v11),
        v11 = v5,
        CurrentProcess = GetCurrentProcess(),
        DuplicateHandle(v5, a3, CurrentProcess, &TargetHandle, 0x100000u, 0, 0)) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, HANDLE))(**((_QWORD **)this + 7) + 248LL))(
           *((_QWORD *)this + 7),
           TargetHandle);
  }
  else
  {
    LastError = GetLastError();
    v7 = LastError;
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
  }
  tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v11);
  return v7;
}
