/*
 * XREFs of cjBmfdDeviceMetrics @ 0x1C00A8AE4
 * Callers:
 *     BmfdQueryFontData @ 0x1C00A8EB8 (BmfdQueryFontData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cjBmfdDeviceMetrics(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // r11d
  int v5; // eax
  int v6; // ecx
  __int64 v7; // r10
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax

  v2 = *(_DWORD *)(a1 + 36);
  v3 = *(_DWORD *)(a1 + 40);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 38LL) & 1) != 0 )
  {
    *(_DWORD *)a2 = 0;
  }
  else
  {
    *(_DWORD *)a2 = 19;
    v5 = *(_DWORD *)(a1 + 32);
    v6 = *(_DWORD *)a2;
    if ( (v5 & 0x4000) == 0 )
      v6 = 31;
    *(_DWORD *)a2 = v6;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 80LL);
  v8 = *(_DWORD *)(a1 + 16);
  if ( v8 )
  {
    switch ( v8 )
    {
      case 900:
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)(a2 + 8) = -1082130432;
        *(_DWORD *)(a2 + 12) = -1082130432;
        *(_DWORD *)(a2 + 16) = 0;
        *(_DWORD *)(a2 + 24) = 16 * v3 * *(__int16 *)(v7 + 60);
        *(_DWORD *)(a2 + 28) = 16 * v3 * *(__int16 *)(v7 + 62);
        v19 = v3 * *(__int16 *)(v7 + 102);
        *(_DWORD *)(a2 + 36) = 0;
        *(_DWORD *)(a2 + 32) = -v19;
        *(_DWORD *)(a2 + 40) = -(v3 * *(__int16 *)(v7 + 106));
        if ( (*(_DWORD *)(a1 + 32) & 0x4000) != 0 )
        {
          v16 = -2;
          goto LABEL_27;
        }
        break;
      case 1800:
        *(_DWORD *)(a2 + 4) = -1082130432;
        *(_QWORD *)(a2 + 8) = 0LL;
        *(_DWORD *)(a2 + 16) = 1065353216;
        *(_DWORD *)(a2 + 24) = 16 * v3 * *(__int16 *)(v7 + 60);
        v17 = v3 * *(__int16 *)(v7 + 62);
        *(_DWORD *)(a2 + 32) = 0;
        *(_DWORD *)(a2 + 28) = 16 * v17;
        *(_DWORD *)(a2 + 36) = v3 * *(__int16 *)(v7 + 102);
        if ( (*(_DWORD *)(a1 + 32) & 0x4000) != 0 )
          v18 = *(__int16 *)(v7 + 106) / -2;
        else
          v18 = 0;
        *(_DWORD *)(a2 + 40) = v18;
        v11 = v3 * *(__int16 *)(v7 + 106);
        goto LABEL_9;
      case 2700:
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)(a2 + 8) = 1065353216;
        *(_QWORD *)(a2 + 12) = 1065353216LL;
        *(_DWORD *)(a2 + 24) = 16 * v3 * *(__int16 *)(v7 + 60);
        *(_DWORD *)(a2 + 28) = 16 * v3 * *(__int16 *)(v7 + 62);
        v15 = v3 * *(__int16 *)(v7 + 102);
        *(_DWORD *)(a2 + 36) = 0;
        *(_DWORD *)(a2 + 32) = v15;
        *(_DWORD *)(a2 + 40) = v3 * *(__int16 *)(v7 + 106);
        if ( (*(_DWORD *)(a1 + 32) & 0x4000) != 0 )
        {
          v16 = 2;
LABEL_27:
          v20 = *(__int16 *)(v7 + 106) / v16;
LABEL_29:
          *(_DWORD *)(a2 + 44) = v20;
          v21 = v3 * *(__int16 *)(v7 + 100);
          *(_DWORD *)(a2 + 52) = 0;
          *(_DWORD *)(a2 + 48) = v21;
          *(_QWORD *)(a2 + 56) = (unsigned int)(v3 * *(__int16 *)(v7 + 104));
          goto LABEL_10;
        }
        break;
      default:
        goto LABEL_10;
    }
    v20 = 0;
    goto LABEL_29;
  }
  *(_QWORD *)(a2 + 4) = 1065353216LL;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = -1082130432;
  *(_DWORD *)(a2 + 24) = 16 * v3 * *(__int16 *)(v7 + 60);
  v9 = v3 * *(__int16 *)(v7 + 62);
  *(_DWORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 28) = 16 * v9;
  *(_DWORD *)(a2 + 36) = -(v3 * *(__int16 *)(v7 + 102));
  if ( (*(_DWORD *)(a1 + 32) & 0x4000) != 0 )
    v10 = *(__int16 *)(v7 + 106) / 2;
  else
    v10 = 0;
  *(_DWORD *)(a2 + 40) = v10;
  v11 = -(v3 * *(__int16 *)(v7 + 106));
LABEL_9:
  *(_DWORD *)(a2 + 44) = v11;
  *(_DWORD *)(a2 + 48) = 0;
  v12 = v3 * *(__int16 *)(v7 + 100);
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 52) = v12;
  *(_DWORD *)(a2 + 60) = v3 * *(__int16 *)(v7 + 104);
LABEL_10:
  *(_DWORD *)(a2 + 20) = 0;
  if ( (*(_DWORD *)(v7 + 48) & 0x1000) != 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 38LL) & 1) == 0 )
  {
    v13 = v2 * *(__int16 *)(v7 + 78);
    *(_DWORD *)(a2 + 20) = v13;
    if ( (*(_DWORD *)(a1 + 32) & 0x2000) != 0 )
      *(_DWORD *)(a2 + 20) = v13 + 1;
  }
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a2 + 68) = *(_DWORD *)(a1 + 48) / ((unsigned int)(*(_DWORD *)(a1 + 44) + 7) >> 3);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 48);
  return 124LL;
}
