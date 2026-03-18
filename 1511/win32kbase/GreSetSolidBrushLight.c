/*
 * XREFs of GreSetSolidBrushLight @ 0x1C006E5F0
 * Callers:
 *     GreDCSelectPen @ 0x1C0048F10 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x1C006E4B0 (GreDCSelectBrush.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0031F80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005C290 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 */

__int64 __fastcall GreSetSolidBrushLight(__int64 a1, int a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v7; // ecx
  volatile signed __int32 *v8; // rdi
  int v9; // eax
  _BYTE v11[32]; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+70h] [rbp+8h]

  v3 = 0;
  if ( a1 )
  {
    v7 = *(_DWORD *)(a1 + 48);
    if ( (v7 & 0x10) != 0 && (v7 & 0x200) == 0 && (a3 != 0) == ((v7 >> 10) & 1) )
    {
      v8 = 0LL;
      HANDLELOCK::vLockHandle(
        (HANDLELOCK *)v11,
        (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)a1),
        0,
        (unsigned __int16)*(_DWORD *)a1,
        0);
      if ( HANDLELOCK::bValid((HANDLELOCK *)v11) )
      {
        if ( *(_DWORD *)(a1 + 8) == 1 )
        {
          *(_DWORD *)(a1 + 84) = a2;
          v3 = 1;
          if ( *(_DWORD *)(a1 + 108) != -1 )
          {
            v9 = *(_DWORD *)(a1 + 48);
            if ( v9 >= 0 )
            {
              v8 = *(volatile signed __int32 **)(a1 + 128);
              v12 = ((unsigned int)v9 >> 30) & 1;
            }
          }
          *(_DWORD *)(a1 + 104) = 0;
          *(_DWORD *)(a1 + 108) = -1;
          *(_DWORD *)(a1 + 24) = 7;
          if ( a3 )
            *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 48) & 0xC00 | 0x10;
          else
            *(_DWORD *)(a1 + 48) = 20;
          *(_DWORD *)(a1 + 52) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
        }
        HANDLELOCK::vUnlock((HANDLELOCK *)v11);
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v11);
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v8, v12);
        *(_QWORD *)(a1 + 128) = 0LL;
      }
    }
  }
  return v3;
}
