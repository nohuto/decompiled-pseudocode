/*
 * XREFs of VidSchiCompleteRewindPacket @ 0x1C0015EDC
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C00178CC (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiRewindPacket @ 0x1C001A004 (VidSchiRewindPacket.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C0002EC0 (VidSchiUpdateContextStatus.c)
 *     VidSchiSetNextRunPacket @ 0x1C0003278 (VidSchiSetNextRunPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008500 (memset.c)
 */

__int64 __fastcall VidSchiCompleteRewindPacket(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  int v4; // r15d
  __int64 v6; // r14
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r8
  _QWORD *v13; // rax
  int v14; // eax
  void (__fastcall *v15)(_QWORD); // rax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  _OWORD v20[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  v3 = 0;
  v4 = a2;
  v6 = *(_QWORD *)(v2 + 24);
  if ( (*(_DWORD *)(a1 + 176) & 8) == 0 )
  {
    *(_DWORD *)(a1 + 176) &= ~4u;
    memset(v20, 0, 40);
    v7 = WdLogNewEntry5_WdEvent(a1, a2);
    v8 = v20[0];
    *(_QWORD *)(v7 + 24) = a1;
    *(_QWORD *)(v7 + 32) = *(_QWORD *)(a1 + 648);
    *(_QWORD *)(v7 + 40) = *(_QWORD *)(a1 + 656);
    *(_OWORD *)(v7 + 48) = v8;
    WdLogEvent5_WdEvent(v7);
    v11 = *(_QWORD *)(a1 + 656);
    if ( v11 )
    {
      v12 = *(_QWORD *)(a1 + 648);
      if ( v12 )
      {
        v10 = *(_QWORD *)(a1 + 656);
        while ( 1 )
        {
          v9 = *(_QWORD *)(v10 + 32);
          v10 = v9 - 32;
          if ( v9 - 32 == v12 )
            break;
          if ( v9 == a1 + 664 )
            goto LABEL_22;
        }
      }
      do
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9);
        v13[3] = v11;
        v13[4] = *(int *)(v11 + 52);
        v13[5] = *(_QWORD *)(a1 + 648);
        v13[6] = *(unsigned int *)(a1 + 756);
        WdLogEvent5_WdEvent(v13);
        v14 = *(_DWORD *)(v11 + 76);
        if ( (v14 & 0x10) != 0 )
        {
          *(_DWORD *)(v11 + 76) = v14 & 0xFFFFFFEF;
          v9 = *(unsigned int *)(v2 + 3080);
          if ( (_DWORD)v9 != -1 )
          {
            v15 = *(void (__fastcall **)(_QWORD))(v6 + 2528);
            if ( v15 )
              v15(*(_QWORD *)(v6 + 2560));
          }
        }
        ++*(_DWORD *)(a1 + 756);
        ++*(_DWORD *)(v2 + 2840);
        ++*(_DWORD *)(v6 + 892);
        if ( v4 )
        {
          v16 = *(_DWORD *)(v11 + 48);
          if ( v16 )
          {
            if ( v16 == 5 || v16 == 7 )
              *(_DWORD *)(v11 + 76) &= ~1u;
          }
          else if ( (*(_DWORD *)(v11 + 64) & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v2 + 2832));
            v17 = *(_QWORD *)(v6 + 352);
            _bittestandset64(&v17, *(unsigned __int16 *)(v2 + 4));
            *(_QWORD *)(v6 + 352) = v17;
          }
        }
        v10 = *(_QWORD *)(v11 + 32);
        v11 = v10 - 32;
      }
      while ( v10 - 32 != *(_QWORD *)(a1 + 648) && v10 != a1 + 664 );
      VidSchiSetNextRunPacket(a1, *(_QWORD *)(a1 + 656));
    }
LABEL_22:
    v18 = *(_DWORD *)(a1 + 176);
    *(_QWORD *)(a1 + 656) = 0LL;
    if ( (v18 & 0x200) != 0 )
    {
      if ( (((unsigned __int8)(*(_DWORD *)(a1 + 176) >> 9) | *(_BYTE *)(a1 + 176)) & 2) == 0 )
        VidSchiUpdateContextStatus(a1, (_QWORD *)0xA, (__int64 *)0x2C4A);
    }
    else if ( *(_DWORD *)(a1 + 756)
           && (*(_DWORD *)(a1 + 176) & 1) == 0
           && (*(_DWORD *)(a1 + 176) & 0x10) == 0
           && (*(_DWORD *)(a1 + 176) & 0x40) == 0
           && (*(_DWORD *)(a1 + 176) & 0x20) == 0 )
    {
      return (unsigned int)VidSchiUpdateContextStatus(a1, (_QWORD *)5, (__int64 *)0x2C57);
    }
  }
  return v3;
}
