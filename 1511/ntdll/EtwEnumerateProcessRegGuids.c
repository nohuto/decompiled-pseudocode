/*
 * XREFs of EtwEnumerateProcessRegGuids @ 0x1800F39C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     EtwpGetNextRegistration @ 0x180052AFC (EtwpGetNextRegistration.c)
 */

__int64 __fastcall EtwEnumerateProcessRegGuids(__int64 a1, char *a2, _DWORD *a3, __int64 a4)
{
  unsigned int v6; // ebx
  unsigned int v7; // esi
  unsigned int v8; // edi
  __int64 i; // rax
  char *v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  unsigned int j; // eax

  v6 = 0;
  v7 = (unsigned int)a2 >> 4;
  v8 = 0;
  if ( !a1 && (_DWORD)a2 )
    return 87LL;
  for ( i = EtwpGetNextRegistration(0LL, a2, (__int64)a3, a4); ; i = EtwpGetNextRegistration(v13, v11, v12, v14) )
  {
    v13 = i;
    if ( !i )
      break;
    v14 = v7;
    if ( v8 < v7 )
      v14 = v8;
    for ( j = 0; j < (unsigned int)v14; ++j )
    {
      v12 = 16LL * j;
      v11 = (char *)(*(_QWORD *)(v13 + 32) - *(_QWORD *)(v12 + a1));
      if ( !v11 )
        v11 = (char *)(*(_QWORD *)(v13 + 40) - *(_QWORD *)(v12 + a1 + 8));
      if ( !v11 )
        goto LABEL_17;
    }
    if ( v8 < v7 )
      *(_OWORD *)(16LL * v8 + a1) = *(_OWORD *)(v13 + 32);
    ++v8;
LABEL_17:
    ;
  }
  if ( v8 > v7 )
    v6 = 122;
  *a3 = 16 * v8;
  return v6;
}
