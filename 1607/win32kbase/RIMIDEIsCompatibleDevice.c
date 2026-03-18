/*
 * XREFs of RIMIDEIsCompatibleDevice @ 0x1C00D6E20
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C007F528 (RIMIDEAdoptOrphanedRimDevs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDEIsCompatibleDevice(__int64 a1, __int64 a2)
{
  char v2; // al
  unsigned int v3; // r9d
  int v5; // r8d
  int v6; // ecx

  v2 = *(_BYTE *)(a2 + 48);
  v3 = 0;
  v5 = 16;
  switch ( v2 )
  {
    case 0:
      v5 = 1;
LABEL_11:
      LOBYTE(v3) = (v5 & *(_DWORD *)(a1 + 76)) != 0;
      return v3;
    case 1:
      v5 = 2;
      goto LABEL_11;
    case 2:
      v6 = *(_DWORD *)(*(_QWORD *)(a2 + 480) + 24LL);
      if ( (unsigned int)(v6 - 5) <= 1 )
      {
        v5 = 4;
        goto LABEL_11;
      }
      if ( v6 == 7 )
      {
        v5 = 8;
        goto LABEL_11;
      }
      if ( (unsigned int)(v6 - 1) <= 3 )
        goto LABEL_11;
      break;
  }
  return 0LL;
}
