/*
 * XREFs of ?DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C0220BF4
 * Callers:
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C0220AAC (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 * Callees:
 *     _TTPixelsToHm @ 0x1C0248FA8 (_TTPixelsToHm.c)
 */

_BOOL8 __fastcall DoesPointSnapToBorder(struct tagWND *a1, struct tagTOUCHTARGETINGCONTACT *a2, struct tagPOINT a3)
{
  unsigned int v3; // edi
  int v5; // r10d
  __int64 v6; // r11
  __int64 v7; // r11
  LONG y; // [rsp+44h] [rbp+1Ch]

  y = a3.y;
  v3 = *((_DWORD *)a2 + 46);
  return (int)TTPixelsToHm(abs32(a3.x - *((_DWORD *)a1 + 32)), v3) < 120
      || (int)TTPixelsToHm(abs32(v5 - *(_DWORD *)(v6 + 136)), v3) < 120
      || (int)TTPixelsToHm(abs32(y - *(_DWORD *)(v7 + 140)), *((unsigned int *)a2 + 47)) < 120;
}
