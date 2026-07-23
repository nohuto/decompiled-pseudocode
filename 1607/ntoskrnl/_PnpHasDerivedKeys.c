/*
 * XREFs of _PnpHasDerivedKeys @ 0x1404E9628
 * Callers:
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1404E9318 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpHasDerivedKeys(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v11; // rcx

  v3 = 0LL;
  if ( !a3 )
    return 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)(a2 + 24 * v3 + 8);
    v8 = 0LL;
    if ( v7 )
      break;
LABEL_5:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= a3 )
      return 0;
  }
  while ( 1 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 24 * v3) + 8 * v8);
    if ( *(_DWORD *)(a1 + 16) == *(_DWORD *)(v9 + 16) )
    {
      v11 = *(_QWORD *)a1 - *(_QWORD *)v9;
      if ( *(_QWORD *)a1 == *(_QWORD *)v9 )
        v11 = *(_QWORD *)(a1 + 8) - *(_QWORD *)(v9 + 8);
      if ( !v11 )
        return 1;
    }
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= v7 )
      goto LABEL_5;
  }
}
