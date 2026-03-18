/*
 * XREFs of ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022B3CC
 * Callers:
 *     xxxSBTrackInit @ 0x1C022C980 (xxxSBTrackInit.c)
 * Callees:
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     SystoChar @ 0x1C0095904 (SystoChar.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxInternalGetMessage @ 0x1C00DF5A8 (xxxInternalGetMessage.c)
 *     xxxTranslateMessage @ 0x1C00E7A34 (xxxTranslateMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     xxxCallMsgFilter @ 0x1C01DDE44 (xxxCallMsgFilter.c)
 */

void __fastcall xxxSBTrackLoop(struct tagWND *a1, __int64 a2, struct tagSBCALC *a3)
{
  __int64 v6; // rdi
  void (__fastcall *v7)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *); // rbp
  __int64 *v8; // rdx
  int v9; // ecx
  unsigned int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // r9
  void (__fastcall *v16)(struct tagWND *, _QWORD, _QWORD, __int64, struct tagSBCALC *); // r10
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD v20[6]; // [rsp+30h] [rbp-48h] BYREF

  memset(v20, 0, sizeof(v20));
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL);
  if ( v6 )
  {
    v7 = *(void (__fastcall **)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *))(v6 + 48);
    if ( v7 )
    {
      if ( (*(_DWORD *)v6 & 2) != 0 )
        SetOrClrWF(1, a1, 0x620u, 1);
      if ( gpqForeground )
      {
        v8 = *(__int64 **)(gpqForeground + 80LL);
        if ( v8 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
          {
            v9 = gptiCurrent != v8[2] ? 0x10 : 0;
            if ( v8[2] == gptiCurrent )
              v8 = (__int64 *)a1;
            xxxWindowEvent(0x80000004, v8, 0, 3, v9 | 0x21);
          }
        }
      }
      if ( (*(_DWORD *)v6 & 4) != 0 )
        v10 = -4;
      else
        v10 = ((*(_DWORD *)v6 & 2) != 0) | 0xFFFFFFFA;
      xxxWindowEvent(0x12u, (__int64 *)a1, v10, 0, 0);
      v7(a1, 513LL, 0LL, a2, a3);
      while ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) == a1
           && (unsigned int)xxxInternalGetMessage((__int64)v20, 0LL, 0, 0, 1u, 1u) )
      {
        if ( !(unsigned int)xxxCallMsgFilter((int *)v20, 5u) )
        {
          if ( v20[0] == *(_QWORD *)a1
            && ((unsigned int)(LODWORD(v20[1]) - 512) <= 0xE || (unsigned int)(LODWORD(v20[1]) - 256) <= 9) )
          {
            v13 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL);
            if ( !v13 || !*(_QWORD *)(v13 + 48) )
              return;
            v14 = SystoChar(v20[1], v20[3]);
            v16(a1, v14, v20[2], v15, a3);
          }
          else
          {
            xxxTranslateMessage((__int64)v20, 0LL, v11, v12);
            xxxDispatchMessage(v20, v17, v18, v19);
          }
        }
      }
    }
  }
}
