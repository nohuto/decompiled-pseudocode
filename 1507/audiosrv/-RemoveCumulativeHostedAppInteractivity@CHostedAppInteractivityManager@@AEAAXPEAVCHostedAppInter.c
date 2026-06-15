/*
 * XREFs of ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x1800411D4
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x18002D818 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180001474 (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x180007F94 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 */

void __fastcall CHostedAppInteractivityManager::RemoveCumulativeHostedAppInteractivity(
        CHostedAppInteractivityManager *this,
        void **a2)
{
  _QWORD *v3; // rdx

  v3 = (_QWORD *)qword_1800E8458;
  if ( qword_1800E8458 )
  {
    while ( (void **)v3[2] != a2 )
    {
      v3 = (_QWORD *)*v3;
      if ( !v3 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v3 = 0LL;
  }
  if ( v3 )
  {
    if ( v3 == (_QWORD *)qword_1800E8458 )
      qword_1800E8458 = *v3;
    else
      *(_QWORD *)v3[1] = *v3;
    if ( v3 == (_QWORD *)qword_1800E8460 )
      qword_1800E8460 = v3[1];
    else
      *(_QWORD *)(*v3 + 8LL) = v3[1];
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::FreeNode(
      (__int64)&qword_1800E8458,
      v3);
    if ( a2 )
      CHostedAppInteractivity::`scalar deleting destructor'(a2);
  }
}
