/*
 * XREFs of PropertyGetMixerLevelCaps @ 0x1C0019310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetMixerLevelCaps(IRP *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // rbx
  unsigned int v7; // esi
  unsigned int Length; // ebp
  PKSFILTER FilterFromIrp; // rax
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // edx
  unsigned __int8 *v13; // rcx
  unsigned int v14; // r9d
  unsigned int i; // edx

  v3 = a3 + 2;
  v7 = -1073741811;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( FilterFromIrp )
  {
    v10 = *((_QWORD *)&FilterFromIrp->Descriptor->NodeDescriptors[5].Type + 19 * *(unsigned int *)(a2 + 24));
    v11 = *(_DWORD *)(v10 + 8);
    v12 = 16 * v11 * *(_DWORD *)(v10 + 12) + 8;
    if ( Length )
    {
      if ( Length >= 8 )
      {
        *a3 = v11;
        v7 = 0;
        a3[1] = *(_DWORD *)(v10 + 12);
        a1->IoStatus.Information = 8LL;
        if ( Length == v12 )
        {
          v13 = *(unsigned __int8 **)(v10 + 16);
          v14 = 0;
          for ( a1->IoStatus.Information = v12; v14 < *(_DWORD *)(v10 + 8); ++v14 )
          {
            for ( i = 0; i < *(_DWORD *)(v10 + 12); v3 += 4 )
            {
              *v3 = *v13;
              if ( v13[1] )
              {
                v3[1] = *((_DWORD *)v13 + 6);
                v3[2] = *((_DWORD *)v13 + 7);
                v3[3] = *((_DWORD *)v13 + 4);
              }
              else
              {
                v3[1] = *((_DWORD *)v13 + 3);
                *((_QWORD *)v3 + 1) = *((unsigned int *)v13 + 3);
              }
              ++i;
              v13 += 32;
            }
          }
        }
      }
    }
    else
    {
      v7 = -1073741789;
      a1->IoStatus.Information = v12;
    }
  }
  return v7;
}
