/*
 * XREFs of Control_Transfer_ValidateBuffer @ 0x1C0003700
 * Callers:
 *     Control_MapTransfer @ 0x1C00033B4 (Control_MapTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqd @ 0x1C0029360 (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C002A950 (WPP_RECORDER_SF_DDq.c)
 *     WPP_RECORDER_SF_DDqDD @ 0x1C002AA4C (WPP_RECORDER_SF_DDqDD.c)
 */

__int64 __fastcall Control_Transfer_ValidateBuffer(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r8d
  unsigned int v3; // r10d
  unsigned int v4; // r11d
  int v5; // r8d
  __int64 v6; // rdx
  int v8; // r8d
  __int64 v9; // rdx

  v1 = *(_QWORD *)(a1 + 296);
  v2 = *(_DWORD *)(v1 + 48);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v1 + 88);
    if ( v3 > 0x10000 )
    {
      WPP_RECORDER_SF_DDqDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        *(_QWORD *)(v1 + 24),
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        29,
        (__int64)&WPP_536c295522f23df8bdaea150c8299cbf_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_QWORD *)(v1 + 24),
        v3,
        0);
      return 3221225659LL;
    }
    v4 = *(_DWORD *)(a1 + 4);
    if ( v3 > v4 )
    {
      WPP_RECORDER_SF_DDqDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        *(_QWORD *)(v1 + 24),
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        30,
        (__int64)&WPP_536c295522f23df8bdaea150c8299cbf_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_QWORD *)(v1 + 24),
        v3,
        v4);
      return 3221225626LL;
    }
    if ( v3 == v4 && (*(_DWORD *)(v1 + 64) & 0xFFFLL) != 0 )
    {
      v8 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      v9 = *(_QWORD *)(v1 + 24);
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_DDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v9,
        v8,
        31,
        (__int64)&WPP_536c295522f23df8bdaea150c8299cbf_Traceguids,
        v8,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_QWORD *)(v1 + 24),
        *(_DWORD *)(v1 + 88));
      return 3221225626LL;
    }
    if ( v2 == 3 && **(_QWORD **)(v1 + 56) )
    {
      v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      v6 = *(_QWORD *)(v1 + 24);
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_DDq(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v6,
        v5,
        32,
        (__int64)&WPP_536c295522f23df8bdaea150c8299cbf_Traceguids,
        v5,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_QWORD *)(v1 + 24));
      return 3221225659LL;
    }
  }
  return 0LL;
}
