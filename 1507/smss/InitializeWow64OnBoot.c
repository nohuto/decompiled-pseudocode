/*
 * XREFs of InitializeWow64OnBoot @ 0x140007400
 * Callers:
 *     SmpInit @ 0x140001F90 (SmpInit.c)
 * Callees:
 *     CreateMergeLink @ 0x140007450 (CreateMergeLink.c)
 */

__int64 InitializeWow64OnBoot()
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 0x3D; ++i )
  {
    result = CreateMergeLink(&RegistrySymbolicLinks[16 * i], &RegistrySymbolicLinks[16 * i + 8]);
    if ( (int)result < 0 )
      break;
  }
  return result;
}
