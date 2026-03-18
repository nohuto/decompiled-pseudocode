/*
 * XREFs of KsepGetLoadedModulesList @ 0x140524EF8
 * Callers:
 *     KseRegisterShimEx @ 0x140524BB0 (KseRegisterShimEx.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14061E1F0 (KsepResolveApplicableShimsForDriver.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400028CC (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1400028EC (KsepPoolAllocatePaged.c)
 *     ZwQuerySystemInformation @ 0x140150CE0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall KsepGetLoadedModulesList(int **a1)
{
  ULONG i; // ebx
  int *Paged; // rax
  int *v4; // rdi
  NTSTATUS v5; // eax
  int v6; // ebp
  unsigned int v7; // ebx
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  for ( i = 304; ; i = 296 * v6 + 8 )
  {
    Paged = (int *)KsepPoolAllocatePaged(i);
    v4 = Paged;
    if ( !Paged )
      return (unsigned int)-1073741670;
    v5 = ZwQuerySystemInformation(SystemModuleInformation, Paged, i, &ReturnLength);
    v6 = *v4;
    v7 = v5;
    if ( v5 >= 0 )
      break;
    if ( v5 != -1073741820 )
      goto LABEL_8;
    KsepPoolFreePaged(v4);
  }
  *a1 = v4;
LABEL_8:
  if ( v5 < 0 )
    KsepPoolFreePaged(v4);
  return v7;
}
