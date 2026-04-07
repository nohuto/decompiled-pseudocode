/*
 * XREFs of ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x18007EC00
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002FEE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800807FC (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180080A2C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 */

__int64 __fastcall CContactManager::OnContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT *a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  char *v6; // r9
  int v7; // ecx
  _DWORD v9[6]; // [rsp+40h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((unsigned int *)a2 + 1);
  if ( *((_DWORD *)a2 + 8) == 1 )
  {
    if ( *((_BYTE *)this + 324) )
    {
      v5 = *((_DWORD *)a2 + 3);
      v6 = (char *)v9;
      v7 = *((_DWORD *)a2 + 2);
      v9[1] = v5 - 25;
      v9[3] = v5 + 25;
      v9[0] = v7 - 25;
      v9[2] = v7 + 25;
    }
    else
    {
      v6 = (char *)a2 + 16;
    }
    CContactManager::ProcessTouchContact(
      this,
      v4,
      *((_QWORD *)a2 + 1),
      v6,
      *((_DWORD *)a2 + 9),
      *((_DWORD *)a2 + 13),
      *(_QWORD *)((char *)a2 + 44));
  }
  else
  {
    CContactManager::ProcessPenContact(this, v4, *((_QWORD *)a2 + 1));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return 0LL;
}
