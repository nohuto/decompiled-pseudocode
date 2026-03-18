/*
 * XREFs of ?UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C02064F8
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateMoveSizeDataForCancelation(struct _MOVESIZEDATA *a1)
{
  __int128 v1; // xmm0
  __int64 v2; // r9
  unsigned int v4; // ecx
  int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  int v8; // eax

  v1 = *(_OWORD *)((char *)a1 + 120);
  v2 = *((_QWORD *)a1 + 24);
  *((_QWORD *)a1 + 23) = v2;
  *(_OWORD *)((char *)a1 + 8) = v1;
  v4 = *((_DWORD *)a1 + 45);
  v5 = ((v4 ^ (v4 >> 5)) & 0x300) != 0 || *((_DWORD *)a1 + 54) != *((_DWORD *)a1 + 50);
  *((_DWORD *)a1 + 54) = *((_DWORD *)a1 + 50);
  *((_QWORD *)a1 + 26) = v2;
  v6 = v4 ^ (v4 ^ (v5 << 19)) & 0x80000 | 0x1000;
  v7 = ((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 5)) & 0x100 ^ v6;
  v8 = *((_DWORD *)a1 + 64);
  *((_DWORD *)a1 + 45) = (((unsigned __int16)v7 ^ (unsigned __int16)(v7 >> 5)) & 0x200 ^ v7) & 0xFFEFFFFF;
  *((_DWORD *)a1 + 64) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(2 * v8)) & 2;
}
