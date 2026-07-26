/*
 * XREFs of ndisTranslateOffloadSetsToTasks @ 0x1C00C1DC4
 * Callers:
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002263C (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisTranslateOffloadSetsToTasks(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  bool v4; // bp
  char v5; // di
  bool v6; // r14
  char v8; // r9
  _DWORD *v9; // rcx
  bool v10; // al
  bool v11; // dl
  int v12; // r8d
  int v13; // eax

  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v8 = byte_1C0083712;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    WPP_SF_q(0xC1u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1);
    v8 = byte_1C0083712;
  }
  v9 = *(_DWORD **)(a1 + 4152);
  v10 = *(_DWORD *)(a2 + 4) == 1;
  v11 = *(_DWORD *)(a2 + 16) == 1;
  if ( v10 )
  {
    v4 = v9[11] != 0;
    if ( v9[3] || v9[5] )
      v5 = 1;
    v6 = v9[15] != 0;
  }
  if ( v11 && (v9[7] || v9[9]) )
    v5 = 1;
  v9[260] |= 1u;
  v12 = 28;
  v9[256] = 28;
  v9[255] = 1;
  v9[259] = 2;
  v9[261] = 14;
  if ( v4 || v5 == 1 || v6 )
  {
    v3 = v9 + 262;
    v9[258] = 28;
    v9[263] = 24;
    v9[262] = 1;
  }
  else
  {
    v9[258] = 0;
  }
  if ( v5 )
  {
    v3[2] = 0;
    v3[4] = 16;
    v12 = 64;
    v3[3] = 36;
    *(_QWORD *)(v3 + 5) = 0LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    if ( v10 )
    {
      if ( (v9[4] & 0xC) == 4 )
        v3[5] |= 2u;
      if ( (v9[4] & 3) == 1 )
        v3[5] |= 1u;
      if ( (v9[4] & 0x30) == 0x10 )
        v3[5] |= 4u;
      if ( (v9[4] & 0xC0) == 0x40 )
        v3[5] |= 8u;
      if ( (v9[4] & 0x300) == 0x100 )
        v3[5] |= 0x10u;
      if ( (v9[6] & 0xC) == 4 )
        v3[6] |= 2u;
      if ( (v9[6] & 3) == 1 )
        v3[6] |= 1u;
      if ( (v9[6] & 0x30) == 0x10 )
        v3[6] |= 4u;
      if ( (v9[6] & 0xC0) == 0x40 )
        v3[6] |= 8u;
      if ( (v9[6] & 0x300) == 0x100 )
        v3[6] |= 0x10u;
    }
    if ( v11 )
    {
      if ( (v9[8] & 0xC) == 4 )
        v3[7] |= 2u;
      if ( (v9[8] & 0x30) == 0x10 )
        v3[7] |= 4u;
      if ( (v9[8] & 0xC0) == 0x40 )
        v3[7] |= 8u;
      if ( (v9[10] & 0xC) == 4 )
        v3[8] |= 2u;
      if ( (v9[10] & 0x30) == 0x10 )
        v3[8] |= 4u;
      if ( (v9[10] & 0xC0) == 0x40 )
        v3[8] |= 8u;
    }
    if ( !v4 && !v6 )
      goto LABEL_92;
    v3 = (_DWORD *)((char *)v3 + (unsigned int)v3[3]);
    v3[1] = 24;
    *v3 = 1;
  }
  if ( v4 )
  {
    v3[2] = 2;
    v3[4] = 16;
    v12 += 36;
    v3[3] = 36;
    *(_QWORD *)(v3 + 5) = 0LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    v3[5] = 0;
    if ( (v9[14] & 0xC) == 4 )
      *((_BYTE *)v3 + 33) = 1;
    if ( (v9[14] & 3) == 1 )
      *((_BYTE *)v3 + 32) = 1;
    v3[6] = v9[12];
    v3[7] = v9[13];
    if ( v6 )
    {
      v3 = (_DWORD *)((char *)v3 + (unsigned int)v3[3]);
      v3[1] = 24;
      *v3 = 1;
    }
    else
    {
      v3[3] = 0;
    }
  }
  if ( v6 )
  {
    *((_QWORD *)v3 + 1) = 1LL;
    v3[4] = 24;
    v12 += 44;
    *(_QWORD *)(v3 + 5) = 0LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    *(_QWORD *)(v3 + 9) = 0LL;
    if ( v9[16] == 1 )
      v3[5] = 1;
    v3[6] = 0;
    if ( v9[18] == 1 )
      v3[7] = 1;
    v13 = v9[19];
    if ( v13 )
      v3[8] = v13;
    if ( (v9[20] & 3) == 1 )
      v3[9] |= 1u;
    if ( (v9[20] & 0xC) == 4 )
      v3[9] |= 2u;
    if ( (v9[20] & 0x30) == 0x10 )
      v3[9] |= 4u;
    v3[9] &= ~8u;
    if ( (v9[20] & 0x300) == 0x100 )
      v3[9] |= 0x10u;
    if ( (v9[20] & 0xC00) == 0x400 )
      v3[9] |= 0x20u;
    if ( (v9[21] & 3) == 1 )
      v3[10] |= 1u;
    if ( (v9[21] & 0xC) != 0 )
      v3[10] |= 2u;
    if ( (v9[21] & 0x30) == 0x10 )
      v3[10] |= 4u;
    if ( (v9[21] & 0x300) == 0x100 )
      v3[10] |= 0x10u;
    v3[10] &= ~0x20u;
    if ( (v9[21] & 0x3000) == 0x1000 )
      v3[10] |= 0x40u;
    if ( (v9[21] & 0xC000) == 0x4000 )
      v3[10] |= 0x80u;
LABEL_92:
    v3[3] = 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 4152) + 1164LL) = v12;
  if ( (unsigned __int8)v8 >= 4u )
    WPP_SF_q(0xC2u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1);
}
