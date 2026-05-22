/*
 * XREFs of ?IsSameByInputDest@DWMInputTarget@@UEBA_NAEBUtagINPUTDEST@@@Z @ 0x18001A950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DWMInputTarget::IsSameByInputDest(DWMInputTarget *this, const struct tagINPUTDEST *a2)
{
  if ( !*((_DWORD *)this + 33) && !*((_DWORD *)this + 32) && !*(_QWORD *)((char *)a2 + 4) )
    return operator==((__int64)a2 + 40, (__int64)this + 80);
  return *((_DWORD *)this + 33) == *((_DWORD *)a2 + 2) && *((_DWORD *)this + 32) == *((_DWORD *)a2 + 1);
}
