/*
 * XREFs of ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x180014C10
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001D2F0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18001D8A0 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x18000B7BC (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18000C9DC (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?GetBackgroundTaskId@CApplication@@QEAA?AU_GUID@@XZ @ 0x18000CFC0 (-GetBackgroundTaskId@CApplication@@QEAA-AU_GUID@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::SendBackgroundStreamStateChangedNotifiction(CApplicationManager *this)
{
  CApplicationManager *v1; // rdi
  struct _GUID *v2; // rsi
  int v3; // r14d
  SIZE_T v4; // rbx
  HANDLE ProcessHeap; // rax
  struct _GUID *v6; // rax
  _QWORD *v7; // rdi
  struct _GUID *v8; // rbp
  volatile signed __int32 *v9; // rbx
  HANDLE v10; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-50h] BYREF
  char v12; // [rsp+40h] [rbp-48h]
  struct _GUID v13; // [rsp+48h] [rbp-40h] BYREF

  v1 = g_ApplicationManager;
  v2 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)v1 + 10) )
  {
    v3 = 0;
    v4 = 20LL * *((_QWORD *)v1 + 10);
    if ( !is_mul_ok(*((_QWORD *)v1 + 10), 0x14uLL) )
      v4 = -1LL;
    ProcessHeap = GetProcessHeap();
    v6 = (struct _GUID *)HeapAlloc(ProcessHeap, 0, v4);
    v2 = v6;
    if ( v6 )
    {
      v7 = (_QWORD *)*((_QWORD *)v1 + 8);
      if ( v7 )
      {
        v8 = v6;
        do
        {
          v9 = (volatile signed __int32 *)v7[2];
          v7 = (_QWORD *)*v7;
          if ( v9 )
            _InterlockedIncrement(v9 + 2);
          if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v9) )
          {
            *v8 = *CApplication::GetBackgroundTaskId((CApplication *)v9, &v13);
            LOBYTE(v8[1].Data1) = (unsigned int)CApplication::GetTotalActiveRenderStreamCount((CApplication *)v9) != 0;
            ++v3;
            v8 = (struct _GUID *)((char *)v8 + 20);
          }
          if ( v9 && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
          }
        }
        while ( v7 );
        if ( v3 )
          RtlPublishWnfStateData(WNF_BMP_BG_PLAYSTATE_CHANGED, 0LL, v2, (unsigned int)(20 * v3), 0LL);
      }
    }
  }
  v10 = GetProcessHeap();
  HeapFree(v10, 0, v2);
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
}
