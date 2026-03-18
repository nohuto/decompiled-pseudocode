/*
 * XREFs of RtlCmDecodeMemIoResource @ 0x1400EFDC8
 * Callers:
 *     PnpIsRangeWithin @ 0x140528C1C (PnpIsRangeWithin.c)
 *     PnpCmResourcesToIoResources @ 0x14052B7B0 (PnpCmResourcesToIoResources.c)
 *     PnpFilterResourceRequirementsList @ 0x14052C73C (PnpFilterResourceRequirementsList.c)
 *     IopGenericUnpackResource @ 0x140604954 (IopGenericUnpackResource.c)
 *     PnprAddMemoryResources @ 0x14060F850 (PnprAddMemoryResources.c)
 * Callees:
 *     <none>
 */

ULONGLONG __stdcall RtlCmDecodeMemIoResource(PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor, PULONGLONG Start)
{
  ULONGLONG Length; // r8
  USHORT Flags; // ax

  Length = 0LL;
  if ( ((Descriptor->Type - 1) & 0xFD) != 0 )
  {
    Flags = Descriptor->Flags;
    if ( (Flags & 0x200) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 8;
    }
    else if ( (Flags & 0x400) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 16;
    }
    else if ( (Flags & 0x800) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 32;
    }
  }
  else
  {
    Length = Descriptor->u.Generic.Length;
  }
  if ( Start )
    *Start = Descriptor->u.Generic.Start.QuadPart;
  return Length;
}
