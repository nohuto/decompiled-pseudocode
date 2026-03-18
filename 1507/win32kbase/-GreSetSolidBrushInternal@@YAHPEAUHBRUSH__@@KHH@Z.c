/*
 * XREFs of ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0025074
 * Callers:
 *     hCreateSolidBrushInternal @ 0x1C000C3D0 (hCreateSolidBrushInternal.c)
 *     SetSysColor @ 0x1C0025420 (SetSysColor.c)
 *     GreSetSolidBrush @ 0x1C00AF440 (GreSetSolidBrush.c)
 * Callees:
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0017C10 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00251C0 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00251EC (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     HmgSafeNextObjt @ 0x1C005DA10 (HmgSafeNextObjt.c)
 */

__int64 __fastcall GreSetSolidBrushInternal(HBRUSH a1, int a2, int a3, int a4)
{
  unsigned __int16 v5; // bp
  unsigned int v8; // r14d
  __int64 v9; // rbx
  unsigned int v10; // eax
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v15; // ecx
  __int64 v16; // rcx
  __int64 Objt; // rax
  int v18; // [rsp+30h] [rbp-68h]
  _BYTE v19[24]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v20[6]; // [rsp+50h] [rbp-48h] BYREF

  v5 = (unsigned __int16)a1;
  v8 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v20, a1);
  v9 = v20[0];
  if ( v20[0] )
  {
    v10 = *(_DWORD *)(v20[0] + 48LL);
    if ( (v10 & 0x10) != 0 && ((v10 & 0x200) == 0 || a4) && ((v10 >> 10) & 1) == a3 )
    {
      v11 = 0LL;
      GreAcquireHmgrSemaphore();
      if ( *(_DWORD *)(v9 + 8) == 1 || a4 )
      {
        v8 = 1;
        v12 = (unsigned __int16)*(_DWORD *)v9;
        *(_DWORD *)(v9 + 84) = a2;
        HANDLELOCK::vLockHandle(
          (HANDLELOCK *)v19,
          (struct _ENTRY *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v12),
          0,
          v5,
          0);
        if ( (unsigned int)HANDLELOCK::bValid((HANDLELOCK *)v19) )
        {
          if ( *(_DWORD *)(v9 + 8) == 1 )
          {
            if ( *(_DWORD *)(v9 + 108) != -1 )
            {
              v15 = *(_DWORD *)(v9 + 48);
              if ( v15 >= 0 )
              {
                v11 = *(volatile signed __int32 **)(v9 + 128);
                v18 = ((unsigned int)v15 >> 30) & 1;
              }
            }
            *(_DWORD *)(v9 + 104) = 0;
            *(_DWORD *)(v9 + 108) = -1;
            if ( a4 )
            {
              *(_DWORD *)(v9 + 48) &= ~0x80000000;
            }
            else
            {
              *(_DWORD *)(v9 + 24) = 7;
              *(_DWORD *)(v9 + 48) = 20;
            }
          }
          else
          {
            *(_DWORD *)(v9 + 112) = -1;
            v16 = 0LL;
            *(_DWORD *)(v9 + 116) = -1;
            *(_DWORD *)(v9 + 120) = -1;
            while ( 1 )
            {
              LOBYTE(v13) = 1;
              Objt = HmgSafeNextObjt(v16, v13);
              if ( !Objt )
                break;
              if ( *(_QWORD *)(Objt + 1704) == v9 )
                *(_DWORD *)(Objt + 332) |= 1u;
              v16 = *(_QWORD *)Objt;
            }
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)v19);
        }
        *(_DWORD *)(v9 + 52) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
        HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v19);
      }
      GreReleaseHmgrSemaphore();
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v11, v18);
        *(_QWORD *)(v9 + 128) = 0LL;
      }
    }
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v20);
  return v8;
}
