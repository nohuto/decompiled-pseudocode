/*
 * XREFs of ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C00B6634
 * Callers:
 *     ?ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00B69EC (-ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::operator()(__int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v2; // edx
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

  v1 = (_QWORD *)a1;
  v2 = 0;
  if ( *(_WORD *)(*(_QWORD *)a1 + 32LL) )
  {
    do
    {
      v3 = v2++;
      *(_DWORD *)(216 * v3 + v1[1] + 48) &= 0xFFFF0FFF;
      a1 = *(unsigned __int16 *)(*v1 + 32LL);
    }
    while ( v2 < (unsigned int)a1 );
  }
  Global = DXGGLOBAL::GetGlobal(a1);
  v5 = DXGGLOBAL::IterateAdaptersWithCallback(
         (__int64)Global,
         (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_1_,
         (__int64)v1,
         1);
  if ( v5 == -2147483622 )
  {
    v6 = 0;
    if ( *(_WORD *)(*v1 + 32LL) )
    {
      while ( 1 )
      {
        v7 = 0;
        if ( v6 )
        {
          v9 = v1[1];
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
            v12 = *(_BYTE *)(v11 + v9 + 169);
            if ( v12 != *(_BYTE *)(v9 + v10 + 169)
              || !v12
              && (*(_DWORD *)(v11 + v9 + 56) != *(_DWORD *)(v9 + v10 + 56)
               || *(_DWORD *)(v11 + v9 + 60) != *(_DWORD *)(v9 + v10 + 60)) )
            {
              break;
            }
          }
        }
        if ( ++v6 >= *(unsigned __int16 *)(*v1 + 32LL) )
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
