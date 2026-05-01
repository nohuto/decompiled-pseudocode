/*
 * XREFs of ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180037F90
 * Callers:
 *     ?RmAccessCheck@ResourceManager@ExecutionModel@@UEAAJW4Enum@ResourceType@2@K@Z @ 0x180011430 (-RmAccessCheck@ResourceManager@ExecutionModel@@UEAAJW4Enum@ResourceType@2@K@Z.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX2KW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180038280 (-RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 * Callees:
 *     RmpActivityHostFindProcessResourceSet @ 0x180002CA8 (RmpActivityHostFindProcessResourceSet.c)
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180005394 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_N_KG@Z @ 0x180016764 (-resize@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_N_KG@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?IsAllowedAccess@ModernActivationResourceInfo@ExecutionModel@@QEBAHW4Enum@ResourceType@2@KE@Z @ 0x180036430 (-IsAllowedAccess@ModernActivationResourceInfo@ExecutionModel@@QEBAHW4Enum@ResourceType@2@KE@Z.c)
 *     RmpActivityHostFindPsmResourceSets @ 0x18003BBE4 (RmpActivityHostFindPsmResourceSets.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckEx(__int64 a1, int a2, DWORD a3, char a4)
{
  __int64 v4; // r14
  int v6; // r12d
  int IsAllowedAccess; // esi
  __int64 ProcessResourceSet; // rax
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned int v13; // ebx
  _BYTE *v15; // rax
  int v16; // eax
  unsigned __int64 v17; // rcx
  int v18; // r8d
  _BYTE *v19; // rax
  _QWORD *PsmResourceSets; // rax
  HANDLE v21; // rbx
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  DWORD v23; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  void *v25; // [rsp+50h] [rbp-B0h] BYREF
  _WORD *v26; // [rsp+58h] [rbp-A8h] BYREF
  char *v27; // [rsp+60h] [rbp-A0h]
  _BYTE *v28; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v29[2]; // [rsp+76h] [rbp-8Ah] BYREF
  unsigned int v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v32[80]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v34; // [rsp+100h] [rbp+0h]
  const struct _TlgProvider_t *v35; // [rsp+108h] [rbp+8h]
  DWORD *v36; // [rsp+110h] [rbp+10h]
  const struct _TlgProvider_t *v37; // [rsp+118h] [rbp+18h]
  void **v38; // [rsp+120h] [rbp+20h]
  const struct _TlgProvider_t *v39; // [rsp+128h] [rbp+28h]

  BYTE4(v22) = a4;
  v4 = a2;
  v26 = &v28;
  LODWORD(v22) = -2147024891;
  v27 = (char *)&v28;
  v6 = 1;
  LOWORD(v28) = 0;
  IsAllowedAccess = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)v4 <= 0x2F )
  {
    ProcessResourceSet = RmpActivityHostFindProcessResourceSet(a3);
    if ( ProcessResourceSet )
    {
      if ( *(int *)(ProcessResourceSet + 4 * v4 + 1544) >= 101 )
      {
LABEL_5:
        LODWORD(v22) = -2147024891;
        goto LABEL_6;
      }
    }
    else
    {
      if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::resize(&v26) )
      {
        LODWORD(v22) = -2147024882;
        goto LABEL_6;
      }
      v15 = v29;
      if ( v26 != (_WORD *)&v28 )
        v15 = v28;
      v23 = 2 * ((v15 - (_BYTE *)v26) >> 1);
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _WORD *, DWORD *, _BYTE *, unsigned int *, unsigned int *, __int64 *, __int64))(*(_QWORD *)a1 + 384LL))(
              a1,
              a3,
              v26,
              &v23,
              v32,
              &v30,
              &v24,
              &v31,
              v22);
      v17 = -1LL;
      LODWORD(v22) = v16;
      v18 = v16;
      do
        ++v17;
      while ( v26[v17] );
      v19 = v29;
      if ( v26 != (_WORD *)&v28 )
        v19 = v28;
      if ( v17 > (v19 - (_BYTE *)v26) >> 1 )
        __int2c();
      v27 = (char *)&v26[v17];
      if ( v18 >= 0 && (PsmResourceSets = (_QWORD *)RmpActivityHostFindPsmResourceSets(&v26, v32, v30, v24, v31)) != 0LL )
      {
        IsAllowedAccess = ExecutionModel::ModernActivationResourceInfo::IsAllowedAccess(
                            PsmResourceSets,
                            v4,
                            v24,
                            SBYTE4(v22));
      }
      else
      {
        v25 = 0LL;
        v6 = 0;
        v21 = OpenProcess(0x100000u, 0, a3);
        if ( v21 )
        {
          tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v25);
          v25 = v21;
          if ( WaitForSingleObject(v21, 0) == 258 )
            IsAllowedAccess = 1;
        }
        tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v25);
      }
      if ( !IsAllowedAccess )
        goto LABEL_5;
      if ( !v6 )
      {
        LODWORD(v22) = 1;
        goto LABEL_6;
      }
    }
    LODWORD(v22) = 0;
    goto LABEL_6;
  }
  LODWORD(v22) = -2147024809;
LABEL_6:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 9uLL) )
  {
    v35 = v10;
    v34 = &v22;
    v36 = &v23;
    v38 = &v25;
    v23 = a3;
    v37 = v10;
    LODWORD(v25) = v4;
    v39 = v10;
    TlgWrite(v10, &unk_18005AC1D, v11, v12, 5u, &pData);
  }
  v13 = v22;
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)&v26);
  return v13;
}
