/*
 * XREFs of Control_Transfer_ValidateBuffer @ 0x1C0002280
 * Callers:
 *     Control_MapTransfer @ 0x1C0001C24 (Control_MapTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqd @ 0x1C0028D30 (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C002A330 (WPP_RECORDER_SF_DDq.c)
 *     WPP_RECORDER_SF_DDqDD @ 0x1C002A42C (WPP_RECORDER_SF_DDqDD.c)
 */

__int64 __fastcall Control_Transfer_ValidateBuffer(__int64 a1)
{
  __int64 v1; // r8
  int v3; // ecx
  unsigned int v4; // r10d
  __int64 v5; // rcx
  int v6; // edx
  unsigned int v8; // r11d
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  int v14; // edx
  char v15; // [rsp+28h] [rbp-30h]
  char v16; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+48h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 296);
  v3 = *(_DWORD *)(v1 + 48);
  if ( !v3 )
    return 0LL;
  v4 = *(_DWORD *)(v1 + 88);
  if ( v4 > 0x10000 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_DDqDD(
      *(_QWORD *)(v5 + 80),
      v6,
      v1,
      29,
      (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
      v6,
      *(_DWORD *)(v5 + 144),
      *(_QWORD *)(v1 + 24),
      v4,
      0);
    return 3221225659LL;
  }
  v8 = *(_DWORD *)(a1 + 4);
  if ( v4 > v8 )
  {
    v9 = *(_QWORD *)(a1 + 56);
    v17 = *(_DWORD *)(a1 + 4);
    v10 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_DDqDD(
      *(_QWORD *)(v9 + 80),
      v10,
      v1,
      30,
      (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
      v10,
      *(_DWORD *)(v9 + 144),
      *(_QWORD *)(v1 + 24),
      v4,
      v17);
    return 3221225626LL;
  }
  if ( v4 == v8 && (*(_DWORD *)(v1 + 64) & 0xFFFLL) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 56);
    v12 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    v15 = v12;
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_DDqd(
      *(_QWORD *)(v11 + 80),
      v12,
      v1,
      31,
      (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
      v15,
      *(_DWORD *)(v11 + 144),
      *(_QWORD *)(v1 + 24),
      *(_DWORD *)(v1 + 88));
    return 3221225626LL;
  }
  if ( v3 != 3 || !**(_QWORD **)(v1 + 56) )
    return 0LL;
  v13 = *(_QWORD *)(a1 + 56);
  v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
  v16 = v14;
  LOBYTE(v14) = 2;
  WPP_RECORDER_SF_DDq(
    *(_QWORD *)(v13 + 80),
    v14,
    v1,
    32,
    (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
    v16,
    *(_DWORD *)(v13 + 144),
    *(_QWORD *)(v1 + 24));
  return 3221225659LL;
}
