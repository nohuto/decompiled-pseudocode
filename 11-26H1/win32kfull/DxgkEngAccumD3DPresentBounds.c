/*
 * XREFs of DxgkEngAccumD3DPresentBounds @ 0x140041200
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x140015860 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14004129C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 */

void __fastcall DxgkEngAccumD3DPresentBounds(HDC a1, int *a2)
{
  int v3; // edx
  int v4; // r9d
  int v5; // r10d
  int v6; // r11d
  __int64 v7; // rcx
  int v8; // eax
  int v9; // r11d
  int v10; // eax
  _DWORD v11[4]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v12[9]; // [rsp+30h] [rbp-48h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v12, a1);
  if ( v12[0] )
  {
    v3 = a2[1];
    v4 = a2[3];
    v5 = *a2;
    v6 = a2[2];
    if ( v3 != v4 && v5 != v6 && (*(_DWORD *)(v12[0] + 36LL) & 0xE0) != 0 )
    {
      v7 = *(_DWORD *)(v12[0] + 40LL) & 1;
      v8 = *(_DWORD *)(v12[0] + 8 * v7 + 1016);
      v9 = v6 - v8;
      v11[0] = v5 - v8;
      v10 = *(_DWORD *)(v12[0] + 8 * v7 + 1020);
      v11[1] = v3 - v10;
      v11[2] = v9;
      v11[3] = v4 - v10;
      XDCOBJ::vAccumulate((XDCOBJ *)v12, (struct ERECTL *)v11);
    }
  }
  DCOBJA::~DCOBJA((DCOBJA *)v12);
}
