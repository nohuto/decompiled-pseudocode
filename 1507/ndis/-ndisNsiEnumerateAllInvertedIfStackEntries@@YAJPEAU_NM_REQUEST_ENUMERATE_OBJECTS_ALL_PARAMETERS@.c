/*
 * XREFs of ?ndisNsiEnumerateAllInvertedIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003C340
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfFindInterface @ 0x1C001AA70 (ndisIfFindInterface.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInvertedIfStackEntries(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  KIRQL v4; // r15
  int *v5; // r11
  unsigned int v6; // r14d
  int v7; // ebp
  struct _LIST_ENTRY *Interface; // rax
  _DWORD *v9; // r11
  struct _LIST_ENTRY *v10; // r10
  PVOID *v11; // rcx
  PVOID *v12; // rax
  int v13; // edx

  v1 = 0;
  v3 = 0;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_q(0x66u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (__int64)a1);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  v5 = (int *)*((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 22);
  if ( v5 && *((_DWORD *)a1 + 6) != 8
    || *((_QWORD *)a1 + 7)
    || *((_DWORD *)a1 + 16)
    || *((_QWORD *)a1 + 9)
    || *((_DWORD *)a1 + 20)
    || *((_QWORD *)a1 + 5)
    || *((_DWORD *)a1 + 12) )
  {
    v1 = -1073741306;
  }
  else if ( v5 )
  {
    v7 = *v5;
    Interface = ndisIfFindInterface(*v5);
    v10 = Interface;
    if ( Interface )
    {
      *((_DWORD *)a1 + 22) = HIDWORD(Interface[81].Flink);
      if ( v6 )
      {
        v11 = (PVOID *)ndisIfStackEntryList;
        while ( v11 != &ndisIfStackEntryList && v3 < v6 )
        {
          v12 = v11;
          v11 = (PVOID *)*v11;
          v13 = *((_DWORD *)v12 + 5);
          if ( v13 == v7 )
          {
            *v9 = v13;
            v9[1] = *((_DWORD *)v12 + 4);
            v9 += 2;
            ++v3;
          }
        }
        if ( HIDWORD(v10[81].Flink) > v3 )
          v1 = 261;
      }
      else
      {
        v1 = HIDWORD(Interface[81].Flink) != 0 ? 0x105 : 0;
      }
    }
    else
    {
      v1 = -1073741772;
    }
  }
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_qD(103LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, v1);
  return v1;
}
