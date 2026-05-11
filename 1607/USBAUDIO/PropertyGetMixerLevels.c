/*
 * XREFs of PropertyGetMixerLevels @ 0x1C001A510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetMixerLevels(IRP *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  ULONG Length; // r14d
  PKSFILTER FilterFromIrp; // rax
  __int64 v9; // r8
  unsigned int v10; // ecx
  unsigned __int8 *v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int i; // r9d
  int v15; // eax

  v6 = -1073741811;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( FilterFromIrp )
  {
    v9 = *((_QWORD *)&FilterFromIrp->Descriptor->NodeDescriptors[5].Type + 19 * *(unsigned int *)(a2 + 24));
    v10 = 8 * *(_DWORD *)(v9 + 12) * *(_DWORD *)(v9 + 8);
    a1->IoStatus.Information = v10;
    if ( Length == v10 )
    {
      v11 = *(unsigned __int8 **)(v9 + 16);
      v12 = 0;
      if ( *(_DWORD *)(v9 + 8) )
      {
        v13 = *(_DWORD *)(v9 + 12);
        do
        {
          for ( i = 0; i < v13; v13 = *(_DWORD *)(v9 + 12) )
          {
            ++i;
            *a3 = *v11;
            v15 = *((_DWORD *)v11 + 3);
            v11 += 32;
            a3[1] = v15;
            a3 += 2;
          }
          ++v12;
        }
        while ( v12 < *(_DWORD *)(v9 + 8) );
      }
      return 0;
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  return v6;
}
