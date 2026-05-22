/*
 * XREFs of ?Process2DInput@MPCMouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180041B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCMouseProcessor::Process2DInput(MPCMouseProcessor *this, struct InputInfo *a2)
{
  __int16 v2; // ax

  v2 = *((_WORD *)a2 + 354);
  if ( (v2 & 1) != 0 )
    *((_DWORD *)this + 75) |= 1u;
  if ( (v2 & 2) != 0 )
    *((_DWORD *)this + 75) &= ~1u;
  if ( (v2 & 4) != 0 )
    *((_DWORD *)this + 75) |= 2u;
  if ( (v2 & 8) != 0 )
    *((_DWORD *)this + 75) &= ~2u;
  if ( (v2 & 0x10) != 0 )
    *((_DWORD *)this + 75) |= 4u;
  if ( (v2 & 0x20) != 0 )
    *((_DWORD *)this + 75) &= ~4u;
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 48LL))(*((_QWORD *)this + 21));
}
