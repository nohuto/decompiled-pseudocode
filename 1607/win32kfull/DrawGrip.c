/*
 * XREFs of DrawGrip @ 0x1C00B12F4
 * Callers:
 *     DrawFrameControl @ 0x1C005F534 (DrawFrameControl.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C00399F8 (GreExtTextOutWInternal.c)
 *     GrePolyPatBlt @ 0x1C00AE914 (GrePolyPatBlt.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 */

__int64 __fastcall DrawGrip(HDC a1, int *a2, __int16 a3)
{
  int v3; // ebp
  int v5; // r8d
  int v6; // esi
  int v7; // r9d
  int v8; // r10d
  int v9; // eax
  int v11; // edx
  LONG v12; // esi
  LONG v13; // ebp
  __int64 v14; // rax
  int v15; // ebx
  int v16; // r14d
  int v17; // r15d
  _DWORD v19[4]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]

  v3 = a2[3];
  v5 = a2[1];
  v6 = a2[2];
  v7 = v3 - v5;
  v8 = *a2;
  v9 = v3 - v5;
  v11 = v6 - *a2;
  if ( v11 < v3 - v5 )
    v9 = v11;
  v12 = v6 - v9;
  v13 = v3 - v9;
  if ( (a3 & 0xC000) != 0 )
  {
    v15 = *(_DWORD *)(gpsi + 4984LL);
    v16 = v15;
    v14 = *(_QWORD *)(gpsi + 5128LL);
  }
  else
  {
    v14 = *(_QWORD *)(gpsi + 5208LL);
    v15 = *(_DWORD *)(gpsi + 5040LL);
    v16 = *(_DWORD *)(gpsi + 5024LL);
  }
  v19[1] = v5;
  v19[2] = v11;
  v19[3] = v7;
  v19[0] = v8;
  v20 = v14;
  GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v19, 1);
  v17 = GreSetTextColor(a1, v15);
  if ( (a3 & 0x10) != 0 )
  {
    GreExtTextOutWInternal(a1, v12, v13, 0, 0LL, L"x", 1, 0LL, 0LL, 0);
    GreSetTextColor(a1, v16);
    GreExtTextOutWInternal(a1, v12, v13, 0, 0LL, L"y", 1, 0LL, 0LL, 0);
  }
  else
  {
    GreExtTextOutWInternal(a1, v12, v13, 0, 0LL, L"o", 1, 0LL, 0LL, 0);
    GreSetTextColor(a1, v16);
    GreExtTextOutWInternal(a1, v12, v13, 0, 0LL, L"p", 1, 0LL, 0LL, 0);
  }
  GreSetTextColor(a1, v17);
  return 1LL;
}
