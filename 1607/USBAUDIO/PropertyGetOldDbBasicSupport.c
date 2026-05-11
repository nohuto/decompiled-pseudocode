/*
 * XREFs of PropertyGetOldDbBasicSupport @ 0x1C0019A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetOldDbBasicSupport(IRP *a1, __int64 a2, __int64 a3)
{
  PKSFILTER FilterFromIrp; // rax
  unsigned int v7; // r10d
  unsigned int Length; // ecx
  unsigned int v9; // r9d
  __int64 v10; // r8
  unsigned int v11; // r14d
  ULONG_PTR v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r11d
  _OWORD *v15; // rsi
  int v16; // r15d
  _OWORD *v17; // rbp
  _QWORD *v18; // r12
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned int v24; // [rsp+60h] [rbp+8h]
  __int64 v25; // [rsp+68h] [rbp+10h]

  FilterFromIrp = KsGetFilterFromIrp(a1);
  v7 = 1;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v9 = -1073741811;
  if ( FilterFromIrp )
  {
    v10 = (__int64)FilterFromIrp->Descriptor->NodeDescriptors + 152 * *(unsigned int *)(a2 + 24);
    v11 = *(_DWORD *)(v10 + 92);
    v24 = v11;
    if ( *(_DWORD *)(a2 + 16) == 18 )
      v7 = *(_DWORD *)(*(_QWORD *)(v10 + 128) + 12LL);
    v12 = 16 * v7 * v11 + 56;
    if ( Length >= 4 )
    {
      v9 = 0;
      a1->IoStatus.Information = 4LL;
      *(_DWORD *)a3 = 515;
      if ( Length >= 0x28 )
      {
        *(_DWORD *)(a3 + 28) = 0;
        *(_DWORD *)(a3 + 36) = 0;
        *(_DWORD *)(a3 + 4) = v12;
        *(_DWORD *)(a3 + 24) = 3;
        *(_DWORD *)(a3 + 32) = 1;
        *(GUID *)(a3 + 8) = KSPROPTYPESETID_General;
        a1->IoStatus.Information = 40LL;
        if ( Length >= (unsigned int)v12 )
        {
          v13 = *(_QWORD *)(v10 + 128);
          v14 = 0;
          *(_DWORD *)(a3 + 40) = 2;
          *(_DWORD *)(a3 + 52) = 2;
          v15 = (_OWORD *)(a3 + 56);
          *(_DWORD *)(a3 + 44) = 16;
          *(_DWORD *)(a3 + 48) = v11;
          a1->IoStatus.Information = v12;
          v25 = a3 + 56;
          if ( v11 )
          {
            v16 = 0;
            v17 = (_OWORD *)(v13 + 16);
            v18 = (_QWORD *)(v13 + 32);
            do
            {
              v19 = *(_DWORD *)(v10 + 96);
              if ( _bittest(&v19, v14) )
              {
                if ( *(_DWORD *)(a2 + 16) == 18 )
                {
                  v20 = 0;
                  if ( v7 )
                  {
                    v21 = 0LL;
                    do
                    {
                      v22 = 2LL * (v16 + v20);
                      v21 += 20LL;
                      ++v20;
                      *(_OWORD *)(v25 + 8 * v22) = *(_OWORD *)(v21 + *v18 - 16);
                    }
                    while ( v20 < v7 );
                    v11 = v24;
                  }
                }
                else
                {
                  *v15 = *v17;
                }
              }
              ++v14;
              v16 += v7;
              v18 += 5;
              v17 += 2;
              ++v15;
            }
            while ( v14 < v11 );
          }
        }
      }
    }
    else
    {
      a1->IoStatus.Information = v12;
      return (unsigned int)-1073741789;
    }
  }
  return v9;
}
