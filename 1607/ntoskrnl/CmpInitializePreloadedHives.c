/*
 * XREFs of CmpInitializePreloadedHives @ 0x1407AE130
 * Callers:
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055EC7C (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitializePreloadedHive @ 0x1407AE20C (CmpInitializePreloadedHive.c)
 */

__int64 __fastcall CmpInitializePreloadedHives(__int64 a1, int a2)
{
  ACL *v2; // rbx
  unsigned int v3; // ebp
  _QWORD **v5; // rax
  _QWORD *v6; // rdx
  _QWORD **v8; // rax
  _QWORD *v9; // rsi

  v2 = 0LL;
  v3 = 0;
  if ( a2 )
  {
    qword_140322E58 = (__int64)&CmpPreloadedHivesList;
    CmpPreloadedHivesList = (__int64)&CmpPreloadedHivesList;
    v8 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 208LL);
    v9 = *v8;
    if ( *v8 != v8 )
    {
      while ( 1 )
      {
        if ( !v2 )
        {
          v2 = CmpHiveRootSecurityDescriptor();
          if ( !v2 )
            break;
        }
        CmpInitializePreloadedHive(v9, v2);
        v9 = (_QWORD *)*v9;
        if ( v9 == (_QWORD *)(*(_QWORD *)(a1 + 240) + 208LL) )
          goto LABEL_10;
      }
      v3 = -1073741670;
LABEL_10:
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
    }
  }
  else
  {
    v5 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 208LL);
    v6 = *v5;
    while ( v6 != v5 )
    {
      ++CmpPreloadedHivesCount;
      v6 = (_QWORD *)*v6;
      v5 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 208LL);
    }
  }
  return v3;
}
