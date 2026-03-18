/*
 * XREFs of sub_1C005F34C @ 0x1C005F34C
 * Callers:
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C005E190 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C005E674 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     sub_1C005F2F8 @ 0x1C005F2F8 (sub_1C005F2F8.c)
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C005F3AC (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1C005F34C(void **a1, ACCESS_MASK a2, void *a3, struct _UNICODE_STRING *a4, PULONG Disposition)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  ObjectAttributes.RootDirectory = a3;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a4;
  if ( Disposition )
    return ZwCreateKey(a1, a2, &ObjectAttributes, 0, 0LL, 0, Disposition);
  else
    return ZwOpenKey(a1, a2, &ObjectAttributes);
}
