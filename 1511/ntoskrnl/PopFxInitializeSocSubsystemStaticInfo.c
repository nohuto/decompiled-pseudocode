/*
 * XREFs of PopFxInitializeSocSubsystemStaticInfo @ 0x140634184
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1401EA1CC (PopFxEnablePlatformStates.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140002AB0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     wcsncmp @ 0x140145C64 (wcsncmp.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PopFxBugCheck @ 0x1401E991C (PopFxBugCheck.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlHashUnicodeString @ 0x14043D630 (RtlHashUnicodeString.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140634A44 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14063552C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemCount @ 0x14063571C (PopPluginQuerySocSubsystemCount.c)
 */

__int64 __fastcall PopFxInitializeSocSubsystemStaticInfo(__int64 a1)
{
  unsigned int v1; // r15d
  NTSTATUS v2; // ebx
  int v3; // ebx
  _QWORD *v4; // rsi
  SIZE_T v5; // rdi
  _QWORD *PoolWithTag; // rax
  __int64 v7; // rcx
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int128 v10; // xmm1
  char v11; // r12
  unsigned int v12; // edi
  unsigned int v13; // r14d
  __int64 v14; // rbx
  int v15; // eax
  const wchar_t *v16; // r13
  __int64 v17; // r12
  int v18; // eax
  __int64 **v19; // rax
  char v21; // [rsp+28h] [rbp-A9h]
  _DWORD v22[2]; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v23; // [rsp+38h] [rbp-99h]
  __int128 v24; // [rsp+40h] [rbp-91h]
  __int128 v25; // [rsp+50h] [rbp-81h]
  __int64 v26; // [rsp+60h] [rbp-71h]
  int v27; // [rsp+68h] [rbp-69h] BYREF
  __int64 v28; // [rsp+6Ch] [rbp-65h]
  wchar_t pszDest[64]; // [rsp+78h] [rbp-59h] BYREF

  v1 = a1;
  memset(pszDest, 0, sizeof(pszDest));
  if ( PopFxProcessorPlugin && (v27 = a1, v28 = 0LL, (unsigned __int8)PopPluginQuerySocSubsystemCount(a1, &v27)) )
  {
    v3 = v28;
    v4 = (_QWORD *)PopFxLookupSocSubsystemsByPlatformIdleState(v1);
    if ( v4 )
    {
      v2 = -1073741585;
LABEL_29:
      ExFreePoolWithTag(v4, 0x4D584650u);
      return (unsigned int)v2;
    }
    v5 = 344 * v3 + 24;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x4D584650u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v5);
      *((_DWORD *)v4 + 4) = v1;
      v8 = 0;
      *((_DWORD *)v4 + 5) = v3;
      if ( v3 )
      {
        while ( 1 )
        {
          v9 = 43LL * v8;
          v4[v9 + 4] = (char *)&v4[v9 + 13] + 4;
          LODWORD(v4[v9 + 3]) = 0x800000;
          LOWORD(v4[v9 + 5]) = 0;
          v4[v9 + 6] = (char *)&v4[v9 + 29] + 4;
          WORD1(v4[v9 + 5]) = 128;
          LODWORD(v4[v9 + 7]) = v8;
          v22[0] = v1;
          v23 = 0LL;
          v22[1] = v4[v9 + 7];
          v24 = *(_OWORD *)&v4[v9 + 3];
          v10 = *(_OWORD *)&v4[v9 + 5];
          v26 = 0LL;
          v25 = v10;
          PopPluginInitializeSocSubsystemStaticInfo(v7, v22);
          LOWORD(v4[v9 + 5]) = v25;
          LOWORD(v4[v9 + 3]) = v24;
          v4[v9 + 8] = v23;
          LODWORD(v4[v9 + 13]) = v26;
          v2 = RtlHashUnicodeString((PCUNICODE_STRING)&v4[v9 + 5], 0, 0, (PULONG)&v4[v9 + 7] + 1);
          if ( v2 < 0 )
            break;
          if ( ++v8 >= *((_DWORD *)v4 + 5) )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        v11 = 0;
        v21 = 0;
        v12 = 0;
        if ( *((_DWORD *)v4 + 5) )
        {
          while ( 1 )
          {
            v13 = 0;
            v14 = 43LL * v12;
            v15 = v4[v14 + 7];
            *(GUID *)&v4[v14 + 9] = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
            WORD2(v4[v14 + 9]) = v1;
            HIWORD(v4[v14 + 9]) = v15 + 1;
            v16 = (const wchar_t *)v4[v14 + 4];
            if ( *((_DWORD *)v4 + 5) )
            {
              while ( 1 )
              {
                v17 = 43LL * v13;
                if ( v13 != v12 && !wcsncmp((const wchar_t *)v4[v14 + 6], (const wchar_t *)v4[v17 + 6], 0x40uLL) )
                  PopFxBugCheck(0x706uLL, 0x25uLL, 0x4E616D65uLL, v13);
                if ( !wcsncmp(v16, (const wchar_t *)v4[v17 + 6], 0x40uLL) )
                  break;
                if ( ++v13 >= *((_DWORD *)v4 + 5) )
                {
                  v11 = v21;
                  goto LABEL_18;
                }
              }
              v18 = LODWORD(v4[v17 + 7]) + 1;
              *(GUID *)&v4[v14 + 11] = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
              WORD2(v4[v14 + 11]) = v1;
              HIWORD(v4[v14 + 11]) = v18;
            }
            else
            {
LABEL_18:
              if ( v11 )
              {
                if ( wcsncmp(v16, pszDest, 0x40uLL) )
                  PopFxBugCheck(0x706uLL, 0x25uLL, 0x50617265uLL, v12);
              }
              else
              {
                RtlStringCchCopyW(pszDest, 0x40uLL, v16);
                v21 = 1;
              }
              *(GUID *)&v4[v14 + 11] = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
              HIDWORD(v4[v14 + 11]) = 0;
            }
            if ( ++v12 >= *((_DWORD *)v4 + 5) )
              break;
            v11 = v21;
          }
        }
        v2 = 0;
      }
      if ( v2 )
        goto LABEL_29;
      v19 = (__int64 **)qword_1402DF118;
      *v4 = &SocSubsystemsList;
      v4[1] = v19;
      if ( *v19 != &SocSubsystemsList )
        __fastfail(3u);
      *v19 = v4;
      qword_1402DF118 = (__int64)v4;
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
  return (unsigned int)v2;
}
