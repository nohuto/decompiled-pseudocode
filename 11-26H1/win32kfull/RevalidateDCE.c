/*
 * XREFs of RevalidateDCE @ 0x1400137B0
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UpdateRedirectedDCE @ 0x14012EAA0 (UpdateRedirectedDCE.c)
 *     DeleteHrgnClip @ 0x1401E2400 (DeleteHrgnClip.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1402FA3AC (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     InvalidateDCE @ 0x14001386C (InvalidateDCE.c)
 */

__int64 __fastcall RevalidateDCE(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r11
  int v6; // r10d
  __int64 v8; // rcx

  v1 = (_DWORD *)(a1 + 48);
  v3 = *(unsigned int *)(a1 + 48);
  if ( (v3 & 0x1000) == 0 )
    return InvalidateDCE(a1, v3, v1, a1);
  v4 = *(_QWORD *)(a1 + 80);
  if ( (int)v3 >= 0 )
  {
    LODWORD(v3) = v3 & 0xFFFFFFE7;
    v5 = v4 + 40;
    *v1 = v3;
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v4 + 136) + 8LL) + 8LL) >= 0
      || (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 40LL),
          ((*(_BYTE *)(*(_QWORD *)v5 + 31LL) ^ *(_BYTE *)(v8 + 31)) & 0x10) != 0) )
    {
      v6 = v3;
      if ( (*(_BYTE *)(*(_QWORD *)v5 + 31LL) & 0x22) == 2 )
      {
        v6 = v3 | 8;
        *v1 = v3 | 8;
        v1 = (_DWORD *)(a1 + 48);
      }
      LODWORD(v3) = v6;
      if ( (*(_BYTE *)(*(_QWORD *)v5 + 31LL) & 4) != 0 )
        LODWORD(v3) = v6 | 0x10;
    }
    else if ( (*(_BYTE *)(v8 + 31) & 4) != 0 )
    {
      LODWORD(v3) = v3 | 0x10;
      *v1 = v3;
      v1 = (_DWORD *)(a1 + 48);
    }
  }
  *v1 = v3 | 0x2000;
  return UserSetDCVisRgn(a1);
}
