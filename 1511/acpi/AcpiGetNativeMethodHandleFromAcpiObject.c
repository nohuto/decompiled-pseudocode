/*
 * XREFs of AcpiGetNativeMethodHandleFromAcpiObject @ 0x1C0040F24
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1C003F820 (AcpiSetupNativeMethodContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiGetNativeMethodHandleFromAcpiObject(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rdx
  unsigned int v6; // r8d
  unsigned int i; // r10d
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 **v12; // rcx

  v2 = *a1;
  v4 = &AmliGlobalPreDefinedRootObjects;
  v6 = -1073741823;
  for ( i = 0; i < 5; ++i )
  {
    if ( *v4 == v2 )
    {
      v11 = 0LL;
      v12 = (__int64 **)&AcpiAmliPreDefinedRootAcpiObjects;
      v6 = -1073741275;
      while ( *v12 != a1 )
      {
        v11 = (unsigned int)(v11 + 1);
        ++v12;
        if ( (unsigned int)v11 >= 5 )
          return v6;
      }
      v10 = AcpiAmliPreDefinedRootNativeHandles[v11];
      goto LABEL_15;
    }
    ++v4;
  }
  v8 = *(_QWORD *)(v2 + 96);
  if ( !v8 )
    return v6;
  v9 = *(unsigned __int16 *)(v2 + 58);
  if ( v9 == 6 || (unsigned int)(v9 - 12) <= 1 )
  {
    v10 = *(_QWORD *)(v8 + 888);
  }
  else
  {
    if ( v9 != 11 )
      return v6;
    v10 = *(_QWORD *)(v8 + 136);
  }
LABEL_15:
  *a2 = v10;
  return 0;
}
