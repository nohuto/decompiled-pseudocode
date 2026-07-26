/*
 * XREFs of ndisCopyNdisOffload @ 0x1C001F4CC
 * Callers:
 *     ndisQueryFilterOffloadCaps @ 0x1C004307C (ndisQueryFilterOffloadCaps.c)
 *     ndisQueryMiniportOffloadCaps @ 0x1C0043144 (ndisQueryMiniportOffloadCaps.c)
 *     ndisOidPreOffloadHwCaps @ 0x1C00B0EA0 (ndisOidPreOffloadHwCaps.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisCopyNdisOffload(__int64 a1, __int64 a2, unsigned int a3, int *a4)
{
  int v5; // ecx
  __int128 v6; // xmm0
  __int64 v7; // rdx
  int v8; // eax

  v5 = 177;
  if ( a3 >= 0xB1 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
    v6 = *(_OWORD *)(a2 + 112);
    v7 = a2 + 128;
    *(_OWORD *)(a1 + 112) = v6;
    *(_OWORD *)(a1 + 128) = *(_OWORD *)v7;
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(v7 + 16);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(v7 + 32);
    LOBYTE(v8) = *(_BYTE *)(v7 + 48);
    *(_BYTE *)(a1 + 176) = v8;
    *(_BYTE *)(a1 + 1) = 4;
LABEL_3:
    *(_WORD *)(a1 + 2) = v5;
    *a4 = v5;
    return v8;
  }
  if ( a3 >= 0x9C )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
    *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
    v8 = *(_DWORD *)(a2 + 152);
    *(_DWORD *)(a1 + 152) = v8;
    *(_BYTE *)(a1 + 1) = 3;
    *(_WORD *)(a1 + 2) = 156;
    *a4 = 156;
    return v8;
  }
  v5 = 144;
  if ( a3 >= 0x90 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
    *(_BYTE *)(a1 + 1) = 2;
    goto LABEL_3;
  }
  LOBYTE(v8) = 112;
  if ( a3 < 0x70 )
  {
    *a4 = 0;
  }
  else
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
    *(_BYTE *)(a1 + 1) = 1;
    *(_WORD *)(a1 + 2) = 112;
    *a4 = 112;
  }
  return v8;
}
