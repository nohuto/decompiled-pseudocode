/*
 * XREFs of IopSymlinkProcessReparse @ 0x140548F44
 * Callers:
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 * Callees:
 *     IopSymlinkGetECP @ 0x140070050 (IopSymlinkGetECP.c)
 *     IopSymlinkRememberJunction @ 0x14054891C (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x140548FF4 (IopGraftName.c)
 *     IopFindMatchingComponentsLengthR @ 0x140674D2C (IopFindMatchingComponentsLengthR.c)
 */

int __fastcall IopSymlinkProcessReparse(PIRP Irp, __int64 a2, __int64 a3, char a4)
{
  ULONG_PTR Information; // rax
  UNICODE_STRING *v7; // rdi
  UNICODE_STRING *v8; // rdx
  wchar_t *i; // rax
  unsigned __int16 MatchingComponentsLengthR; // ax
  UNICODE_STRING *v12; // [rsp+30h] [rbp+8h] BYREF

  Information = Irp->IoStatus.Information;
  if ( Information == 2684354563 || Information == 2684354572 || Information == 2147483673 )
  {
    if ( !a4 )
      LODWORD(Information) = IopGraftName(Irp);
  }
  else if ( Information > 1 )
  {
    LODWORD(Information) = IopSymlinkGetECP((struct _ECP_LIST *)Irp->UserBuffer, (PVOID *)&v12);
    if ( (Information & 0x80000000) != 0LL )
      goto LABEL_10;
    v7 = v12;
    v8 = v12;
    for ( i = v12->Buffer; i; i = (wchar_t *)*((_QWORD *)i + 1) )
      v8 = (UNICODE_STRING *)i;
    MatchingComponentsLengthR = IopFindMatchingComponentsLengthR(a2 + 88, &v8[1]);
    LODWORD(Information) = IopSymlinkRememberJunction(MatchingComponentsLengthR, a2, (__int64)Irp, v7);
    if ( (Information & 0x80000000) != 0LL )
LABEL_10:
      Irp->IoStatus.Status = Information;
  }
  return Information;
}
