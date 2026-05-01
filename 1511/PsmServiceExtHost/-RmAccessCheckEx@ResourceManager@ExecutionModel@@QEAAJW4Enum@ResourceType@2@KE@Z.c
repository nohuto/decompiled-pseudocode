/*
 * XREFs of ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002114
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX2KW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180001C30 (-RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?RmAccessCheck@ResourceManager@ExecutionModel@@UEAAJW4Enum@ResourceType@2@K@Z @ 0x1800023E0 (-RmAccessCheck@ResourceManager@ExecutionModel@@UEAAJW4Enum@ResourceType@2@K@Z.c)
 * Callees:
 *     ?resize@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_N_KG@Z @ 0x180002858 (-resize@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_N_KG@Z.c)
 *     RmpActivityHostFindProcessResourceSet @ 0x180002904 (RmpActivityHostFindProcessResourceSet.c)
 *     RmpActivityHostFindPsmResourceSets @ 0x180002984 (RmpActivityHostFindPsmResourceSets.c)
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180005574 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z @ 0x18000F340 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAGPEAKPEAT_RM_SID@@11PEA_K@Z.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18001269C (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckEx(
        ExecutionModel::ResourceManager *a1,
        int a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rbx
  int v8; // esi
  __int64 ProcessResourceSet; // rax
  _BYTE *v10; // rax
  int (*v11)(ExecutionModel::ResourceManager *__hidden, unsigned int, unsigned __int16 *, unsigned int *, union _RM_SID *, unsigned int *, unsigned int *, unsigned __int64 *); // r12
  int PSMInfo; // eax
  unsigned __int64 v13; // rcx
  int v14; // r8d
  _BYTE *v15; // rax
  __int64 PsmResourceSets; // rax
  _QWORD *v17; // r9
  _QWORD *v18; // rax
  _QWORD *i; // rcx
  const struct _TlgProvider_t *v20; // rcx
  const GUID *v21; // r8
  const GUID *v22; // r9
  unsigned int v23; // ebx
  HANDLE v25; // rdi
  _QWORD *j; // rax
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v29; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 *v31; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v32; // [rsp+68h] [rbp-98h]
  _BYTE *v33; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v34[2]; // [rsp+7Eh] [rbp-82h] BYREF
  unsigned __int64 v35[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v36[80]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v38; // [rsp+100h] [rbp+0h]
  const struct _TlgProvider_t *v39; // [rsp+108h] [rbp+8h]
  char *v40; // [rsp+110h] [rbp+10h]
  const struct _TlgProvider_t *v41; // [rsp+118h] [rbp+18h]
  HANDLE *v42; // [rsp+120h] [rbp+20h]
  const struct _TlgProvider_t *v43; // [rsp+128h] [rbp+28h]

  v4 = a2;
  v31 = (unsigned __int16 *)&v33;
  LODWORD(v27) = -2147024891;
  v32 = (unsigned __int16 *)&v33;
  LOWORD(v33) = 0;
  v8 = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)v4 > 0x2F )
  {
    LODWORD(v27) = -2147024809;
  }
  else
  {
    ProcessResourceSet = RmpActivityHostFindProcessResourceSet(a3);
    if ( ProcessResourceSet )
    {
      if ( *(int *)(ProcessResourceSet + 4 * v4 + 1552) >= 101 )
        goto LABEL_31;
LABEL_19:
      LODWORD(v27) = 0;
    }
    else
    {
      if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::resize(&v31) )
      {
        LODWORD(v27) = -2147024882;
        goto LABEL_20;
      }
      v10 = v34;
      if ( v31 != (unsigned __int16 *)&v33 )
        v10 = v33;
      HIDWORD(v27) = 2 * ((v10 - (_BYTE *)v31) >> 1);
      v11 = *(int (**)(ExecutionModel::ResourceManager *__hidden, unsigned int, unsigned __int16 *, unsigned int *, union _RM_SID *, unsigned int *, unsigned int *, unsigned __int64 *))(*(_QWORD *)a1 + 384LL);
      if ( v11 == ExecutionModel::ResourceManager::GetPSMInfo )
        PSMInfo = ExecutionModel::ResourceManager::GetPSMInfo(
                    a1,
                    a3,
                    v31,
                    (unsigned int *)&v27 + 1,
                    (union _RM_SID *)v36,
                    &v30,
                    &v28,
                    v35);
      else
        PSMInfo = ((__int64 (__fastcall *)(ExecutionModel::ResourceManager *, _QWORD, unsigned __int16 *, char *, _BYTE *, unsigned int *, unsigned int *, unsigned __int64 *, __int64))v11)(
                    a1,
                    a3,
                    v31,
                    (char *)&v27 + 4,
                    v36,
                    &v30,
                    &v28,
                    v35,
                    v27);
      v13 = -1LL;
      LODWORD(v27) = PSMInfo;
      v14 = PSMInfo;
      do
        ++v13;
      while ( v31[v13] );
      v15 = v34;
      if ( v31 != (unsigned __int16 *)&v33 )
        v15 = v33;
      if ( v13 > (v15 - (_BYTE *)v31) >> 1 )
        __int2c();
      v32 = &v31[v13];
      if ( v14 >= 0 )
      {
        PsmResourceSets = RmpActivityHostFindPsmResourceSets(&v31, v36, v30, v28, v35[0]);
        v17 = (_QWORD *)PsmResourceSets;
        if ( PsmResourceSets )
        {
          v18 = (_QWORD *)(PsmResourceSets + 24);
          for ( i = (_QWORD *)*v18; i != v18; i = (_QWORD *)*i )
          {
            if ( *(int *)(i[2] + 4 * v4 + 1552) < 101 )
              goto LABEL_19;
          }
          if ( v28 == 2 && (unsigned int)(v4 - 22) <= 4 && a4 )
          {
            for ( j = (_QWORD *)*v17; j != v17; j = (_QWORD *)*j )
            {
              if ( *(int *)(j[2] + 4 * v4 + 1552) < 101 )
                goto LABEL_19;
            }
          }
          goto LABEL_31;
        }
      }
      v29 = 0LL;
      v25 = OpenProcess(0x100000u, 0, a3);
      if ( v25 )
      {
        tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v29);
        v29 = v25;
        if ( WaitForSingleObject(v25, 0) == 258 )
          v8 = 1;
      }
      tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v29);
      LODWORD(v27) = 1;
      if ( !v8 )
LABEL_31:
        LODWORD(v27) = -2147024891;
    }
  }
LABEL_20:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 9uLL) )
  {
    v39 = v20;
    v38 = &v27;
    v40 = (char *)&v27 + 4;
    v42 = &v29;
    HIDWORD(v27) = a3;
    v41 = v20;
    LODWORD(v29) = v4;
    v43 = v20;
    TlgWrite(v20, &unk_180062492, v21, v22, 5u, &pData);
  }
  v23 = v27;
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(&v31);
  return v23;
}
