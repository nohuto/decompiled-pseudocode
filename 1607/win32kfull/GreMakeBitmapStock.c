/*
 * XREFs of GreMakeBitmapStock @ 0x1C011390C
 * Callers:
 *     NtGdiSetBitmapAttributes @ 0x1C0113900 (NtGdiSetBitmapAttributes.c)
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0033D44 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??1SURFREFAPI@@QEAA@XZ @ 0x1C0113A50 (--1SURFREFAPI@@QEAA@XZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall GreMakeBitmapStock(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v5; // rbx
  SURFACE *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  int v9; // eax
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  LOBYTE(a2) = 5;
  v3 = 0LL;
  v11 = HmgLock(a1, a2);
  v5 = v11;
  if ( !v11 )
  {
LABEL_22:
    v2 = v3;
    goto LABEL_23;
  }
  if ( !(unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_24058170_60425694_FeatureDescriptorDetails)
    || !*(_DWORD *)(v5 + 8) )
  {
    if ( !(unsigned int)SURFACE::bDIBSection((SURFACE *)v5) || !*(_WORD *)(v5 + 100) && *(_DWORD *)(v5 + 216) )
    {
      if ( (a1 & 0x800000) != 0
        || *(_DWORD *)(v5 + 160)
        || (*(_DWORD *)(v5 + 112) & 0x80000800) != 0
        || SURFACE::GetFirstLSurf(v6) )
      {
        if ( (a1 & 0x800000) == 0 && !*(_DWORD *)(v5 + 160) )
        {
          v9 = *(_DWORD *)(v5 + 112);
          if ( (v9 & 0x800) == 0 && v9 >= 0 )
            SURFACE::GetFirstLSurf((SURFACE *)v5);
        }
      }
      else
      {
        v3 = a1 | 0x800000;
        if ( _InterlockedDecrement(*(volatile signed __int32 **)&gStockBitmapFree) >= 0
          && (v7 = v11, (unsigned int)HmgLockAndModifyHandleType(v11, a1 | 0x800000)) )
        {
          if ( (*(_DWORD *)v7 & 0x800000) != 0 )
            *(_WORD *)(v7 + 102) |= 0x200u;
          LOBYTE(v8) = 5;
          *(_QWORD *)(v7 + 32) = v3;
          HmgSetOwner(a1 | 0x800000, 0LL, v8);
        }
        else
        {
          _InterlockedIncrement(*(volatile signed __int32 **)&gStockBitmapFree);
          v3 = 0LL;
        }
      }
    }
    goto LABEL_22;
  }
LABEL_23:
  SURFREFAPI::~SURFREFAPI((SURFREFAPI *)&v11);
  return v2;
}
