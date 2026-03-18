/*
 * XREFs of EngFntCacheLookUp @ 0x1401E7880
 * Callers:
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140285B50 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall EngFntCacheLookUp(ULONG FastCheckSum, ULONG *pulSize)
{
  void *v2; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned int i; // ecx
  _DWORD *v9; // rcx
  ULONG v11; // eax

  v2 = 0LL;
  *pulSize = 0;
  if ( !FastCheckSum )
    return 0LL;
  v5 = *(_QWORD *)(W32GetSessionState(FastCheckSum, pulSize) + 96);
  if ( (*(_DWORD *)(v5 + 19584) & 1) != 0 )
  {
    v6 = *(_QWORD *)(v5 + 19592);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 8);
      if ( v7 )
      {
        for ( i = *(_DWORD *)(v7 + 4LL * (FastCheckSum % 0x3D) + 72); i != -1; i = v9[2] )
        {
          v9 = (_DWORD *)(v7 + 80 * (i + 4LL));
          if ( FastCheckSum == *v9 )
          {
            if ( v9 && (v9[6] & 1) == 0 )
            {
              v11 = v9[4];
              *pulSize = v11;
              if ( v11 )
                return (PVOID)(*(_QWORD *)(*(_QWORD *)(v5 + 19592) + 32LL) + (unsigned int)v9[5]);
            }
            return v2;
          }
        }
      }
    }
  }
  return v2;
}
