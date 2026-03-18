/*
 * XREFs of Control_ProcessTransferEventPointer @ 0x1C0029978
 * Callers:
 *     Control_ProcessTransferEventWithED0 @ 0x1C0029B08 (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     Control_FindTrbMatch @ 0x1C0029874 (Control_FindTrbMatch.c)
 */

bool __fastcall Control_ProcessTransferEventPointer(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, int *a5)
{
  int v6; // ebx
  __int64 v8; // rdx
  __int64 v10; // rcx
  bool TrbMatch; // bp
  __int64 v13; // rcx
  unsigned int v14; // esi
  unsigned int v15; // edi
  unsigned int v16; // r9d
  __int64 v17; // r14
  int v18; // eax
  int *v19; // rcx
  int v21; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+80h] [rbp+18h] BYREF

  v6 = 0;
  v8 = *a3;
  v10 = 16LL * *(unsigned int *)(a1 + 184);
  v21 = 0;
  TrbMatch = 0;
  v22 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 24LL) + v10;
  if ( v8 )
  {
    if ( v8 == v13 )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        4u,
        0xDu,
        0x10u,
        (__int64)&WPP_536c295522f23df8bdaea150c8299cbf_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      v6 = *(_DWORD *)(a2 + 112);
      TrbMatch = 1;
    }
    else
    {
      v14 = *(_DWORD *)(a2 + 128);
      v15 = *(_DWORD *)(a2 + 144);
      if ( v14 <= v15 )
        v16 = *(_DWORD *)(a2 + 144);
      else
        v16 = *(_DWORD *)(a1 + 188);
      v17 = *(_QWORD *)(a2 + 120);
      TrbMatch = Control_FindTrbMatch((__int64)a3, v17, v14, v16, &v21, &v22);
      if ( !TrbMatch && v14 > v15 )
        TrbMatch = Control_FindTrbMatch((__int64)a3, v17, 0, v15, &v21, &v22);
      v6 = v21;
    }
  }
  else
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xDu,
      0xFu,
      (__int64)&WPP_536c295522f23df8bdaea150c8299cbf_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  }
  v18 = v22;
  v19 = a5;
  *a4 = v6;
  *v19 = v18;
  return TrbMatch;
}
