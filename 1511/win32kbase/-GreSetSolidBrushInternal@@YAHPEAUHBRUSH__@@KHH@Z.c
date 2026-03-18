/*
 * XREFs of ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C004A1DC
 * Callers:
 *     SetSysColor @ 0x1C0049E44 (SetSysColor.c)
 *     hCreateSolidBrushInternal @ 0x1C005D0C0 (hCreateSolidBrushInternal.c)
 *     GreSetSolidBrush @ 0x1C00B30E0 (GreSetSolidBrush.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0031F80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00494B8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00494F4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     HmgSafeNextObjt @ 0x1C005B0C0 (HmgSafeNextObjt.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005C290 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 */

__int64 __fastcall GreSetSolidBrushInternal(HBRUSH a1, int a2, int a3, int a4)
{
  unsigned __int16 v5; // bp
  unsigned int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rbx
  unsigned int v13; // eax
  volatile signed __int32 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v21; // ecx
  __int64 v22; // rcx
  __int64 Objt; // rax
  unsigned int v24; // [rsp+30h] [rbp-48h]
  _QWORD v25[2]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v26[24]; // [rsp+48h] [rbp-30h] BYREF

  v5 = (unsigned __int16)a1;
  v8 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v25, a1);
  v12 = v25[0];
  if ( v25[0] )
  {
    v13 = *(_DWORD *)(v25[0] + 48LL);
    if ( (v13 & 0x10) != 0 && ((v13 & 0x200) == 0 || a4) && ((v13 >> 10) & 1) == a3 )
    {
      v14 = 0LL;
      GreAcquireHmgrSemaphore(v10, v9, v11);
      if ( *(_DWORD *)(v12 + 8) == 1 || a4 )
      {
        v8 = 1;
        v18 = (unsigned __int16)*(_DWORD *)v12;
        *(_DWORD *)(v12 + 84) = a2;
        HANDLELOCK::vLockHandle(
          (HANDLELOCK *)v26,
          (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v18),
          0,
          v5,
          0);
        if ( HANDLELOCK::bValid((HANDLELOCK *)v26) )
        {
          if ( *(_DWORD *)(v12 + 8) == 1 )
          {
            if ( *(_DWORD *)(v12 + 108) != -1 )
            {
              v21 = *(_DWORD *)(v12 + 48);
              if ( v21 >= 0 )
              {
                v14 = *(volatile signed __int32 **)(v12 + 128);
                v24 = ((unsigned int)v21 >> 30) & 1;
              }
            }
            *(_DWORD *)(v12 + 104) = 0;
            *(_DWORD *)(v12 + 108) = -1;
            if ( a4 )
            {
              *(_DWORD *)(v12 + 48) &= ~0x80000000;
            }
            else
            {
              *(_DWORD *)(v12 + 24) = 7;
              *(_DWORD *)(v12 + 48) = 20;
            }
          }
          else
          {
            *(_DWORD *)(v12 + 112) = -1;
            v22 = 0LL;
            *(_DWORD *)(v12 + 116) = -1;
            *(_DWORD *)(v12 + 120) = -1;
            while ( 1 )
            {
              LOBYTE(v19) = 1;
              Objt = HmgSafeNextObjt(v22, v19);
              if ( !Objt )
                break;
              if ( *(_QWORD *)(Objt + 1680) == v12 )
                *(_DWORD *)(Objt + 332) |= 1u;
              v22 = *(_QWORD *)Objt;
            }
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)v26);
        }
        *(_DWORD *)(v25[0] + 52LL) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
        HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v26);
      }
      GreReleaseHmgrSemaphore(v16, v15, v17);
      if ( v14 )
      {
        if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v14, v24);
        *(_QWORD *)(v25[0] + 128LL) = 0LL;
      }
    }
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v25);
  return v8;
}
