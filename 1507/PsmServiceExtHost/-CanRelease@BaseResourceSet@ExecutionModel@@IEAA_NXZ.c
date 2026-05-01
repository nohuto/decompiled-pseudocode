/*
 * XREFs of ?CanRelease@BaseResourceSet@ExecutionModel@@IEAA_NXZ @ 0x180023848
 * Callers:
 *     ?ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z @ 0x180010120 (-ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ @ 0x180010550 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ.c)
 *     ?CanRelease@BaseResourceSet@ExecutionModel@@IEAA_NXZ @ 0x180023848 (-CanRelease@BaseResourceSet@ExecutionModel@@IEAA_NXZ.c)
 * Callees:
 *     ?CanRelease@BaseResourceSet@ExecutionModel@@IEAA_NXZ @ 0x180023848 (-CanRelease@BaseResourceSet@ExecutionModel@@IEAA_NXZ.c)
 */

char __fastcall ExecutionModel::BaseResourceSet::CanRelease(ExecutionModel::BaseResourceSet *this)
{
  char v1; // di
  char *v2; // rsi
  char *i; // rbx
  bool CanRelease; // al

  v1 = !*((_DWORD *)this + 2) && !*((_BYTE *)this + 12);
  v2 = (char *)this + 160;
  for ( i = (char *)*((_QWORD *)this + 20); v1; v1 &= CanRelease )
  {
    if ( i == v2 )
      break;
    CanRelease = ExecutionModel::BaseResourceSet::CanRelease(*((ExecutionModel::BaseResourceSet **)i + 2));
    i = *(char **)i;
  }
  return v1;
}
