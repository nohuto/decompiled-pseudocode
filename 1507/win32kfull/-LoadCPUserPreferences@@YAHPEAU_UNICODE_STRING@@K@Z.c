/*
 * XREFs of ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C013321C
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0133984 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall LoadCPUserPreferences(struct _UNICODE_STRING *a1, int a2)
{
  unsigned int ProfileValue; // eax
  char *v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v23; // ecx
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
  v6 = 16LL;
  do
  {
    if ( (unsigned int)FastGetProfileValue(a1, *((unsigned int *)v5 + 1), *((_QWORD *)v5 + 1), 0LL, &Src, 4, a2) )
      *(_DWORD *)v5 = Src;
    v5 += 16;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)(gpsi + 7292LL) ^= ((unsigned __int8)gpdwCPUserPreferencesMask ^ (unsigned __int8)*(_DWORD *)(gpsi + 7292LL)) & 4;
  *(_DWORD *)(gpsi + 7292LL) ^= ((unsigned int)gpdwCPUserPreferencesMask ^ *(_DWORD *)(gpsi + 7292LL)) & 8;
  *(_DWORD *)(gpsi + 7292LL) ^= ((unsigned __int8)gpdwCPUserPreferencesMask ^ (unsigned __int8)*(_DWORD *)(gpsi + 7292LL)) & 0x20;
  if ( (gdwPUDFlags & 0x20000) != 0 )
    *gpsi |= 0x80u;
  else
    *gpsi &= ~0x80u;
  *(_DWORD *)(gpsi + 7296LL) = *(_DWORD *)UPDWORDPointer(8198LL);
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x53uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) == 0 )
    {
LABEL_30:
      v10 = (_DWORD *)(gpsi + 2600LL);
      goto LABEL_15;
    }
  }
  else if ( IsDPIDWMSysMet(v7)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1 )
  {
    goto LABEL_30;
  }
  if ( IsDPIDWMSysMet(0x53uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v19 = 0)
      : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v19) )
  {
    v10 = (_DWORD *)(gpsi + 2988LL);
  }
  else
  {
    v10 = (_DWORD *)(gpsi + 2212LL);
  }
LABEL_15:
  *v10 = *(_DWORD *)UPDWORDPointer(8206LL);
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x54uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) == 0 )
    {
LABEL_46:
      v14 = (_DWORD *)(gpsi + 2604LL);
      goto LABEL_19;
    }
  }
  else if ( IsDPIDWMSysMet(v11)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1 )
  {
    goto LABEL_46;
  }
  if ( IsDPIDWMSysMet(0x54uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v23 = 0)
      : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v23) )
  {
    v14 = (_DWORD *)(gpsi + 2992LL);
  }
  else
  {
    v14 = (_DWORD *)(gpsi + 2216LL);
  }
LABEL_19:
  *v14 = *(_DWORD *)UPDWORDPointer(8208LL);
  *(_DWORD *)(gpsi + 7292LL) = (unsigned int)gpdwCPUserPreferencesMask ^ (*(_DWORD *)(gpsi + 7292LL) ^ (unsigned int)gpdwCPUserPreferencesMask) & 0x7FFFFFFF;
  EnforceColorDependentSettings();
  return 1LL;
}
