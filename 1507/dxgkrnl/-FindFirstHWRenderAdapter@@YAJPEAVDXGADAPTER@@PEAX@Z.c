/*
 * XREFs of ?FindFirstHWRenderAdapter@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00BE510
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall FindFirstHWRenderAdapter(struct DXGADAPTER *this, DXGADAPTER **a2)
{
  DXGADAPTER *v4; // rcx
  int v5; // eax

  v4 = *a2;
  if ( (!*a2 || (*((_DWORD *)v4 + 71) & 1) == 0) && *((_DWORD *)this + 40) == 1 && !*((_BYTE *)this + 1909) )
  {
    if ( *((_QWORD *)this + 248) )
    {
      v5 = *((_DWORD *)this + 71);
      if ( (v5 & 8) == 0 )
      {
        if ( (v5 & 1) != 0 && v4 )
          DXGADAPTER::ReleaseReference(v4);
        DXGADAPTER::AcquireReference(this);
        *a2 = this;
      }
    }
  }
  return 0LL;
}
