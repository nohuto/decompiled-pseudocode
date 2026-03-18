/*
 * XREFs of cjBmfdDeviceMetrics @ 0x1C0018140
 * Callers:
 *     BmfdQueryFontData @ 0x1C0018508 (BmfdQueryFontData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cjBmfdDeviceMetrics(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // r10d
  int v5; // eax
  __int64 v6; // r8
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax

  v2 = *(_DWORD *)(a1 + 36);
  v3 = *(_DWORD *)(a1 + 40);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 38LL) & 1) != 0 )
  {
    *(_DWORD *)a2 = 0;
  }
  else
  {
    *(_DWORD *)a2 = 19;
    v5 = *(_DWORD *)a2;
    if ( (*(_DWORD *)(a1 + 32) & 0x4000) == 0 )
      v5 = 31;
    *(_DWORD *)a2 = v5;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 80LL);
  v7 = *(_DWORD *)(a1 + 16);
  if ( v7 )
  {
    switch ( v7 )
    {
      case 900:
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)(a2 + 8) = -1082130432;
        *(_DWORD *)(a2 + 12) = -1082130432;
        *(_DWORD *)(a2 + 16) = 0;
        *(_DWORD *)(a2 + 24) = 16 * v3 * *(__int16 *)(v6 + 60);
        *(_DWORD *)(a2 + 28) = 16 * v3 * *(__int16 *)(v6 + 62);
        v18 = v3 * *(__int16 *)(v6 + 102);
        *(_DWORD *)(a2 + 36) = 0;
        *(_DWORD *)(a2 + 32) = -v18;
        *(_DWORD *)(a2 + 40) = -(v3 * *(__int16 *)(v6 + 106));
        if ( (*(_DWORD *)(a1 + 32) & 0x4000) != 0 )
        {
          v15 = -2;
          goto LABEL_27;
        }
        break;
      case 1800:
        *(_DWORD *)(a2 + 4) = -1082130432;
        *(_QWORD *)(a2 + 8) = 0LL;
        *(_DWORD *)(a2 + 16) = 1065353216;
        *(_DWORD *)(a2 + 24) = 16 * v3 * *(__int16 *)(v6 + 60);
        v16 = v3 * *(__int16 *)(v6 + 62);
        *(_DWORD *)(a2 + 32) = 0;
        *(_DWORD *)(a2 + 28) = 16 * v16;
        *(_DWORD *)(a2 + 36) = v3 * *(__int16 *)(v6 + 102);
        if ( (*(_DWORD *)(a1 + 32) & 0x4000) != 0 )
          v17 = *(__int16 *)(v6 + 106) / -2;
        else
          v17 = 0;
        *(_DWORD *)(a2 + 40) = v17;
        v10 = v3 * *(__int16 *)(v6 + 106);
        goto LABEL_9;
      case 2700:
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)(a2 + 8) = 1065353216;
        *(_QWORD *)(a2 + 12) = 1065353216LL;
        *(_DWORD *)(a2 + 24) = 16 * v3 * *(__int16 *)(v6 + 60);
        *(_DWORD *)(a2 + 28) = 16 * v3 * *(__int16 *)(v6 + 62);
        v14 = v3 * *(__int16 *)(v6 + 102);
        *(_DWORD *)(a2 + 36) = 0;
        *(_DWORD *)(a2 + 32) = v14;
        *(_DWORD *)(a2 + 40) = v3 * *(__int16 *)(v6 + 106);
        if ( (*(_DWORD *)(a1 + 32) & 0x4000) != 0 )
        {
          v15 = 2;
LABEL_27:
          v19 = *(__int16 *)(v6 + 106) / v15;
LABEL_29:
          *(_DWORD *)(a2 + 44) = v19;
          v20 = v3 * *(__int16 *)(v6 + 100);
          *(_DWORD *)(a2 + 52) = 0;
          *(_DWORD *)(a2 + 48) = v20;
          *(_QWORD *)(a2 + 56) = (unsigned int)(v3 * *(__int16 *)(v6 + 104));
          goto LABEL_10;
        }
        break;
      default:
        goto LABEL_10;
    }
    v19 = 0;
    goto LABEL_29;
  }
  *(_QWORD *)(a2 + 4) = 1065353216LL;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = -1082130432;
  *(_DWORD *)(a2 + 24) = 16 * v3 * *(__int16 *)(v6 + 60);
  v8 = v3 * *(__int16 *)(v6 + 62);
  *(_DWORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 28) = 16 * v8;
  *(_DWORD *)(a2 + 36) = -(v3 * *(__int16 *)(v6 + 102));
  if ( (*(_DWORD *)(a1 + 32) & 0x4000) != 0 )
    v9 = *(__int16 *)(v6 + 106) / 2;
  else
    v9 = 0;
  *(_DWORD *)(a2 + 40) = v9;
  v10 = -(v3 * *(__int16 *)(v6 + 106));
LABEL_9:
  *(_DWORD *)(a2 + 44) = v10;
  *(_DWORD *)(a2 + 48) = 0;
  v11 = v3 * *(__int16 *)(v6 + 100);
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 52) = v11;
  *(_DWORD *)(a2 + 60) = v3 * *(__int16 *)(v6 + 104);
LABEL_10:
  *(_DWORD *)(a2 + 20) = 0;
  if ( (*(_DWORD *)(v6 + 48) & 0x1000) != 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 38LL) & 1) == 0 )
  {
    v13 = v2 * *(__int16 *)(v6 + 78);
    *(_DWORD *)(a2 + 20) = v13;
    if ( (*(_DWORD *)(a1 + 32) & 0x2000) != 0 )
      *(_DWORD *)(a2 + 20) = v13 + 1;
  }
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a2 + 68) = *(_DWORD *)(a1 + 48) / ((unsigned int)(*(_DWORD *)(a1 + 44) + 7) >> 3);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 48);
  return 124LL;
}
