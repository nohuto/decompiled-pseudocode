/*
 * XREFs of ?HrFindInterface@CRedirectedGDISurface@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015AA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRedirectedGDISurface::HrFindInterface(
        CRedirectedGDISurface *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  char *v5; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IMilRedirectedGDISurface.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IMilRedirectedGDISurface.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IMilRedirectedGDISurface.Data4;
    if ( v4 )
    {
      return 2147500034LL;
    }
    else
    {
      if ( this )
        v5 = (char *)this + 16;
      else
        v5 = 0LL;
      *a3 = v5;
      return 0LL;
    }
  }
  return result;
}
