/*
 * XREFs of MonitorAPIProcessTerminating @ 0x1C010C910
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@AEAAJPEAVCPhysicalMonitorHandle@@K@Z @ 0x1C02594D0 (-DestroyHandleInternal@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@AEAAJPEAVCPhysicalMo.c)
 *     ?GetElement@?$CList@VCPhysicalMonitorHandle@@@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C02595B4 (-GetElement@-$CList@VCPhysicalMonitorHandle@@@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z.c)
 *     ?GetNextElementIndex@?$CList@VCPhysicalMonitorHandle@@@@QEAAEKPEAK@Z @ 0x1C0259740 (-GetNextElementIndex@-$CList@VCPhysicalMonitorHandle@@@@QEAAEKPEAK@Z.c)
 */

void __fastcall MonitorAPIProcessTerminating(void *a1)
{
  char *v1; // rbx
  _QWORD **v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int i; // [rsp+48h] [rbp+10h] BYREF
  CMonitorPDO *v7; // [rsp+50h] [rbp+18h] BYREF
  char v8; // [rsp+58h] [rbp+20h] BYREF

  v1 = (char *)qword_1C0329230;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v8, (struct CMutex *)qword_1C0329230);
  v3 = (_QWORD **)(v1 + 8);
  if ( *((_DWORD *)v1 + 4) )
  {
    if ( !**v3 )
    {
      v5 = 0LL;
      goto LABEL_7;
    }
    v4 = 0;
    for ( i = 0; ; v4 = i )
    {
      v7 = 0LL;
      CList<CPhysicalMonitorHandle>::GetElement(v3, v4, &v7);
      if ( CMonitorPDO::DoesProcessOwnProtectedOutput(v7, a1) )
        CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(v3, v7, v4);
      v5 = v4;
LABEL_7:
      if ( !(unsigned __int8)CList<CPhysicalMonitorHandle>::GetNextElementIndex(v3, v5, &i) )
        break;
    }
  }
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v8);
}
