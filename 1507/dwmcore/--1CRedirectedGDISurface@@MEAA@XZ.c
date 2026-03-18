/*
 * XREFs of ??1CRedirectedGDISurface@@MEAA@XZ @ 0x1800621FC
 * Callers:
 *     ??_ECRedirectedGDISurface@@MEAAPEAXI@Z @ 0x1800620E0 (--_ECRedirectedGDISurface@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRedirectedGDISurface::~CRedirectedGDISurface(CRedirectedGDISurface *this)
{
  bool v1; // zf
  __int64 v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rax
  _QWORD Buffer[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_BYTE *)this + 49) == 0;
  *(_QWORD *)this = &CRedirectedGDISurface::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CRedirectedGDISurface::`vftable'{for `IMilRedirectedGDISurface'};
  if ( !v1 )
    DwmHLSurfCloseCompositorRef(*((_QWORD *)this + 4));
  if ( *((_BYTE *)this + 48) )
  {
    v3 = *((_QWORD *)this + 3);
    v4 = *((_QWORD *)this + 5);
    Buffer[0] = *((_QWORD *)this + 4);
    v5 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v3 + 8), Buffer);
    if ( v5 )
    {
      if ( v5[2] == v4 )
        RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(v3 + 8), v5);
    }
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
