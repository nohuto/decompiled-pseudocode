/*
 * XREFs of NtGdiGetNearestPaletteIndex @ 0x1401E8680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiGetNearestPaletteIndex(Gre::Base *a1, unsigned int a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = Gre::Base::Globals(a1);
  LOBYTE(v5) = 8;
  v6 = HmgShareLock(v4, a1, v5, 0LL);
  v10 = v6;
  if ( v6 )
  {
    v7 = (Gre::Base *)*(unsigned int *)(v6 + 28);
    if ( (_DWORD)v7 )
    {
      if ( (a2 & 0x1000000) != 0 )
        a2 = (unsigned __int16)a2 < (unsigned int)v7 ? (unsigned __int16)a2 : 0;
      else
        a2 = XEPALOBJ::ulDispatchGFPEFunction(&v10, *(unsigned int *)(v6 + 96));
    }
  }
  else
  {
    EngSetLastError(6u);
    a2 = -1;
  }
  if ( v10 )
  {
    v8 = Gre::Base::Globals(v7);
    DEC_SHARE_REF_CNT(v8, v10);
  }
  return a2;
}
