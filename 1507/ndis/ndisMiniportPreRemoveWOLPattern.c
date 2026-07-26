/*
 * XREFs of ndisMiniportPreRemoveWOLPattern @ 0x1C00C9D04
 * Callers:
 *     ndisOidPrePMRemoveWOLPattern @ 0x1C00CA370 (ndisOidPrePMRemoveWOLPattern.c)
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C00CA700 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 */

__int64 __fastcall ndisMiniportPreRemoveWOLPattern(__int64 a1, __int64 a2)
{
  __int64 OidSourceHandle; // rax
  char *v3; // r8
  __int64 v4; // r9
  int *v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // rbx
  int v8; // r11d
  __int64 v9; // r10
  __int64 *v10; // rdx
  __int64 *v11; // r9
  bool v12; // zf
  _QWORD *v13; // r9
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  char v16; // al

  OidSourceHandle = ndisGetOidSourceHandle(a2);
  v5 = *(int **)(v4 + 40);
  v6 = 0;
  v7 = OidSourceHandle;
  *v3 = 0;
  v8 = *v5;
  v10 = *(__int64 **)(v9 + 968);
  if ( !v10 )
    goto LABEL_12;
  do
  {
    v11 = v10;
    if ( *((_DWORD *)v10 + 49) == v8 )
      break;
    v10 = (__int64 *)*v10;
    v11 = 0LL;
  }
  while ( v10 );
  if ( !v11 )
    goto LABEL_12;
  v12 = v11 + 1 == 0LL;
  v13 = v11 + 1;
  v14 = v13;
  if ( v12 )
    goto LABEL_12;
  do
  {
    v15 = v14 - 1;
    if ( v14[2] == v7 )
      break;
    v14 = (_QWORD *)*v14;
    v15 = 0LL;
  }
  while ( v14 );
  if ( v15 )
  {
    v16 = *v3;
    if ( *v13 )
      v16 = 1;
    *v3 = v16;
  }
  else
  {
LABEL_12:
    v6 = -1073676261;
    *v3 = 1;
  }
  return v6;
}
