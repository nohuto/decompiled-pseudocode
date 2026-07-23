/*
 * XREFs of PsMakeSiloContextPermanent @ 0x14067E0A8
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140613808 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsMakeSiloContextPermanent(__int64 a1)
{
  if ( a1 )
    return PspStorageMakeSlotReadOnly(*(_QWORD *)(a1 + 1288));
  else
    return PspStorageMakeSlotReadOnly(qword_1403BF8D8);
}
