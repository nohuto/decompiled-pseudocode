/*
 * XREFs of ??1ReferenceCounted@@UEAA@XZ @ 0x1C0003ED4
 * Callers:
 *     ??1DMMVIDPNSOURCEMODESET@@UEAA@XZ @ 0x1C0007334 (--1DMMVIDPNSOURCEMODESET@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x1C002B1CC (--1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ.c)
 *     ??_GReferenceCounted@@UEAAPEAXI@Z @ 0x1C002B8F0 (--_GReferenceCounted@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C0088C8C (--1DMMVIDPN@@UEAA@XZ.c)
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
