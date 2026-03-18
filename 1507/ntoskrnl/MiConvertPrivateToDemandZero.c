/*
 * XREFs of MiConvertPrivateToDemandZero @ 0x140228598
 * Callers:
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiPfnCanBecomeDemandZero @ 0x1400AFAA0 (MiPfnCanBecomeDemandZero.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeCheckForZeroPage @ 0x140186B40 (KeCheckForZeroPage.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiConvertPrivateToDemandZero(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 *v8; // rbx
  unsigned __int64 PteShadow; // rax
  unsigned int v10; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+28h] [rbp-C0h]

  v6 = 0;
  if ( KeCheckForZeroPage((_QWORD *)a2) )
    return 0LL;
  v8 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v8;
  if ( (unsigned __int64)(v8 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow((__int64)v8, *v8);
  if ( !MiPfnCanBecomeDemandZero(a1, 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
    return 0LL;
  v11 = a3;
  v10 = 1;
  LOBYTE(v6) = MiFreeWsleList(a1, &v10, 2u) == 0;
  return v6;
}
