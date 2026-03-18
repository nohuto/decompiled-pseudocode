/*
 * XREFs of CmpFreeAllMemory @ 0x1406541E4
 * Callers:
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpGetNextActiveHive @ 0x140445EE8 (CmpGetNextActiveHive.c)
 *     CmpDereferenceHive @ 0x140447BD4 (CmpDereferenceHive.c)
 *     HvFreeHive @ 0x1404A06B4 (HvFreeHive.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1404EDBF8 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpDestroySecurityCache @ 0x1404EE838 (CmpDestroySecurityCache.c)
 *     CmpDumpKeyBodyList @ 0x140656AC4 (CmpDumpKeyBodyList.c)
 */

void __fastcall CmpFreeAllMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  char v5; // bp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *NextActiveHive; // rbx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rsi
  __int64 *v13; // rsi
  __int64 v14; // r15
  __int64 i; // r14
  char v16; // al
  _QWORD *v17; // rcx
  _QWORD *j; // rdx
  char v19; // al
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  CmpRunDownDelayDerefKCBEngine(0LL, 1, a3, a4);
  NextActiveHive = CmpGetNextActiveHive(0LL, v6, v7, v8);
  if ( NextActiveHive )
  {
    do
    {
      v10 = *((_DWORD *)NextActiveHive + 702);
      v11 = 0;
      v12 = NextActiveHive[350];
      v24 = 0;
      if ( v10 > 0 )
      {
        v13 = (__int64 *)(v12 + 16);
        v14 = (unsigned int)v10;
        do
        {
          for ( i = *v13; i; i = *(_QWORD *)(i + 8) )
          {
            v16 = v5;
            if ( !v5 )
              v16 = 1;
            v5 = v16;
            CmpDumpKeyBodyList(i - 16, &v24, 0LL);
          }
          v13 += 3;
          --v14;
        }
        while ( v14 );
        v11 = v24;
      }
      v17 = (_QWORD *)NextActiveHive[339];
      v4 += v11;
      v5 = 0;
      while ( v17 )
      {
        for ( j = (_QWORD *)v17[2]; j != v17 + 2; j = (_QWORD *)*j )
        {
          if ( j[6] )
          {
            v19 = v5;
            if ( !v5 )
              v19 = 1;
            v5 = v19;
          }
        }
        v17 = (_QWORD *)*v17;
      }
      CmpDestroySecurityCache((__int64)NextActiveHive);
      HvFreeHive((ULONG_PTR)NextActiveHive, 1, v20);
      CmpDereferenceHive((__int64)NextActiveHive);
      NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)NextActiveHive, v21, v22, v23);
    }
    while ( NextActiveHive );
    if ( v4 )
      KeBugCheckEx(0x51u, 0xFuLL, 1uLL, v4, 0LL);
  }
  ExFreePoolWithTag(CmpNameCacheTable, 0);
  if ( CmpLockTable )
    ExFreePoolWithTag(CmpLockTable, 0x744C4D43u);
}
