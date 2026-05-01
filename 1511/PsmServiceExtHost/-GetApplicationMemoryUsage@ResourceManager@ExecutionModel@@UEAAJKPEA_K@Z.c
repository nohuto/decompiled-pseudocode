/*
 * XREFs of ?GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z @ 0x180043840
 * Callers:
 *     <none>
 * Callees:
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180005574 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009D60 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F5B0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetApplicationMemoryUsage(
        ExecutionModel::ResourceManager *this,
        DWORD a2,
        unsigned __int64 *a3)
{
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // rdx
  WCHAR *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rax
  int v21; // ebx
  ExecutionModel::ModernActivationResourceInfo **v22; // rbx
  signed int LastError; // eax
  ExecutionModel::ModernActivationResourceInfo **v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v28[8]; // [rsp+58h] [rbp-A8h] BYREF
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v30[464]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v31[8]; // [rsp+280h] [rbp+180h] BYREF
  unsigned int v32; // [rsp+2C4h] [rbp+1C4h] BYREF
  int v33; // [rsp+2C8h] [rbp+1C8h] BYREF
  __int64 v34; // [rsp+2D0h] [rbp+1D0h] BYREF
  WCHAR v35[280]; // [rsp+2E0h] [rbp+1E0h] BYREF

  v27 = 0LL;
  v25 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    v26 = 464;
    memset_0(v30, 0, 0x228uLL);
    v7 = (*(__int64 (__fastcall **)(char *, _QWORD, _BYTE *, int *, unsigned __int64 *, unsigned int *, int *, __int64 *))(*((_QWORD *)this - 1) + 384LL))(
           (char *)this - 8,
           a2,
           v30,
           &v26,
           v31,
           &v32,
           &v33,
           &v34);
    RtlEnterCriticalSection(&RmpGlobalLock);
    if ( v7 >= 0 )
    {
      v8 = 4LL;
      v9 = v35;
      v10 = v30;
      do
      {
        v11 = v10[1];
        *(_OWORD *)v9 = *v10;
        v12 = v10[2];
        *((_OWORD *)v9 + 1) = v11;
        v13 = v10[3];
        *((_OWORD *)v9 + 2) = v12;
        v14 = v10[4];
        *((_OWORD *)v9 + 3) = v13;
        v15 = v10[5];
        *((_OWORD *)v9 + 4) = v14;
        v16 = v10[6];
        *((_OWORD *)v9 + 5) = v15;
        v17 = v10[7];
        v10 += 8;
        *((_OWORD *)v9 + 6) = v16;
        v9 += 64;
        *((_OWORD *)v9 - 1) = v17;
        --v8;
      }
      while ( v8 );
      v18 = *v10;
      v19 = v10[1];
      v20 = *((_QWORD *)v10 + 4);
      *(_OWORD *)v9 = v18;
      *((_OWORD *)v9 + 1) = v19;
      *((_QWORD *)v9 + 4) = v20;
      v21 = RmpActivityHostFindByTypeAndIdentifier(0, v35, (volatile signed __int32 **)&v25);
      if ( v21 < 0 )
      {
        v6 = v21 | 0x10000000;
LABEL_19:
        RtlLeaveCriticalSection(&RmpGlobalLock);
        return (unsigned int)v6;
      }
      ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(v25[75], &v27, 0LL, 0LL, 0LL, 0LL);
      v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, unsigned __int64 *, _QWORD, int, __int64, unsigned __int64 *, _BYTE *))(**((_QWORD **)this + 14) + 48LL))(
             *((_QWORD *)this + 14),
             v30,
             v31,
             v32,
             v33,
             v34,
             a3,
             v28);
      if ( v6 < 0 )
        goto LABEL_19;
      *a3 += v27;
LABEL_16:
      v6 = 0;
      goto LABEL_19;
    }
    v25 = 0LL;
    v22 = (ExecutionModel::ModernActivationResourceInfo **)OpenProcess(0x400u, 0, a2);
    if ( v22 )
    {
      tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete((void **)&v25);
      v25 = v22;
      if ( K32GetProcessMemoryInfo(v22, &ppsmemCounters, 0x48u) )
      {
        *a3 = ppsmemCounters.PagefileUsage;
        tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete((void **)&v25);
        goto LABEL_16;
      }
      LastError = GetLastError();
      v6 = LastError;
      if ( LastError > 0 )
        v6 = (unsigned __int16)LastError | 0x80070000;
    }
    else
    {
      v6 = -805305819;
    }
    tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete((void **)&v25);
    goto LABEL_19;
  }
  return (unsigned int)-2147024809;
}
