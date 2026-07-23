/*
 * XREFs of IopIsKnownGoodLegacyFsFilter @ 0x1401C948C
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400F8D4C (IopAttachDeviceToDeviceStackSafe.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140550C10 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     memcmp @ 0x14014E450 (memcmp.c)
 */

bool __fastcall IopIsKnownGoodLegacyFsFilter(const void **a1)
{
  __int16 v1; // bp
  const void **v2; // rdi
  unsigned int i; // ebx
  unsigned __int16 v5; // ax

  v1 = *(_WORD *)a1;
  v2 = (const void **)&off_14025D068;
  for ( i = 0; i < 3; ++i )
  {
    v5 = *((_WORD *)v2 - 4);
    if ( v5 == v1 && !memcmp(*v2, a1[1], v5) )
      break;
    v2 += 2;
  }
  return i < 3;
}
