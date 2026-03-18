/*
 * XREFs of ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C023260C
 * Callers:
 *     xxxSBTrackInit @ 0x1C0233E10 (xxxSBTrackInit.c)
 * Callees:
 *     xxxDispatchMessage @ 0x1C0054E2C (xxxDispatchMessage.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     SystoChar @ 0x1C0093734 (SystoChar.c)
 *     xxxTranslateMessage @ 0x1C0099414 (xxxTranslateMessage.c)
 *     xxxInternalGetMessage @ 0x1C00D0420 (xxxInternalGetMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     xxxCallMsgFilter @ 0x1C01E75E4 (xxxCallMsgFilter.c)
 */

void __fastcall xxxSBTrackLoop(struct tagWND *a1, __int64 a2, struct tagSBCALC *a3)
{
  __int64 v6; // rdi
  void (__fastcall *v7)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *); // rbp
  __int64 *v8; // rdx
  int v9; // ecx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // r9
  void (__fastcall *v14)(struct tagWND *, _QWORD, _QWORD, __int64, struct tagSBCALC *); // r10
  _OWORD v15[3]; // [rsp+30h] [rbp-48h] BYREF

  memset(v15, 0, sizeof(v15));
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
        v8 = *(__int64 **)(gpqForeground + 72LL);
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
      while ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 64LL) == a1
           && (unsigned int)xxxInternalGetMessage(v15, 0LL, 0, 0, 1u, 1u) )
      {
        if ( !(unsigned int)xxxCallMsgFilter((__int64)v15, 5u) )
        {
          if ( *(_QWORD *)&v15[0] == *(_QWORD *)a1
            && ((unsigned int)(DWORD2(v15[0]) - 512) <= 0xE || (unsigned int)(DWORD2(v15[0]) - 256) <= 9) )
          {
            v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL);
            if ( !v11 || !*(_QWORD *)(v11 + 48) )
              return;
            v12 = SystoChar(DWORD2(v15[0]), SDWORD2(v15[1]));
            v14(a1, v12, *(_QWORD *)&v15[1], v13, a3);
          }
          else
          {
            xxxTranslateMessage((__int64)v15, 0);
            xxxDispatchMessage(v15);
          }
        }
      }
    }
  }
}
