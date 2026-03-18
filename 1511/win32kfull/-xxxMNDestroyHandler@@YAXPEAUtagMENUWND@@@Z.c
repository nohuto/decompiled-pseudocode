/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C02158F8
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 *     MNFreePopup @ 0x1C0138BE0 (MNFreePopup.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0139460 (safe_cast_fnid_to_PMENUWND.c)
 */

void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 47);
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 24);
    if ( v2 )
    {
      if ( *(_QWORD *)(v1 + 16) )
        v2 = *(_QWORD *)(v1 + 16);
      v13 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v13;
      v14 = v2;
      ++*(_DWORD *)(v2 + 8);
      xxxSendMessage((struct tagWND *)v2, 0x1E4u, 0LL, 0LL);
      ThreadUnlock1(v4, v3);
    }
    v5 = *(_QWORD *)(v1 + 40);
    if ( v5 )
    {
      v6 = *(unsigned int *)(v1 + 80);
      if ( (int)v6 >= 0 && (unsigned int)v6 < *(_DWORD *)(v5 + 52) )
        *(_DWORD *)(*(_QWORD *)(v5 + 80) + 152 * v6 + 4) &= ~0x80u;
    }
    if ( (*(_DWORD *)v1 & 0x2000) != 0 )
      FindTimer(*(_QWORD *)(v1 + 16), 65534LL, 0, 1, 0LL);
    if ( (*(_DWORD *)v1 & 0x4000) != 0 )
      FindTimer(*(_QWORD *)(v1 + 16), 0xFFFFLL, 0, 1, 0LL);
    if ( (*(_DWORD *)v1 & 0x200000) != 0 )
    {
      v7 = *(_QWORD *)(v1 + 8);
      if ( v7 )
      {
        v13 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v13;
        v14 = v7;
        ++*(_DWORD *)(v7 + 8);
        v8 = *(_QWORD **)(v1 + 40);
        if ( v8 )
          v8 = (_QWORD *)*v8;
        xxxSendMessage(
          *(struct tagWND **)(v1 + 8),
          0x125u,
          (unsigned __int64)v8,
          (unsigned __int16)((*(_BYTE *)v1 & 4) << 11) << 16);
        ThreadUnlock1(v10, v9);
      }
    }
    *(_DWORD *)v1 |= 0x8000u;
    v11 = *(_QWORD *)(v1 + 16);
    if ( v11 )
    {
      v12 = safe_cast_fnid_to_PMENUWND(v11);
      if ( v12 )
      {
        *(_QWORD *)(v12 + 376) = 0LL;
        *(_QWORD *)(v12 + 384) = v1;
      }
    }
    if ( (*(_BYTE *)(v1 + 2) & 1) != 0 )
      **(_DWORD **)(v1 + 64) |= 0x20000u;
    else
      MNFreePopup(v1);
  }
}
