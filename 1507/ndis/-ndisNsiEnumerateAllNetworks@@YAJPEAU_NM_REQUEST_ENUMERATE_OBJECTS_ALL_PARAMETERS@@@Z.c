/*
 * XREFs of ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0021910
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiEnumerateAllNetworks(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // r8
  KIRQL v4; // bp
  unsigned int v5; // r9d
  unsigned int v6; // r11d
  __int64 v7; // rsi
  _LIST_ENTRY *v8; // r10
  _LIST_ENTRY *v9; // rdx
  unsigned int v10; // r8d
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *v12; // rcx
  __int64 v13; // rbx
  _LIST_ENTRY v14; // xmm0
  bool v15; // cf
  unsigned int v16; // ebx

  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_q(120LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Flink = ndisIfNetworkList.Flink;
  v4 = v2;
  v5 = 0;
  while ( Flink != &ndisIfNetworkList )
  {
    if ( ((__int64)Flink[3].Flink[105].Flink & 2) == 0 )
      ++v5;
    Flink = Flink->Flink;
  }
  v6 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = v5;
  if ( !v6 )
  {
    v15 = v5 != 0;
LABEL_26:
    v16 = v15 ? 0x105 : 0;
    goto LABEL_27;
  }
  v7 = *((_QWORD *)a1 + 2);
  v8 = (_LIST_ENTRY *)*((_QWORD *)a1 + 5);
  if ( (!v7 || *((_DWORD *)a1 + 6) == 16) && (!v8 || *((_DWORD *)a1 + 12) >= 0x210u) )
  {
    v9 = ndisIfNetworkList.Flink;
    v10 = 0;
    do
    {
      if ( v9 == &ndisIfNetworkList )
        break;
      if ( ((__int64)v9[3].Flink[105].Flink & 2) == 0 )
      {
        if ( *((_QWORD *)a1 + 2) )
          *(_LIST_ENTRY *)(v7 + 16LL * v10) = v9[2];
        if ( *((_QWORD *)a1 + 5) )
        {
          v11 = v8;
          v12 = v9 + 5;
          v13 = 4LL;
          do
          {
            v14 = *v12;
            v12 += 8;
            *v11 = v14;
            v11 += 8;
            v11[-7] = v12[-7];
            v11[-6] = v12[-6];
            v11[-5] = v12[-5];
            v11[-4] = v12[-4];
            v11[-3] = v12[-3];
            v11[-2] = v12[-2];
            v11[-1] = v12[-1];
            --v13;
          }
          while ( v13 );
          *v11 = *v12;
          v8 = (_LIST_ENTRY *)((char *)v8 + *((unsigned int *)a1 + 12));
        }
        ++v10;
      }
      v9 = v9->Flink;
    }
    while ( v10 < v6 );
    v15 = v10 < v5;
    goto LABEL_26;
  }
  v16 = -1073741306;
LABEL_27:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_qD(121LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, v16);
  return v16;
}
