/*
 * XREFs of ?redloop@@YAHXZ @ 0x1C0136B54
 * Callers:
 *     ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C01369C0 (-inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z.c)
 * Callees:
 *     ?greenloop@@YAHH@Z @ 0x1C0136CB0 (-greenloop@@YAHH@Z.c)
 */

__int64 redloop(void)
{
  unsigned int v0; // edi
  int v1; // r15d
  int v2; // esi
  __int64 v3; // r13
  int v4; // r12d
  int v5; // r14d
  __int64 v6; // rax
  int v7; // ecx
  int v8; // ebx
  int v9; // ebp
  __int64 v10; // rbp
  int v11; // esi
  int v12; // ebx
  __int64 v13; // r15
  int v14; // ecx
  bool i; // sf

  v0 = 0;
  v1 = dword_1C0329570;
  v2 = dword_1C0329570;
  v3 = qword_1C03295A0;
  v4 = dword_1C032957C;
  v5 = 2 * dword_1C03295CC;
  v6 = qword_1C03295B8;
  v7 = 1;
  v8 = dword_1C0329588;
  v9 = dword_1C0329588;
  qword_1C03295B0 = qword_1C03295B8;
  dword_1C0329578 = dword_1C032957C;
  qword_1C0329598 = qword_1C03295A0;
  if ( dword_1C0329570 >= dword_1C03295D0 )
    goto LABEL_8;
  while ( (unsigned int)greenloop(v7) )
  {
    v0 = 1;
LABEL_4:
    ++v2;
    dword_1C0329578 += v9;
    v9 += v5;
    qword_1C03295B0 += dword_1C03295C4;
    qword_1C0329598 += 4LL * dword_1C03295C4;
    v7 = 0;
    if ( v2 >= dword_1C03295D0 )
      goto LABEL_7;
  }
  if ( !v0 )
    goto LABEL_4;
LABEL_7:
  v6 = qword_1C03295B8;
LABEL_8:
  v10 = dword_1C03295C4;
  v11 = v1 - 1;
  v12 = v8 - v5;
  qword_1C03295B0 = v6 - dword_1C03295C4;
  dword_1C0329578 = v4 - v12;
  v13 = 4LL * dword_1C03295C4;
  v14 = 1;
  qword_1C0329598 = v3 - v13;
  for ( i = v11 < 0; ; i = v11 < 0 )
  {
    dword_1C03295D8 = v12;
    if ( i )
      break;
    if ( (unsigned int)greenloop(v14) )
    {
      v0 = 1;
    }
    else if ( v0 )
    {
      return v0;
    }
    qword_1C0329598 -= v13;
    v12 -= v5;
    dword_1C0329578 -= v12;
    v14 = 0;
    qword_1C03295B0 -= v10;
    --v11;
  }
  return v0;
}
