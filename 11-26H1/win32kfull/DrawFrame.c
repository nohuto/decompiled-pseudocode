/*
 * XREFs of DrawFrame @ 0x1402245C8
 * Callers:
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     xxxMNDrawFullNC @ 0x1402FA704 (xxxMNDrawFullNC.c)
 * Callees:
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 */

__int64 __fastcall DrawFrame(HDC a1, int *a2, int a3, int a4)
{
  int v5; // edi
  int v6; // esi
  int v7; // r14d
  unsigned int v8; // r12d
  __int64 v9; // rdx
  _DWORD v11[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+40h] [rbp-29h]
  int v13; // [rsp+48h] [rbp-21h]
  int v14; // [rsp+4Ch] [rbp-1Dh]
  int v15; // [rsp+50h] [rbp-19h]
  int v16; // [rsp+54h] [rbp-15h]
  __int64 v17; // [rsp+58h] [rbp-11h]
  int v18; // [rsp+60h] [rbp-9h]
  int v19; // [rsp+64h] [rbp-5h]
  int v20; // [rsp+68h] [rbp-1h]
  int v21; // [rsp+6Ch] [rbp+3h]
  __int64 v22; // [rsp+70h] [rbp+7h]
  int v23; // [rsp+78h] [rbp+Fh]
  int v24; // [rsp+7Ch] [rbp+13h]
  int v25; // [rsp+80h] [rbp+17h]
  int v26; // [rsp+84h] [rbp+1Bh]
  __int64 v27; // [rsp+88h] [rbp+1Fh]
  int v29; // [rsp+E0h] [rbp+77h]
  int v30; // [rsp+E8h] [rbp+7Fh]

  v5 = *a2;
  v6 = a2[1];
  v30 = a2[2] - a3;
  v7 = v30 - *a2;
  v29 = a2[3] - a3;
  v8 = (a4 & 4) != 0 ? 0xFF6A0028 : 0;
  if ( (a4 & 0xFFFFFFF8) == 0xF8 )
    v9 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 4944LL);
  else
    v9 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 8 * ((__int64)a4 >> 3) + 4696);
  v13 = v5 + a3;
  v19 = v29;
  v23 = v30;
  v12 = v9;
  v17 = v9;
  v22 = v9;
  v27 = v9;
  v24 = v6 + a3;
  v11[0] = v5;
  v11[1] = v6;
  v11[2] = a3;
  v11[3] = v29 - v6;
  v14 = v6;
  v15 = v7;
  v16 = a3;
  v18 = v5;
  v20 = v7;
  v21 = a3;
  v25 = a3;
  v26 = v29 - v6;
  GrePolyPatBlt(a1, v8 + 15728673, (struct _POLYPATBLT *)v11, 4);
  return 1LL;
}
