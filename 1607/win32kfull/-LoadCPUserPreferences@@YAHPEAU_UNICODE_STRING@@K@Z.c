/*
 * XREFs of ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C008E55C
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall LoadCPUserPreferences(struct _UNICODE_STRING *a1, int a2)
{
  unsigned int ProfileValue; // eax
  char *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _DWORD *v32; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // ecx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // ecx
  int Src; // [rsp+70h] [rbp+18h] BYREF

  ProfileValue = FastGetProfileValue(
                   a1,
                   *((unsigned int *)&gpviCPUserPreferences + 1),
                   *((_QWORD *)&gpviCPUserPreferences + 1),
                   0LL,
                   &Src,
                   8,
                   a2);
  if ( ProfileValue )
  {
    if ( ProfileValue > 8 )
      ProfileValue = 8;
    memmove(gpdwCPUserPreferencesMask, &Src, ProfileValue);
  }
  v5 = (char *)&gpviCPUserPreferences + 16;
  v6 = 17LL;
  do
  {
    if ( (unsigned int)FastGetProfileValue(a1, *((unsigned int *)v5 + 1), *((_QWORD *)v5 + 1), 0LL, &Src, 4, a2) )
      *(_DWORD *)v5 = Src;
    v5 += 16;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)(gpsi + 8684LL) ^= ((unsigned __int8)gpdwCPUserPreferencesMask ^ (unsigned __int8)*(_DWORD *)(gpsi + 8684LL)) & 4;
  *(_DWORD *)(gpsi + 8684LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 8684LL)) & 8;
  *(_DWORD *)(gpsi + 8684LL) ^= ((unsigned __int8)gpdwCPUserPreferencesMask ^ (unsigned __int8)*(_DWORD *)(gpsi + 8684LL)) & 0x20;
  if ( (gdwPUDFlags & 0x20000) != 0 )
    *gpsi |= 0x80u;
  else
    *gpsi &= ~0x80u;
  *(_DWORD *)(gpsi + 8688LL) = *(_DWORD *)UPDWORDPointer(8198LL);
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x53uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v8, v7, v9, v10) & 0xF) == 0 )
    {
LABEL_28:
      v19 = (_DWORD *)(gpsi + 2600LL);
      goto LABEL_15;
    }
  }
  else if ( IsDPIDWMSysMet(v8)
         && (W32GetCurrentThreadDpiAwarenessContext(v12, v11, v13, v14) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_28;
  }
  if ( IsDPIDWMSysMet(0x53uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43) + 408)
      ? (v47 = 0)
      : (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45, v46)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v47) )
  {
    v19 = (_DWORD *)(gpsi + 2988LL);
  }
  else
  {
    v19 = (_DWORD *)(gpsi + 2212LL);
  }
LABEL_15:
  *v19 = *(_DWORD *)UPDWORDPointer(8206LL);
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x54uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22, v23) & 0xF) == 0 )
    {
LABEL_42:
      v32 = (_DWORD *)(gpsi + 2604LL);
      goto LABEL_19;
    }
  }
  else if ( IsDPIDWMSysMet(v21)
         && (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_42;
  }
  if ( IsDPIDWMSysMet(0x54uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57) + 408)
      ? (v61 = 0)
      : (v61 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59, v60)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v61) )
  {
    v32 = (_DWORD *)(gpsi + 2992LL);
  }
  else
  {
    v32 = (_DWORD *)(gpsi + 2216LL);
  }
LABEL_19:
  *v32 = *(_DWORD *)UPDWORDPointer(8208LL);
  *(_DWORD *)(gpsi + 8684LL) = (unsigned int)gpdwCPUserPreferencesMask ^ (*(_DWORD *)(gpsi + 8684LL) ^ (unsigned int)gpdwCPUserPreferencesMask) & 0x7FFFFFFF;
  EnforceColorDependentSettings();
  return 1LL;
}
