/*
 * XREFs of ?vDownload@RGNOBJ@@QEAAXPEAX@Z @ 0x1C0084F80
 * Callers:
 *     GreGetRegionData @ 0x1C0084E70 (GreGetRegionData.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C00BE0AC (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vDownload(RGNOBJ *this, _OWORD *a2)
{
  int v3; // r9d
  unsigned int *v4; // r8
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int128 v7; // [rsp+0h] [rbp-18h]

  v3 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  v4 = (unsigned int *)(*(_QWORD *)this + 104LL);
  while ( v3 )
  {
    --v3;
    v5 = 0;
    DWORD1(v7) = v4[1];
    for ( HIDWORD(v7) = v4[2]; v5 < *v4; ++a2 )
    {
      v6 = (int)v5;
      v5 += 2;
      LODWORD(v7) = v4[v6 + 3];
      DWORD2(v7) = v4[v6 + 4];
      *a2 = v7;
    }
    v4 += *v4 + 4;
  }
}
