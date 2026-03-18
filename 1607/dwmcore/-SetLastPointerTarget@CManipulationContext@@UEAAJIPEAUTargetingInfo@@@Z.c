/*
 * XREFs of ?SetLastPointerTarget@CManipulationContext@@UEAAJIPEAUTargetingInfo@@@Z @ 0x180007EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180006254 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?RemoveRange@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHH@Z @ 0x180007F64 (-RemoveRange@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHH@Z.c)
 *     ?Add@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHAEBIAEBUTargetingInfo@@@Z @ 0x180008050 (-Add@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHAEBIAEBUTargetingInfo@.c)
 *     ?SetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTargetingInfo@@@Z @ 0x1800080D8 (-SetAtIndex@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTarget.c)
 */

__int64 __fastcall CManipulationContext::SetLastPointerTarget(
        CManipulationContext *this,
        int a2,
        struct TargetingInfo *a3)
{
  unsigned int v3; // ebx
  unsigned int Key; // eax
  __int64 v5; // r10
  __int64 v6; // r11
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v3 = 0;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 80,
          &v8);
  if ( Key == -1 )
  {
    if ( v5
      && !(unsigned int)CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::Add(v6, &v8, v5) )
    {
      return (unsigned int)-2147024882;
    }
  }
  else if ( v5 )
  {
    CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::SetAtIndex(v6, Key, &v8, v5);
  }
  else
  {
    CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::RemoveRange(v6, Key);
  }
  return v3;
}
