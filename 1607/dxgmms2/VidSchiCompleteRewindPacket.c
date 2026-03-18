/*
 * XREFs of VidSchiCompleteRewindPacket @ 0x1C000D28C
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000D568 (VidSchiSubmitWaitCommand.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000D694 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiRewindPacket @ 0x1C000E11C (VidSchiRewindPacket.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000ABF0 (VidSchiUpdateContextStatus.c)
 *     VidSchiSetNextRunPacket @ 0x1C000D4D0 (VidSchiSetNextRunPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

__int64 __fastcall VidSchiCompleteRewindPacket(__int64 a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // esi
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // r8
  _QWORD *v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  void (__fastcall *v23)(_QWORD); // rax
  _OWORD v24[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  if ( (*(_DWORD *)(a1 + 176) & 8) == 0 )
  {
    *(_DWORD *)(a1 + 176) &= ~4u;
    memset(v24, 0, 0x28uLL);
    v11 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    v12 = v24[0];
    *(_QWORD *)(v11 + 24) = a1;
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(a1 + 648);
    *(_QWORD *)(v11 + 40) = *(_QWORD *)(a1 + 656);
    *(_OWORD *)(v11 + 48) = v12;
    WdLogEvent5_WdEvent(v11);
    v16 = *(_QWORD *)(a1 + 656);
    if ( v16 )
    {
      v17 = *(_QWORD *)(a1 + 648);
      if ( v17 )
      {
        v14 = *(_QWORD *)(a1 + 656);
        while ( 1 )
        {
          v13 = *(_QWORD *)(v14 + 32);
          v14 = v13 - 32;
          if ( v13 - 32 == v17 )
            break;
          if ( v13 == a1 + 664 )
            goto LABEL_14;
        }
      }
      do
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13, v17, v15);
        v18[3] = v16;
        v18[4] = *(int *)(v16 + 52);
        v18[5] = *(_QWORD *)(a1 + 648);
        v18[6] = *(unsigned int *)(a1 + 780);
        WdLogEvent5_WdEvent(v18);
        v19 = *(_DWORD *)(v16 + 80);
        if ( (v19 & 0x10) != 0 )
        {
          *(_DWORD *)(v16 + 80) = v19 & 0xFFFFFFEF;
          v13 = *(unsigned int *)(v2 + 2788);
          if ( (_DWORD)v13 != -1 )
          {
            v23 = *(void (__fastcall **)(_QWORD))(v6 + 2864);
            if ( v23 )
              v23(*(_QWORD *)(v6 + 2896));
          }
        }
        ++*(_DWORD *)(a1 + 780);
        ++*(_DWORD *)(v2 + 2752);
        ++*(_DWORD *)(v6 + 936);
        if ( a2 )
        {
          v20 = *(_DWORD *)(v16 + 48);
          if ( v20 )
          {
            if ( v20 == 5 || v20 == 7 )
              *(_DWORD *)(v16 + 80) &= ~1u;
          }
          else if ( (*(_DWORD *)(v16 + 64) & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v2 + 2744));
            *(_QWORD *)(v6 + 392) |= 1LL << *(_WORD *)(v2 + 4);
          }
        }
        v14 = *(_QWORD *)(v16 + 32);
        v16 = v14 - 32;
      }
      while ( v14 - 32 != *(_QWORD *)(a1 + 648) && v14 != a1 + 664 );
      VidSchiSetNextRunPacket(a1, *(_QWORD *)(a1 + 656));
    }
LABEL_14:
    v21 = *(_DWORD *)(a1 + 176);
    *(_QWORD *)(a1 + 656) = 0LL;
    if ( (v21 & 0x200) != 0 )
    {
      if ( (((unsigned __int8)(*(_DWORD *)(a1 + 176) >> 9) | *(_BYTE *)(a1 + 176)) & 2) == 0 )
        VidSchiUpdateContextStatus(a1, (_QWORD *)0xA, 12811LL, v15);
    }
    else if ( *(_DWORD *)(a1 + 780)
           && (*(_DWORD *)(a1 + 176) & 1) == 0
           && (*(_DWORD *)(a1 + 176) & 0x10) == 0
           && (*(_DWORD *)(a1 + 176) & 0x40) == 0
           && (*(_DWORD *)(a1 + 176) & 0x20) == 0 )
    {
      return (unsigned int)VidSchiUpdateContextStatus(a1, (_QWORD *)5, 12824LL, v15);
    }
  }
  return v3;
}
