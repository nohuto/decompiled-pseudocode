/*
 * XREFs of ??1ReferenceCounted@@UEAA@XZ @ 0x1C0004774
 * Callers:
 *     ??1DMMVIDPNSOURCEMODESET@@UEAA@XZ @ 0x1C00059CC (--1DMMVIDPNSOURCEMODESET@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x1C0032940 (--1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ @ 0x1C00329AC (--1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ.c)
 *     ??_GReferenceCounted@@UEAAPEAXI@Z @ 0x1C0033770 (--_GReferenceCounted@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C007DB44 (--1DMMVIDPN@@UEAA@XZ.c)
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
