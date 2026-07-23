/*
 * XREFs of ViTargetRemovingCheckEtwWmi @ 0x140710660
 * Callers:
 *     VfTargetDriversRemove @ 0x14012F358 (VfTargetDriversRemove.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViTargetRemovingCheckEtwWmi(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // r9
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 && (MmVerifierData & 0x800) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xDAuLL, a2, v2, 0LL);
  v5 = a1 + 16;
  if ( *(_QWORD *)v5 != v5 )
  {
    if ( (MmVerifierData & 0x800) != 0 )
      VerifierBugCheckIfAppropriate(
        0xC4u,
        0xDDuLL,
        *(_QWORD *)(*(_QWORD *)v5 + 24LL),
        a2,
        *(_QWORD *)(*(_QWORD *)v5 + 16LL));
    v6 = *(_QWORD **)v5;
    do
    {
      v7 = *v6;
      v8 = (_QWORD *)v6[1];
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v8 != v6 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      ExFreePoolWithTag(v6, 0);
      v6 = *(_QWORD **)v5;
    }
    while ( *(_QWORD *)v5 != v5 );
  }
}
