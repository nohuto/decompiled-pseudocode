/*
 * XREFs of PbmUnregisterAppClosureNotification @ 0x180016F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001167C (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800117F4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmUnregisterAppClosureNotification(CApplicationManager *a1)
{
  unsigned int v1; // esi
  int Process; // eax
  struct CProcess *v3; // rdi
  CApplicationManager *v4; // rbx
  struct CProcess *v5; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  struct CProcess *v9; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  v9 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(a1, a1, &v9);
    v3 = v9;
    v1 = Process;
    if ( Process >= 0 )
    {
      v4 = g_ApplicationManager;
      v8 = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      *((_DWORD *)v3 + 112) = 0;
      CApplicationManager::Unregister(v4, v3);
      if ( v8 )
        LeaveCriticalSection(lpCriticalSection);
      *((_DWORD *)v3 + 112) = 0;
    }
    if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 2, 0xFFFFFFFF) == 1 )
    {
      v5 = v9;
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v9 + 32LL))(v9);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    }
  }
  return v1;
}
