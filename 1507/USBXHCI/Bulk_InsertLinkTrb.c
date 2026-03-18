/*
 * XREFs of Bulk_InsertLinkTrb @ 0x1C002A35C
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x1C002C16C (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     TR_InitializeLinkTrb @ 0x1C00207B0 (TR_InitializeLinkTrb.c)
 */

char __fastcall Bulk_InsertLinkTrb(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 **v4; // rax
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF

  v4 = (__int64 **)(a2 + 8);
  if ( *v4 == (__int64 *)v4 )
  {
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    return 0;
  }
  else
  {
    v8 = *v4;
    v9 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *v4 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v4;
    v8[1] = (__int64)v8;
    *v8 = (__int64)v8;
    TR_InitializeLinkTrb(a1, a3, (__int64)&v16, a4);
    v10 = v8[3];
    v11 = 2LL * *(unsigned int *)(a1 + 184);
    v12 = *(_QWORD *)(a1 + 176);
    HIDWORD(v16) &= ~2u;
    *(_QWORD *)&v16 = v10;
    *(_OWORD *)(v12 + 8 * v11) = v16;
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v13 = *(_QWORD **)(a2 + 32);
    v14 = *(_QWORD **)(a1 + 168);
    *v14 = a2 + 24;
    v14[1] = v13;
    if ( *v13 != a2 + 24 )
      __fastfail(3u);
    *v13 = v14;
    *(_QWORD *)(a2 + 32) = v14;
    *(_QWORD *)(a1 + 168) = v8;
    v15 = v8[2];
    *(_DWORD *)(a1 + 184) = 0;
    *(_QWORD *)(a1 + 176) = v15;
    *(_QWORD *)(a2 + 112) = v8;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    return 1;
  }
}
