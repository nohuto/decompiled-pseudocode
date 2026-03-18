/*
 * XREFs of ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C028731C
 * Callers:
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0286F94 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C028735C (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C02874FC (-vEmergency@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct PFE *__fastcall ENUMFHOBJ::ppfeNext(ENUMFHOBJ *this)
{
  __int64 *v1; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = (__int64 *)*((_QWORD *)this + 2);
  v2 = 0LL;
  v3 = *v1;
  *((_QWORD *)this + 2) = *v1;
  if ( !v3 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 48LL);
    *((_QWORD *)this + 3) = v4;
    if ( v4 )
      *((_QWORD *)this + 2) = *(_QWORD *)(v4 + 8);
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
    return *(struct PFE **)(v5 + 8);
  return (struct PFE *)v2;
}
