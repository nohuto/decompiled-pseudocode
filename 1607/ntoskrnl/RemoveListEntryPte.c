/*
 * XREFs of RemoveListEntryPte @ 0x1400AA5E4
 * Callers:
 *     MiReleaseSystemCacheView @ 0x140017EF4 (MiReleaseSystemCacheView.c)
 *     MiRemoveSpecialPoolRange @ 0x1401EB748 (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x1401F24AC (MiGetPteLink.c)
 */

__int64 __fastcall RemoveListEntryPte(__int64 a1, __int64 a2)
{
  __int64 PteLink; // rax
  __int64 *v3; // r11
  unsigned __int64 v4; // r10
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // r11
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx

  PteLink = MiGetPteLink(*(_QWORD *)(a2 + 8));
  v5 = *(_QWORD *)(v4 + 16);
  v6 = (_QWORD *)v4;
  if ( PteLink != (__int64)(((v4 >> 9) & 0x7FFFFFFFF8LL) - v5 - 0x98000000000LL) >> 3 )
    v6 = (_QWORD *)(v5 + 8 * PteLink);
  v7 = *v3;
  *v6 = *v3;
  if ( (unsigned int)MiPteInShadowRange(v6, v7) )
    MiWritePteShadow(v9, v8);
  v11 = MiGetPteLink(*v10);
  v14 = *(_QWORD *)(v12 + 16);
  if ( v11 != (v15 - v14 - 0x98000000000LL) >> 3 )
    v12 = v14 + 8 * v11;
  v16 = *(_QWORD *)(v13 + 8);
  *(_QWORD *)(v12 + 8) = v16;
  result = MiPteInShadowRange(v12 + 8, v16);
  if ( (_DWORD)result )
    return MiWritePteShadow(v19, v18);
  return result;
}
