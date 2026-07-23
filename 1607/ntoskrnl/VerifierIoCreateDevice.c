/*
 * XREFs of VerifierIoCreateDevice @ 0x14070D62C
 * Callers:
 *     <none>
 * Callees:
 *     ViDevObjAdd @ 0x14070DA4C (ViDevObjAdd.c)
 */

__int64 __fastcall VerifierIoCreateDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6, _QWORD *a7)
{
  int Device; // ebx

  Device = pXdvIoCreateDevice(a1, a2, a3);
  if ( Device >= 0 && (MmVerifierData & 0x10) != 0 )
    ViDevObjAdd(*a7);
  return (unsigned int)Device;
}
