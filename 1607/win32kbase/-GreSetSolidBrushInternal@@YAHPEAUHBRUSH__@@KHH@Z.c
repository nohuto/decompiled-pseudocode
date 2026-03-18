/*
 * XREFs of ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005B448
 * Callers:
 *     SetSysColor @ 0x1C005B1F4 (SetSysColor.c)
 *     hCreateSolidBrushInternal @ 0x1C005B810 (hCreateSolidBrushInternal.c)
 *     GreSetSolidBrush @ 0x1C00BD4F0 (GreSetSolidBrush.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z @ 0x1C002A130 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C005B574 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C005B5A0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005CF10 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     HmgSafeNextObjt @ 0x1C006B3F0 (HmgSafeNextObjt.c)
 */

__int64 __fastcall GreSetSolidBrushInternal(HBRUSH a1, int a2, int a3, int a4)
{
  unsigned int v7; // r14d
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  struct OBJECT *v11; // rbx
  unsigned int v12; // eax
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  bool v16; // zf
  int v18; // ecx
  __int64 v19; // rcx
  __int64 Objt; // rax
  unsigned int v21; // [rsp+20h] [rbp-58h]
  _BYTE v22[8]; // [rsp+28h] [rbp-50h] BYREF
  int v23; // [rsp+30h] [rbp-48h]
  struct OBJECT *v24[6]; // [rsp+40h] [rbp-38h] BYREF

  v7 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v24, a1);
  v11 = v24[0];
  if ( v24[0] )
  {
    v12 = *((_DWORD *)v24[0] + 12);
    if ( (v12 & 0x10) != 0 && ((v12 & 0x200) == 0 || a4) && ((v12 >> 10) & 1) == a3 )
    {
      v13 = 0LL;
      GreAcquireHmgrSemaphore(v9, v8, v10);
      if ( *((_DWORD *)v11 + 2) == 1 || a4 )
      {
        *((_DWORD *)v11 + 21) = a2;
        v7 = 1;
        HANDLELOCK::HANDLELOCK((HANDLELOCK *)v22, v11, 0);
        if ( HANDLELOCK::bValid((HANDLELOCK *)v22) )
        {
          if ( *((_DWORD *)v11 + 2) == 1 )
          {
            if ( *((_DWORD *)v11 + 27) != -1 )
            {
              v18 = *((_DWORD *)v11 + 12);
              if ( v18 >= 0 )
              {
                v13 = (volatile signed __int32 *)*((_QWORD *)v11 + 16);
                v21 = ((unsigned int)v18 >> 30) & 1;
              }
            }
            *((_DWORD *)v11 + 26) = 0;
            *((_DWORD *)v11 + 27) = -1;
            if ( a4 )
            {
              *((_DWORD *)v11 + 12) &= ~0x80000000;
            }
            else
            {
              *((_DWORD *)v11 + 6) = 7;
              *((_DWORD *)v11 + 12) = 20;
            }
          }
          else
          {
            *((_DWORD *)v11 + 28) = -1;
            v19 = 0LL;
            *((_DWORD *)v11 + 29) = -1;
            *((_DWORD *)v11 + 30) = -1;
            while ( 1 )
            {
              LOBYTE(v15) = 1;
              Objt = HmgSafeNextObjt(v19, v15);
              if ( !Objt )
                break;
              if ( *(struct OBJECT **)(Objt + 1704) == v11 )
                *(_DWORD *)(Objt + 332) |= 1u;
              v19 = *(_QWORD *)Objt;
            }
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)v22);
        }
        v16 = v23 == 0;
        *((_DWORD *)v11 + 13) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
        if ( !v16 )
          HANDLELOCK::vUnlock((HANDLELOCK *)v22);
      }
      GreReleaseHmgrSemaphore(v14);
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v13, v21);
        *((_QWORD *)v11 + 16) = 0LL;
      }
    }
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v24);
  return v7;
}
