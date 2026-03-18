/*
 * XREFs of IoFastQueryNetworkAttributes @ 0x140623850
 * Callers:
 *     <none>
 * Callees:
 *     IopFastQueryNetworkAttributes @ 0x140623EB8 (IopFastQueryNetworkAttributes.c)
 */

BOOLEAN __stdcall IoFastQueryNetworkAttributes(
        POBJECT_ATTRIBUTES ObjectAttributes,
        ACCESS_MASK DesiredAccess,
        ULONG OpenOptions,
        PIO_STATUS_BLOCK IoStatus,
        PFILE_NETWORK_OPEN_INFORMATION Buffer)
{
  ULONG v5; // r10d

  v5 = OpenOptions;
  LOBYTE(OpenOptions) = KeGetCurrentThread()->PreviousMode;
  return IopFastQueryNetworkAttributes(ObjectAttributes, DesiredAccess, OpenOptions, v5, IoStatus, Buffer);
}
