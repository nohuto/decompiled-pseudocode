/*
 * XREFs of ACPIConvertDependenciesToPnpReservations @ 0x1C00228C4
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C0018B64 (ACPIAddInitializationDependencies.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000E05C (AMLIGetNameSpaceObject.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C001A874 (ACPIAmliBuildObjectPathnameUnicode.c)
 */

__int64 __fastcall ACPIConvertDependenciesToPnpReservations(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  PVOID v5; // rcx
  unsigned int v6; // esi
  unsigned int v8; // ebp
  __int64 v10; // rdi
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  PVOID P; // [rsp+28h] [rbp-30h]

  v3 = 0;
  v5 = 0LL;
  v11 = 0LL;
  v6 = 0;
  P = 0LL;
  v8 = **(_DWORD **)(a3 + 32);
  if ( v8 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v3 = AMLIGetNameSpaceObject(*(_BYTE **)(v10 + *(_QWORD *)(a3 + 32) + 40));
      if ( v3 < 0 )
        break;
      v3 = ACPIAmliBuildObjectPathnameUnicode(0LL, (__int64)&v11, 3);
      AMLIDereferenceHandleEx(0LL);
      if ( v3 < 0 )
        break;
      v3 = IoReserveDependency(a1, &v11, 1LL);
      ExFreePoolWithTag(P, 0x53706341u);
      v5 = 0LL;
      v11 = 0LL;
      P = 0LL;
      if ( v3 >= 0 )
      {
        ++v6;
        v10 += 40LL;
        if ( v6 < v8 )
          continue;
      }
      goto LABEL_2;
    }
    v5 = P;
  }
LABEL_2:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x53706341u);
  return (unsigned int)v3;
}
