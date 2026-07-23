/*
 * XREFs of MiAddMappedPtes @ 0x140509080
 * Callers:
 *     MiMapSystemImage @ 0x14048327C (MiMapSystemImage.c)
 *     MiMapViewInSystemSpace @ 0x140508F34 (MiMapViewInSystemSpace.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140026854 (MiGetSubsectionDriverProtos.c)
 *     MiAddViewsForSection @ 0x14002C210 (MiAddViewsForSection.c)
 *     MiOffsetToProtos @ 0x140032BF0 (MiOffsetToProtos.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiMakePrototypePteDirect @ 0x1401F2584 (MiMakePrototypePteDirect.c)
 *     MiGetSharedProtos @ 0x1401F4EB4 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiAddMappedPtes(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, unsigned int a5)
{
  unsigned __int64 v6; // rbp
  __int64 *v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 result; // rax
  unsigned __int64 v12; // r14
  unsigned int v13; // r15d
  __int64 SubsectionDriverProtos; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // [rsp+40h] [rbp+8h] BYREF

  v6 = (unsigned __int64)&a1[a2];
  v8 = a1;
  v9 = (__int64 *)MiOffsetToProtos((_DWORD *)a3, *a4, &v25);
  v10 = (__int64)v9;
  if ( !v9 )
    return 3221225503LL;
  v12 = v25;
  if ( (*(_DWORD *)(a3 + 56) & 0x420) != 0 || (result = MiAddViewsForSection(v9, v25 + a2, 0), (int)result >= 0) )
  {
    v13 = a5;
    if ( (*(_BYTE *)(v10 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x4000000) != 0 )
      goto LABEL_15;
    if ( (*(_DWORD *)(a3 + 56) & 0x20) != 0 )
    {
      SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v10);
      if ( SubsectionDriverProtos )
        goto LABEL_18;
    }
    v15 = *(_QWORD *)(v10 + 8);
    v16 = v15 + 8 * v12;
    v17 = v15 + 8LL * *(unsigned int *)(v10 + 44);
    while ( 1 )
    {
      if ( (unsigned __int64)v8 >= v6 )
        return 0LL;
      if ( v16 >= v17 )
      {
        v10 = *(_QWORD *)(v10 + 16);
        if ( !v10 )
        {
          if ( v16 < *(_QWORD *)(a3 + 136)
                   + 8
                   * (*(unsigned int *)(*(_QWORD *)a3 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a3 + 12LL) & 0x3FF) << 32)) )
          {
            do
            {
              *v8 = MiMakePrototypePteDirect(v16);
              if ( MiPteInShadowRange((unsigned __int64)v8) )
                MiWritePteShadow(v22, v21);
              if ( (unsigned __int64)++v8 >= v6 )
                break;
              v16 = v23 + 8;
            }
            while ( v16 < v24 );
          }
          return 0LL;
        }
        v16 = *(_QWORD *)(v10 + 8);
        if ( (*(_BYTE *)(v10 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x4000000) != 0 )
        {
LABEL_15:
          SubsectionDriverProtos = MiGetSharedProtos(a3, v13, v10);
        }
        else
        {
          if ( (*(_DWORD *)(a3 + 56) & 0x20) == 0 )
            goto LABEL_19;
          SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v10);
          if ( !SubsectionDriverProtos )
            goto LABEL_19;
        }
LABEL_18:
        v16 = *(_QWORD *)(SubsectionDriverProtos + 32);
      }
LABEL_19:
      *v8 = MiMakePrototypePteDirect(v16);
      if ( MiPteInShadowRange((unsigned __int64)v8) )
        MiWritePteShadow(v19, v18);
      ++v8;
      v16 = v20 + 8;
    }
  }
  return result;
}
