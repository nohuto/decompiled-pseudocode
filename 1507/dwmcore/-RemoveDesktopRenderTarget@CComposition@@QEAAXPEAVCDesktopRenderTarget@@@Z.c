/*
 * XREFs of ?RemoveDesktopRenderTarget@CComposition@@QEAAXPEAVCDesktopRenderTarget@@@Z @ 0x1800E3AA8
 * Callers:
 *     ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x180068B54 (-Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_C.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
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
    v5 = (char *)a2 + 80;
  else
    v5 = 0LL;
  v6 = *((_QWORD *)this + 65);
  v7 = *((_DWORD *)this + 136);
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
      while ( v2 < *((_DWORD *)this + 136) - 1 );
    }
    --*((_DWORD *)this + 136);
    CMILCOMBase::InternalRelease(a2);
  }
}
