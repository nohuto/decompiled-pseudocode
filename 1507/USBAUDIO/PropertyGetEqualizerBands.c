/*
 * XREFs of PropertyGetEqualizerBands @ 0x1C0019EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetEqualizerBands(IRP *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v7; // ebx
  unsigned __int64 Length; // r14
  PKSFILTER FilterFromIrp; // rcx
  __int64 v10; // rdx
  __int64 v11; // r11
  __int64 v12; // r8
  _DWORD *v13; // r9
  unsigned int i; // edx
  int v15; // eax

  v4 = *(unsigned int *)(a2 + 32);
  v7 = -1073741811;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( FilterFromIrp )
  {
    v10 = (__int64)FilterFromIrp->Descriptor->NodeDescriptors + 152 * *(unsigned int *)(a2 + 24);
    if ( (unsigned int)v4 < *(_DWORD *)(v10 + 92) )
    {
      v11 = *(_QWORD *)(v10 + 128);
      a1->IoStatus.Information = 4LL * *(unsigned int *)(v11 + 40 * v4 + 12);
      if ( Length < 4 * (unsigned __int64)*(unsigned int *)(v11 + 40 * v4 + 12) )
      {
        return (unsigned int)-1073741789;
      }
      else
      {
        v12 = 0LL;
        v13 = &pBandFreqs;
        for ( i = 0; i < 0x1E; ++i )
        {
          v15 = *(_DWORD *)(v11 + 40 * v4 + 16);
          if ( _bittest(&v15, i) && (unsigned int)v12 < *(_DWORD *)(v11 + 40 * v4 + 12) )
          {
            *(_DWORD *)(a3 + 4 * v12) = *v13;
            v12 = (unsigned int)(v12 + 1);
          }
          ++v13;
        }
        return 0;
      }
    }
  }
  return v7;
}
