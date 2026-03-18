/*
 * XREFs of LNot @ 0x1C0016EA0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x1C001875C (IsCompatableDSDTRevision.c)
 */

__int64 __fastcall LNot(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx

  v4 = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"I");
  if ( !v4 )
  {
    *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
    v7 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v7 + 16) )
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
    else
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)((unsigned __int8)IsCompatableDSDTRevision(v7, v3, v5, v6) != 0) & 0xFFFFFFFF00000000uLL)
                                               + 0xFFFFFFFF;
  }
  return v4;
}
