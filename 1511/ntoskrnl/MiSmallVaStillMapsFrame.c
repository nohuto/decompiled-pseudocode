/*
 * XREFs of MiSmallVaStillMapsFrame @ 0x1400E05CC
 * Callers:
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     PsGetCurrentProcess @ 0x1400C7D90 (PsGetCurrentProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProcessShadowPage @ 0x1401DE864 (MiGetProcessShadowPage.c)
 */

__int64 __fastcall MiSmallVaStillMapsFrame(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 PteAddress; // rax
  __int64 v4; // rbp
  unsigned __int64 *v5; // rsi
  __int64 v6; // rdi
  char v7; // al
  __int64 v9; // rax
  _KPROCESS *CurrentProcess; // rax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[4]; // [rsp+28h] [rbp-30h] BYREF

  PteAddress = MiGetPteAddress(a1);
  v4 = 4LL;
  v5 = v12;
  LODWORD(v6) = 4;
  do
  {
    *v5 = PteAddress;
    PteAddress = MiGetPteAddress(PteAddress);
    ++v5;
    --v4;
  }
  while ( v4 );
  while ( 1 )
  {
    v6 = (unsigned int)(v6 - 1);
    v7 = *(_BYTE *)v12[v6];
    if ( (v7 & 1) == 0 )
      break;
    if ( (_DWORD)v6 == 1 )
    {
      if ( v7 >= 0 )
      {
        if ( a2 == -1 )
          return 1LL;
        v11 = MI_READ_PTE_LOCK_FREE(v12[0]);
        if ( (v11 & 1) != 0 )
        {
          if ( MI_GET_PAGE_FRAME_FROM_PTE(&v11) == a2 )
            return 1LL;
          v9 = MiGetPteAddress(0xFFFFF6FB7DBED000uLL);
          if ( v12[0] == v9 && (*(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL) & 0xFFFFFFFFFLL) == a2 )
          {
            CurrentProcess = PsGetCurrentProcess();
            if ( a2 == MiGetProcessShadowPage(CurrentProcess) )
              return 1LL;
          }
        }
      }
      return 0LL;
    }
  }
  return 0LL;
}
