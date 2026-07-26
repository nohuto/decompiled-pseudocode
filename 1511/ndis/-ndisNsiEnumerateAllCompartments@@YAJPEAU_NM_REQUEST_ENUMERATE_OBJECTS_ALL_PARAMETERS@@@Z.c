/*
 * XREFs of ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003CE40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiEnumerateAllCompartments(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // rdx
  KIRQL v4; // bp
  unsigned int v5; // r8d
  unsigned int v6; // r10d
  bool v7; // cf
  __int64 v8; // rsi
  _LIST_ENTRY *v9; // r11
  unsigned int v10; // ebx
  _LIST_ENTRY *v11; // rdx
  unsigned int v12; // r9d
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *v14; // rax
  __int64 v15; // rbx
  _LIST_ENTRY v16; // xmm0

  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(0x86u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Flink = ndisIfCompartmentList.Flink;
  v4 = v2;
  v5 = 0;
  while ( Flink != &ndisIfCompartmentList )
  {
    if ( ((__int64)Flink[105].Flink & 2) == 0 )
      ++v5;
    Flink = Flink->Flink;
  }
  v6 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = v5;
  if ( v6 )
  {
    v8 = *((_QWORD *)a1 + 2);
    v9 = (_LIST_ENTRY *)*((_QWORD *)a1 + 5);
    if ( v8 && *((_DWORD *)a1 + 6) != 4 || v9 && *((_DWORD *)a1 + 12) < 0x658u )
    {
      v10 = -1073741306;
      goto LABEL_28;
    }
    v11 = ndisIfCompartmentList.Flink;
    v12 = 0;
    do
    {
      if ( v11 == &ndisIfCompartmentList )
        break;
      if ( ((__int64)v11[105].Flink & 2) == 0 )
      {
        if ( *((_QWORD *)a1 + 2) )
          *(_DWORD *)(v8 + 4LL * v12) = v11[1].Flink;
        if ( *((_QWORD *)a1 + 5) )
        {
          v13 = v9;
          v14 = v11 + 4;
          v15 = 12LL;
          do
          {
            v16 = *v14;
            v14 += 8;
            *v13 = v16;
            v13 += 8;
            v13[-7] = v14[-7];
            v13[-6] = v14[-6];
            v13[-5] = v14[-5];
            v13[-4] = v14[-4];
            v13[-3] = v14[-3];
            v13[-2] = v14[-2];
            v13[-1] = v14[-1];
            --v15;
          }
          while ( v15 );
          *v13 = *v14;
          v13[1] = v14[1];
          v13[2] = v14[2];
          v13[3] = v14[3];
          v13[4] = v14[4];
          v13[5].Flink = v14[5].Flink;
          v9 = (_LIST_ENTRY *)((char *)v9 + *((unsigned int *)a1 + 12));
        }
        ++v12;
      }
      v11 = v11->Flink;
    }
    while ( v12 < v6 );
    v7 = v12 < v5;
  }
  else
  {
    v7 = v5 != 0;
  }
  v10 = v7 ? 0x105 : 0;
LABEL_28:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qD(0x87u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1, v10);
  return v10;
}
