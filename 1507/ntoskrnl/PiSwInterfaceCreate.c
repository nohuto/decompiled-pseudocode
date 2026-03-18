/*
 * XREFs of PiSwInterfaceCreate @ 0x14045A278
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14045A410 (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x14045B4C4 (PiSwCompleteCreate.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x14043B32C (PnpAllocatePWSTR.c)
 *     PnpCopyDevPropertyArray @ 0x14045B858 (PnpCopyDevPropertyArray.c)
 *     PiSwInterfaceFree @ 0x140691080 (PiSwInterfaceFree.c)
 */

__int64 __fastcall PiSwInterfaceCreate(NTSTRSAFE_PCWSTR pszSrc, int a2, int a3, __int64 a4)
{
  PVOID PoolWithTag; // rax
  int PWSTR; // ebx
  int v10; // r8d

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x57706E50u);
  *(_QWORD *)a4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    PWSTR = PnpAllocatePWSTR(pszSrc, 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)(*(_QWORD *)a4 + 16LL));
    if ( PWSTR >= 0 )
    {
      PWSTR = PnpCopyDevPropertyArray(a3, a2, v10, *(_DWORD *)a4 + 32, *(_QWORD *)a4 + 24LL);
      if ( PWSTR >= 0 )
        return (unsigned int)PWSTR;
    }
  }
  else
  {
    PWSTR = -1073741670;
  }
  if ( *(_QWORD *)a4 )
  {
    PiSwInterfaceFree();
    *(_QWORD *)a4 = 0LL;
  }
  return (unsigned int)PWSTR;
}
