/*
 * XREFs of DxgkEngAccumD3DPresentBounds @ 0x1C02626A0
 * Callers:
 *     <none>
 * Callees:
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9F0 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C003A6FC (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

void __fastcall DxgkEngAccumD3DPresentBounds(HDC a1, int *a2)
{
  int v3; // r9d
  int v4; // r10d
  int v5; // r11d
  DC *v6; // rdx
  struct EPOINTL *v7; // rax
  int v8; // r8d
  int v9; // r8d
  int v10; // r10d
  int v11; // r10d
  int v12; // r9d
  int v13; // r11d
  int v14; // [rsp+20h] [rbp-20h] BYREF
  int v15; // [rsp+24h] [rbp-1Ch]
  int v16; // [rsp+28h] [rbp-18h]
  int v17; // [rsp+2Ch] [rbp-14h]
  _QWORD v18[2]; // [rsp+30h] [rbp-10h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v18, a1);
  if ( v18[0] )
  {
    v3 = a2[1];
    v4 = a2[2];
    v5 = a2[3];
    v14 = *a2;
    v15 = v3;
    v16 = v4;
    v17 = v5;
    if ( !ERECTL::bEmpty((ERECTL *)&v14) && (*((_DWORD *)v6 + 9) & 0xE0) != 0 )
    {
      v7 = DC::eptlOrigin(v6);
      v9 = v8 - *(_DWORD *)v7;
      v11 = v10 - *(_DWORD *)v7;
      LODWORD(v7) = *((_DWORD *)v7 + 1);
      v15 = v12 - (_DWORD)v7;
      v17 = v13 - (_DWORD)v7;
      v14 = v9;
      v16 = v11;
      XDCOBJ::vAccumulate((XDCOBJ *)v18, (struct ERECTL *)&v14);
    }
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v18);
}
