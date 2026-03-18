/*
 * XREFs of MiAddMappedPtes @ 0x14051C0C0
 * Callers:
 *     MiMapViewInSystemSpace @ 0x14051BF64 (MiMapViewInSystemSpace.c)
 *     MiMapSystemImage @ 0x140575D34 (MiMapSystemImage.c)
 * Callees:
 *     MiOffsetToProtos @ 0x140053430 (MiOffsetToProtos.c)
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiGetSharedProtos @ 0x14021C58C (MiGetSharedProtos.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakePrototypePteDirect @ 0x140225C38 (MiMakePrototypePteDirect.c)
 */

__int64 __fastcall MiAddMappedPtes(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v5; // r12
  __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 result; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int64 i; // rbp
  __int64 PrototypePteDirect; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v5 = (unsigned __int64)&a1[a2];
  v7 = a1;
  v8 = MiOffsetToProtos((_DWORD *)a3, *a4, &v21);
  v9 = v8;
  if ( !v8 )
    return 3221225503LL;
  v11 = v21;
  if ( (*(_DWORD *)(a3 + 56) & 0x420) != 0 || (result = MiAddViewsForSection(v8, v21 + a2, 0), (int)result >= 0) )
  {
    if ( (*(_BYTE *)(v9 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x4000000) != 0 )
      goto LABEL_15;
    if ( (*(_DWORD *)(a3 + 56) & 0x20) != 0 )
    {
      v12 = *(_QWORD *)(v9 + 24);
      if ( v12 )
        goto LABEL_18;
    }
    v13 = *(_QWORD *)(v9 + 8);
    v14 = v13 + 8 * v11;
    v15 = v13 + 8LL * *(unsigned int *)(v9 + 44);
    while ( (unsigned __int64)v7 < v5 )
    {
      if ( v14 >= v15 )
      {
        v9 = *(_QWORD *)(v9 + 16);
        if ( !v9 )
        {
          for ( i = *(_QWORD *)(a3 + 128)
                  + 8
                  * (*(unsigned int *)(*(_QWORD *)a3 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a3 + 12LL) & 0x3FF) << 32));
                v14 < i;
                v14 += 8LL )
          {
            PrototypePteDirect = MiMakePrototypePteDirect(v14);
            *v7 = PrototypePteDirect;
            v20 = PrototypePteDirect;
            if ( MiPteInShadowRange((__int64)v7) )
              MiWritePteShadow((__int64)v7, v20);
            if ( (unsigned __int64)++v7 >= v5 )
              break;
          }
          return 0LL;
        }
        if ( (*(_BYTE *)(v9 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x4000000) != 0 )
        {
LABEL_15:
          v14 = *(_QWORD *)(MiGetSharedProtos() + 32);
        }
        else if ( (*(_DWORD *)(a3 + 56) & 0x20) != 0 && (v12 = *(_QWORD *)(v9 + 24)) != 0 )
        {
LABEL_18:
          v14 = *(_QWORD *)(v12 + 32);
        }
        else
        {
          v14 = *(_QWORD *)(v9 + 8);
        }
        v15 = v14 + 8LL * *(unsigned int *)(v9 + 44);
      }
      v16 = MiMakePrototypePteDirect(v14);
      *v7 = v16;
      v17 = v16;
      if ( MiPteInShadowRange((__int64)v7) )
        MiWritePteShadow((__int64)v7, v17);
      ++v7;
      v14 += 8LL;
    }
    return 0LL;
  }
  return result;
}
