/*
 * XREFs of ?RemoveDesktopRenderTarget@CComposition@@QEAAXPEAVCDesktopRenderTarget@@@Z @ 0x180117054
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CComposition::RemoveDesktopRenderTarget(CComposition *this, struct CDesktopRenderTarget *a2)
{
  unsigned int v2; // r8d
  char *v5; // rdx
  __int64 v6; // r11
  unsigned int v7; // ecx
  __int64 v8; // rcx

  v2 = 0;
  if ( a2 )
    v5 = (char *)a2 + 152;
  else
    v5 = 0LL;
  v6 = *((_QWORD *)this + 66);
  v7 = *((_DWORD *)this + 138);
  if ( v7 )
  {
    do
    {
      if ( v5 == *(char **)(v6 + 8LL * v2) )
        break;
      ++v2;
    }
    while ( v2 < v7 );
  }
  if ( v2 < v7 )
  {
    if ( v2 < v7 - 1 )
    {
      do
      {
        v8 = v2++;
        *(_QWORD *)(v6 + 8 * v8) = *(_QWORD *)(v6 + 8LL * v2);
      }
      while ( v2 < *((_DWORD *)this + 138) - 1 );
    }
    --*((_DWORD *)this + 138);
    CMILCOMBase::InternalRelease(a2);
  }
}
