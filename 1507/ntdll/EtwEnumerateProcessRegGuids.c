/*
 * XREFs of EtwEnumerateProcessRegGuids @ 0x1800F3B20
 * Callers:
 *     <none>
 * Callees:
 *     EtwpGetNextRegistration @ 0x18000C2FC (EtwpGetNextRegistration.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall EtwEnumerateProcessRegGuids(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // esi
  unsigned int v7; // edi
  __int64 i; // rax
  unsigned __int64 v10; // rcx
  unsigned int v11; // r9d
  unsigned int j; // eax
  __int64 v13; // r8
  __int64 v14; // rdx

  v5 = 0;
  v6 = a2 >> 4;
  v7 = 0;
  if ( !a1 && a2 )
    return 87LL;
  for ( i = EtwpGetNextRegistration(0LL); ; i = EtwpGetNextRegistration(v10) )
  {
    v10 = i;
    if ( !i )
      break;
    v11 = v6;
    if ( v7 < v6 )
      v11 = v7;
    for ( j = 0; j < v11; ++j )
    {
      v13 = 16LL * j;
      v14 = *(_QWORD *)(v10 + 32) - *(_QWORD *)(v13 + a1);
      if ( !v14 )
        v14 = *(_QWORD *)(v10 + 40) - *(_QWORD *)(v13 + a1 + 8);
      if ( !v14 )
        goto LABEL_17;
    }
    if ( v7 < v6 )
      *(_OWORD *)(16LL * v7 + a1) = *(_OWORD *)(v10 + 32);
    ++v7;
LABEL_17:
    ;
  }
  if ( v7 > v6 )
    v5 = 122;
  *a3 = 16 * v7;
  return v5;
}
