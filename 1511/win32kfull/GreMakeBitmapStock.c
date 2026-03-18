/*
 * XREFs of GreMakeBitmapStock @ 0x1C00F429C
 * Callers:
 *     NtGdiSetBitmapAttributes @ 0x1C00F4290 (NtGdiSetBitmapAttributes.c)
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0038D44 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall GreMakeBitmapStock(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  SURFACE *v4; // rax
  SURFACE *v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8

  LOBYTE(a2) = 5;
  v2 = 0LL;
  v4 = (SURFACE *)HmgLock(a1, a2);
  v5 = v4;
  if ( v4 )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection(v4) || !*(_WORD *)(v6 + 100) && *(_DWORD *)(v6 + 208))
      && (a1 & 0x800000) == 0
      && !*((_DWORD *)v5 + 40) )
    {
      v7 = *((_DWORD *)v5 + 28);
      if ( (v7 & 0x800) == 0 && v7 >= 0 )
      {
        v2 = a1 | 0x800000;
        if ( _InterlockedDecrement(*(volatile signed __int32 **)&gStockBitmapFree) >= 0
          && (unsigned int)HmgLockAndModifyHandleType(a1 | 0x800000) )
        {
          if ( (*(_DWORD *)v5 & 0x800000) != 0 )
            *((_WORD *)v5 + 51) |= 0x200u;
          LOBYTE(v8) = 5;
          *((_QWORD *)v5 + 4) = v2;
          HmgSetOwner(a1 | 0x800000, 0LL, v8);
        }
        else
        {
          _InterlockedIncrement(*(volatile signed __int32 **)&gStockBitmapFree);
          v2 = 0LL;
        }
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
  }
  return v2;
}
