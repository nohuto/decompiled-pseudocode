/*
 * XREFs of ?SetExcludeSubtree@CVisualGroup@@QEAAX_N@Z @ 0x1800F91D0
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B7D20 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisualGroup::SetExcludeSubtree(CVisualGroup *this, char a2)
{
  __int64 v2; // r8
  unsigned int v5; // ebx
  char v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rdx
  char v9; // r9
  __int64 v10; // rdx

  v2 = 0LL;
  v5 = 0;
  if ( *((_DWORD *)this + 10) )
  {
    v6 = 16 * (a2 & 1);
    do
    {
      v7 = v5++;
      v8 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v7);
      *(_BYTE *)(v8 + 74) = v6 | *(_BYTE *)(v8 + 74) & 0xEF;
    }
    while ( v5 < *((_DWORD *)this + 10) );
  }
  if ( *((_DWORD *)this + 14) )
  {
    v9 = 16 * (a2 & 1);
    do
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v2);
      v2 = (unsigned int)(v2 + 1);
      *(_BYTE *)(v10 + 74) = v9 | *(_BYTE *)(v10 + 74) & 0xEF;
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 14) );
  }
}
