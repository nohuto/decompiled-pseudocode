/*
 * XREFs of RtlIoDecodeMemIoResource @ 0x1800E8E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlIoDecodeMemIoResource(__int64 a1, unsigned __int64 *a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rcx

  v5 = 0LL;
  v6 = 0LL;
  if ( ((*(_BYTE *)(a1 + 1) - 1) & 0xFD) != 0 )
  {
    if ( (*(_WORD *)(a1 + 4) & 0x200) != 0 )
    {
      v5 = (unsigned __int64)*(unsigned int *)(a1 + 8) << 8;
      v6 = (unsigned __int64)*(unsigned int *)(a1 + 12) << 8;
    }
    else if ( (*(_WORD *)(a1 + 4) & 0x400) != 0 )
    {
      v5 = (unsigned __int64)*(unsigned int *)(a1 + 8) << 16;
      v6 = (unsigned __int64)*(unsigned int *)(a1 + 12) << 16;
    }
    else if ( (*(_WORD *)(a1 + 4) & 0x800) != 0 )
    {
      v5 = (unsigned __int64)*(unsigned int *)(a1 + 8) << 32;
      v6 = (unsigned __int64)*(unsigned int *)(a1 + 12) << 32;
    }
  }
  else
  {
    v5 = *(unsigned int *)(a1 + 8);
    v6 = *(unsigned int *)(a1 + 12);
  }
  if ( a2 )
    *a2 = v6;
  if ( a3 )
    *a3 = *(_QWORD *)(a1 + 16);
  if ( a4 )
    *a4 = *(_QWORD *)(a1 + 24);
  return v5;
}
