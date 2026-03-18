/*
 * XREFs of ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C000DAB0
 * Callers:
 *     DCompositionProcessCallout @ 0x1C000DB30 (DCompositionProcessCallout.c)
 * Callees:
 *     ?Initialize@CProcessData@DirectComposition@@AEAAJXZ @ 0x1C000DB74 (-Initialize@CProcessData@DirectComposition@@AEAAJXZ.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C000DC00 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     memset @ 0x1C008A080 (memset.c)
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
    memset(v2, 0, 0x30uLL);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v5 = DirectComposition::CProcessData::Initialize(v3);
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
