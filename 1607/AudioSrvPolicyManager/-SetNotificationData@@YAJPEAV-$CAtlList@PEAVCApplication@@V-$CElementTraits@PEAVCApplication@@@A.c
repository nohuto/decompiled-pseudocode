/*
 * XREFs of ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x18001B3C4
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x18001B578 (-GenerateMediaManagerNotification@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCAp.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D018 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     memcpy_0 @ 0x180024CC6 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetNotificationData(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rsi
  int v4; // ebx
  size_t v5; // rdi
  __int64 v8; // rbp
  __int64 v9; // rax
  _WORD *v10; // rcx
  __int64 v11; // rdx
  size_t v12; // r8
  __int64 v13; // rax
  size_t v14; // r14
  _QWORD *v15; // rcx
  volatile signed __int32 *v16; // rdi
  __int64 v17; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v20; // [rsp+28h] [rbp-40h]

  v3 = (_QWORD *)*a1;
  v4 = 0;
  v5 = 0LL;
  while ( v3 )
  {
    v8 = v3[2];
    v9 = 0LL;
    v3 = (_QWORD *)*v3;
    v10 = *(_WORD **)(v8 + 16);
    if ( !v10 )
      goto LABEL_8;
    v11 = 1024LL;
    v4 = 0;
    do
    {
      if ( !*v10 )
        break;
      ++v10;
      --v11;
    }
    while ( v11 );
    if ( v11 )
      v9 = 1024 - v11;
    else
LABEL_8:
      v4 = -2147024809;
    if ( v4 < 0 )
      break;
    v12 = 2 * v9 + 2;
    v13 = v5 + 4;
    if ( v5 + 4 > a3 )
      return (unsigned int)-2147024774;
    v14 = v12 + v13;
    *(_DWORD *)(v5 + a2) = v12;
    if ( v12 + v13 > a3 )
      return (unsigned int)-2147024774;
    memcpy_0((void *)(v13 + a2), *(const void **)(v8 + 16), v12);
    if ( v14 + 4 > a3 )
      return (unsigned int)-2147024774;
    v20 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)(v8 + 24);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v15 = *(_QWORD **)(v8 + 64);
    v16 = 0LL;
    while ( v15 )
    {
      v17 = v15[2];
      v15 = (_QWORD *)*v15;
      if ( !*(_DWORD *)(v17 + 416) && *(_DWORD *)(v17 + 472) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
        v16 = (volatile signed __int32 *)v17;
        break;
      }
    }
    if ( v20 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v20 = 0;
    }
    if ( !v16 )
      return (unsigned int)-2147418113;
    *(_DWORD *)(v14 + a2) = *((_DWORD *)v16 + 42);
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 32LL))(v16);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v16 + 24LL))(v16, 1LL);
    }
    v5 = v14 + 8;
    if ( v14 + 8 > a3 )
      return (unsigned int)-2147024774;
    *(_DWORD *)(v14 + 4 + a2) = CApplication::IsBackgroundAudioCapable((CApplication *)v8);
  }
  return (unsigned int)v4;
}
