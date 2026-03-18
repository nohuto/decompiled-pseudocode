/*
 * XREFs of ?GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C016B8C4
 * Callers:
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall EDIDCACHE::GetEdids(EDIDCACHE *this, struct _D3DKMT_DXGK_DIAGNOSTICS *a2)
{
  struct DXGFASTMUTEX *v4; // rdx
  unsigned int v6; // edx
  EDIDCACHE *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  char *v10; // rbx
  unsigned int v11; // r9d
  unsigned int i; // r8d
  char *v13; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (struct DXGFASTMUTEX *)*((_QWORD *)this + 76);
  if ( !v4 )
    return 3221225659LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, v4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v6 = 0;
  v7 = this;
  v8 = 4LL;
  do
  {
    if ( *(_QWORD *)v7 )
      ++v6;
    v7 = (EDIDCACHE *)((char *)v7 + 152);
    --v8;
  }
  while ( v8 );
  if ( *(unsigned int *)a2 >= 152 * (unsigned __int64)v6 )
  {
    v10 = (char *)a2 + 4;
    v11 = 0;
    for ( i = 0; v11 < v6; ++i )
    {
      if ( i >= 4 )
        break;
      v13 = (char *)this + 152 * i;
      if ( *(_QWORD *)v13 )
      {
        *(_OWORD *)v10 = *(_OWORD *)v13;
        *((_OWORD *)v10 + 1) = *((_OWORD *)v13 + 1);
        *((_OWORD *)v10 + 2) = *((_OWORD *)v13 + 2);
        *((_OWORD *)v10 + 3) = *((_OWORD *)v13 + 3);
        *((_OWORD *)v10 + 4) = *((_OWORD *)v13 + 4);
        *((_OWORD *)v10 + 5) = *((_OWORD *)v13 + 5);
        *((_OWORD *)v10 + 6) = *((_OWORD *)v13 + 6);
        *((_OWORD *)v10 + 7) = *((_OWORD *)v13 + 7);
        *((_OWORD *)v10 + 8) = *((_OWORD *)v13 + 8);
        *((_QWORD *)v10 + 18) = *((_QWORD *)v13 + 18);
        v10 += 152;
        ++v11;
      }
    }
    v9 = 0;
  }
  else
  {
    *(_DWORD *)a2 = 152 * v6;
    v9 = 1075707914;
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return v9;
}
