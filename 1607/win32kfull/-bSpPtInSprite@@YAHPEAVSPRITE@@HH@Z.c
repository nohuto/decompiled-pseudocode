/*
 * XREFs of ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C026DF68
 * Callers:
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C026A540 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0055CE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0055D10 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0271C40 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall bSpPtInSprite(struct SPRITE *a1, LONG a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  LONG v5; // r15d
  __int64 *v9; // rbx
  struct _SURFOBJ *v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *pvScan0; // r14
  struct _POINTL v18; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+28h] [rbp-D8h] BYREF
  struct _SPRITESTATE *v20[24]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v21; // [rsp+F0h] [rbp-10h] BYREF

  v4 = 0;
  v5 = a3;
  if ( !a1 )
    return 0LL;
  v9 = (__int64 *)*((_QWORD *)a1 + 2);
  v19 = *v9;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v20, (struct PDEVOBJ *)&v19, a3, a4);
  v10 = (struct _SURFOBJ *)v9[129];
  v11 = *((_QWORD *)a1 + 2);
  v21.right = a2 + 1;
  v21.bottom = v5 + 1;
  v21.left = a2;
  v21.top = v5;
  v12 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v11 + 40)) + 120);
  if ( (*(_DWORD *)(v12 + 24) & 2) != 0 )
    v13 = **(_DWORD **)(v12 + 120) | *(_DWORD *)(*(_QWORD *)(v12 + 120) + 4LL) | *(_DWORD *)(*(_QWORD *)(v12 + 120) + 8LL);
  else
    v13 = -1;
  if ( (unsigned int)bIntersect((char *)a1 + 80, &v21) )
  {
    v18.x = -a2;
    pvScan0 = v10->pvScan0;
    v18.y = -v5;
    *pvScan0 = 0;
    vSpComposite(a1, &v18, v10, &v21);
    if ( (v13 & *pvScan0) != 0 )
    {
      v4 = 1;
    }
    else
    {
      *pvScan0 = -1;
      vSpComposite(a1, &v18, v10, &v21);
      LOBYTE(v4) = (*pvScan0 & v13) != v13;
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v20, v14, v15, v16);
  return v4;
}
