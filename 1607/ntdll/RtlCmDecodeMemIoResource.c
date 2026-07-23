/*
 * XREFs of RtlCmDecodeMemIoResource @ 0x1800E8C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlCmDecodeMemIoResource(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8

  v2 = 0LL;
  if ( ((*(_BYTE *)a1 - 1) & 0xFD) != 0 )
  {
    if ( (*(_WORD *)(a1 + 2) & 0x200) != 0 )
    {
      v2 = (unsigned __int64)*(unsigned int *)(a1 + 12) << 8;
    }
    else if ( (*(_WORD *)(a1 + 2) & 0x400) != 0 )
    {
      v2 = (unsigned __int64)*(unsigned int *)(a1 + 12) << 16;
    }
    else if ( (*(_WORD *)(a1 + 2) & 0x800) != 0 )
    {
      v2 = (unsigned __int64)*(unsigned int *)(a1 + 12) << 32;
    }
  }
  else
  {
    v2 = *(unsigned int *)(a1 + 12);
  }
  if ( a2 )
    *a2 = *(_QWORD *)(a1 + 4);
  return v2;
}
