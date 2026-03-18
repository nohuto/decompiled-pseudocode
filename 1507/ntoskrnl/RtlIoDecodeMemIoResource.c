/*
 * XREFs of RtlIoDecodeMemIoResource @ 0x140164278
 * Callers:
 *     IopGenericScoreRequirement @ 0x14059E8E0 (IopGenericScoreRequirement.c)
 *     PnpFilterResourceRequirementsList @ 0x14059F0BC (PnpFilterResourceRequirementsList.c)
 *     IopGenericUnpackRequirement @ 0x1405A06E8 (IopGenericUnpackRequirement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __stdcall RtlIoDecodeMemIoResource(
        PIO_RESOURCE_DESCRIPTOR Descriptor,
        PULONGLONG Alignment,
        PULONGLONG MinimumAddress,
        PULONGLONG MaximumAddress)
{
  ULONGLONG Length; // r11
  unsigned __int64 v6; // rcx
  USHORT Flags; // ax

  Length = 0LL;
  v6 = 0LL;
  if ( ((Descriptor->Type - 1) & 0xFD) != 0 )
  {
    Flags = Descriptor->Flags;
    if ( (Flags & 0x200) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Port.Length << 8;
      v6 = (unsigned __int64)Descriptor->u.Port.Alignment << 8;
    }
    else if ( (Flags & 0x400) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Port.Length << 16;
      v6 = (unsigned __int64)Descriptor->u.Port.Alignment << 16;
    }
    else if ( (Flags & 0x800) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Port.Length << 32;
      v6 = (unsigned __int64)Descriptor->u.Port.Alignment << 32;
    }
  }
  else
  {
    Length = Descriptor->u.Port.Length;
    v6 = Descriptor->u.Port.Alignment;
  }
  if ( Alignment )
    *Alignment = v6;
  if ( MinimumAddress )
    *MinimumAddress = Descriptor->u.Port.MinimumAddress.QuadPart;
  if ( MaximumAddress )
    *MaximumAddress = Descriptor->u.Interrupt.TargetedProcessors;
  return Length;
}
