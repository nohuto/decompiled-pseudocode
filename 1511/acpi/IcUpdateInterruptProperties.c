/*
 * XREFs of IcUpdateInterruptProperties @ 0x1C0080700
 * Callers:
 *     AcpiUpdateInterruptProperties @ 0x1C007AA20 (AcpiUpdateInterruptProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcUpdateInterruptProperties(unsigned int a1, int a2, int a3)
{
  __int64 i; // r9
  __int64 result; // rax
  __int64 v5; // rcx

  for ( i = IcListHead; ; i = *(_QWORD *)i )
  {
    if ( &IcListHead == (__int64 *)i )
      return 3221226021LL;
    if ( *(int *)(i + 28) >= 0 && a1 >= *(_DWORD *)(i + 16) && a1 <= *(_DWORD *)(i + 20) )
      break;
  }
  v5 = 200LL * (a1 - *(_DWORD *)(i + 16));
  result = 0LL;
  *(_DWORD *)(v5 + i + 64) = a2;
  *(_DWORD *)(v5 + i + 60) = a3;
  return result;
}
