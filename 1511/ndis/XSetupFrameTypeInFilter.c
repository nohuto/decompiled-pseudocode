/*
 * XREFs of XSetupFrameTypeInFilter @ 0x1C00E37F8
 * Callers:
 *     XNoteFilterOpenAdapter @ 0x1C001AA84 (XNoteFilterOpenAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall XSetupFrameTypeInFilter(__int64 a1, __int64 a2)
{
  char v4; // si
  char v5; // r10
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int16 v12; // r8
  __int64 v13; // rcx

  v4 = 0;
  v5 = byte_1C008370D;
  if ( (unsigned __int8)byte_1C008370D >= 4u )
  {
    WPP_SF_q(0xBu, &WPP_aa112ccb62b641732c8489d63791523f_Traceguids, a2);
    v5 = byte_1C008370D;
  }
  v6 = *(_DWORD *)(a2 + 248);
  if ( !v6 || (v7 = *(_DWORD *)(a1 + 24), v7 + v6 < v6) || v7 + v6 >= 0x10 )
  {
LABEL_21:
    *(_QWORD *)(a2 + 424) = *(_QWORD *)(a1 + 8);
    ++*(_DWORD *)(a1 + 320);
    *(_QWORD *)(a1 + 8) = a2;
    goto LABEL_17;
  }
  v8 = 0;
  if ( v7 )
  {
    do
    {
      v9 = 0LL;
      while ( *(_WORD *)(a2 + 2 * v9 + 252) != *(_WORD *)(a1 + 16LL * v8 + 32) )
      {
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= v6 )
          goto LABEL_10;
      }
      v4 = 1;
LABEL_10:
      if ( v4 == 1 )
        goto LABEL_21;
    }
    while ( ++v8 < v7 );
  }
  v10 = 0LL;
  do
  {
    v11 = *(unsigned int *)(a1 + 24);
    v12 = *(_WORD *)(a2 + 2 * v10 + 252);
    v13 = a1 + 16 * (v11 + 2);
    if ( v12 == 8 && (_DWORD)v11 )
    {
      *(_WORD *)v13 = *(_WORD *)(a1 + 32);
      *(_QWORD *)(v13 + 8) = *(_QWORD *)(a1 + 40);
      *(_WORD *)(a1 + 32) = 8;
      *(_QWORD *)(a1 + 40) = a2;
    }
    else
    {
      *(_WORD *)v13 = v12;
      *(_QWORD *)(v13 + 8) = a2;
    }
    ++*(_DWORD *)(a1 + 24);
    v10 = (unsigned int)(v10 + 1);
  }
  while ( (unsigned int)v10 < *(_DWORD *)(a2 + 248) );
  *(_QWORD *)(a2 + 424) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = a2;
LABEL_17:
  if ( (unsigned __int8)v5 >= 4u )
    WPP_SF_q(0xCu, &WPP_aa112ccb62b641732c8489d63791523f_Traceguids, a2);
}
