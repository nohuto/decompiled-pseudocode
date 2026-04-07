/*
 * XREFs of ?GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS@@@Z @ 0x18002A254
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

void __fastcall CWindowList::GetColorizationParameters(
        CWindowList *this,
        struct MILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS *a2)
{
  __m128i v3; // xmm2
  int v4; // ecx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-20h]

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = *(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1380);
  v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 351);
  v5 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1380);
  v8 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1396);
  *((_DWORD *)a2 + 2) = HIDWORD(v5);
  *((_DWORD *)a2 + 1) = _mm_cvtsi128_si32(v3);
  *((_DWORD *)a2 + 4) = _mm_srli_si128(v3, 8).m128i_i32[1];
  *((_DWORD *)a2 + 5) = v8;
  v6 = HIDWORD(v8);
  *((_DWORD *)a2 + 7) = v4;
  *((_DWORD *)a2 + 6) = v6;
  *((_DWORD *)a2 + 3) = _mm_cvtsi128_si32(_mm_srli_si128(v3, 8));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
}
