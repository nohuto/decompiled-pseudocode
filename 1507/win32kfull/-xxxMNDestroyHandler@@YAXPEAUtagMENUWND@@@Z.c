/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0215A48
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxMNCloseHierarchy @ 0x1C010CC10 (xxxMNCloseHierarchy.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     MNFreePopup @ 0x1C010CF08 (MNFreePopup.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C010D9F0 (safe_cast_fnid_to_PMENUWND.c)
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
  unsigned __int16 v9; // ax
  struct tagWND *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 47);
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 24);
    if ( v2 )
    {
      if ( *(_QWORD *)(v1 + 16) )
        v2 = *(_QWORD *)(v1 + 16);
      v15 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v15;
      v16 = v2;
      ++*(_DWORD *)(v2 + 8);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout((struct tagWND *)v2, 0x1E4u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
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
        v15 = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = &v15;
        v16 = v7;
        ++*(_DWORD *)(v7 + 8);
        v8 = *(_QWORD **)(v1 + 40);
        v9 = (*(_BYTE *)v1 & 4) << 11;
        if ( v8 )
          v8 = (_QWORD *)*v8;
        v10 = *(struct tagWND **)(v1 + 8);
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(
          v10,
          0x125u,
          (unsigned __int64)v8,
          (struct _LARGE_STRING *)(v9 << 16),
          0,
          0,
          0LL,
          1,
          1);
        ThreadUnlock1(v12, v11);
      }
    }
    *(_DWORD *)v1 |= 0x8000u;
    v13 = *(_QWORD *)(v1 + 16);
    if ( v13 )
    {
      v14 = safe_cast_fnid_to_PMENUWND(v13);
      if ( v14 )
      {
        *(_QWORD *)(v14 + 376) = 0LL;
        *(_QWORD *)(v14 + 384) = v1;
      }
    }
    if ( (*(_BYTE *)(v1 + 2) & 1) != 0 )
      **(_DWORD **)(v1 + 64) |= 0x20000u;
    else
      MNFreePopup(v1);
  }
}
