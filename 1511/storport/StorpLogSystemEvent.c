/*
 * XREFs of StorpLogSystemEvent @ 0x1C002BA58
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006838 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C0027818 (WPP_SF_ddd.c)
 *     StorCreateSystemLogEntry @ 0x1C00315CC (StorCreateSystemLogEntry.c)
 */

__int64 __fastcall StorpLogSystemEvent(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // ecx
  int v5; // ecx
  void *v6; // rcx
  unsigned __int8 v7; // si
  unsigned __int8 v8; // bp
  unsigned __int8 v9; // r14
  __int64 Unit; // rax
  unsigned int v11; // [rsp+58h] [rbp+10h]

  if ( (*(_DWORD *)a2 & 0xFFFFFF00) > 0x100 )
  {
    *(_DWORD *)a2 = 511;
    return 3238002699LL;
  }
  if ( *(_DWORD *)(a2 + 40) && !*(_QWORD *)(a2 + 48) )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 56) && !*(_QWORD *)(a2 + 64) )
    return 3238002694LL;
  v3 = **(_QWORD **)(a1 - 16);
  if ( !v3 )
    return 3238002694LL;
  if ( KeGetCurrentIrql() > 2u )
    return 3238002696LL;
  v4 = *(_DWORD *)(a2 + 12);
  if ( !v4 )
    goto LABEL_14;
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
      goto LABEL_14;
    return 3238002694LL;
  }
  v7 = *(_BYTE *)(a2 + 16);
  v8 = *(_BYTE *)(a2 + 20);
  v9 = *(_BYTE *)(a2 + 24);
  LOBYTE(v11) = v7;
  BYTE1(v11) = v8;
  BYTE2(v11) = v9;
  Unit = RaidAdapterFindUnit(v3, v11);
  if ( Unit )
  {
    v6 = *(void **)(Unit + 8);
    return StorCreateSystemLogEntry(v6);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_ddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x18u,
      (__int64)&WPP_a7c96fc4c7d54bab161cb0c6c8756061_Traceguids,
      v7,
      v8,
      v9);
  }
LABEL_14:
  v6 = *(void **)(v3 + 8);
  return StorCreateSystemLogEntry(v6);
}
