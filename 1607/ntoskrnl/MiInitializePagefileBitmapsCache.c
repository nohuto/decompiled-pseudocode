/*
 * XREFs of MiInitializePagefileBitmapsCache @ 0x140142D04
 * Callers:
 *     MiModifiedPageWriter @ 0x140142508 (MiModifiedPageWriter.c)
 *     MiRescanPagefileBitmaps @ 0x140142BA4 (MiRescanPagefileBitmaps.c)
 *     MiCreatePagefile @ 0x140568D38 (MiCreatePagefile.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

void __fastcall MiInitializePagefileBitmapsCache(__int64 a1)
{
  bool v1; // bl
  unsigned __int64 *v2; // r14
  unsigned __int64 *v3; // r12
  __int64 v4; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rbp
  _QWORD *v8; // rax
  bool v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax

  v1 = 0;
  v2 = (unsigned __int64 *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = 0LL;
  v3 = (unsigned __int64 *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0LL;
  v4 = a1 + 176;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 184) = a1 + 176;
  *(_QWORD *)(a1 + 176) = a1 + 176;
  v6 = *(_QWORD **)(a1 + 192);
  v7 = v6 + 3577;
  memset(v6, 0, 0x7000uLL);
  while ( v6 < v7 )
  {
    v8 = *(_QWORD **)(v4 + 8);
    if ( *v8 != v4 )
      __fastfail(3u);
    *v6 = v4;
    v6[1] = v8;
    *v8 = v6;
    *(_QWORD *)(v4 + 8) = v6;
    v6 += 7;
  }
  v9 = 0;
  *((_DWORD *)v6 + 13) = -1;
  *((_DWORD *)v6 + 12) = -1;
  v10 = *v2;
  if ( *v2 )
  {
    while ( *(_QWORD *)(v10 + 8) )
      v10 = *(_QWORD *)(v10 + 8);
    v9 = 1;
  }
  RtlRbInsertNodeEx(v2, v10, v9, (unsigned __int64)v6);
  v11 = *v3;
  if ( *v3 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v6 + 12) < *(_DWORD *)(v11 + 24) )
      {
        v12 = *(_QWORD *)v11;
        if ( !*(_QWORD *)v11 )
          break;
      }
      else
      {
        v12 = *(_QWORD *)(v11 + 8);
        if ( !v12 )
        {
          v1 = 1;
          break;
        }
      }
      v11 = v12;
    }
  }
  RtlRbInsertNodeEx(v3, v11, v1, (unsigned __int64)(v6 + 3));
  *(_DWORD *)(a1 + 140) = -1;
}
