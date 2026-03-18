/*
 * XREFs of ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C00608EC
 * Callers:
 *     ?ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00602A0 (-ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::operator()(_QWORD *a1)
{
  unsigned int i; // edx
  __int64 v3; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // r8d
  __int64 result; // rax
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // r8
  char v12; // al

  for ( i = 0; i < *(unsigned __int16 *)(*a1 + 32LL); *(_DWORD *)(216 * v3 + a1[1] + 48) &= 0xFFFF0FFF )
    v3 = i++;
  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGGLOBAL::IterateAdaptersWithCallback(Global, sub_1C005E7E0, a1, 1LL);
  if ( v5 == -2147483622 )
  {
    v6 = 0;
    if ( *(_WORD *)(*a1 + 32LL) )
    {
      while ( 1 )
      {
        v7 = 0;
        if ( v6 )
        {
          v9 = a1[1];
          v10 = 216LL * v6;
          do
          {
            if ( *(_DWORD *)(216LL * v7 + v9 + 248) == *(_DWORD *)(v10 + v9 + 248) )
              break;
            ++v7;
          }
          while ( v7 < v6 );
          if ( v7 < v6 )
          {
            v11 = 216LL * v7;
            v12 = *(_BYTE *)(v11 + v9 + 165);
            if ( v12 != *(_BYTE *)(v9 + v10 + 165)
              || !v12
              && (*(_DWORD *)(v11 + v9 + 56) != *(_DWORD *)(v9 + v10 + 56)
               || *(_DWORD *)(v11 + v9 + 60) != *(_DWORD *)(v9 + v10 + 60)) )
            {
              break;
            }
          }
        }
        if ( ++v6 >= *(unsigned __int16 *)(*a1 + 32LL) )
          return 0LL;
      }
      return 3221226021LL;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    result = 3221226021LL;
    if ( v5 )
      return v5;
  }
  return result;
}
