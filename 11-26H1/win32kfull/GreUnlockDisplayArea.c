/*
 * XREFs of GreUnlockDisplayArea @ 0x1403188F8
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001DA44 (-vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x140114094 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401D0544 (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140296F68 (--$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBA.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall GreUnlockDisplayArea(__int64 a1, struct tagRECT *a2)
{
  Gre::Base *v4; // rcx
  struct _ERESOURCE **v5; // rax
  __int64 *v6; // rsi
  __int64 v7; // r14
  bool v8; // r15
  struct tagRECT v9; // xmm6
  __int64 v10; // rbx
  int v11; // ecx
  int v12; // edx
  void (__fastcall *v13)(_QWORD, struct _RECTL *); // rax
  void (__fastcall *v14)(_QWORD, struct tagRECT *); // rax
  struct tagRECT v15; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v16; // [rsp+30h] [rbp-40h] BYREF
  struct _RECTL v17; // [rsp+40h] [rbp-30h] BYREF

  v15 = *a2;
  ERECTL::vOrder((ERECTL *)&v15);
  if ( !IsRectEmptyInl(&v15) )
  {
    v5 = (struct _ERESOURCE **)Gre::Base::Globals(v4);
    v6 = (__int64 *)v5;
    if ( *(_DWORD *)(a1 + 140) )
    {
      v7 = 0LL;
      v8 = GrepIsLockOwnedExclusiveByCurrentThread<6,Gre::Base::SESSION_GLOBALS>(v5);
      if ( *(_DWORD *)(a1 + 140) )
      {
        v9 = v15;
        do
        {
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v7);
          v16 = v9;
          v11 = *(_DWORD *)(v10 + 2576);
          v12 = *(_DWORD *)(v10 + 2580);
          v16.right = v9.right - v11;
          v16.top = v9.top - v12;
          v16.bottom = v9.bottom - v12;
          v16.left = v15.left - v11;
          if ( bIntersect((const struct _RECTL *)&v16, (const struct _RECTL *)(v10 + 120), &v17) )
          {
            v13 = *(void (__fastcall **)(_QWORD, struct _RECTL *))(v10 + 3496);
            if ( v13 )
              v13(*(_QWORD *)(v10 + 1784), &v17);
            if ( v8 )
              SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(v10 + 200));
          }
          v7 = (unsigned int)(v7 + 1);
        }
        while ( (unsigned int)v7 < *(_DWORD *)(a1 + 140) );
      }
      if ( v8 )
        goto LABEL_17;
    }
    else
    {
      v14 = *(void (__fastcall **)(_QWORD, struct tagRECT *))(a1 + 3496);
      if ( v14 )
        v14(*(_QWORD *)(a1 + 1784), a2);
      if ( GrepIsLockOwnedExclusiveByCurrentThread<6,Gre::Base::SESSION_GLOBALS>((struct _ERESOURCE **)v6) )
      {
        SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(a1 + 200));
LABEL_17:
        GreReleaseSemaphoreExclusive<6,>(v6);
      }
    }
  }
}
