/*
 * XREFs of GreLockDisplayArea @ 0x1C0009A6C
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008B008 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreLockDisplayArea(__int64 a1, struct tagRECT *a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  LONG bottom; // r15d
  LONG right; // r12d
  LONG top; // r13d
  struct tagRECT v9; // xmm6
  __int64 v10; // r14
  __int64 v11; // rbx
  int v12; // ecx
  int v13; // edx
  void (__fastcall *v14)(_QWORD, struct _RECTL *); // rax
  void (__fastcall *v15)(_QWORD, struct tagRECT *); // rsi
  struct tagRECT v16; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v17; // [rsp+30h] [rbp-40h] BYREF
  struct _RECTL v18; // [rsp+40h] [rbp-30h] BYREF

  v16 = *a2;
  ERECTL::vOrder((ERECTL *)&v16);
  if ( !(unsigned int)IsRectEmptyInl(&v16) )
  {
    if ( *(_DWORD *)(a1 + 164) )
    {
      v4 = 0;
      if ( !(unsigned int)GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) )
      {
        GreAcquireSemaphore(ghsemSprite);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
        v4 = 1;
      }
      v5 = 0LL;
      if ( *(_DWORD *)(a1 + 164) )
      {
        bottom = v16.bottom;
        right = v16.right;
        top = v16.top;
        v9 = v16;
        v10 = v4;
        do
        {
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v5);
          v17 = v9;
          v12 = -*(_DWORD *)(v11 + 2608);
          v13 = -*(_DWORD *)(v11 + 2612);
          v17.left = v16.left - *(_DWORD *)(v11 + 2608);
          v17.right = v12 + right;
          v17.top = v13 + top;
          v17.bottom = v13 + bottom;
          if ( bIntersect((const struct _RECTL *)&v17, (const struct _RECTL *)(v11 + 144), &v18) )
          {
            if ( v10 )
              SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v11 + 224));
            v14 = *(void (__fastcall **)(_QWORD, struct _RECTL *))(v11 + 3528);
            if ( v14 )
              v14(*(_QWORD *)(v11 + 1824), &v18);
          }
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < *(_DWORD *)(a1 + 164) );
      }
    }
    else
    {
      v15 = *(void (__fastcall **)(_QWORD, struct tagRECT *))(a1 + 3528);
      if ( !(unsigned int)GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) )
      {
        GreAcquireSemaphore(ghsemSprite);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 224));
      }
      if ( v15 )
        v15(*(_QWORD *)(a1 + 1824), a2);
    }
  }
}
