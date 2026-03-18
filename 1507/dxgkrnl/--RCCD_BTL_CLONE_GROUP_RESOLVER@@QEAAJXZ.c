/*
 * XREFs of ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C009D8B4
 * Callers:
 *     ?ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C0063024 (-ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008ACE4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::operator()(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  __int64 result; // rax
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  char v15; // al

  v4 = (_QWORD *)a1;
  v5 = 0LL;
  if ( *(_WORD *)(*(_QWORD *)a1 + 32LL) )
  {
    do
    {
      v6 = (unsigned int)v5;
      v5 = (unsigned int)(v5 + 1);
      *(_DWORD *)(216 * v6 + v4[1] + 48) &= 0xFFFF0FFF;
      a1 = *(unsigned __int16 *)(*v4 + 32LL);
    }
    while ( (unsigned int)v5 < (unsigned int)a1 );
  }
  Global = DXGGLOBAL::GetGlobal(a1, v5, a3, a4);
  v8 = DXGGLOBAL::IterateAdaptersWithCallback(
         (__int64)Global,
         (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_,
         (__int64)v4,
         1LL);
  if ( v8 == -2147483622 )
  {
    v9 = 0;
    if ( *(_WORD *)(*v4 + 32LL) )
    {
      while ( 1 )
      {
        v10 = 0;
        if ( v9 )
        {
          v12 = v4[1];
          v13 = 216LL * v9;
          do
          {
            if ( *(_DWORD *)(216LL * v10 + v12 + 248) == *(_DWORD *)(v13 + v12 + 248) )
              break;
            ++v10;
          }
          while ( v10 < v9 );
          if ( v10 < v9 )
          {
            v14 = 216LL * v10;
            v15 = *(_BYTE *)(v14 + v12 + 165);
            if ( v15 != *(_BYTE *)(v12 + v13 + 165)
              || !v15
              && (*(_DWORD *)(v14 + v12 + 56) != *(_DWORD *)(v12 + v13 + 56)
               || *(_DWORD *)(v14 + v12 + 60) != *(_DWORD *)(v12 + v13 + 60)) )
            {
              break;
            }
          }
        }
        if ( ++v9 >= *(unsigned __int16 *)(*v4 + 32LL) )
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
    if ( v8 )
      return v8;
  }
  return result;
}
