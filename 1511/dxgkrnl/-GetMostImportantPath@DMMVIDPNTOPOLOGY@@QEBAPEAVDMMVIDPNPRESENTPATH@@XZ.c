/*
 * XREFs of ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C0091448
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C008F11C (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetMostImportantPath(DMMVIDPNTOPOLOGY *this)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax
  int v3; // r8d
  __int64 v4; // rax
  DMMVIDPNTOPOLOGY *v5; // rax

  v1 = 0LL;
  v2 = (_QWORD *)((char *)this + 24);
  v3 = 32;
  if ( (_QWORD *)*v2 != v2 )
  {
    v4 = *v2 - 8LL;
    while ( v4 )
    {
      if ( *(_DWORD *)(v4 + 104) < v3 )
      {
        v1 = v4;
        v3 = *(_DWORD *)(v4 + 104);
      }
      v5 = *(DMMVIDPNTOPOLOGY **)(v4 + 8);
      if ( v5 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
        v4 = 0LL;
      else
        v4 = (__int64)v5 - 8;
    }
  }
  return (struct DMMVIDPNPRESENTPATH *)v1;
}
