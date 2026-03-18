/*
 * XREFs of ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C00784E4
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C0078370 (GreSuspendDirectDraw.c)
 * Callees:
 *     vSpUnTearDownSprites_0 @ 0x1C00013E8 (vSpUnTearDownSprites_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     GreLockVisRgn @ 0x1C0044600 (GreLockVisRgn.c)
 *     GreUnlockSprite @ 0x1C0045960 (GreUnlockSprite.c)
 *     GreUnlockDisplayDevice @ 0x1C0045990 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C00459D0 (GreLockDisplayDevice.c)
 *     GreLockSprite @ 0x1C0045A00 (GreLockSprite.c)
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
  GreLockSprite();
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
  GreUnlockSprite();
  GreUnlockVisRgn(*(_QWORD *)a1, v6, v7);
}
