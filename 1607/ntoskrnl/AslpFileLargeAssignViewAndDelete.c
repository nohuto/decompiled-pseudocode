/*
 * XREFs of AslpFileLargeAssignViewAndDelete @ 0x1406C957C
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1406C9618 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     AslpFileLargeMapDelete @ 0x1406C9D0C (AslpFileLargeMapDelete.c)
 */

__int64 __fastcall AslpFileLargeAssignViewAndDelete(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // r8
  __int64 v4; // rax
  __int64 v5; // rax

  if ( !a2 )
    return 3221225712LL;
  v3 = (_QWORD *)*a2;
  if ( !*a2 )
    return 3221225712LL;
  *(_QWORD *)(a1 + 528) = v3[1];
  *(_BYTE *)(a1 + 569) = 1;
  v4 = v3[5];
  v3[1] = 0LL;
  *(_QWORD *)(a1 + 560) = v4;
  v5 = v3[2];
  v3[5] = 0LL;
  *(_QWORD *)(a1 + 544) = v5;
  *(_QWORD *)(a1 + 552) = v3[3];
  *(_WORD *)(a1 + 570) = 1;
  *(_DWORD *)(a1 + 596) = 1;
  v3[2] = 0LL;
  v3[3] = 0LL;
  AslpFileLargeMapDelete(a2);
  return AslpFileMappingGetFileKind((_QWORD *)(a1 + 520), (int *)(a1 + 576));
}
