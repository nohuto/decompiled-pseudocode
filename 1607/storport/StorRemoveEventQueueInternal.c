/*
 * XREFs of StorRemoveEventQueueInternal @ 0x1C002BCA0
 * Callers:
 *     StorRemoveEventQueue @ 0x1C002BC38 (StorRemoveEventQueue.c)
 * Callees:
 *     <none>
 */

char __fastcall StorRemoveEventQueueInternal(__int64 *a1, char a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  BOOL v6; // r10d
  __int64 *v7; // rdx
  __int64 v8; // r9

  LOBYTE(v3) = *((_BYTE *)a3 - 32);
  if ( (v3 & 2) != 0 )
  {
    *((_BYTE *)a3 - 32) = v3 & 0xFD;
    v5 = *a3;
    v3 = a3[1];
    v6 = *a1 == (_QWORD)a3;
    if ( *(__int64 **)(*a3 + 8) != a3 || *(__int64 **)v3 != a3 )
      __fastfail(3u);
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    LODWORD(v3) = *((_DWORD *)a3 + 12);
    if ( (v3 & 1) != 0 )
    {
      v7 = a3 + 2;
      if ( (__int64 *)a1[4] == a3 + 2 )
        a1[4] = *v7;
      v8 = *v7;
      v3 = a3[3];
      if ( *(__int64 **)(*v7 + 8) != v7 || *(__int64 **)v3 != v7 )
        __fastfail(3u);
      *(_QWORD *)v3 = v8;
      *(_QWORD *)(v8 + 8) = v3;
      *((_DWORD *)a3 + 12) &= ~1u;
    }
    if ( (a2 & 4) == 0 && v6 )
    {
      v3 = *a1;
      if ( (__int64 *)*a1 == a1 )
      {
        *((_DWORD *)a1 + 12) = -1;
      }
      else
      {
        LODWORD(v3) = *(_DWORD *)(v3 + 32);
        *((_DWORD *)a1 + 12) = v3;
      }
    }
  }
  return v3;
}
