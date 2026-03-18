/*
 * XREFs of HUBPSM30_IssuingPortFailedToDSMOnLinkStateError @ 0x1C000EC20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPSM30_IssuingPortFailedToDSMOnLinkStateError(__int64 a1)
{
  __int64 v1; // rbx
  __int16 v2; // ax

  v1 = *(_QWORD *)(a1 + 960);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1456LL))(*(_QWORD *)(v1 + 1328), 4046LL);
  v2 = (*(_WORD *)(v1 + 192) >> 5) & 0xF;
  if ( v2 == 6 )
  {
    *(_DWORD *)(*(_QWORD *)(v1 + 1328) + 2416LL) = 1073807385;
  }
  else if ( v2 == 10 )
  {
    *(_DWORD *)(*(_QWORD *)(v1 + 1328) + 2416LL) = 1073807386;
  }
  return 3013LL;
}
