/*
 * XREFs of ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C006FDBC
 * Callers:
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C006FE20 (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 * Callees:
 *     ?vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z @ 0x1C006FFB8 (-vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z.c)
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C0081300 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

void __fastcall EPATHOBJ::growlastrec(
        EPATHOBJ *this,
        struct EXFORMOBJ *a2,
        struct _PATHDATAL *a3,
        struct _POINTFIX *a4)
{
  __int64 v4; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  int v10; // r8d
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  struct _POINTL *v14; // rdx
  struct _POINTFIX *v15; // rdx
  struct _POINTFIX *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax

  v4 = *((_QWORD *)this + 1);
  v8 = *(_QWORD *)(v4 + 40);
  v9 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    if ( v9 )
    {
      v10 = *(_DWORD *)a3;
      if ( v10 == (*(_DWORD *)(v8 + 16) & 0xFFFFFFFC) )
      {
        LODWORD(v11) = 0;
        v12 = v8 + 8 * (*(unsigned int *)(v8 + 20) + 3LL);
        v13 = v9 + *(unsigned int *)(v9 + 16);
        if ( v13 > v12 )
          v11 = (__int64)(v13 - v12) >> 3;
        if ( (unsigned int)v11 > *((_DWORD *)a3 + 1) )
          LODWORD(v11) = *((_DWORD *)a3 + 1);
        if ( (v10 & 0x10) != 0 )
          LODWORD(v11) = 3 * ((unsigned int)v11 / 3);
        if ( (_DWORD)v11 )
        {
          v14 = (struct _POINTL *)*((_QWORD *)a3 + 1);
          if ( a2 )
            EXFORMOBJ::bXformRound(
              a2,
              v14,
              (struct _POINTFIX *)(v8 + 8 * (*(unsigned int *)(v8 + 20) + 3LL)),
              (unsigned int)v11);
          else
            memmove((void *)(v8 + 8 * (*(unsigned int *)(v8 + 20) + 3LL)), v14, 8LL * (unsigned int)v11);
          v15 = (struct _POINTFIX *)(v8 + 8 * (*(unsigned int *)(v8 + 20) + 3LL));
          do
          {
            ERECTFX::vInclude((ERECTFX *)(*((_QWORD *)this + 1) + 48LL), v15);
            v15 = v16 + 1;
          }
          while ( v17 != 1 );
          *(_DWORD *)(v8 + 20) += v11;
          v18 = *(unsigned int *)(v8 + 20);
          *((_DWORD *)a3 + 1) -= v11;
          *(_QWORD *)(v9 + 8) = v8 + 8 * (v18 + 3);
          *((_QWORD *)a3 + 1) += 8LL * (unsigned int)v11;
        }
      }
    }
  }
}
