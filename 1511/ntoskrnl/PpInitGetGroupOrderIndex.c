/*
 * XREFs of PpInitGetGroupOrderIndex @ 0x140752624
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140503A70 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PnpRegSzToString @ 0x1403B9CD8 (PnpRegSzToString.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PpInitGetGroupOrderIndex(void *a1)
{
  _WORD *v1; // rbx
  unsigned int v2; // edx
  unsigned __int16 v3; // si
  unsigned __int16 v4; // r14
  wchar_t *v5; // rax
  const UNICODE_STRING *v6; // rbp
  UNICODE_STRING String1; // [rsp+20h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF

  if ( !PiInitGroupOrderTable )
    return 0xFFFFLL;
  if ( !a1 )
    return (unsigned int)(unsigned __int16)PiInitGroupOrderTableCount + 1;
  if ( IopGetRegistryValue(a1, L"Group", 0, &P) < 0 )
    return (unsigned __int16)PiInitGroupOrderTableCount;
  v1 = P;
  if ( *((_DWORD *)P + 1) != 1 || (v2 = *((_DWORD *)P + 3)) == 0 )
  {
    ExFreePoolWithTag(P, 0);
    return (unsigned __int16)PiInitGroupOrderTableCount;
  }
  PnpRegSzToString((char *)P + *((unsigned int *)P + 2), v2, &P);
  v3 = 0;
  v4 = PiInitGroupOrderTableCount;
  String1.MaximumLength = v1[6];
  v5 = (_WORD *)((char *)v1 + *((unsigned int *)v1 + 2));
  String1.Length = (unsigned __int16)P;
  String1.Buffer = v5;
  if ( PiInitGroupOrderTableCount )
  {
    v6 = (const UNICODE_STRING *)PiInitGroupOrderTable;
    do
    {
      if ( RtlEqualUnicodeString(&String1, &v6[v3], 1u) )
        break;
      ++v3;
    }
    while ( v3 < v4 );
  }
  ExFreePoolWithTag(v1, 0);
  return v3;
}
