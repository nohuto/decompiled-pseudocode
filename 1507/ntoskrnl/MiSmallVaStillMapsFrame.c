/*
 * XREFs of MiSmallVaStillMapsFrame @ 0x14010FD30
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiGetProcessShadowPage @ 0x1402254BC (MiGetProcessShadowPage.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiSmallVaStillMapsFrame(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // r10
  __int64 v4; // rax
  char v5; // cl
  unsigned __int64 PteShadow; // rax
  __int64 v8; // r11
  __int64 ProcessShadowPage; // rax
  __int64 v10; // r9
  unsigned __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]
  unsigned __int64 v13; // [rsp+30h] [rbp-28h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v2 = a2;
  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v3;
  v13 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v4) = 4;
  while ( 1 )
  {
    v4 = (unsigned int)(v4 - 1);
    v5 = *(_BYTE *)*(&v12 + v4);
    if ( (v5 & 1) == 0 )
      break;
    if ( (_DWORD)v4 == 1 )
    {
      if ( v5 >= 0 )
      {
        if ( a2 == -1 )
          return 1LL;
        PteShadow = *(_QWORD *)v3;
        v8 = 0x90482413000LL;
        if ( v3 + 0x90482413000LL <= 0x7F8 )
          PteShadow = MiReadPteShadow(v3, *(_QWORD *)v3);
        v11 = PteShadow;
        if ( (PteShadow & 1) != 0 )
        {
          if ( (unsigned __int64)&v11 + v8 <= 0x7F8 )
            PteShadow = MiReadPteShadow(&v11, PteShadow);
          if ( ((PteShadow >> 12) & 0xFFFFFFFFFLL) == v2 )
            return 1LL;
          if ( v3 == 0xFFFFF6FB7DBEDF68uLL && (*(_QWORD *)(48 * v2 - 0x57FFFFFFFD8LL) & 0xFFFFFFFFFLL) == v2 )
          {
            ProcessShadowPage = MiGetProcessShadowPage(KeGetCurrentThread()->ApcState.Process);
            if ( v10 == ProcessShadowPage )
              return 1LL;
          }
        }
      }
      return 0LL;
    }
  }
  return 0LL;
}
