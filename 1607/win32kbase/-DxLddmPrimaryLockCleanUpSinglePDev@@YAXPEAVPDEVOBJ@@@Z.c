/*
 * XREFs of ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C006596C
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C0065420 (GreSuspendDirectDraw.c)
 * Callees:
 *     vSpUnTearDownSprites_0 @ 0x1C0001458 (vSpUnTearDownSprites_0.c)
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     GreUnlockSprite @ 0x1C0065AF0 (GreUnlockSprite.c)
 *     GreUnlockDisplayDevice @ 0x1C0065B20 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C0065B60 (GreLockDisplayDevice.c)
 *     GreLockSprite @ 0x1C0065B90 (GreLockSprite.c)
 */

void __fastcall DxLddmPrimaryLockCleanUpSinglePDev(struct PDEVOBJ *a1, int a2, int a3)
{
  _QWORD **v4; // r14
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  int v9; // ecx

  GreLockVisRgn(*(_QWORD *)a1, a2, a3);
  GreLockSprite(*(_QWORD *)a1);
  GreLockDisplayDevice(*(_QWORD *)a1);
  v4 = (_QWORD **)(*(_QWORD *)a1 + 2648LL);
  v5 = *v4;
  while ( v5 != v4 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    v7 = *v6;
    v8 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v8 != v6 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v9 = *((_DWORD *)v6 + 5);
    if ( v9 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 2664LL) -= v9;
      vSpUnTearDownSprites_0();
    }
    Win32FreePool();
  }
  GreUnlockDisplayDevice(*(_QWORD *)a1);
  GreUnlockSprite(*(_QWORD *)a1);
  GreUnlockVisRgn(*(_QWORD *)a1);
}
