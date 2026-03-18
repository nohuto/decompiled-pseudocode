/*
 * XREFs of ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C0035A5C
 * Callers:
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00494F4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall XEBRUSHOBJ::RestoreAttributes(XEBRUSHOBJ *this)
{
  __int64 v2; // rcx

  if ( *((_DWORD *)this + 2) )
  {
    v2 = *(_QWORD *)this;
    if ( *(_QWORD *)(v2 + 56) == v2 + 72 )
    {
      **(_QWORD **)(v2 + 64) = *(_QWORD *)(v2 + 72);
      *(_QWORD *)(*(_QWORD *)this + 56LL) = *(_QWORD *)(*(_QWORD *)this + 64LL);
    }
  }
  *((_DWORD *)this + 2) = 0;
}
