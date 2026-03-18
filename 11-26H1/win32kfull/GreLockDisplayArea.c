/*
 * XREFs of GreLockDisplayArea @ 0x140213BB8
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001BDBC (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400BC8B8 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140296F68 (--$GrepIsLockOwnedExclusiveByCurrentThread@$05USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBA.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall GreLockDisplayArea(__int64 a1, LONG *a2)
{
  LONG v4; // edx
  LONG v5; // r8d
  LONG v6; // eax
  Gre::Base *v7; // rcx
  LONG v8; // r15d
  LONG v9; // r9d
  LONG v10; // r8d
  __int64 *v11; // rbx
  int v12; // r14d
  __int64 v13; // rsi
  struct _RECTL v14; // xmm6
  __int64 v15; // rbx
  int v16; // ecx
  int v17; // edx
  void (__fastcall *v18)(_QWORD, struct _RECTL *); // rax
  void (__fastcall *v19)(_QWORD, LONG *); // rsi
  struct _RECTL v20; // [rsp+20h] [rbp-40h] BYREF
  struct _RECTL v21; // [rsp+30h] [rbp-30h] BYREF

  v4 = *a2;
  v20.left = v4;
  v5 = a2[2];
  v6 = a2[1];
  v7 = (Gre::Base *)(unsigned int)a2[3];
  v20.top = v6;
  v20.right = v5;
  v20.bottom = (int)v7;
  if ( v4 > v5 )
  {
    v20.right = v4;
    v20.left = v5;
  }
  v8 = v5;
  v9 = v5;
  if ( v4 <= v5 )
  {
    v8 = v4;
    v9 = v4;
    v4 = v5;
  }
  if ( v6 > (int)v7 )
  {
    v20.bottom = v6;
    v20.top = (int)v7;
  }
  v10 = (int)v7;
  if ( v6 <= (int)v7 )
  {
    v10 = v6;
    v6 = (int)v7;
  }
  if ( v9 < v4 && v10 < v6 )
  {
    v11 = (__int64 *)Gre::Base::Globals(v7);
    if ( *(_DWORD *)(a1 + 140) )
    {
      v12 = 0;
      if ( !(unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<6,Gre::Base::SESSION_GLOBALS>(v11) )
      {
        GreAcquireSemaphore<6,>(v11);
        v12 = 1;
      }
      v13 = 0LL;
      if ( *(_DWORD *)(a1 + 140) )
      {
        v14 = v20;
        do
        {
          v15 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v13);
          v20 = v14;
          v16 = *(_DWORD *)(v15 + 2576);
          v17 = *(_DWORD *)(v15 + 2580);
          v20.right = v14.right - v16;
          v20.top = v14.top - v17;
          v20.bottom = v14.bottom - v17;
          v20.left = v8 - v16;
          if ( bIntersect(&v20, (const struct _RECTL *)(v15 + 120), &v21) )
          {
            if ( v12 )
              SPRITERANGELOCK::vLockExclusive((HSEMAPHORE *)(v15 + 200));
            v18 = *(void (__fastcall **)(_QWORD, struct _RECTL *))(v15 + 3488);
            if ( v18 )
              v18(*(_QWORD *)(v15 + 1784), &v21);
          }
          v13 = (unsigned int)(v13 + 1);
        }
        while ( (unsigned int)v13 < *(_DWORD *)(a1 + 140) );
      }
    }
    else
    {
      v19 = *(void (__fastcall **)(_QWORD, LONG *))(a1 + 3488);
      if ( !(unsigned __int8)GrepIsLockOwnedExclusiveByCurrentThread<6,Gre::Base::SESSION_GLOBALS>(v11) )
      {
        GreAcquireSemaphore<6,>(v11);
        SPRITERANGELOCK::vLockExclusive((HSEMAPHORE *)(a1 + 200));
      }
      if ( v19 )
        v19(*(_QWORD *)(a1 + 1784), a2);
    }
  }
}
