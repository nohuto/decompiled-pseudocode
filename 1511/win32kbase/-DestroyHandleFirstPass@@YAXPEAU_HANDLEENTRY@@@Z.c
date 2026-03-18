/*
 * XREFs of ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00AB000
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0077C6C (HMUnlockObject.c)
 */

void __fastcall DestroyHandleFirstPass(struct _HANDLEENTRY *a1)
{
  __int64 v2; // rdx
  unsigned int i; // r8d
  __int64 v4; // rcx

  if ( *((_BYTE *)a1 + 16) == 22 )
    HMUnlockObject(*(_QWORD *)(*(_QWORD *)a1 + 16LL));
  v2 = *(_QWORD *)a1;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
  {
    if ( *((_BYTE *)a1 + 16) == 13 )
    {
      *(_QWORD *)(v2 + 48) = 0LL;
      *(_QWORD *)(v2 + 56) = 0LL;
      if ( *(_QWORD *)(v2 + 96) )
      {
        for ( i = 0; i < *(_DWORD *)(v2 + 88); *(_QWORD *)(*(_QWORD *)(v2 + 96) + 8 * v4) = 0LL )
          v4 = i++;
      }
      *(_DWORD *)(v2 + 88) = 0;
    }
  }
  else
  {
    HMDestroyObject(*(_QWORD **)a1);
  }
}
