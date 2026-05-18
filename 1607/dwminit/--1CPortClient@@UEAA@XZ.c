/*
 * XREFs of ??1CPortClient@@UEAA@XZ @ 0x180005558
 * Callers:
 *     ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x180004B50 (--_ECPortClientRefCounted@@MEAAPEAXI@Z.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x180005520 (--_ECPortClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x180004B1C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x1800055EC (-Disconnect@CPortClient@@QEAAXXZ.c)
 */

void __fastcall CPortClient::~CPortClient(CPortClient *this)
{
  const struct reg_FeatureDescriptor *v2; // rcx
  void *v3; // rdi
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CPortClient::`vftable';
  CPortClient::Disconnect(this);
  if ( !EvaluateCurrentState(v2) )
  {
    v3 = (void *)*((_QWORD *)this + 10);
    if ( v3 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
      *((_QWORD *)this + 10) = 0LL;
    }
  }
}
