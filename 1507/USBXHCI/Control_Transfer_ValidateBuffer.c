/*
 * XREFs of Control_Transfer_ValidateBuffer @ 0x1C0022CE4
 * Callers:
 *     Control_MapTransfer @ 0x1C00214A8 (Control_MapTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqd @ 0x1C0020E80 (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0023920 (WPP_RECORDER_SF_DDq.c)
 *     WPP_RECORDER_SF_DDqDD @ 0x1C0023A1C (WPP_RECORDER_SF_DDqDD.c)
 */

__int64 __fastcall Control_Transfer_ValidateBuffer(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v3; // edx
  int v4; // ecx
  unsigned int v5; // r10d
  unsigned int v6; // r11d
  int v7; // edx

  v1 = *(_QWORD *)(a1 + 296);
  v3 = 0;
  v4 = *(_DWORD *)(v1 + 48);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v1 + 88);
    if ( v5 > 0x10000 )
    {
      WPP_RECORDER_SF_DDqDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        v1,
        29,
        (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_QWORD *)(v1 + 24),
        v5,
        0);
      return (unsigned int)-1073741637;
    }
    v6 = *(_DWORD *)(a1 + 4);
    if ( v5 > v6 )
    {
      WPP_RECORDER_SF_DDqDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        v1,
        30,
        (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_QWORD *)(v1 + 24),
        v5,
        v6);
      return (unsigned int)-1073741670;
    }
    if ( v5 == v6 && (*(_DWORD *)(v1 + 64) & 0xFFFLL) != 0 )
    {
      WPP_RECORDER_SF_DDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        2u,
        v1,
        0x1Fu,
        (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_QWORD *)(v1 + 24),
        *(_DWORD *)(v1 + 88));
      return (unsigned int)-1073741670;
    }
    if ( v4 == 3 && **(_QWORD **)(v1 + 56) )
    {
      v7 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_DDq(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v7,
        v1,
        32,
        (__int64)&WPP_ee7759932d876114f80ff23edcd4b288_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_QWORD *)(v1 + 24));
      return (unsigned int)-1073741637;
    }
  }
  return v3;
}
