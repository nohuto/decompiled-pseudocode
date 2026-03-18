/*
 * XREFs of zzzSetSystemImage @ 0x1C0123934
 * Callers:
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00CC8DC (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C01232FC (xxxUpdateSystemCursorFromRegistry.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C012356C (xxxSetMonitorIcoCurIndex.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01DBA2C (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DBAA8 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 *     xxxSetSystemCursor @ 0x1C02294C8 (xxxSetSystemCursor.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0053910 (zzzUpdateCursorImage.c)
 *     _DestroyCursor @ 0x1C0123CD0 (_DestroyCursor.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetSystemImage(__int64 a1, __int64 a2)
{
  int v4; // ecx
  __int128 v5; // xmm2
  __int128 v6; // xmm3
  __int128 v7; // xmm4
  __int128 v8; // xmm5
  int v9; // eax
  int v10; // edx
  int v12; // ebp
  __int64 v13; // r14
  __int64 v14; // rbx
  int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rcx

  if ( a2 != a1 )
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( (*(_DWORD *)(a1 + 80) & 8) != 0 )
      {
        v12 = 0;
        if ( *(int *)(a1 + 88) > 0 )
        {
          v13 = 0LL;
          do
          {
            v14 = *(_QWORD *)(v13 + *(_QWORD *)(a1 + 96));
            HMChangeOwnerPheProcess(
              gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v14,
              gptiRit);
            ++v12;
            *(_QWORD *)(v14 + 24) = 0LL;
            v13 += 8LL;
          }
          while ( v12 < *(_DWORD *)(a1 + 88) );
        }
      }
      else
      {
        if ( *(_QWORD *)(a1 + 88) )
        {
          ((void (*)(void))GreDecQuotaCount)();
          GreIncQuotaCount(*(_QWORD *)(gptiRit + 376LL));
        }
        if ( *(_QWORD *)(a1 + 96) )
        {
          GreDecQuotaCount(*(_QWORD *)(a1 + 24));
          GreIncQuotaCount(*(_QWORD *)(gptiRit + 376LL));
        }
        if ( *(_QWORD *)(a1 + 128) )
        {
          GreDecQuotaCount(*(_QWORD *)(a1 + 24));
          GreIncQuotaCount(*(_QWORD *)(gptiRit + 376LL));
        }
      }
    }
    v4 = *(_DWORD *)(a1 + 148);
    v5 = *(_OWORD *)(a1 + 84);
    v6 = *(_OWORD *)(a1 + 100);
    v7 = *(_OWORD *)(a1 + 116);
    v8 = *(_OWORD *)(a1 + 132);
    *(_OWORD *)(a1 + 84) = *(_OWORD *)(a2 + 84);
    *(_OWORD *)(a1 + 100) = *(_OWORD *)(a2 + 100);
    *(_OWORD *)(a1 + 116) = *(_OWORD *)(a2 + 116);
    *(_OWORD *)(a1 + 132) = *(_OWORD *)(a2 + 132);
    *(_DWORD *)(a1 + 148) = *(_DWORD *)(a2 + 148);
    v9 = *(_DWORD *)(a2 + 80);
    *(_OWORD *)(a2 + 84) = v5;
    *(_OWORD *)(a2 + 100) = v6;
    *(_OWORD *)(a2 + 116) = v7;
    *(_OWORD *)(a2 + 132) = v8;
    *(_DWORD *)(a2 + 148) = v4;
    v10 = *(_DWORD *)(a1 + 80) & 8;
    *(_DWORD *)(a1 + 80) ^= ((unsigned __int8)*(_DWORD *)(a1 + 80) ^ (unsigned __int8)v9) & 8;
    *(_DWORD *)(a2 + 80) = v10 | *(_DWORD *)(a2 + 80) & 0xFFFFFFF7;
    *(_DWORD *)(a2 + 76) = *(_DWORD *)(a1 + 76);
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( (*(_DWORD *)(a1 + 80) & 8) != 0 )
      {
        v15 = 0;
        if ( *(int *)(a1 + 88) > 0 )
        {
          v16 = 0LL;
          do
          {
            ++v15;
            v17 = *(_QWORD *)(v16 + *(_QWORD *)(a1 + 96));
            v16 += 8LL;
            *(_QWORD *)(v17 + 24) = *(_QWORD *)(gptiRit + 376LL);
          }
          while ( v15 < *(_DWORD *)(a1 + 88) );
        }
      }
      else
      {
        if ( *(_QWORD *)(a1 + 88) )
        {
          GreDecQuotaCount(*(_QWORD *)(gptiRit + 376LL));
          GreIncQuotaCount(*(_QWORD *)(a1 + 24));
        }
        if ( *(_QWORD *)(a1 + 96) )
        {
          GreDecQuotaCount(*(_QWORD *)(gptiRit + 376LL));
          GreIncQuotaCount(*(_QWORD *)(a1 + 24));
        }
        if ( *(_QWORD *)(a1 + 128) )
        {
          GreDecQuotaCount(*(_QWORD *)(gptiRit + 376LL));
          GreIncQuotaCount(*(_QWORD *)(a1 + 24));
        }
      }
      DestroyCursor(a1, 2LL);
    }
    if ( gpcurLogCurrent == a2 )
    {
      gpcurLogCurrent = 0LL;
      gpcurPhysCurrent = 0LL;
      zzzUpdateCursorImage();
    }
    *(_DWORD *)(a2 + 80) |= 0x200u;
  }
  return 1LL;
}
