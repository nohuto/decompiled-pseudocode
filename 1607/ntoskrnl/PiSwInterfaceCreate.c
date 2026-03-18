/*
 * XREFs of PiSwInterfaceCreate @ 0x1404C6888
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1404C648C (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x1404C6A1C (PiSwCompleteCreate.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpCopyDevPropertyArray @ 0x1404C70A4 (PnpCopyDevPropertyArray.c)
 *     PnpAllocatePWSTR @ 0x140501D70 (PnpAllocatePWSTR.c)
 *     PiSwInterfaceFree @ 0x140645718 (PiSwInterfaceFree.c)
 */

__int64 __fastcall PiSwInterfaceCreate(NTSTRSAFE_PCWSTR pszSrc, int a2, int a3, _QWORD *a4)
{
  PVOID PoolWithTag; // rax
  int PWSTR; // ebx
  int v10; // r8d

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x57706E50u);
  *a4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    PWSTR = PnpAllocatePWSTR(pszSrc);
    if ( PWSTR >= 0 )
    {
      PWSTR = PnpCopyDevPropertyArray(a3, a2, v10, *(_DWORD *)a4 + 32, *a4 + 24LL);
      if ( PWSTR >= 0 )
        return (unsigned int)PWSTR;
    }
  }
  else
  {
    PWSTR = -1073741670;
  }
  if ( *a4 )
  {
    PiSwInterfaceFree(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)PWSTR;
}
