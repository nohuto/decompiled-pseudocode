/*
 * XREFs of FindOldMonitor @ 0x1C00912EC
 * Callers:
 *     ComputeProposedPerMonRect @ 0x1C0090C88 (ComputeProposedPerMonRect.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0090E2C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0091108 (xxxDeferWindowPosAndCheckPoint.c)
 * Callees:
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 */

__int64 __fastcall FindOldMonitor(int *a1, int *a2, int a3)
{
  int *v3; // rdi
  unsigned int v4; // esi
  unsigned int v5; // r15d
  int v6; // r12d
  unsigned int v7; // ebx
  int v8; // r13d
  int *v11; // r8
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  int v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+24h] [rbp-34h]
  int v18; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+2Ch] [rbp-2Ch]
  int v20; // [rsp+60h] [rbp+8h]

  v3 = a2 + 2;
  v4 = -1;
  v5 = 0;
  v6 = a1[2] - *a1;
  v7 = 0;
  v8 = a1[3] - a1[1];
  v20 = *a2;
  if ( *a2 <= 0 )
    return v4;
  while ( 1 )
  {
    if ( (unsigned int)(a3 + 1) <= 1 )
    {
      v11 = v3 + 8;
    }
    else if ( a3 == 1 )
    {
      v11 = v3 + 16;
    }
    else
    {
      v11 = v3;
    }
    if ( !(unsigned int)IntersectRect(&v16, a1, v11) )
      goto LABEL_6;
    v13 = v18 - v16;
    v14 = v19 - v17;
    v18 = v13;
    v19 -= v17;
    if ( v13 == v6 && v14 == v8 )
      return v7;
    v15 = v13 * v14;
    if ( v15 > v5 )
    {
      v5 = v15;
      v4 = v7;
    }
LABEL_6:
    v3 += 28;
    if ( (int)++v7 >= v20 )
      return v4;
  }
}
