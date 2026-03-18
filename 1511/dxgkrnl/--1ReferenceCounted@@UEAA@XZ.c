/*
 * XREFs of ??1ReferenceCounted@@UEAA@XZ @ 0x1C0005874
 * Callers:
 *     ??1DMMVIDPNSOURCEMODESET@@UEAA@XZ @ 0x1C00054E4 (--1DMMVIDPNSOURCEMODESET@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x1C002AE88 (--1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ.c)
 *     ??_GReferenceCounted@@UEAAPEAXI@Z @ 0x1C002B660 (--_GReferenceCounted@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C00917A8 (--1DMMVIDPN@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ReferenceCounted::~ReferenceCounted(ReferenceCounted *this)
{
  __int64 v2; // rax

  *(_QWORD *)this = &ReferenceCounted::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    v2 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v2 + 24) = *((int *)this + 2);
    WdLogEvent5_WdError(v2);
  }
}
