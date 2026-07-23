/*
 * XREFs of MiSmallVaStillMapsFrame @ 0x1401077A0
 * Callers:
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x140014200 (PsGetCurrentProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiGetProcessShadowPage @ 0x1401EF158 (MiGetProcessShadowPage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiSmallVaStillMapsFrame(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r9
  unsigned __int64 *v4; // r8
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // r10
  __int64 v9; // r11
  _KPROCESS *CurrentProcess; // rax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[4]; // [rsp+28h] [rbp-30h] BYREF

  v2 = a2;
  v3 = 4LL;
  v4 = v12;
  LODWORD(a2) = 4;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    *v4 = v5;
    v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    ++v4;
    --v3;
  }
  while ( v3 );
  while ( 1 )
  {
    a2 = (unsigned int)(a2 - 1);
    v6 = *(_QWORD *)v12[a2];
    if ( (v6 & 1) == 0 || (v6 & 0x80u) != 0LL )
      break;
    if ( (_DWORD)a2 == 1 )
    {
      if ( v2 == -1 )
        return 1LL;
      v11 = MI_READ_PTE_LOCK_FREE(v12[0]);
      if ( (v11 & 1) != 0 )
      {
        if ( MI_GET_PAGE_FRAME_FROM_PTE(&v11) == v2 )
          return 1LL;
        if ( v12[0] == v8 + (v9 & 0x7FFFFB7DBEDF68LL) && (*(_QWORD *)(48 * v2 - 0x57FFFFFFFD8LL) & 0xFFFFFFFFFLL) == v2 )
        {
          CurrentProcess = PsGetCurrentProcess();
          if ( v2 == MiGetProcessShadowPage(CurrentProcess) )
            return 1LL;
        }
      }
      return 0LL;
    }
  }
  return 0LL;
}
