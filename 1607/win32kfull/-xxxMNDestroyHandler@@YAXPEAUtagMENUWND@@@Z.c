/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C014015C
 * Callers:
 *     xxxMNCloseHierarchy @ 0x1C013CBF0 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     MNFreePopup @ 0x1C0142D70 (MNFreePopup.c)
 */

void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 45);
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
      ThreadUnlock1(v12, v11);
    }
    v3 = *(_QWORD *)(v1 + 40);
    if ( v3 )
    {
      v4 = *(unsigned int *)(v1 + 80);
      if ( (int)v4 >= 0 && (unsigned int)v4 < *(_DWORD *)(v3 + 52) )
        *(_DWORD *)(*(_QWORD *)(v3 + 80) + 152 * v4 + 4) &= ~0x80u;
    }
    if ( (*(_DWORD *)v1 & 0x2000) != 0 )
      FindTimer(*(_QWORD *)(v1 + 16), 65534LL, 0, 1, 0LL);
    if ( (*(_DWORD *)v1 & 0x4000) != 0 )
      FindTimer(*(_QWORD *)(v1 + 16), 0xFFFFLL, 0, 1, 0LL);
    if ( (*(_DWORD *)v1 & 0x200000) != 0 )
    {
      v5 = *(_QWORD *)(v1 + 8);
      if ( v5 )
      {
        v13 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v13;
        v14 = v5;
        ++*(_DWORD *)(v5 + 8);
        v6 = *(_QWORD **)(v1 + 40);
        if ( v6 )
          v6 = (_QWORD *)*v6;
        xxxSendMessage(
          *(struct tagWND **)(v1 + 8),
          0x125u,
          (unsigned __int64)v6,
          (unsigned __int16)((*(_BYTE *)v1 & 4) << 11) << 16);
        ThreadUnlock1(v8, v7);
      }
    }
    *(_DWORD *)v1 |= 0x8000u;
    v9 = *(_QWORD *)(v1 + 16);
    if ( v9 )
    {
      v10 = safe_cast_fnid_to_PMENUWND(v9);
      if ( v10 )
      {
        *(_QWORD *)(v10 + 360) = 0LL;
        *(_QWORD *)(v10 + 368) = v1;
      }
    }
    if ( (*(_BYTE *)(v1 + 2) & 1) != 0 )
      **(_DWORD **)(v1 + 64) |= 0x20000u;
    else
      MNFreePopup(v1);
  }
}
