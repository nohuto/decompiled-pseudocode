/*
 * XREFs of ?redloop@@YAHXZ @ 0x1C0102398
 * Callers:
 *     ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C0102204 (-inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z.c)
 * Callees:
 *     ?greenloop@@YAHH@Z @ 0x1C01024E0 (-greenloop@@YAHH@Z.c)
 */

__int64 redloop(void)
{
  unsigned int v0; // edi
  int v1; // r13d
  int v2; // esi
  __int64 v3; // r12
  int v4; // r15d
  int v5; // ebx
  int v6; // r14d
  int v7; // ebp
  int v8; // ecx
  int v9; // ebx
  int v10; // esi
  bool v11; // sf
  int i; // ecx

  v0 = 0;
  v1 = dword_1C03231F0;
  v2 = dword_1C03231F0;
  v3 = qword_1C0323220;
  v4 = dword_1C03231FC;
  v5 = dword_1C0323208;
  v6 = 2 * dword_1C032324C;
  v7 = dword_1C0323208;
  qword_1C0323230 = qword_1C0323238;
  v8 = 1;
  dword_1C03231F8 = dword_1C03231FC;
  for ( qword_1C0323218 = qword_1C0323220; v2 < 32; v8 = 0 )
  {
    if ( (unsigned int)greenloop(v8) )
    {
      v0 = 1;
    }
    else if ( v0 )
    {
      break;
    }
    dword_1C03231F8 += v7;
    ++v2;
    qword_1C0323218 += 4096LL;
    v7 += v6;
    qword_1C0323230 += 1024LL;
  }
  v9 = v5 - v6;
  qword_1C0323218 = v3 - 4096;
  v10 = v1 - 1;
  dword_1C03231F8 = v4 - v9;
  qword_1C0323230 = qword_1C0323238 - 1024;
  v11 = v1 - 1 < 0;
  for ( i = 1; ; i = 0 )
  {
    dword_1C0323258 = v9;
    if ( v11 )
      break;
    if ( (unsigned int)greenloop(i) )
    {
      v0 = 1;
    }
    else if ( v0 )
    {
      return v0;
    }
    qword_1C0323218 -= 4096LL;
    v9 -= v6;
    dword_1C03231F8 -= v9;
    qword_1C0323230 -= 1024LL;
    v11 = --v10 < 0;
  }
  return v0;
}
