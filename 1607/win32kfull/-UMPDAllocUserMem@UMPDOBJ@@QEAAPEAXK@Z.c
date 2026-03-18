/*
 * XREFs of ?UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z @ 0x1C029C4A4
 * Callers:
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02A296C (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?ResetHeap@UMPDOBJ@@QEAAXXZ @ 0x1C02849C0 (-ResetHeap@UMPDOBJ@@QEAAXXZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

void *__fastcall UMPDOBJ::UMPDAllocUserMem(UMPDOBJ *this, unsigned int a2)
{
  __int64 v2; // rdi
  size_t Size; // [rsp+20h] [rbp-58h]
  _QWORD v6[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD Src[4]; // [rsp+40h] [rbp-38h] BYREF

  v2 = a2;
  v6[1] = this;
  v6[0] = 0LL;
  memset(Src, 0, sizeof(Src));
  Src[0] = 0x7400000020LL;
  Src[2] = *(_QWORD *)this;
  LODWORD(Src[3]) = v2;
  LODWORD(Size) = 8;
  UMPDOBJ::Thunk(this, Src, 32LL, v6, Size);
  if ( (_DWORD)v2 && ((unsigned __int64)(v6[0] + v2) > W32UserProbeAddress || (unsigned __int64)(v6[0] + v2) < v6[0]) )
    *W32UserProbeAddress = 0;
  UMPDOBJ::ResetHeap(this);
  return (void *)v6[0];
}
