/*
 * XREFs of ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00456B0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     HmgNextOwned @ 0x1C0037530 (HmgNextOwned.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00458F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0045924 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C0046200 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 */

unsigned __int64 __fastcall vCleanupSurfaces(int a1, unsigned int a2, int a3)
{
  unsigned __int64 Owned; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rax
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  Owned = HmgNextOwned(0LL, a1, a3);
  result = PsGetCurrentProcess(v7, v6);
  if ( Owned )
  {
    do
    {
      if ( (BYTE2(Owned) & 0x1F) == 5 )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13);
        LOBYTE(v10) = 5;
        v11 = HmgShareLockCheck(Owned, v10);
        v13 = v11;
        if ( v11 )
        {
          LOBYTE(v12) = !_bittest((const signed __int32 *)(v11 + 112), 0x12u);
          if ( ((*(int *)(v11 + 112) < 0) & (unsigned __int8)v12) == 0 )
          {
            SURFREF::bDeleteSurface(&v13, a2);
            v11 = v13;
          }
          if ( v11 )
            HmgDecrementShareReferenceCount((_DWORD *)v11);
        }
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12);
      }
      result = HmgNextOwned(Owned, a1, v9);
      Owned = result;
    }
    while ( result );
  }
  return result;
}
