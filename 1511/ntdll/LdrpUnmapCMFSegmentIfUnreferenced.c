/*
 * XREFs of LdrpUnmapCMFSegmentIfUnreferenced @ 0x1800D45B8
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x180005CB0 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     <none>
 */

char __fastcall LdrpUnmapCMFSegmentIfUnreferenced(__int64 a1)
{
  unsigned int v1; // edx
  _DWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  if ( AlternateResourceModules && (v1 = 0, AlternateResourceModuleCount) )
  {
    v2 = (char *)AlternateResourceModules + 60;
    while ( *(v2 - 1) != (_DWORD)a1 && *v2 != (_DWORD)a1 )
    {
      ++v1;
      v2 += 18;
      if ( v1 >= AlternateResourceModuleCount )
        goto LABEL_7;
    }
    return 1;
  }
  else
  {
LABEL_7:
    if ( ResRuntimeView == (PVOID)-1LL )
      return LdrpUnmapCMFSegment(a1);
    if ( ResRuntimeView
      && ((v3 = *((_QWORD *)ResRuntimeView + 2)) == 0
       || (v4 = *(_QWORD *)(v3 + 24)) == 0
       || (*(_DWORD *)(v4 + 48) & 0x100000) != 0) )
    {
      return LdrpUnmapCMFSegment(a1);
    }
    else
    {
      return LdrpCMFAddToStanbyQueue(a1);
    }
  }
}
