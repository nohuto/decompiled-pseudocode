/*
 * XREFs of ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0061054
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C0060EE0 (GreSuspendDirectDraw.c)
 * Callees:
 *     vSpUnTearDownSprites_0 @ 0x1C0001448 (vSpUnTearDownSprites_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     GreLockVisRgn @ 0x1C0036AA0 (GreLockVisRgn.c)
 *     GreUnlockSprite @ 0x1C00610D0 (GreUnlockSprite.c)
 *     GreUnlockDisplayDevice @ 0x1C0061400 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C0061430 (GreLockDisplayDevice.c)
 *     GreLockSprite @ 0x1C0061460 (GreLockSprite.c)
 */

void __fastcall DxLddmPrimaryLockCleanUpSinglePDev(struct PDEVOBJ *a1, int a2, __int64 a3)
{
  _QWORD **v4; // r14
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  int v11; // ecx

  GreLockVisRgn(*(_QWORD *)a1, a2, a3);
  GreLockSprite(*(_QWORD *)a1);
  GreLockDisplayDevice(*(_QWORD *)a1);
  v4 = (_QWORD **)(*(_QWORD *)a1 + 2648LL);
  v5 = *v4;
  while ( v5 != v4 )
  {
    v8 = v5;
    v5 = (_QWORD *)*v5;
    v9 = *v8;
    v10 = (_QWORD *)v8[1];
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v10 != v8 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    v11 = *((_DWORD *)v8 + 5);
    if ( v11 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 2664LL) -= v11;
      vSpUnTearDownSprites_0();
    }
    Win32FreePool();
  }
  GreUnlockDisplayDevice(*(_QWORD *)a1);
  GreUnlockSprite(*(_QWORD *)a1);
  GreUnlockVisRgn(*(_QWORD *)a1, v6, v7);
}
