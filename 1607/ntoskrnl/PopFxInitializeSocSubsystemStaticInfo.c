/*
 * XREFs of PopFxInitializeSocSubsystemStaticInfo @ 0x14066C680
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1402029D0 (PopFxEnablePlatformStates.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14010B1EC (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcsncmp @ 0x14014F600 (wcsncmp.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlHashUnicodeString @ 0x1404E21B0 (RtlHashUnicodeString.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14066CF38 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14066DA20 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemCount @ 0x14066DC10 (PopPluginQuerySocSubsystemCount.c)
 */

__int64 __fastcall PopFxInitializeSocSubsystemStaticInfo(unsigned int a1)
{
  __int64 v2; // rcx
  NTSTATUS v3; // ebx
  int v4; // ebx
  _QWORD *v5; // rsi
  SIZE_T v6; // rdi
  _QWORD *PoolWithTag; // rax
  __int64 v8; // rcx
  unsigned int v9; // r14d
  __int64 v10; // rdi
  __int128 v11; // xmm1
  char v12; // r12
  unsigned int v13; // edi
  unsigned int v14; // r14d
  __int64 v15; // rbx
  int v16; // eax
  const wchar_t *v17; // r13
  __int64 v18; // r12
  int v19; // eax
  _QWORD *v20; // rax
  char v22; // [rsp+28h] [rbp-A9h]
  _DWORD v23[2]; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v24; // [rsp+38h] [rbp-99h]
  __int128 v25; // [rsp+40h] [rbp-91h]
  __int128 v26; // [rsp+50h] [rbp-81h]
  __int64 v27; // [rsp+60h] [rbp-71h]
  unsigned int v28; // [rsp+68h] [rbp-69h] BYREF
  __int64 v29; // [rsp+6Ch] [rbp-65h]
  wchar_t pszDest[64]; // [rsp+78h] [rbp-59h] BYREF

  memset(pszDest, 0, sizeof(pszDest));
  if ( PopFxProcessorPlugin && (v28 = a1, v29 = 0LL, (unsigned __int8)PopPluginQuerySocSubsystemCount(v2, &v28)) )
  {
    v4 = v29;
    v5 = (_QWORD *)PopFxLookupSocSubsystemsByPlatformIdleState(a1);
    if ( v5 )
    {
      v3 = -1073741585;
LABEL_29:
      ExFreePoolWithTag(v5, 0x4D584650u);
      return (unsigned int)v3;
    }
    v6 = 344 * v4 + 24;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x4D584650u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v6);
      *((_DWORD *)v5 + 4) = a1;
      v9 = 0;
      *((_DWORD *)v5 + 5) = v4;
      if ( v4 )
      {
        while ( 1 )
        {
          v10 = 43LL * v9;
          v5[v10 + 4] = (char *)&v5[v10 + 13] + 4;
          LODWORD(v5[v10 + 3]) = 0x800000;
          LOWORD(v5[v10 + 5]) = 0;
          v5[v10 + 6] = (char *)&v5[v10 + 29] + 4;
          WORD1(v5[v10 + 5]) = 128;
          LODWORD(v5[v10 + 7]) = v9;
          v23[0] = a1;
          v24 = 0LL;
          v23[1] = v5[v10 + 7];
          v25 = *(_OWORD *)&v5[v10 + 3];
          v11 = *(_OWORD *)&v5[v10 + 5];
          v27 = 0LL;
          v26 = v11;
          PopPluginInitializeSocSubsystemStaticInfo(v8, v23);
          LOWORD(v5[v10 + 5]) = v26;
          LOWORD(v5[v10 + 3]) = v25;
          v5[v10 + 8] = v24;
          LODWORD(v5[v10 + 13]) = v27;
          v3 = RtlHashUnicodeString((PCUNICODE_STRING)&v5[v10 + 5], 0, 0, (PULONG)&v5[v10 + 7] + 1);
          if ( v3 < 0 )
            break;
          if ( ++v9 >= *((_DWORD *)v5 + 5) )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        v12 = 0;
        v22 = 0;
        v13 = 0;
        if ( *((_DWORD *)v5 + 5) )
        {
          while ( 1 )
          {
            v14 = 0;
            v15 = 43LL * v13;
            v16 = v5[v15 + 7];
            *(GUID *)&v5[v15 + 9] = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
            WORD2(v5[v15 + 9]) = a1;
            HIWORD(v5[v15 + 9]) = v16 + 1;
            v17 = (const wchar_t *)v5[v15 + 4];
            if ( *((_DWORD *)v5 + 5) )
            {
              while ( 1 )
              {
                v18 = 43LL * v14;
                if ( v14 != v13 && !wcsncmp((const wchar_t *)v5[v15 + 6], (const wchar_t *)v5[v18 + 6], 0x40uLL) )
                  PopFxBugCheck(0x706uLL, 0x25uLL, 0x4E616D65uLL, v14);
                if ( !wcsncmp(v17, (const wchar_t *)v5[v18 + 6], 0x40uLL) )
                  break;
                if ( ++v14 >= *((_DWORD *)v5 + 5) )
                {
                  v12 = v22;
                  goto LABEL_18;
                }
              }
              v19 = LODWORD(v5[v18 + 7]) + 1;
              *(GUID *)&v5[v15 + 11] = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
              WORD2(v5[v15 + 11]) = a1;
              HIWORD(v5[v15 + 11]) = v19;
            }
            else
            {
LABEL_18:
              if ( v12 )
              {
                if ( wcsncmp(v17, pszDest, 0x40uLL) )
                  PopFxBugCheck(0x706uLL, 0x25uLL, 0x50617265uLL, v13);
              }
              else
              {
                RtlStringCchCopyW(pszDest, 0x40uLL, v17);
                v22 = 1;
              }
              *(GUID *)&v5[v15 + 11] = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
              HIDWORD(v5[v15 + 11]) = 0;
            }
            if ( ++v13 >= *((_DWORD *)v5 + 5) )
              break;
            v12 = v22;
          }
        }
        v3 = 0;
      }
      if ( v3 )
        goto LABEL_29;
      v20 = (_QWORD *)qword_1403046D8;
      if ( *(__int64 **)qword_1403046D8 != &SocSubsystemsList )
        __fastfail(3u);
      *v5 = &SocSubsystemsList;
      v5[1] = v20;
      *v20 = v5;
      qword_1403046D8 = (__int64)v5;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v3;
}
