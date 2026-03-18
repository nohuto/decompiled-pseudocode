/*
 * XREFs of RtlRbInsertNodeEx @ 0x1400F70F0
 * Callers:
 *     PfSnGetFileInformation @ 0x1400B7EF0 (PfSnGetFileInformation.c)
 *     KiSetClockInterval @ 0x1400D6020 (KiSetClockInterval.c)
 *     KiInsertSchedulingGroupQueue @ 0x1400EDDBC (KiInsertSchedulingGroupQueue.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400F4BA0 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400F6800 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400F6A90 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1401203A0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     VmpInsertMemoryRange @ 0x14025B908 (VmpInsertMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404D2F6C (EtwpSetProviderTraitsCommon.c)
 *     KeInitializeClock @ 0x1407CFC78 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlRbInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  bool v4; // r10
  unsigned __int64 v5; // r8
  BOOL v6; // r11d
  __int64 v7; // rbx
  unsigned __int64 *v8; // rbx
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // r10
  unsigned int v11; // r11d
  __int64 v12; // r10
  _QWORD *v13; // r11
  unsigned __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rsi

  v4 = a3;
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
        v5 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v6 = *(_QWORD *)v5 != a2;
        v7 = *(_QWORD *)(v5 + 8LL * (*(_QWORD *)v5 == a2));
        if ( !v7 || (*(_BYTE *)(v7 + 16) & 1) == 0 )
          break;
        *(_BYTE *)(a2 + 16) &= ~1u;
        a4 = v5;
        *(_BYTE *)(v7 + 16) &= ~1u;
        a2 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( a2 )
        {
          *(_BYTE *)(v5 + 16) |= 1u;
          v4 = v5 != *(_QWORD *)a2;
          if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
            continue;
        }
        return;
      }
      if ( v4 != v6 )
      {
        if ( (*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
          __fastfail(0x1Du);
        v8 = (unsigned __int64 *)(a2 + 8LL * (*(_QWORD *)v5 == a2));
        if ( *v8 != a4 )
          __fastfail(0x1Du);
        if ( *(_QWORD *)(v5 + 8LL * (*(_QWORD *)v5 != a2)) != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)(v5 + 8LL * (*(_QWORD *)v5 != a2)) = a4;
        v9 = (unsigned __int64 *)(a4 + 8LL * v6);
        *(_QWORD *)(a4 + 16) = v5 | *(_DWORD *)(a4 + 16) & 3;
        v10 = *v9;
        if ( *v9 )
        {
          v17 = *(_QWORD *)(v10 + 16);
          if ( (v17 & 0xFFFFFFFFFFFFFFFCuLL) != a4 )
            __fastfail(0x1Du);
          *(_QWORD *)(v10 + 16) = a2 | v17 & 3;
        }
        *v8 = v10;
        *v9 = a2;
        *(_QWORD *)(a2 + 16) = a4 | *(_DWORD *)(a2 + 16) & 3;
        a2 = a4;
      }
      v11 = !v6;
      if ( (*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v5 )
        __fastfail(0x1Du);
      v12 = v11;
      v13 = (_QWORD *)(v5 + 8 * (v11 ^ 1LL));
      if ( *v13 != a2 )
        __fastfail(0x1Du);
      v14 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v14 )
      {
        if ( *(_QWORD *)(v14 + 8) == v5 )
        {
          *(_QWORD *)(v14 + 8) = a2;
        }
        else
        {
          if ( *(_QWORD *)v14 != v5 )
            __fastfail(0x1Du);
          *(_QWORD *)v14 = a2;
        }
      }
      else
      {
        if ( *a1 != v5 )
          __fastfail(0x1Du);
        *a1 = a2;
      }
      *(_QWORD *)(a2 + 16) = v14 | *(_DWORD *)(a2 + 16) & 3;
      v15 = *(_QWORD *)(a2 + 8 * v12);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 16);
        if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)(v15 + 16) = v5 | v16 & 3;
      }
      *v13 = v15;
      *(_QWORD *)(a2 + 8 * v12) = v5;
      *(_QWORD *)(v5 + 16) = a2 | *(_DWORD *)(v5 + 16) & 3;
      *(_BYTE *)(v5 + 16) |= 1u;
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
