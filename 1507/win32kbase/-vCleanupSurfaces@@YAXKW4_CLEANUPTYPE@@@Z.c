/*
 * XREFs of ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C005BE14
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003A914 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C003A938 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A980 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A9B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     HmgNextOwned @ 0x1C005C050 (HmgNextOwned.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00B0E60 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall vCleanupSurfaces(unsigned int a1, unsigned int a2)
{
  unsigned __int64 Owned; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  __int64 v12; // r8
  _BYTE v13[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]
  char v15; // [rsp+70h] [rbp+18h] BYREF

  Owned = HmgNextOwned(0LL, a1);
  result = PsGetCurrentProcess(v6, v5);
  if ( Owned )
  {
    do
    {
      v9 = Owned >> 16;
      if ( (BYTE2(Owned) & 0x1F) == 5 )
      {
        LOBYTE(v9) = BYTE2(Owned) & 0x1F;
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15, v9, v8);
        SURFREF::SURFREF((SURFREF *)v13, (HSURF)Owned);
        if ( v14 )
        {
          if ( *(int *)(v14 + 112) >= 0 || (*(_DWORD *)(v14 + 112) & 0x40000) != 0 )
            SURFREF::bDeleteSurface(v13, a2);
        }
        SURFREF::~SURFREF((SURFREF *)v13);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11, v10, v12);
      }
      result = HmgNextOwned(Owned, a1);
      Owned = result;
    }
    while ( result );
  }
  return result;
}
