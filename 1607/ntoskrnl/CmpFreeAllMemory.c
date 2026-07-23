/*
 * XREFs of CmpFreeAllMemory @ 0x1405FCB30
 * Callers:
 *     CmShutdownSystem @ 0x1405FC700 (CmShutdownSystem.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1403E40D4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpGetNextActiveHive @ 0x1403FA590 (CmpGetNextActiveHive.c)
 *     CmpDereferenceHive @ 0x1403FB910 (CmpDereferenceHive.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     CmpDestroySecurityCache @ 0x1405181E0 (CmpDestroySecurityCache.c)
 *     CmpDumpKeyBodyList @ 0x1405FF62C (CmpDumpKeyBodyList.c)
 */

void CmpFreeAllMemory()
{
  unsigned int v0; // edi
  char v1; // bp
  __int64 *NextActiveHive; // rbx
  int v3; // ecx
  int v4; // eax
  __int64 v5; // rsi
  __int64 *v6; // rsi
  __int64 v7; // r15
  __int64 i; // r14
  char v9; // al
  _QWORD *v10; // rcx
  _QWORD *j; // rdx
  char v12; // al
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0;
  CmpRunDownDelayDerefKCBEngine(0LL, 1);
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v3 = *((_DWORD *)NextActiveHive + 702);
      v4 = 0;
      v5 = NextActiveHive[350];
      v13 = 0;
      if ( v3 > 0 )
      {
        v6 = (__int64 *)(v5 + 16);
        v7 = (unsigned int)v3;
        do
        {
          for ( i = *v6; i; i = *(_QWORD *)(i + 8) )
          {
            v9 = v1;
            if ( !v1 )
              v9 = 1;
            v1 = v9;
            CmpDumpKeyBodyList(i - 8, &v13, 0LL);
          }
          v6 += 3;
          --v7;
        }
        while ( v7 );
        v4 = v13;
      }
      v10 = (_QWORD *)NextActiveHive[339];
      v0 += v4;
      v1 = 0;
      while ( v10 )
      {
        for ( j = (_QWORD *)v10[2]; j != v10 + 2; j = (_QWORD *)*j )
        {
          if ( j[6] )
          {
            v12 = v1;
            if ( !v1 )
              v12 = 1;
            v1 = v12;
          }
        }
        v10 = (_QWORD *)*v10;
      }
      CmpDestroySecurityCache((__int64)NextActiveHive);
      HvFreeHive((__int64)NextActiveHive, 1);
      CmpDereferenceHive((__int64)NextActiveHive);
      NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v0 )
      KeBugCheckEx(0x51u, 0xFuLL, 1uLL, v0, 0LL);
  }
  ExFreePoolWithTag(CmpNameCacheTable, 0);
  if ( CmpLockTable )
    ExFreePoolWithTag(CmpLockTable, 0x744C4D43u);
}
