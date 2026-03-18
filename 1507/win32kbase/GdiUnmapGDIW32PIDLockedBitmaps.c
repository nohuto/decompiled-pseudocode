/*
 * XREFs of GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C005C130
 * Callers:
 *     GdiProcessCallout @ 0x1C005B5D0 (GdiProcessCallout.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A9B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

void __fastcall GdiUnmapGDIW32PIDLockedBitmaps(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rdx
  __int64 v5; // r8
  __int64 **v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rdx
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // rax
  HSEMAPHORE v12; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12, a2, a3);
  v12 = ghsemMapRot;
  EngAcquireSemaphore(ghsemMapRot);
  v6 = (__int64 **)(a1 + 224);
  v7 = *v6;
  if ( *v6 )
  {
    while ( v7 != (__int64 *)v6 )
    {
      v11 = v7;
      v7 = (__int64 *)*v7;
      *(v11 - 23) = 0LL;
      *(v11 - 24) = 0LL;
      v5 = *v11;
      v4 = (__int64 *)v11[1];
      if ( *(__int64 **)(*v11 + 8) != v11 || (__int64 *)*v4 != v11 )
        __fastfail(3u);
      *v4 = v5;
      *(_QWORD *)(v5 + 8) = v4;
      v11[1] = (__int64)v11;
      *v11 = (__int64)v11;
    }
  }
  v6[1] = (__int64 *)v6;
  *v6 = (__int64 *)v6;
  SEMOBJ::vUnlock((SEMOBJ *)&v12, (__int64)v4, v5);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9, v8, v10);
}
