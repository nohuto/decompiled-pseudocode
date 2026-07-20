/*
 * XREFs of sub_140004A4C @ 0x140004A4C
 * Callers:
 *     sub_140003500 @ 0x140003500 (sub_140003500.c)
 * Callees:
 *     sub_140004ABC @ 0x140004ABC (sub_140004ABC.c)
 */

__int64 __fastcall sub_140004A4C(__int64 a1)
{
  struct _RTL_SPLAY_LINKS *v1; // rdi
  int v3; // eax
  struct _RTL_SPLAY_LINKS *v4; // rdx

  v1 = (struct _RTL_SPLAY_LINKS *)(a1 + 104);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 104) = a1 + 104;
  ++*(_DWORD *)(a1 + 4);
  RtlAcquireSRWLockExclusive(&unk_140020908);
  v3 = sub_140004ABC(Root, a1);
  v4 = Root;
  if ( v3 )
    v4 = v1;
  Root = v4;
  return RtlReleaseSRWLockExclusive(&unk_140020908);
}
