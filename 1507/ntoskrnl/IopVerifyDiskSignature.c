/*
 * XREFs of IopVerifyDiskSignature @ 0x14058F2AC
 * Callers:
 *     IopCreateArcName @ 0x14058ED40 (IopCreateArcName.c)
 *     IopGetBootDiskInformation @ 0x1407F94BC (IopGetBootDiskInformation.c)
 * Callees:
 *     <none>
 */

char __fastcall IopVerifyDiskSignature(int *a1, __int64 a2, _DWORD *a3)
{
  int v4; // ecx
  int v5; // eax
  __int64 v7; // rcx

  if ( *(_BYTE *)(a2 + 36) )
  {
    v4 = *a1;
    if ( !v4 )
    {
      v5 = a1[2];
      if ( *(_DWORD *)(a2 + 16) == v5 )
      {
        if ( a3 )
          *a3 = v5;
        return 1;
      }
    }
    if ( v4 == 1 && *(_BYTE *)(a2 + 38) )
    {
      v7 = *(_QWORD *)(a2 + 40) - *((_QWORD *)a1 + 1);
      if ( !v7 )
        v7 = *(_QWORD *)(a2 + 48) - *((_QWORD *)a1 + 2);
      if ( !v7 )
      {
        if ( a3 )
          *a3 = 0;
        return 1;
      }
    }
  }
  return 0;
}
