/*
 * XREFs of RtlRbInsertNodeEx @ 0x140034FA0
 * Callers:
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140031DCC (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiSetClockInterval @ 0x140032C70 (KiSetClockInterval.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400348F0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140034D90 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140035614 (KiAbEntryUpdateWaiterTreePosition.c)
 *     PfSnGetFileInformation @ 0x140079990 (PfSnGetFileInformation.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400BA9EC (MiBitmapsCachedEntryLengthChanged.c)
 *     KiInsertSchedulingGroupQueue @ 0x1400C39E4 (KiInsertSchedulingGroupQueue.c)
 *     MiRescanPageFileBitmapPortion @ 0x1400F4D64 (MiRescanPageFileBitmapPortion.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400F5258 (MiInvalidatePageFileBitmapsCache.c)
 *     MiInitializePagefileBitmapsCache @ 0x14013A068 (MiInitializePagefileBitmapsCache.c)
 *     VmpFaultEntryInsert @ 0x14020C3C8 (VmpFaultEntryInsert.c)
 *     VmpInsertMemoryRange @ 0x14020C69C (VmpInsertMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x14046CAE8 (EtwpSetProviderTraitsCommon.c)
 *     KeInitializeClock @ 0x14076DF9C (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlRbInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  BOOL v5; // r11d
  __int64 v6; // rbx
  unsigned __int64 *v7; // rbx
  unsigned __int64 *v8; // rdi
  unsigned __int64 v9; // r8
  unsigned int v10; // r11d
  __int64 v11; // r9
  _QWORD *v12; // r11
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi

  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  if ( a2 )
  {
    *(_QWORD *)(a2 + 8LL * a3) = a4;
    *(_QWORD *)(a4 + 16) = a2 | 1;
    if ( !a3 && a2 == a1[1] )
      a1[1] = a4;
    if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v5 = *(_QWORD *)v4 != a2;
        v6 = *(_QWORD *)(v4 + 8LL * (*(_QWORD *)v4 == a2));
        if ( !v6 || (*(_BYTE *)(v6 + 16) & 1) == 0 )
          break;
        *(_BYTE *)(a2 + 16) &= ~1u;
        a4 = v4;
        *(_BYTE *)(v6 + 16) &= ~1u;
        a2 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( a2 )
        {
          *(_BYTE *)(v4 + 16) |= 1u;
          a3 = v4 != *(_QWORD *)a2;
          if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
            continue;
        }
        return;
      }
      if ( a3 != v5 )
      {
        if ( (*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
          __fastfail(0x1Du);
        v7 = (unsigned __int64 *)(a2 + 8LL * (*(_QWORD *)v4 == a2));
        if ( *v7 != a4 )
          __fastfail(0x1Du);
        if ( *(_QWORD *)(v4 + 8LL * (*(_QWORD *)v4 != a2)) != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)(v4 + 8LL * (*(_QWORD *)v4 != a2)) = a4;
        v8 = (unsigned __int64 *)(a4 + 8LL * v5);
        *(_QWORD *)(a4 + 16) = v4 | *(_DWORD *)(a4 + 16) & 3;
        v9 = *v8;
        if ( *v8 )
        {
          v16 = *(_QWORD *)(v9 + 16);
          if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) != a4 )
            __fastfail(0x1Du);
          *(_QWORD *)(v9 + 16) = a2 | v16 & 3;
        }
        *v7 = v9;
        *v8 = a2;
        *(_QWORD *)(a2 + 16) = a4 | *(_DWORD *)(a2 + 16) & 3;
        a2 = a4;
      }
      v10 = !v5;
      if ( (*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v4 )
        __fastfail(0x1Du);
      v11 = v10;
      v12 = (_QWORD *)(v4 + 8 * (v10 ^ 1LL));
      if ( *v12 != a2 )
        __fastfail(0x1Du);
      v13 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v13 )
      {
        if ( *(_QWORD *)(v13 + 8) == v4 )
        {
          *(_QWORD *)(v13 + 8) = a2;
        }
        else
        {
          if ( *(_QWORD *)v13 != v4 )
            __fastfail(0x1Du);
          *(_QWORD *)v13 = a2;
        }
      }
      else
      {
        if ( *a1 != v4 )
          __fastfail(0x1Du);
        *a1 = a2;
      }
      *(_QWORD *)(a2 + 16) = v13 | *(_DWORD *)(a2 + 16) & 3;
      v14 = *(_QWORD *)(a2 + 8 * v11);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 16);
        if ( (v15 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)(v14 + 16) = v4 | v15 & 3;
      }
      *v12 = v14;
      *(_QWORD *)(a2 + 8 * v11) = v4;
      *(_QWORD *)(v4 + 16) = a2 | *(_DWORD *)(v4 + 16) & 3;
      *(_BYTE *)(v4 + 16) |= 1u;
      *(_BYTE *)(a2 + 16) &= ~1u;
    }
  }
  else
  {
    *a1 = a4;
    a1[1] = a4;
    *(_QWORD *)(a4 + 16) = 0LL;
  }
}
