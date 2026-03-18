/*
 * XREFs of GreUnlockDisplayArea @ 0x1C000CC58
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreUnlockDisplayArea(__int64 a1, struct tagRECT *a2)
{
  __int64 v3; // r8
  BOOL v4; // esi
  __int64 v5; // r14
  LONG bottom; // r12d
  LONG right; // r13d
  struct tagRECT v8; // xmm6
  _BOOL8 v9; // r15
  LONG top; // esi
  __int64 v11; // rbx
  int v12; // ecx
  int v13; // edx
  void (__fastcall *v14)(_QWORD, struct _RECTL *); // rax
  void (__fastcall *v15)(_QWORD, __int64); // rax
  struct tagRECT v16; // [rsp+20h] [rbp-60h] BYREF
  BOOL v17; // [rsp+30h] [rbp-50h]
  struct tagRECT v18; // [rsp+40h] [rbp-40h] BYREF
  struct _RECTL v19; // [rsp+50h] [rbp-30h] BYREF

  v16 = *a2;
  ERECTL::vOrder((ERECTL *)&v16);
  if ( (unsigned int)IsRectEmptyInl(&v16) )
    return;
  if ( *(_DWORD *)(a1 + 164) )
  {
    v4 = GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) != 0;
    v5 = 0LL;
    v17 = v4;
    if ( *(_DWORD *)(a1 + 164) )
    {
      bottom = v16.bottom;
      right = v16.right;
      v8 = v16;
      v9 = v4;
      top = v16.top;
      do
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v5);
        v18 = v8;
        v12 = -*(_DWORD *)(v11 + 2608);
        v13 = -*(_DWORD *)(v11 + 2612);
        v18.left = v16.left - *(_DWORD *)(v11 + 2608);
        v18.right = v12 + right;
        v18.top = v13 + top;
        v18.bottom = v13 + bottom;
        if ( bIntersect((const struct _RECTL *)&v18, (const struct _RECTL *)(v11 + 144), &v19) )
        {
          v14 = *(void (__fastcall **)(_QWORD, struct _RECTL *))(v11 + 3536);
          if ( v14 )
            v14(*(_QWORD *)(v11 + 1824), &v19);
          if ( v9 )
            SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v11 + 224));
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *(_DWORD *)(a1 + 164) );
      v4 = v17;
    }
    if ( v4 )
      goto LABEL_19;
  }
  else
  {
    v15 = *(void (__fastcall **)(_QWORD, __int64))(a1 + 3536);
    if ( v15 )
      v15(*(_QWORD *)(a1 + 1824), v3);
    if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) )
    {
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(a1 + 224));
LABEL_19:
      EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
      GreReleaseSemaphoreInternal(ghsemSprite);
    }
  }
}
