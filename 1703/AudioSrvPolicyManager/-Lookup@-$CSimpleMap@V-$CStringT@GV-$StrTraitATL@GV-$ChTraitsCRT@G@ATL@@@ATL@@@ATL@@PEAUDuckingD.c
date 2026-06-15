/*
 * XREFs of ?Lookup@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEBAPEAUDuckingDescriptor@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x1800181E4
 * Callers:
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180017D78 (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z.c)
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x180018090 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180010414 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Lookup(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r9
  int v3; // r8d
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int16 *v7; // rcx
  __int64 v8; // rbx
  int v9; // r11d
  int v10; // eax

  v2 = *(int *)(a1 + 16);
  v3 = 0;
  if ( (int)v2 <= 0 )
  {
LABEL_9:
    v3 = -1;
  }
  else
  {
    v5 = *a2;
    v6 = 0LL;
    while ( 1 )
    {
      if ( !v5 )
        ATL::AtlThrowImpl(-2147467259);
      v7 = *(unsigned __int16 **)(*(_QWORD *)a1 + 8 * v6);
      v8 = v5 - (_QWORD)v7;
      do
      {
        v9 = *(unsigned __int16 *)((char *)v7 + v8);
        v10 = *v7 - v9;
        if ( v10 )
          break;
        ++v7;
      }
      while ( v9 );
      if ( !v10 )
        break;
      ++v3;
      if ( ++v6 >= v2 )
        goto LABEL_9;
    }
  }
  if ( v3 == -1 )
    return 0LL;
  if ( v3 < 0 || v3 >= (int)v2 )
  {
    ATL::_AtlRaiseException();
    JUMPOUT(0x180018281LL);
  }
  return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v3);
}
