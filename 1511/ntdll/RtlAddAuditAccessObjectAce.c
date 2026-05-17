/*
 * XREFs of RtlAddAuditAccessObjectAce @ 0x18008AFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAddAuditAccessObjectAce(
        char *a1,
        unsigned int a2,
        int a3,
        int a4,
        void *Src,
        __int64 a6,
        unsigned __int8 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  if ( (_BYTE)a8 )
    a3 |= 0x40u;
  if ( (_BYTE)a9 )
    a3 |= 0x80u;
  if ( !Src && !a6 )
    return RtlpAddKnownAce(a1, a2, a3, a4, a7, 2);
  LOBYTE(a8) = 7;
  return RtlpAddKnownObjectAce((_DWORD)a1, a2, a3, a4, (__int64)Src, a6, (__int64)a7, a8, a9, a10, a11, a12);
}
