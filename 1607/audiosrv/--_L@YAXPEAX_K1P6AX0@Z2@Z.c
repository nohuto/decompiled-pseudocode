/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800364CC
 * Callers:
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x1800037B4 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x1800218C4 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18002DDBC (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x180032E20 (--0CPolicyConfig@@QEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180035FEC (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_dispatch_icall_fptr();
    a1 += a2;
  }
}
