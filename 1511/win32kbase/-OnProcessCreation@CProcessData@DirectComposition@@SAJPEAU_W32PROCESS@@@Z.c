/*
 * XREFs of ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C00124E4
 * Callers:
 *     DCompositionProcessCallout @ 0x1C00124A0 (DCompositionProcessCallout.c)
 * Callees:
 *     ?Initialize@CProcessData@DirectComposition@@AEAAJXZ @ 0x1C0012540 (-Initialize@CProcessData@DirectComposition@@AEAAJXZ.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C00125CC (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 */

__int64 __fastcall DirectComposition::CProcessData::OnProcessCreation(struct _W32PROCESS *a1)
{
  DirectComposition::CProcessData *v2; // rax
  DirectComposition::CProcessData *v3; // rbx
  unsigned int v4; // edx
  int v5; // edi

  v2 = (DirectComposition::CProcessData *)Win32AllocPoolWithQuotaZInit(0x30uLL);
  v3 = v2;
  if ( v2 )
  {
    v5 = DirectComposition::CProcessData::Initialize(v2);
    if ( v5 < 0 )
    {
      DirectComposition::CProcessData::`scalar deleting destructor'(v3, v4);
      v3 = 0LL;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  *((_QWORD *)a1 + 32) = v3;
  return (unsigned int)v5;
}
